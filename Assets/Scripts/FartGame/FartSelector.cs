using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FartSelector : PlayerController
{
    public PlayerController play; // Controller
    public int speed;
    public bool touching; // if it is touching something or not. 

    Collider currentlyHoveredObject;

    // Update is called once per frame
    void Update()
    {
        // Get axises, I could not get player controller to work correctly
        //float moveHorizontal = Input.GetAxis("Horizontal");
        //float moveVertical = Input.GetAxis("Vertical");

        // move position
        transform.position += new Vector3(inputVector.x, 0, inputVector.y) * Time.deltaTime * speed;

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

    public override void OnPrimaryButtonPressed()
    {
        SelectCurrentObject();
    }

    void SelectCurrentObject()
    {
        if (currentlyHoveredObject == null)
        {
            Debug.Log("Nothing hovered currently");
            return;
        }

        FartPlayer fartPlayer = currentlyHoveredObject.GetComponent<FartPlayer>();

        // set the winner based on if it was the player or not
        if (fartPlayer != null)
        {
            Debug.Log("Right choice");
            GameManager.Instance.StartNextMinigame(GameManager.players.Player1);
            Destroy(gameObject);
        }
        else
        {
            Debug.Log("Wrong choice");
            GameManager.Instance.StartNextMinigame(GameManager.players.Player2);
            Destroy(gameObject);

        }
    }
    
    private void OnTriggerStay(Collider other)
    {
        // if colliding with a fart object
        if (other.gameObject.name.Contains("Fart"))
        {
            // set touching to true
            touching = true;
            currentlyHoveredObject = other;
            // If space is pressed while touching
        }
    }
    private void OnTriggerExit(Collider other)
    {
        // Set touching to false
        touching = false;
        currentlyHoveredObject = null;
    }
}
