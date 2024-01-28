using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class TimeManager : MonoBehaviour
{
    public TMPro.TextMeshProUGUI tm;
    public float startTimer;
    public GameObject selector;
    private float timer;
    private int mode = 1;
    // Start is called before the first frame update
    void Start()
    {
        timer = startTimer;
    }

    // Update is called once per frame
    void Update()
    {

        timer -= Time.deltaTime;
        tm.text = ((int)timer).ToString() + " seconds left";
        if(timer <= 0 && mode == 1)
        {
            mode = 2;
            foreach (FartCharacter farter in FindObjectsOfType<FartCharacter>())
            {
                farter.Stop();
            }
            FindObjectOfType<FartPlayer>().Stop();
            FindObjectOfType<FartManager>().active = false;
            Instantiate(selector);
            timer = 30;

        }
        else if(timer <= 0 && mode == 2)
        {
            GameManager.Instance.StartNextMinigame(GameManager.players.Player2);
            Destroy(gameObject);

        }

    }
}
