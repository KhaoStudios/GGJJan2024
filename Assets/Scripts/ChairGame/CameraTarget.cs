using System;
using UnityEngine;

namespace ChairGame
{
    public class CameraTarget : MonoBehaviour
    {
        public Camera FollowCamera;
        public float CameraSpeed = 1;
        
        private Transform cameraTrans;
        
        
        
        private void Awake()
        {
            if (FollowCamera) cameraTrans = FollowCamera.transform;
        }

        // Start is called before the first frame update
        private void Start()
        {
            if (cameraTrans) cameraTrans.position = transform.position;
        }

        // Update is called once per frame
        private void FixedUpdate()
        {
            if (cameraTrans)
            {
                Vector3 newPos = Vector3.Lerp(cameraTrans.position, transform.position, CameraSpeed * Time.deltaTime);
                cameraTrans.position = newPos;
            }
        }
    }
}
