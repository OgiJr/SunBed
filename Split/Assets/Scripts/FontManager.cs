using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class FontManager : MonoBehaviour
{
    public Text highScore;

    void Update()
    {
      this.gameObject.GetComponent<Text>().resizeTextMaxSize = highScore.fontSize;
    }
}
