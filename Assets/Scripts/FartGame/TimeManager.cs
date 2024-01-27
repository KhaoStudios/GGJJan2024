using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class TimeManager : MonoBehaviour
{
    public TMPro.TextMeshProUGUI tm;
    public float startTimer;
    private float timer;
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

    }
}
