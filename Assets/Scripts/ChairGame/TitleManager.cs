using UnityEngine;

namespace ChairGame
{
    public class TitleManager : MonoBehaviour
    {
        public string TitleText;
        
        // Start is called before the first frame update
        void Start()
        {
            GameManager.Instance.DisplayInfo(TitleText);
        }
    }
}
