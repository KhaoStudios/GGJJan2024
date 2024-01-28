using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FartSelector : MonoBehaviour
{
    public PlayerController play; // Controller
    public int speed;
    public bool touching; // if it is touching something or not. 
    // Start is called before the first frame update
    void Start()
    {
    }

    // Update is called once per frame
    void Update()
    {
        

        // Get axises, I could not get player controller to work correctly
        float moveHorizontal = Input.GetAxis("Horizontal");
        float moveVertical = Input.GetAxis("Vertical");

        // move position
        transform.position += new Vector3(moveHorizontal, 0, moveVertical) * Time.deltaTime * speed;

        // Set colors based on if it is touching 
        if(touching == false)
        {
            GetComponent<Renderer>().material.color = new Color(1, 1, 1);
        }
        else
        {
            GetComponent<Renderer>().material.color = new Color(1, 0, 0);
        }

    }
    //private void OnCollisionStay(Collision collision)
    //{
    //    if(collision.gameObject.name.Contains("Fart"))
    //    {
    //        GetComponent<Renderer>().material.color = new Color(1, 0, 0);
    //        if(Input.GetKeyDown(KeyCode.Space))
    //        {
    //            if(collision.gameObject.name.Contains("Player"))
    //            {
    //                GameManager.Instance.StartNextMinigame(GameManager.players.Player1);
    //            }
    //        }
    //    }
    //    else
    //    {
    //        GetComponent<Renderer>().material.color = new Color(0, 0, 0);

    //    }
    //}

    
    private void OnTriggerStay(Collider other)
    {
        // if colliding with a fart object
        if (other.gameObject.name.Contains("Fart"))
        {
            // set touching to true
            touching = true;
            // If space is pressed while touching

            if (Input.GetKeyDown(KeyCode.Space))
            {
                // set the winner based on if it was the player or not
                if (other.gameObject.name.Contains("Player"))
                {
                    GameManager.Instance.StartNextMinigame(GameManager.players.Player1);
                    Destroy(gameObject);
                }
                else
                {
                    GameManager.Instance.StartNextMinigame(GameManager.players.Player2);
                    Destroy(gameObject);

                }
            }
        }
        else
        {


        }
    }
    private void OnTriggerExit(Collider other)
    {
        // Set touching to false
        touching = false;
    }
}
