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

    public GameObject bonus4;
    public GameObject bonus5;
    public GameObject wow;
    public Transform player;

    public AudioSource seagull;

    public GameObject ptp;
    public GameObject tfr;

    bool spawned = false;

    int goalA = 1000;
    int goalB = 500;

    bool spawnable = true;
    bool played = false;

    private void Start()
    {
        highScore = PlayerPrefs.GetInt("HighScore");
    }

    void Update()
    {
        if (highScore < score)
        {
            highScore = score;
        }

        scoreText.text = score.ToString();
        highScoreText.text = "Top: " + highScore.ToString();

        if (player.position.y > 8 && played == false)
        {
            played = true;
            seagull.Play();
        }
        else if (player.position.y < 8)
        {
            played = false;
        }

        if (player.position.y > 8)
        {
            score++;
        }

        if (tfr.activeSelf != true && ptp.activeSelf == false && GameObject.Find("Bonus4(Clone)") == null && GameObject.Find("Bonus5(Clone)") == null && player.position.y > 8)
        {
            if (spawned == false)
            {
                spawnable = false;
                GameObject bonus = Instantiate(wow);
                bonus.transform.parent = GameObject.Find("Canvas").transform;
                spawned = true;
            }
        }
        else if (score > goalA && ptp.activeSelf == false && GameObject.Find("Bonus4(Clone)") == null && GameObject.Find("Bonus5(Clone)") == null && tfr.activeSelf == false && GameObject.Find("Wow(Clone)") == null)
        {
            goalA += 1000;
            score += 30;
            GameObject bonus = Instantiate(bonus5);
            bonus.transform.parent = GameObject.Find("Canvas").transform;
            spawned = false;
        }
        else if (score > goalB && ptp.activeSelf == false && GameObject.Find("Bonus4(Clone)") == null && GameObject.Find("Bonus5(Clone)") == null && tfr.activeSelf == false && GameObject.Find("Wow(Clone)") == null)
        {
            goalB += 500;
            score += 10;
            GameObject bonus = Instantiate(bonus4);
            bonus.transform.parent = GameObject.Find("Canvas").transform;
            spawned = false;
        }
        else
        {
            spawned = false;
        }
    }
}