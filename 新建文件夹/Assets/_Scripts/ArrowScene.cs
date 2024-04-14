using Doozy.Runtime.UIManager.Components;
using UnityEngine;
using UnityEngine.SceneManagement;

namespace _Scripts
{
    public class ArrowScene : MonoBehaviour
    {
        public UIButton left;

        public UIButton right;

        public UIButton backStart;

        public string beforeSceneName;

        public string afterSceneName;


        private void Start()
        {
            backStart.onClickEvent.AddListener(() => GameManager.Instance.LoadScene("StartScene"));


            left.onClickEvent.AddListener(() => { SceneManager.LoadScene(beforeSceneName); });

            right.onClickEvent.AddListener(() => { SceneManager.LoadScene(afterSceneName); });
        }
    }
}