using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FartManager : MonoBehaviour
{
    public TMPro.TextMeshProUGUI tm;
    public float timer;
    public GameObject fart;
    public bool active = true;
    // Start is called before the first frame update
    void Start()
    {
        active = true;
    }

    // Update is called once per frame
    void Update()
    {
        if(active)
        {
            timer += Time.deltaTime*4;
            tm.text = "Fart %: "+((int)timer).ToString();
            if(Input.GetKeyDown(KeyCode.Space) || timer>=100)
            {            
                GameObject gam = Instantiate(fart,GameObject.Find("FartPlayer(Clone)").transform.position, Quaternion.identity);
                FartEffect eff = gam.GetComponent<FartEffect>();
                if (eff)
                {
                    eff.ScaleHitbox = 10 * (timer / 100);
                }
                timer = 0;

            }
        }
        else
        {
            tm.text = "";

        }

    }
}
