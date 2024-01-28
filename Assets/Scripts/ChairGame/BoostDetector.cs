using System;
using UnityEngine;

namespace ChairGame
{
    public class BoostDetector : MonoBehaviour
    {
        private bool isTouchingWall;
        private GameObject otherPlayer;
        
        public bool TouchingWall()
        {
            return isTouchingWall;
        }

        public Rigidbody TouchingPlayer()
        {
            if (otherPlayer) return otherPlayer.GetComponent<Rigidbody>();
            return null;
        }
        
        private void OnTriggerEnter(Collider other)
        {
            if (other.CompareTag("Wall"))
            {
                isTouchingWall = true;
                Debug.Log("touching wall: true");
            }

            else if (other.CompareTag("Player"))
            {
                otherPlayer = other.gameObject;
                Debug.Log("touching player: true");
            }
        }

        private void OnTriggerExit(Collider other)
        {
            if (other.CompareTag("Wall"))
            {
                isTouchingWall = false;
                Debug.Log("touching wall:" + isTouchingWall);
            }
            
            else if (other.CompareTag("Player"))
            {
                otherPlayer = null;
                Debug.Log("touching player: false");
            }
        }
    }
}
