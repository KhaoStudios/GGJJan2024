using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FartManager : MonoBehaviour
{
    public FartPlayer playerRef;
    public TMPro.TextMeshProUGUI tm; // fart %
    public float timer;              // timer that builds up percentage
    public GameObject fart;          // fart prefab
    public bool active = true;       // If this is active or not

    // Start is called before the first frame update
    void Start()
    {
        active = true;
    }

    // Update is called once per frame
    void Update()
    {
        // If it is active
        if(active)
        {
            // increase the timer by more than just the deltatime
            timer += Time.deltaTime*4;

            // update the text
            tm.text = "Fart %: "+((int)timer).ToString();

            // if space is pressed or if the percentage reaches 100
            if(Input.GetKeyDown(KeyCode.Space) || timer >= 100)
            {            
                // Instantiate the fart

                GameObject gam = Instantiate(fart, playerRef.transform.position, Quaternion.identity);
                // Set the scale of the fart based on the timer
                FartEffect eff = gam.GetComponent<FartEffect>();
                if (eff)
                {
                    eff.ScaleHitbox = 10 * (timer / 100);
                }
                // set timer to 0
                timer = 0;

            }
        }
        else
        {
            // blank text;
            tm.text = "";

        }

    }
}
