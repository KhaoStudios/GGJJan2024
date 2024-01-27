using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ATesting : MonoBehaviour
{

    ActionList actionList;

    [SerializeField] float duration;

    // Start is called before the first frame update
    void Start()
    {
        actionList = new ActionList();
    }

    // Update is called once per frame
    void Update()
    {
        actionList.Update(Time.deltaTime);

        if(Input.GetKeyUp(KeyCode.Escape))
        {
            Vector3 pos = new Vector3(Random.Range(-10, 10), Random.Range(-10, 10));
            actionList.Add(new Act.Move(pos, gameObject, duration,0,true,Act.Action.Group.None, Act.Action.EaseType.Cubic));
            actionList.Add(new Act.Rotate(gameObject, new Vector3(0, 0, Random.Range(-45, 150)),1.0f,0));
        }

    }
}
