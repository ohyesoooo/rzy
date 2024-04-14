using Doozy.Runtime.UIManager.Containers;
using UnityEngine;

namespace _Scripts
{
    public class CatchFish : MonoBehaviour
    {
        public GameObject hint;

        public UIContainer uiContainer;
        
        public FishingController fishingController;

        public int fishCount;

        public int maxCount;
        
        [SerializeField]
        protected string AudioName;
        
        public Progress progress;
        
        private void Start()
        {
            fishingController.onGetFish += FishPP;
            
            AudioManager.Instance.SetAudioClip(AudioName);

            progress.max.text = $"/ {maxCount}";
            
            progress.current.text = $"{fishCount}";
        }

        private void FishPP()
        {
            AudioManager.Instance.Play();
            fishCount++;
            progress.current.text = $"{fishCount}";
            if (fishCount >= maxCount)
            {
                AudioManager.Instance.SetAudioClip("congratulations");
                AudioManager.Instance.Play();
                uiContainer.Show();
            }
                
        }
    }
}