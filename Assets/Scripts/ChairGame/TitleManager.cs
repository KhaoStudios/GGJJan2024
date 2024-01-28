using UnityEngine;

namespace ChairGame
{
    public class TitleManager : MonoBehaviour
    {
        // Start is called before the first frame update
        void Start()
        {
            GameManager.Instance.DisplayInfo("Kick-Off Meeting!");
        }
    }
}
