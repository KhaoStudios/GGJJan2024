using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BananaGameAmbientSounds : MonoBehaviour
{
    uint Sound = 0;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (Sound == 0)
        {
           Sound = AkSoundEngine.PostEvent("ambienceStart", this.gameObject);
        }
    }
}
