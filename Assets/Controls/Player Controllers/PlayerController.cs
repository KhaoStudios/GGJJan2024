using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// Accepts input from the input handler!
public class PlayerController : MonoBehaviour
{

    [SerializeField]
    protected int playerIndex = 0;
    protected Vector2 inputVector = Vector2.zero;
    protected Vector2 secondaryInputVector = Vector2.zero;


    public int GetPlayerIndex()
    {
        return playerIndex;
    }

    public void SetInputVector(Vector2 direction)
    {
        inputVector = direction;
    }

    public void SetSecondaryInputVector(Vector2 direction)
    {
        secondaryInputVector = direction;
    }

    public Vector2 GetInputVector()
    {
        return inputVector;
    }

    public Vector2 GetSecondaryInputVector()
    {
         return secondaryInputVector;
    }

    public virtual void OnPrimaryButtonPressed()
    {
        Debug.Log("Base - primary button pressed");
    }

    public virtual void OnSecondaryButtonPressed()
    {
        Debug.Log("Base - secondary button pressed");
    }

    public virtual void OnJoinedButtonPressed()
    {
        Debug.Log("Joined pressed");
    }
}
