using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;
using static UnityEditor.Timeline.TimelinePlaybackControls;
using static UnityEngine.InputSystem.InputAction;

public class PlayerInputHandler : MonoBehaviour
{
    PlayerInput playerInput;
    PlayerController playerController;

    // Start is called before the first frame update
    void Start()
    {
        playerInput = GetComponent<PlayerInput>();

        int playerIndex = playerInput.playerIndex;

        // Tie this to the mover with the same index (Can tie this to any other player input method)
        PlayerController[] allControllers = FindObjectsOfType<PlayerController>();
        for (int i = 0; i < allControllers.Length; i++)
        {
            if (allControllers[i].GetPlayerIndex() == playerIndex)
            {
                playerController = allControllers[i];
                break;
            }
        }
        if (playerController == null)
        {
            Debug.LogError("WARNING: PlayerInputHandler did not find a controller with player index " + playerIndex);
            return;
        }
    }

    // Call this from the PlayerInput event
    public void OnMove(CallbackContext ctx)
    {
        playerController.SetInputVector(ctx.ReadValue<Vector2>());
    }

    public void OnPrimaryInput(CallbackContext ctx)
    {
        if (ctx.performed)
        {
            playerController.OnPrimaryButtonPressed();
        }
        // Can use context.cancelled if we need button up
    }

    public void OnSecondaryInput(CallbackContext ctx)
    {
        if (ctx.performed)
        {
            playerController.OnSecondaryButtonPressed();
        }
    }
}
