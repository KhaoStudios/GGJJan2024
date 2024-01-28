using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HeightTracker : MonoBehaviour
{
    public float ascendSpeed;
    private float height;
    private bool colliding = false;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (colliding)
        {
            transform.position += ascendSpeed * Time.deltaTime * Vector3.up;
            height += ascendSpeed * Time.deltaTime;
        }
        colliding = false;
    }
    //Doing on trigger stay since on trigger enter and exit do not work well with object changing from not counting to counting.
    private void OnTriggerStay(Collider other)
    {
        if(other.gameObject.GetComponent<TrackLanded>() && other.gameObject.GetComponent<TrackLanded>().GetLanded())
        {
            colliding = true;
        }
    }

    public float GetHeight()
    {
        return height;
    }
}
