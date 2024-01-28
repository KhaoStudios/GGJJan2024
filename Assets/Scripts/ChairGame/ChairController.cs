using Act;
using UnityEngine;
using UnityEngine.Serialization;
using Action = System.Action;

namespace ChairGame
{
    [RequireComponent(typeof(Rigidbody))]
    public class ChairController : PlayerController
    {
        public BoostDetector BoostTrigger;
        public GameObject ChairPivot;
        public GameObject LeftKneePivot;
        public GameObject RightKneePivot;
        public AnimationCurve KickCurve;
        
        private Transform chairTrans;
        private Rigidbody myRB;
        private ActionList actionList;
        
        public float StartingSpinSpeed;
        public float SpinBoostMultiplier;
        public float SpinBoostDecay;
        private float spinSpeed;
        private bool spinDir;
        private bool spinBoost;

        public float KickForce;
        public float KickCooldown;
        private float kickTimer;
        private bool kickReady;

        public float BounceMultiplier = 0.75f;
        public float BoostMultiplier = 2;
        
        private Vector3 oldVelocity;
        
    
        // Start is called before the first frame update
        private void Awake()
        {
            chairTrans = ChairPivot.transform;
            myRB = GetComponent<Rigidbody>();
            actionList = new ActionList(); 
        }

        // Update is called once per frame
        private void Update()
        {
            SpinChair();
            DecaySpin();
            CoolDown();
            actionList.Update(Time.deltaTime);
            oldVelocity = myRB.velocity;
        }

        public override void OnPrimaryButtonPressed()
        {
            if (kickReady) KickOff();
        }
        
        private void SpinChair()
        {
            spinSpeed = spinDir ? spinSpeed : spinSpeed * -1f;
            
            Vector3 chairAngles = chairTrans.localEulerAngles;
            chairAngles.y += spinSpeed * Time.deltaTime;

            chairTrans.localEulerAngles = chairAngles;
            spinSpeed = Mathf.Abs(spinSpeed);
        }

        private void BoostSpin()
        {
            spinDir = !spinDir;
            spinSpeed *= SpinBoostMultiplier;
        }
        
        private void DecaySpin()
        {
            Debug.Log("Spin Speed: " + spinSpeed);
            
            if (spinSpeed > StartingSpinSpeed)
                spinSpeed -= SpinBoostDecay * Time.deltaTime;

            if (spinSpeed < StartingSpinSpeed)
                spinSpeed = StartingSpinSpeed;
        }

        private void KickOff()
        {
            bool boost = BoostTrigger.TouchingWall();
            Rigidbody otherRB = BoostTrigger.TouchingPlayer();
            
            Vector3 kickDir = -chairTrans.forward;

            float force = KickForce;

            if (boost)
            {
                force *= BoostMultiplier;
                BoostSpin();
            }
            
            if (otherRB)
            {
                otherRB.AddForce(-kickDir * force);
                BoostSpin();
            }
            
            myRB.AddForce(kickDir * force);
            kickTimer = KickCooldown;

            
            
            Vector3 leftRot = LeftKneePivot.transform.localEulerAngles;
            Vector3 rightRot = RightKneePivot.transform.localEulerAngles;
            Vector3 rotOffset = new Vector3(-65f, 0f, 0f);

            float kickDur = 0.33f;
            
            // left leg up
            actionList.Add(new Rotate(LeftKneePivot, leftRot + rotOffset, kickDur, KickCurve));
            // left leg down
            actionList.Add(new Rotate(LeftKneePivot, leftRot, KickCooldown - kickDur, kickDur, false,
                Act.Action.Group.None, Act.Action.EaseType.Cubic));
            
            // right leg up
            actionList.Add(new Rotate(RightKneePivot, rightRot + rotOffset, kickDur, KickCurve));
            // right leg down
            actionList.Add(new Rotate(RightKneePivot, rightRot, KickCooldown - kickDur, kickDur, false,
                Act.Action.Group.None, Act.Action.EaseType.Cubic));
        }

        private void CoolDown()
        {
            kickTimer -= Time.deltaTime;
            
            if (kickTimer > 0.0f)
            {
                kickReady = false;
            }

            kickReady = true;
            spinBoost = false;
        }

        private void OnCollisionEnter(Collision collision)
        {
            if (collision.collider.CompareTag("Wall"))
            {
                Vector3 reflection = Vector3.Reflect(oldVelocity, collision.contacts[0].normal);
                myRB.velocity = reflection * BounceMultiplier ;
            }
        }
    }
}
