using System;
using UnityEngine;

namespace ChairGame
{
    public class BoostDetector : MonoBehaviour
    {
        private bool isTouchingWall;

        public bool TouchingWall()
        {
            return isTouchingWall;
        }
        
        private void OnTriggerEnter(Collider other)
        {
            if (other.CompareTag("Wall"))
            {
                isTouchingWall = true;
                Debug.Log("touching wall:" + isTouchingWall);
            }
        }

        private void OnTriggerExit(Collider other)
        {
            if (other.CompareTag("Wall"))
            {
                isTouchingWall = false;
                Debug.Log("touching wall:" + isTouchingWall);
            }
        }
    }
}
