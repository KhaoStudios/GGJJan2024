using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HeightTracker : MonoBehaviour
{
    public float ascendSpeed;
    private float height;
    private int collisionCount;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (collisionCount > 0)
        {
            transform.position += ascendSpeed * Time.deltaTime * Vector3.up;
            height += ascendSpeed * Time.deltaTime;
        }
    }
    private void OnTriggerEnter(Collider other)
    {
        collisionCount++;
    }
    private void OnTriggerExit(Collider other)
    {
        collisionCount--;
    }

    public float GetHeight()
    {
        return height;
    }
}
