using System.Collections.Generic;
using Sirenix.OdinInspector;
using UnityEngine;

namespace _Scripts
{
    public class AudioManager : SerializedMonoBehaviour
    {
        private static AudioManager _instance;
        
        public static AudioManager Instance
        {
            get
            {
                if (_instance == null)
                {
                    _instance = FindObjectOfType<AudioManager>();
                }

                return _instance;
            }
        }
        
        private AudioSource _audioSource;
        
        public Dictionary<string,AudioClip> AudioClips=new Dictionary<string, AudioClip>();
        
        private void Awake()
        {
            _audioSource = GetComponent<AudioSource>();
        }

        public void Play()
        {
            _audioSource.Play();
        }
        
        public void SetAudioClip(string clipName)
        {
            _audioSource.clip = AudioClips[clipName];
        }
    }
}