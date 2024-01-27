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

    [SerializeField] private TextMeshProUGUI Player1WinsText;
    [SerializeField] private TextMeshProUGUI Player2WinsText;
    [SerializeField] private CurtainMoveValues curtainMoveValues;
    [SerializeField] private GameObject curtain;
    
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

        Player1Wins = 0;
        Player2Wins = 0;
        actionList = new ActionList();
    }

    // Update is called once per frame
    void Update()
    {
        Player1WinsText.text = "Player 1 Wins: " + Player1Wins.ToString();
        Player2WinsText.text = "Player 2 Wins: " + Player2Wins.ToString();
        actionList.Update(Time.deltaTime);
    }

    public void EndMinigame(players winner)
    {
        actionList.Add(new UIMove(curtainMoveValues.buttonPos,curtain,curtainMoveValues.dur,0.0f,true,Action.Group.None,Action.EaseType.EaseOutBounce));
        actionList.Add(new IncrementPlayerLivesAction(winner,0.1f,0.0f,true));
        actionList.Add(new LoadSceneAction(DieRoll(2),0.0f,0.5f,true));
        actionList.Add(new UIMove(curtainMoveValues.topPos,curtain,curtainMoveValues.dur, 2.0f));
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
    public Vector3 topPos;
    public Vector3 buttonPos;
    public float dur;
}
