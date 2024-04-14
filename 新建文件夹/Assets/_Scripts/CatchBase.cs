using System;
using Doozy.Runtime.UIManager.Containers;
using Opsive.Shared.Input;
using Sirenix.OdinInspector;
using UnityEngine;
using UnityEngine.Serialization;

namespace _Scripts
{
    public class CatchBase : SerializedMonoBehaviour
    {
        [FormerlySerializedAs("ui")] public GameObject hint;
        public int catchCount;
        public int maxCount;
        public UIContainer uiContainer;
        public UnityInput input;
        [SerializeField]
        protected string AudioName;
        
        public Progress progress;

        private void Start()
        {
            progress.max.text = $"/ {maxCount}";
            
            progress.current.text = $"{catchCount}";
        }

        protected int CatchCount
        {
            get=> catchCount;
            set
            {
                if (value >= maxCount)
                {
                    AudioManager.Instance.SetAudioClip("congratulations");
                    AudioManager.Instance.Play();
                    uiContainer.Show();
                    Debug.Log("show");
                    input.DisableCursor = false;
                }
                catchCount = value;
                progress.current.text = $"{catchCount}";
            }
        }

        private void OnTriggerEnter(Collider other)
        {
            if (other.gameObject.CompareTag("Sheep")) hint.SetActive(true);
        }

        private void OnTriggerExit(Collider other)
        {
            if (other.gameObject.CompareTag("Sheep")) hint.SetActive(false);
        }

        private void OnTriggerStay(Collider other)
        {
            if (other.gameObject.CompareTag("Sheep"))
                if (Input.GetKey(KeyCode.F))
                {
                    AudioManager.Instance.SetAudioClip(AudioName);
                    hint.SetActive(false);
                    other.gameObject.SetActive(false);
                    AudioManager.Instance.Play();
                    CatchCount++;
                }
        }
    }
}