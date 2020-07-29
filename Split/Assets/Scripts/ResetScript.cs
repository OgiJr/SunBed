using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.Advertisements;

public class ResetScript : MonoBehaviour
{
    public Score score;
    bool initialized = false;

    string id = "3723360";

    private void Start()
    {
        Advertisement.Initialize(id);
    }

    void Update()
    {
        if(initialized == false)
        {
            Advertisement.Initialize(id);
            initialized = true;
        }

        if (Input.touchCount > 0 || Input.GetMouseButton(0))
        {
            PlayerPrefs.SetInt("HighScore", score.highScore);
            if(score.score > 850)
            {
                Advertisement.Show();
            }

            SceneManager.LoadScene(0);
        }
    }
}
