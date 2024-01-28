using System;
using UnityEngine;
using UnityEngine.UI;

namespace Controls.Player_Controllers
{
    [RequireComponent(typeof(Rigidbody))]
    public class ChairController : PlayerController
    {
        public GameObject ChairPivot;
        private Transform chairTrans;
        private Rigidbody rb;
        
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
        }

        // Update is called once per frame
        private void Update()
        {
            SpinChair();
            CoolDown();

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
