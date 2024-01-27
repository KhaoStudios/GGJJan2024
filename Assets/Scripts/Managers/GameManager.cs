using System;
using System.Collections;
using System.Collections.Generic;
using Act;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using Random = UnityEngine.Random;

public class GameManager : MonoBehaviour
{
    public static GameManager Instance { get; private set; }
    [SerializeField] private int startingLives;
    private int Player1Lives;
    private int Player2Lives;

    [SerializeField] private TextMeshProUGUI Player1LivesText;
    [SerializeField] private TextMeshProUGUI Player2LivesText;
    [SerializeField] private CurtainMoveValues curtainMoveValues;
    [SerializeField] private GameObject curtain;
    
    ActionList actionList;
    private void Awake() 
    { 
        // If there is an instance, and it's not me, delete myself.
    
        if (Instance != null && Instance != this) 
        { 
            Destroy(this.gameObject); 
        } 
        else 
        { 
            Instance = this;
            DontDestroyOnLoad(this.gameObject);
        }

        Player1Lives = startingLives;
        Player2Lives = startingLives;
        actionList = new ActionList();
    }

    // Update is called once per frame
    void Update()
    {
        Player1LivesText.text = Player1Lives.ToString();
        Player2LivesText.text = Player2Lives.ToString();
        actionList.Update(Time.deltaTime);
    }

    public void EndMinigame()
    {
        actionList.Add(new UIMove(curtainMoveValues.buttonPos,curtain,curtainMoveValues.dur));
        actionList.Add(new LoadSceneAction(DieRoll(2),0.0f,curtainMoveValues.dur));
        actionList.Add(new UIMove(curtainMoveValues.topPos,curtain,curtainMoveValues.dur,curtainMoveValues.dur + 1.2f));
    }

    public void DecrementPlayer1Lives(int i = 1)
    {
        Player1Lives -= i;
    }
    
    public void DecrementPlayer2Lives(int i = 1)
    {
        Player2Lives -= i;
    }

    int DieRoll(int roll)
    {
        return Random.Range(1, roll + 1);
    }
}

[Serializable]
public class CurtainMoveValues
{
    public Vector3 topPos;
    public Vector3 buttonPos;
    public float dur;
}
