using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class TimeManager : MonoBehaviour
{
    //public FartSelector selector;      // This is the player who is trying to select the farter

    public TMP_Text TimerAmount; // timer text
    public TMP_Text TimerHelp; // Help text
    public float startTimer;         // The start value of the timer
    private float timer;             // the timer itself
    public FartGameMode CurrentGameMode { get; private set;  }           // mode used to see if the selector is active or not


    public enum FartGameMode
    {
        Hiding,
        Selecting,
    }

    // Start is called before the first frame update
    void Start()
    {
        timer = startTimer;
        CurrentGameMode = FartGameMode.Hiding;
    }



    // Update is called once per frame
    void Update()
    {

        // change timer and update text
        timer -= Time.deltaTime;
        TimerAmount.text = ((int)timer).ToString();

        // if timer is out the first time
        if(timer <= 0 && CurrentGameMode == FartGameMode.Hiding)
        {
            CurrentGameMode = FartGameMode.Selecting;
            // Stop each farter object
            foreach (FartCharacter farter in FindObjectsOfType<FartCharacter>())
            {
                farter.Stop();
            }
            FindObjectOfType<FartPlayer>().Stop();
            FindObjectOfType<FartManager>().active = false;

            // instantiate the selector and update timer
            //Instantiate(selector);
            timer = 30;
            TimerHelp.text = "Who farted? (Press A)";

        }
        else if(timer <= 0 && CurrentGameMode == FartGameMode.Selecting)
        {
            // Start the next minigame if the timer runs out
            GameManager.Instance.StartNextMinigame(GameManager.players.Player2);
            Destroy(gameObject);

        }

    }
}
