using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DetectCollisions : MonoBehaviour
{
    bool collided = false;
    private void OnCollisionEnter(Collision collision)
    {
        collided = true;
    }
    public bool getCollided()
    {
        return collided;
    }
}
