using Act;
using UnityEngine;
using Action = System.Action;

namespace ChairGame
{
    [RequireComponent(typeof(Rigidbody))]
    public class ChairController : PlayerController
    {
        public GameObject ChairPivot;
        public GameObject LeftKneePivot;
        public GameObject RightKneePivot;
        public AnimationCurve KickCurve;
        private Transform chairTrans;
        private Rigidbody rb;
        private ActionList actionList;
        
        public float StartingSpinSpeed;
        private bool spinDir;

        public float KickForce;
        public float KickCooldown;
        private float kickTimer;
        private bool kickReady;

        public float DeflectionScale;

        private Vector3 oldVelocity;
        
    
        // Start is called before the first frame update
        private void Awake()
        {
            chairTrans = ChairPivot.transform;
            rb = GetComponent<Rigidbody>();
            actionList = new ActionList(); 
        }

        // Update is called once per frame
        private void Update()
        {
            SpinChair();
            CoolDown();
            actionList.Update(Time.deltaTime);

            oldVelocity = rb.velocity;
        }

        public override void OnPrimaryButtonPressed()
        {
            if (kickReady) KickOff();
        }
        
        private void SpinChair()
        {
            float spinSpeed = spinDir ? StartingSpinSpeed : StartingSpinSpeed * -1f;
            Vector3 chairAngles = chairTrans.localEulerAngles;
            chairAngles.y += spinSpeed * Time.deltaTime;

            chairTrans.localEulerAngles = chairAngles;
        }

        private void KickOff()
        {
            Vector3 kickDir = -chairTrans.forward;
            rb.AddForce(kickDir * KickForce);
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
            kickReady = !(kickTimer > 0.0f);
        }

        private void OnCollisionEnter(Collision collision)
        {
            if (collision.collider.CompareTag("Wall"))
            {
                Vector3 reflection = Vector3.Reflect(oldVelocity, collision.contacts[0].normal);
                rb.velocity = reflection * DeflectionScale ;
            }
        }
    }
}
