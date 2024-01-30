using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TrackLanded : MonoBehaviour
{
    PieceManager pieceManager;
    private void Start()
    {
        pieceManager = FindObjectOfType<PieceManager>();
    }

    // Start is called before the first frame update
    bool landed = false;
    private void OnCollisionEnter(Collision collision)
    {
        if(landed == false)
        {
            if (pieceManager != null)
            {
                Instantiate(pieceManager.LandParticles, transform.position, Quaternion.identity);
            }

            if (gameObject.GetComponent<MeshRenderer>().sharedMaterial.name.Contains("Anvil"))
            {
                AkSoundEngine.PostEvent("anvilLand", gameObject);
            }
            else if(gameObject.GetComponent<MeshRenderer>().sharedMaterial.name.Contains("BlobFish"))
            {
                AkSoundEngine.PostEvent("blobFishLand", gameObject);
            }
            else if (gameObject.GetComponent<MeshRenderer>().sharedMaterial.name.Contains("ChatTeethRed"))
            {
                AkSoundEngine.PostEvent("teethLand", gameObject);
            }
            else if (gameObject.GetComponent<MeshRenderer>().sharedMaterial.name.Contains("Duck"))
            {
                AkSoundEngine.PostEvent("duckLand", gameObject);
            }
            else if (gameObject.GetComponent<MeshRenderer>().sharedMaterial.name.Contains("FrisbeeLogo"))
            {
                AkSoundEngine.PostEvent("frisbeeLand", gameObject);
            }
            else if (gameObject.GetComponent<MeshRenderer>().sharedMaterial.name.Contains("Horn-Jack 1"))
            {
                AkSoundEngine.PostEvent("hornLand", gameObject);
            }
            else if (gameObject.GetComponent<MeshRenderer>().sharedMaterial.name.Contains("Horn-Jack"))
            {
                AkSoundEngine.PostEvent("anvilLand", gameObject);
            }
            else if (gameObject.GetComponent<MeshRenderer>().sharedMaterial.name.Contains("Kickball"))
            {
                AkSoundEngine.PostEvent("ballLand", gameObject);
            }
            else if (gameObject.GetComponent<MeshRenderer>().sharedMaterial.name.Contains("PartyHat"))
            {
                AkSoundEngine.PostEvent("partyHatLand", gameObject);
            }
            else if (gameObject.GetComponent<MeshRenderer>().sharedMaterial.name.Contains("LetterBlock"))
            {
                AkSoundEngine.PostEvent("cubeLand", gameObject);
            }
        }
        landed = true;
    }
    public bool GetLanded()
    {
        return landed;
    }
}
