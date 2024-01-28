using System;
using System.Collections;
using System.Collections.Generic;
using Act;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using Action = Act.Action;
using Random = UnityEngine.Random;

public class GameManager : MonoBehaviour
{
    public static GameManager Instance { get; private set; }
    private int Player1Wins;
    private int Player2Wins;

    [SerializeField] private int requiredWins;
    
    [Space(10)]

    [SerializeField] private TextMeshProUGUI Player1WinsText;
    [SerializeField] private TextMeshProUGUI Player2WinsText;
    
    [Space(10)]
    
    [SerializeField] private CurtainMoveValues curtainMoveValues;
    [SerializeField] private GameObject curtain;
    
    [Space(10)]
    
    [SerializeField] private int VictorySceneIndex;
    [SerializeField] private int MainMenuSceneIndex;
    [SerializeField] private List<int> ValidGameScenes;

    public players overallWinner { get; private set; }
    
    ActionList actionList;
    
    public enum players
    {
        Player1,
        Player2,
        Both,
        None
    }
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
        
        actionList = new ActionList();
    }

    // Update is called once per frame
    void Update()
    {
        Player1WinsText.text = "Player 1 Wins: " + Player1Wins.ToString();
        Player2WinsText.text = "Player 2 Wins: " + Player2Wins.ToString();
        actionList.Update(Time.deltaTime);
    }

    public void StartGame()
    {
        Player1Wins = 0;
        Player2Wins = 0;
        overallWinner = players.None;
        StartNextMinigame(players.None);
    }

    public void StartNextMinigame(players winner)
    {
        float xPos = curtainMoveValues.canvas.GetComponent<RectTransform>().position.x;
        float yPos = curtainMoveValues.canvas.GetComponent<RectTransform>().position.y;

        Vector3 buttonPos = new Vector3(xPos, yPos, 0.0f);
        Vector3 topPos = new Vector3(xPos, yPos * 3, 0.0f);

        actionList.Add(new UIMove(buttonPos,curtain,curtainMoveValues.dur,0.0f,true,Action.Group.None,Action.EaseType.EaseOutBounce));
        actionList.Add(new IncrementPlayerLivesAction(winner,0.1f,0.0f,true));
        if (checkForWin(winner))
        {
            //Load a the victory scene
            actionList.Add(new LoadSceneAction(VictorySceneIndex,0.0f,0.5f,true));
        }
        else
        {
            //Load a random minigame
            int randomGameIndex = ValidGameScenes[Random.Range(0, ValidGameScenes.Count)];

            actionList.Add(new LoadSceneAction(randomGameIndex, 0.0f,0.5f,true));
        }
        
        actionList.Add(new UIMove(topPos,curtain,curtainMoveValues.dur, 2.0f,false,Action.Group.None,Action.EaseType.Cubic));
    }

    bool checkForWin(players winner)
    {
        //Player 1
        if(winner == players.Player1 || winner == players.Both)
        {
            if (Player1Wins + 1 >= requiredWins)
            {
                overallWinner = players.Player1;
                return true;
            }
        }
        else
        {
            if (Player1Wins >= requiredWins)
            {
                overallWinner = players.Player1;
                return true;
            }
        }
        
        //Player 2
        if(winner == players.Player2 || winner == players.Both)
        {
            if (Player2Wins + 1 >= requiredWins)
            {
                overallWinner = players.Player2;
                return true;
            }
        }
        else
        {
            if (Player2Wins >= requiredWins)
            {
                overallWinner = players.Player2;
                return true;
            }
        }

        return false;
    }

    public void IncrementPlayer1Lives(int i = 1)
    {
        Player1Wins += i;
    }
    
    public void IncrementPlayer2Lives(int i = 1)
    {
        Player2Wins += i;
    }

    int DieRoll(int roll)
    {
        return Random.Range(1, roll + 1);
    }
}

public class IncrementPlayerLivesAction : Action
{
    private GameManager.players _Winner;
    public IncrementPlayerLivesAction(GameManager.players winner, float duration, float delay =0, bool blocking = false, Group group= Group.None, EaseType ease = EaseType.Linear)
        : base(duration,delay,blocking,group,ease)
    {
        _Winner = winner;
    }
    
    public override bool Execute(float deltaTime)
    {

        if (IsDone)
        {
            switch (_Winner)
            {
                case (GameManager.players.Player1):
                {
                    GameManager.Instance.IncrementPlayer1Lives();
                    break;
                }
                case (GameManager.players.Player2):
                {
                    GameManager.Instance.IncrementPlayer2Lives();
                    break;
                }
                case (GameManager.players.Both):
                {
                    GameManager.Instance.IncrementPlayer1Lives();
                    GameManager.Instance.IncrementPlayer2Lives();
                    break;
                }
            }
        }

        return IsDone;
    }
}

[Serializable]
public class CurtainMoveValues
{
    public GameObject canvas;
    public float dur;
}
