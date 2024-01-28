using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class MainMenuScript : MonoBehaviour
{
    private bool hasStarted;
    public TextMeshProUGUI mainText;
    // Start is called before the first frame update
    void Start()
    {
        hasStarted = false;
    }

    // Update is called once per frame
    void Update()
    {
        if (!hasStarted)
        {
            if (Input.GetKeyDown(KeyCode.Space))
            {
                hasStarted = true;
                GameManager.Instance.StartGame();
            }
        }

        mainText.fontSize = Mathf.Lerp(45, 50, Mathf.PingPong(Time.time, 1));
    }
}
