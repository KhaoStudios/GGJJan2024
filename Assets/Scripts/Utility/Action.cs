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
        /// What type of easing is applied to the action
        /// </summary>
        EaseType easing;

        /// <summary>
        /// Has the action been started?
        /// </summary>
        bool hasStarted;

        #region Percent Done 
        float percentDone;
        #endregion

        //@@NOTE: Add further groups here

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

        public enum EaseType
        {
            Linear,
            Quadratic,
            Cubic,

            SquareRoot,

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
                return Ease(percentDone);
            }
        }


        public float UnscaledPercentDone
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
        public Action(float dur,  float delay, bool blocking, Group group, EaseType ease)
        {
            // Initialize the actions
            duration = dur;
            this.delay = delay;
            isBlocking = blocking;
            actionGroup = group;
            easing = ease;
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

        /// <summary>
        /// Eases the given value according the action's ease type
        /// </summary>
        /// <param name="value">The value being eased</param>
        /// <returns>The eased value.</returns>
        public float Ease(float value)
        {
            // Perform the easing on the action
            switch(easing)
            {
                case EaseType.Linear:
                    {
                        return value;
                    }
                case EaseType.SquareRoot:
                    {
                        return Mathf.Sqrt(value);
                    }
                case EaseType.Quadratic:
                    {
                        return value * value;
                    }
                case EaseType.Cubic:
                    {
                        return value * value * value;
                    }
            }

            // Return the default value
            return value;
        }

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

        /// <summary>
        /// Creates an action to move to a location.
        /// </summary>
        /// <param name="targetPos">The target position of the move action.</param>
        /// <param name="objToMove">The object being moved.</param>
        /// <param name="duration">The length of time the action will last.</param>
        /// <param name="delay">The delay before the action begins.</param>
        /// <param name="blocking">Does this action block the group.</param>
        /// <param name="group">The group the action is in.</param>
        /// <param name="ease">The easing done on the action to smooth interpoloation</param>
        public Move(Vector3 targetPos,GameObject objToMove, float duration, float delay =0, bool blocking = false, Group group= Group.None, EaseType ease = EaseType.Linear)
            : base(duration,delay,blocking,group,ease) 
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

        /// <summary>
        /// Constructs a rotate action on an object
        /// </summary>
        /// <param name="objToMove">The object being targeted by the action.</param>
        /// <param name="startRot">The initial rotation of the object.</param>
        /// <param name="endRot">The end rotation of the object.</param>
        /// <param name="duration">The amount of time the action will take.</param>
        /// <param name="delay">The time before the action starts.</param>
        /// <param name="blocking">Does the action block another action in the group.</param>
        /// <param name="group">The group the action is within.</param>
        public Rotate(GameObject objToMove, Vector3 startRot, Vector3 endRot, float duration, float delay =0, bool blocking = false, Group group = Group.None, EaseType ease = EaseType.Linear ) 
            : base(duration,delay, blocking, group,ease)
        {
            this.objToMove = objToMove;
            this.startRot = startRot;
            this.endRot = endRot;
        }

        /// <summary>
        /// Constructs a rotate action on an object
        /// </summary>
        /// <param name="objToMove">The object being targeted by the action.</param>
        /// <param name="endRot">The end rotation of the object.</param>
        /// <param name="duration">The amount of time the action will take.</param>
        /// <param name="delay">The time before the action starts.</param>
        /// <param name="blocking">Does the action block another action in the group.</param>
        /// <param name="group">The group the action is within.</param>
        /// <param name="easing">The easing done on the action to smooth interpoloation</param>
        public Rotate(GameObject objToMove, Vector3 endRot, float duration, float delay = 0, bool blocking = false, Group group = Group.None, EaseType easing = EaseType.Linear)
    : base(duration, delay, blocking, group,easing)
        {
            this.objToMove = objToMove;
            this.endRot = endRot;

            // Set the current
            useCurrent = true;
        }

        public override void Start()
        {
            base.Start();
            // If using current position...
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