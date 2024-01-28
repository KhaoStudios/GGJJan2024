using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;

public class FartManager : MonoBehaviour
{
    public FartPlayer playerRef;
    public float fartStrengthTimer;              // timer that builds up percentage
    public GameObject fart;          // fart prefab
    public bool active = true;       // If this is active or not

    public Image FartMeter;
    public Color FartColorLow;
    public Color FartColorMed;
    public Color FartColorHigh;

    // Start is called before the first frame update
    void Start()
    {
        active = true;
    }

    public void Fart()
    {
        if (fartStrengthTimer < 10) return;
        // Instantiate the fart

        GameObject gam = Instantiate(fart, playerRef.transform.position, Quaternion.identity);
        // Set the scale of the fart based on the timer
        FartEffect eff = gam.GetComponent<FartEffect>();
        if (eff)
        {
            eff.ScaleHitbox = 10 * (fartStrengthTimer / 100);
        }

        if (fartStrengthTimer >= 10 && fartStrengthTimer < 33)
        {
            AkSoundEngine.PostEvent("fartSmall", this.gameObject);
        } else if (fartStrengthTimer >= 33 && fartStrengthTimer < 66)
        {
            AkSoundEngine.PostEvent("fartMid", this.gameObject);
        }
        else if (fartStrengthTimer >= 66 && fartStrengthTimer < 99)
        {
            AkSoundEngine.PostEvent("fartBig", this.gameObject);
        }
        else
        {
            AkSoundEngine.PostEvent("fartMassive", this.gameObject);
        }

        // set timer to 0
        fartStrengthTimer = 0;
    }

    // Update is called once per frame
    void Update()
    {
        // If it is active
        if(active)
        {
            // increase the timer by more than just the deltatime
            fartStrengthTimer += Time.deltaTime*4;

            // update the text
            FartMeter.fillAmount = fartStrengthTimer / 100f;
            //tm.text = "Fart %: "+((int)fartStrengthTimer).ToString();

            // percentage reaches 100, forces you to fart
            if(fartStrengthTimer >= 100)
            {
                Fart();
            }
        }
        else
        {
            // blank text;
            //tm.text = "";
            FartMeter.fillAmount = 0;

        }

    }
}
