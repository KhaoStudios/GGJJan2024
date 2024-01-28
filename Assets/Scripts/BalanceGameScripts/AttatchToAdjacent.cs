using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AttatchToAdjacent : MonoBehaviour
{
    bool finished = false;
    private void OnCollisionEnter(Collision collision)
    {
        if(finished)
        {
            return;
        }
        finished = true;
        if(gameObject.transform.parent)
        {
            return;
        }
        if(collision.gameObject.GetComponent<Rigidbody>())
        {
            if(collision.gameObject.GetComponent<Rigidbody>().isKinematic)
            {
                return;
            }
            Destroy(collision.gameObject.GetComponent<Rigidbody>());
        }
        
        GameObject topObject = collision.gameObject;
        while(topObject.transform.parent)
        {
            
            if(topObject.transform.parent.gameObject == gameObject)
            {
                return;
            }

            topObject = topObject.transform.parent.gameObject;

            if (topObject.GetComponent<Rigidbody>())
            {
                Destroy(topObject.GetComponent<Rigidbody>());
            }
        }
        topObject.transform.SetParent(gameObject.transform);
    }
}
