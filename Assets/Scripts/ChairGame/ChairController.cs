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
        public GameObject LegsPivot;
        //public GameObject LeftKneePivot;
        //public GameObject RightKneePivot;
        public AnimationCurve KickCurve;
        
        private Transform chairTrans;
        private Rigidbody myRB;
        private ActionList actionList;
        
        public float StartingSpinSpeed;
        public float SpinBoostMultiplier;
        public float SpinBoostDecay;
        private float spinSpeed;
        private bool spinDir;

        public float KickForce;
        public float KickCooldown;
        private float kickTimer;
        private bool kickReady;
        private bool rolling;

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
            float speed = myRB.velocity.magnitude;
            
            if (speed > 0.1f)
                Debug.Log(speed);
            
            SpinChair();
            DecaySpin();
            CoolDown();
            UpdateRollSound();
            actionList.Update(Time.deltaTime);
            oldVelocity = myRB.velocity;
        }

        public override void OnPrimaryButtonPressed()
        {
            if (kickReady) KickOff();
        }
        
        

        private void KickOff()
        {
            spinDir = !spinDir;
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

            if (boost || otherRB)
                AkSoundEngine.PostEvent("playerKickStrong", gameObject);
            else
                AkSoundEngine.PostEvent("playerKickNormal", gameObject);

            if (!rolling)
            {
                AkSoundEngine.PostEvent("playerRolling", gameObject);
                rolling = true;
            }

            Vector3 legsRot = LegsPivot.transform.localEulerAngles;
            //Vector3 leftRot = LeftKneePivot.transform.localEulerAngles;
            //Vector3 rightRot = RightKneePivot.transform.localEulerAngles;
            Vector3 rotOffset = new Vector3(-65f, 0f, 0f);

            float kickDur = 0.33f;
            
            actionList.Add(new Rotate(LegsPivot, legsRot + rotOffset, kickDur, KickCurve));
            actionList.Add(new Rotate(LegsPivot, legsRot, KickCooldown - kickDur, kickDur, false,
                Act.Action.Group.None, Act.Action.EaseType.Cubic));
            
            /*// left leg up
            actionList.Add(new Rotate(LeftKneePivot, leftRot + rotOffset, kickDur, KickCurve));
            // left leg down
            actionList.Add(new Rotate(LeftKneePivot, leftRot, KickCooldown - kickDur, kickDur, false,
                Act.Action.Group.None, Act.Action.EaseType.Cubic));
            
            // right leg up
            actionList.Add(new Rotate(RightKneePivot, rightRot + rotOffset, kickDur, KickCurve));
            // right leg down
            actionList.Add(new Rotate(RightKneePivot, rightRot, KickCooldown - kickDur, kickDur, false,
                Act.Action.Group.None, Act.Action.EaseType.Cubic));*/
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
            spinSpeed += StartingSpinSpeed * SpinBoostMultiplier;
        }
        
        private void DecaySpin()
        {
            //Debug.Log("Spin Speed: " + spinSpeed);

            if (spinSpeed > StartingSpinSpeed)
            {
                float decayRate = rolling ? SpinBoostDecay : SpinBoostDecay * 2;
                spinSpeed -= decayRate * Time.deltaTime;
            }

            if (spinSpeed < StartingSpinSpeed)
                spinSpeed = StartingSpinSpeed;
        }

        private void UpdateRollSound()
        {
            if (rolling)
            {
                float velocity = myRB.velocity.magnitude;
                
                AkSoundEngine.SetRTPCValue("chairSpeed", velocity * 2f, gameObject);
                
                if (myRB.GetAccumulatedForce().sqrMagnitude > 0) return;
                if (velocity > 5f) return;
                
                AkSoundEngine.PostEvent("playerRollEnd", gameObject);
                rolling = false;
            }
        }
        
        private void CoolDown()
        {
            kickTimer -= Time.deltaTime;
            
            if (kickTimer > 0.0f)
            {
                kickReady = false;
            }
            else
            {
                kickReady = true;
            }
        }

        private void OnCollisionEnter(Collision collision)
        {
            if (collision.collider.CompareTag("Wall"))
            {
                Vector3 reflection = Vector3.Reflect(oldVelocity, collision.contacts[0].normal);
                myRB.velocity = reflection * BounceMultiplier ;
                AkSoundEngine.PostEvent("chairCollide", gameObject);
            }
            
            else if (collision.collider.CompareTag("Player"))
            {
                AkSoundEngine.PostEvent("chairCollide", gameObject);
            }
        }
    }
}
