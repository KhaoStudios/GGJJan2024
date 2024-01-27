using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

namespace Act
{
    public abstract class Action
    {
        /// <summary>
        /// How long this action goes on
        /// </summary>
        float duration;
        /// <summary>
        /// Does this action have a delay before starting
        /// </summary>
        float delay;

        /// <summary>
        /// Does this action prevent actions behind it
        /// </summary>
        bool isBlocking;

        /// <summary>
        /// Which group is this action in
        /// </summary>
        Group actionGroup;

        /// <summary>
        /// How much time has passed?
        /// </summary>
        float timeElapsed;

        /// <summary>
        /// Has the action been started?
        /// </summary>
        bool hasStarted;

        #region Percent Done 
        float percentDone;
        #endregion

        /// <summary>
        /// The group the action is stuck in
        /// </summary>
        public enum Group
        {
            None,
            Player,
            UI,
            All,
        }

        /// <summary>
        /// Returns whether or not the action has completed its update.
        /// </summary>
public bool IsDone
        {
            get
            {
                return percentDone == 1.0f;
            }
        }


        /// <summary>
        /// What percentage of the action is done.
        /// </summary>
        public float PercentDone
        {
            get
            {
                return percentDone;
            }
        }
        /// <summary>
        /// Does this action block other actions from its group?
        /// </summary>
        public bool IsBlocking
        {
            get
            {
                return isBlocking;
            }
        }


        /// <summary>
        /// The group which the current action is in
        /// </summary>
        public Group ActionGroup
        {
            get
            {
                return actionGroup;
            }
        }

        /// <summary>
        /// The basic constructor for the action
        /// </summary>
        /// <param name="dur"></param>
        /// <param name="delay"></param>
        /// <param name="blocking"></param>
        /// <param name="group"></param>
        public Action(float dur,  float delay, bool blocking, Group group)
        {
            // Initialize the actions
            duration = dur;
            this.delay = delay;
            isBlocking = blocking;
            actionGroup = group;
        }

        #region State Management

        /// <summary>
        /// When the action begins, the action performs these actions
        /// </summary>
        public virtual void Start()
        {

        }

        /// <summary>
        /// When the action is complete, returns end
        /// </summary>
        public virtual void End()
        {

        }

        /// <summary>
        /// What happens when an action is cancelled mid way
        /// </summary>
        public virtual void Cancel()
        {

        }

        #endregion

        #region Time Management

        public virtual bool IncrementTime(float deltaTime)
        {
            // If I am delayed
            if(delay > 0)
            {
                // Decrement the delay
                delay -= deltaTime;
                // Report the delay not finished
                return false;
            }

            // Increment the time elasped
            timeElapsed += deltaTime;

            percentDone = Mathf.Clamp(timeElapsed / duration, 0, 1);

            return true;
        }



        #endregion

        #region Performing Action

        /// <summary>
        /// Performs the given action
        /// </summary>
        /// <param name="deltaTime">The timestep since the last update.</param>
        /// <returns>If the action is complete, returns true. Otherwise, returns false.</returns>
        public bool Update(float deltaTime)
        {
            // Increase the time
            if(!IncrementTime(deltaTime))
            {
                return false;
            }

            if(!hasStarted)
            {
                // Call the initial start loop
                Start();    
                // Set started true
                hasStarted = true;
            }
            // Perform the action
            var state = Execute(deltaTime);

            // If complete, end
            if(state)
            {
                End();
            }

            // Return whether the action is complete
            return state;
        }

        /// <summary>
        /// Performs the actions
        /// </summary>
        /// <param name="deltaTime">The timestep of since the action last updated.</param>
        /// <returns>If the action has been completed returns true. Otherwise, returns false.</returns>
        public abstract bool Execute(float deltaTime);

        #endregion


        public bool CompareGroup(int blockFlags)
        {
            // Test the bit to compare
            if((blockFlags & (1<<(int)actionGroup)) !=0)
            {
                return true;
            }

            // Otherwise, return false
            return false;
        }

    }


    public class Move: Action
    {

        /// <summary>
        /// The object being moved by the action
        /// </summary>
        GameObject objToMove;

        /// <summary>
        /// The start position of the object
        /// </summary>
        Vector3 startPos;

        /// <summary>
        /// The end position of the object
        /// </summary>
        Vector3 endPos;

        /// <summary>
        /// Should this action use the object's current start position
        /// </summary>
        bool useCurrent;

        public Move(Vector3 targetPos,GameObject objToMove, float duration, float delay =0, bool blocking = false, Group group= Group.None): base(duration,delay,blocking,group) 
        {
            this.objToMove = objToMove;
            useCurrent = true;

            endPos = targetPos;
        }

        public override void Start()
        {
            base.Start();
            
            // If using the current position
            if (useCurrent)
            {
                // Set the start pos
                startPos = objToMove.transform.position;
            }
        }


        public override bool Execute(float deltaTime)
        {

            objToMove.transform.position = Vector3.Lerp(startPos, endPos, PercentDone);

            /// throw new System.NotImplementedException();
            /// 

            return IsDone;
        }

    }

    public class Rotate : Action
    {
        /// <summary>
        /// The obj being moved
        /// </summary>
        GameObject objToMove;

        /// <summary>
        /// The start rotation of the object
        /// </summary>
        Vector3 startRot;

        /// <summary>
        /// The end rotation of the object
        /// </summary>
        Vector3 endRot;


        /// <summary>
        /// Should the start rot of the object be used as start
        /// </summary>
        bool useCurrent;

        public Rotate(GameObject objToMove, Vector3 startRot, Vector3 endRot, float duration, float delay =0, bool blocking = false, Group group = Group.None ) 
            : base(duration,delay, blocking, group)
        {
            this.objToMove = objToMove;
            this.startRot = startRot;
            this.endRot = endRot;
        }
        public Rotate(GameObject objToMove, Vector3 endRot, float duration, float delay = 0, bool blocking = false, Group group = Group.None)
    : base(duration, delay, blocking, group)
        {
            this.objToMove = objToMove;
            this.endRot = endRot;

            // Set the current
            useCurrent = true;
        }

        public override void Start()
        {
            base.Start();
            if(useCurrent)
            {
                startRot = objToMove.transform.rotation.eulerAngles;
            }
        }

        public override bool Execute(float deltaTime)
        {

            objToMove.transform.rotation = Quaternion.Euler(Vector3.Lerp(startRot, endRot, PercentDone));

            // Return whether the action is complete
            return IsDone;
        }
    }

}