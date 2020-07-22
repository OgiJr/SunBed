using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Score : MonoBehaviour
{
    public int score;
    public int highScore;

    public Text highScoreText;
    public Text scoreText;

    private void Start()
    {
        highScore = PlayerPrefs.GetInt("HighScore");
    }

    void Update()
    {
        if(highScore < score)
        {
            highScore = score;
        }

        scoreText.text = score.ToString();
        highScoreText.text = highScore.ToString();
    }
}
