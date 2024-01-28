using System.Collections;
using System.Collections.Generic;
using Act;
using UnityEngine;
using UnityEngine.SceneManagement;

public class PlayerJoinChecker : MonoBehaviour
{
    public InputVerifier verifierP1;
    public InputVerifier verifierP2;
    public bool BothPlayersJoined;
    public GameObject ReadyPanel;

    private ActionList al;
    public GameObject canvas;

    private void Start()
    {
        //ReadyPanel.SetActive(false);
        al = new ActionList();
    }

    // Loads the scene if both players joined (This can be made more generic)
    void Update()
    {
        float xPos = canvas.GetComponent<RectTransform>().position.x;
        float yPos = canvas.GetComponent<RectTransform>().position.y;

        Vector3 centerPos = new Vector3(xPos, yPos, 0.0f);
        
        if (verifierP1 == null  || verifierP2 == null) return;

        if (!BothPlayersJoined)
        {
            if (verifierP1.joined && verifierP2.joined)
            {
                BothPlayersJoined = true;
                al.Add(new UIMove(centerPos, ReadyPanel, 0.85f, 0, false, Action.Group.None,
                    Action.EaseType.EaseInElastic));
            }
        }

        al.Update(Time.deltaTime);
    }

    // This can be changed out for anything, for now load bananagame
    public void StartGame()
    {
        if (BothPlayersJoined)
        {
            AkSoundEngine.PostEvent("menuNext", this.gameObject);
            Debug.Log("Player join checker: StartGame");
            //SceneManager.LoadScene("BananaGame");
            GameManager.Instance.StartGame();
        }

    }
}
