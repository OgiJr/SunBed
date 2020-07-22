using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RandomStart : MonoBehaviour
{
    public GameObject startSunbed;
    public Transform camera;

    void Start()
    {
        float randomXOffset = Random.Range(-1, 1f);
        int randomX = Random.Range(-9, 9);
        startSunbed.transform.position = new Vector3(randomX + randomXOffset, 0, 0);
        this.transform.position = new Vector3(randomX, 3.5f, 0);
        camera.transform.position = this.transform.position + new Vector3(0, 2, -10);
    }
}
