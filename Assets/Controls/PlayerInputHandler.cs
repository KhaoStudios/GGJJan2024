using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;
using static UnityEngine.InputSystem.InputAction;

public class PlayerInputHandler : MonoBehaviour
{
    PlayerInput playerInput;
    Mover mover;

    // Start is called before the first frame update
    void Start()
    {
        mover = GetComponent<Mover>();
        playerInput = GetComponent<PlayerInput>();

        int playerIndex = playerInput.playerIndex;

        // Tie this to the mover with the same index (Can tie this to any other player input method)
        Mover[] allMovers = FindObjectsOfType<Mover>();
        for (int i = 0; i < allMovers.Length; i++)
        {
            if (allMovers[i].GetPlayerIndex() == playerIndex)
            {
                mover = allMovers[i];
                break;
            }
        }
        if (mover == null)
        {
            Debug.LogError("WARNING: PlayerInputHandler did not find a mover with player index " + playerIndex);
            return;
        }
    }

    // Call this from the PlayerInput event
    public void OnMove(CallbackContext ctx)
    {
        mover.SetInputVector(ctx.ReadValue<Vector2>());
    }
}
