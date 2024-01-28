using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TrackLanded : MonoBehaviour
{
    // Start is called before the first frame update
    bool landed = false;
    private void OnCollisionEnter(Collision collision)
    {
        landed = true;
    }
    public bool GetLanded()
    {
        return landed;
    }
}
