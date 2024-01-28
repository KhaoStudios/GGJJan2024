using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FartSelector : PlayerController
{
    public PlayerController play; // Controller
    public int speed;
    public bool touching; // if it is touching something or not. 

    Collider currentlyHoveredObject;
    CharacterManager characterManager;

    private void Start()
    {
        characterManager = FindObjectOfType<CharacterManager>();
    }

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
        AkSoundEngine.PostEvent("playerHammer", this.gameObject);

        StartCoroutine(RevealChoice(fartPlayer != null));
    }

    public IEnumerator RevealChoice(bool rightChoice)
    {
        yield return new WaitForSeconds(1f);
        if (rightChoice)
        {
            Debug.Log("Right choice");
            AkSoundEngine.PostEvent("successDing", this.gameObject);
            GameManager.Instance.StartNextMinigame(GameManager.players.Player2);
            Destroy(gameObject);
        }
        else
        {
            Debug.Log("Wrong choice");
            AkSoundEngine.PostEvent("failureDing", this.gameObject);
            GameManager.Instance.StartNextMinigame(GameManager.players.Player1);
            Destroy(gameObject);

        }
    }

    private void OnTriggerEnter(Collider other)
    {
        characterManager.DisableExclamationOnAll();
    }

    private void OnTriggerStay(Collider other)
    {
        // if colliding with a fart object
        if (other.gameObject.name.Contains("Fart"))
        {
            // Disable exclamation on other object
            if (currentlyHoveredObject != null)
            {
                ToggleExclamationOnCharacter(currentlyHoveredObject.gameObject, false);
            }
            ToggleExclamationOnCharacter(other.gameObject, true);
            
            // set touching to true
            touching = true;
            currentlyHoveredObject = other;
            // If space is pressed while touching
        }
    }

    void ToggleExclamationOnCharacter(GameObject character, bool value)
    {
        FartPlayer fartPlayer = character.GetComponent<FartPlayer>();
        FartCharacter fartCharacter = character.GetComponent<FartCharacter>();

        if (fartPlayer != null)
        {
            fartPlayer.ToggleExclamation(value);
        }

        if (fartCharacter != null)
        {
            fartCharacter.ToggleExclamation(value);
        }
    }
    private void OnTriggerExit(Collider other)
    {
        // Set touching to false
        touching = false;
        currentlyHoveredObject = null;
        characterManager.DisableExclamationOnAll();
    }
}
