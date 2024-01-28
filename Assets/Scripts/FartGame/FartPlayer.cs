using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class FartPlayer : MonoBehaviour
{
    public PlayerController play;
    public int speed;
    // Start is called before the first frame update
    void Start()
    {
    }

    // Update is called once per frame
    void Update()
    {
        Vector2 moveHorizontal = play.GetInputVector();
        //float moveVertical = Input.GetAxis("Vertical");

       transform.position += new Vector3(moveHorizontal.x, 0, moveHorizontal.y)*Time.deltaTime* speed;
    }

    
}
