using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class TimeManager : MonoBehaviour
{
    public TMPro.TextMeshProUGUI tm; // timer text
    public float startTimer;         // The start value of the timer
    public GameObject selector;      // The selector to be instantiated
    private float timer;             // the timer itself
    private int mode = 1;            // mode used to see if the selector is active or not


    // Start is called before the first frame update
    void Start()
    {
        timer = startTimer;
    }

    // Update is called once per frame
    void Update()
    {

        // change timer and update text
        timer -= Time.deltaTime;
        tm.text = ((int)timer).ToString() + " seconds left";

        // if timer is out the first time
        if(timer <= 0 && mode == 1)
        {

            mode = 2;
            // Stop each farter object
            foreach (FartCharacter farter in FindObjectsOfType<FartCharacter>())
            {
                farter.Stop();
            }
            FindObjectOfType<FartPlayer>().Stop();
            FindObjectOfType<FartManager>().active = false;

            // instantiate the selector and update timer
            Instantiate(selector);
            timer = 30;

        }
        else if(timer <= 0 && mode == 2)
        {
            // Start the next minigame if the timer runs out
            GameManager.Instance.StartNextMinigame(GameManager.players.Player2);
            Destroy(gameObject);

        }

    }
}
