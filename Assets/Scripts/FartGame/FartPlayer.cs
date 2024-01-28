using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class FartPlayer : MonoBehaviour
{
    public PlayerController play;
    public int speed;
    private bool active;

    // Start is called before the first frame update
    void Start()
    {
        active = true;
    }

    // Update is called once per frame
    void Update()
    {
        if(active)
        {
            Vector2 moveHorizontal = play.GetInputVector();
            //float moveVertical = Input.GetAxis("Vertical");

            transform.position += new Vector3(moveHorizontal.x, 0, moveHorizontal.y) * Time.deltaTime * speed;
        }

    }
    public void Stop()
    {
        active = false;
        GetComponent<Rigidbody>().velocity = new Vector3(0, 0, 0);
    }


}
