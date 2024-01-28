using System.Collections;
using System.Collections.Generic;
using Act;
using TMPro;
using UnityEngine;

public class MainMenuScript : MonoBehaviour
{
    private bool hasStarted;
    public TextMeshProUGUI mainText;
    public Canvas canvas;
    public GameObject title;

    private ActionList al;
    // Start is called before the first frame update
    void Start()
    {
        float xPos = canvas.GetComponent<RectTransform>().position.x;
        float yPos = canvas.GetComponent<RectTransform>().position.y;

        Vector3 centerPos = new Vector3(xPos, yPos*2.0f, 0.0f);
        
        hasStarted = false;
        al = new ActionList();
        al.Add(new UIMove(centerPos,title,0.9f,0.0f,false,Action.Group.None,Action.EaseType.EaseOutBounce));
    }

    // Update is called once per frame
    void Update()
    {
        mainText.fontSize = Mathf.Lerp(35, 40, Mathf.PingPong(Time.time, 1));
        al.Update(Time.deltaTime);
    }
}
