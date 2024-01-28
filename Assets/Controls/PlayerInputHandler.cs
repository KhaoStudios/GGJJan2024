using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;
//using static UnityEditor.Timeline.TimelinePlaybackControls;
using static UnityEngine.InputSystem.InputAction;
using UnityEngine.SceneManagement;

// Handles input for a single player, and passes it to a PlayerController.
// This goes between scenes, and looks for a playerController matching its index in each scene.
public class PlayerInputHandler : MonoBehaviour
{
    public int playerIndex { get; private set; }
    PlayerInput playerInput;
    PlayerController playerController;

    static PlayerInputHandler Player1InputHandler;
    static PlayerInputHandler Player2InputHandler;

    private void Awake()
    {
        playerInput = GetComponent<PlayerInput>();
        playerIndex = playerInput.playerIndex;

        // Assigns the static instance to ensure there is only 1
        if (playerIndex == 0)
        {
            if (Player1InputHandler == null)
            {
                DontDestroyOnLoad(gameObject);
                Player1InputHandler = this;
                Debug.Log("Initialize Player 1 input handler");
            }
            else
            {
                Destroy(this);
                return;
            }
        }
        else if (playerIndex == 1)
        {
            if (Player2InputHandler == null)
            {
                DontDestroyOnLoad(gameObject);
                Player2InputHandler = this;
                Debug.Log("Initialize Player 2 input handler");
            }
            else
            {
                Destroy(this);
                return;
            }
        }

        SceneManager.sceneLoaded += OnSceneLoaded;
    }

    private void Start()
    {
        GetPlayerControllerInScene();
    }

    // called second
    void OnSceneLoaded(Scene scene, LoadSceneMode mode)
    {
        Debug.Log("OnSceneLoaded: " + scene.name);
        GetPlayerControllerInScene();
    }

    /// <summary>
    /// This calls from OnSceneLoaded, it gets the controllers of the player in scene
    /// </summary>
    void GetPlayerControllerInScene()
    {
        // Tie this to the mover with the same index (Can tie this to any other player input method)
        PlayerController[] allControllers = FindObjectsOfType<PlayerController>();
        for (int i = 0; i < allControllers.Length; i++)
        {
            if (allControllers[i].GetPlayerIndex() == playerIndex)
            {
                playerController = allControllers[i];
                Debug.Log("Found playerController with index " + playerIndex);
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

    public void OnRightStickMove(CallbackContext ctx)
    {
        playerController.SetSecondaryInputVector(ctx.ReadValue<Vector2>());
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

    public void OnJoinPressed(CallbackContext ctx)
    {
        if (playerController == null) { return; }
        if (ctx.performed)
        {
            playerController.OnJoinedButtonPressed();
        }
    }
}
