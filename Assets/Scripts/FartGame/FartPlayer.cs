using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class FartPlayer : PlayerController
{
    public int speed;             // speed
    private bool active;          // if it is active or not

    // Start is called before the first frame update
    void Start()
    {
        active = true;
    }

    // Update is called once per frame
    void Update()
    {
        // if active
        if(active)
        {
            // Get the unput vector and set it
            Vector2 move = inputVector;
            transform.position += new Vector3(move.x, 0, move.y) * Time.deltaTime * speed;
        }

    }
    // public function to stop movement
    public void Stop()
    {
        active = false;
        GetComponent<Rigidbody>().velocity = new Vector3(0, 0, 0);
    }


}
