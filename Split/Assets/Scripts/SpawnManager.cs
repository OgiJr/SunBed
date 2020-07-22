using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpawnManager : MonoBehaviour
{
    public GameObject[] bedPrefab = new GameObject[2];
    bool cooldown = false;
    public CollisionManager colManager;
    public AudioSource click;
    
    void Update()
    {
        if (colManager.touched == true)
        {
            if (Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Ended)
            {
                Ray ray = Camera.main.ScreenPointToRay(Input.GetTouch(0).position);
                Plane plane = new Plane(Vector3.up, transform.position);
                float distance = 9.4f;

                int prefab = Random.Range(0, 2);

                if (plane.Raycast(ray, out distance))
                {
                    Vector3 pos = ray.GetPoint(distance);
                    if (pos.x > -12f && pos.x < 13)
                    {
                        GameObject bedObject;
                        bedObject = Instantiate(bedPrefab[prefab]);
                        bedObject.transform.position = new Vector3(pos.x, 0, 0);
                        click.Play();
                        colManager.touched = false;

                        foreach (GameObject go in GameObject.FindGameObjectsWithTag("Sunbed"))
                        {
                            go.GetComponent<Animator>().enabled = true;

                            for (int i = 0; i < go.transform.childCount; i++)
                            {
                                Destroy(go.transform.GetChild(i).gameObject.GetComponent<Collider>());
                            }

                            go.name = "ForDestroy";

                            Invoke("DestroySunbeds", 1);
                        }
                    }
                }
            }

            if (Input.GetMouseButtonUp(0))
            {
                var v3 = Input.mousePosition;
                v3.z = 9.4f;
                v3 = Camera.main.ScreenToWorldPoint(v3);

                Debug.Log(v3.x);

                if (v3.x > -12f && v3.x < 13)
                {
                    foreach (GameObject go in GameObject.FindGameObjectsWithTag("Sunbed"))
                    {
                        go.GetComponent<Animator>().enabled = true;

                        for(int i = 0; i < go.transform.childCount; i++)
                        {
                            Destroy(go.transform.GetChild(i).gameObject.GetComponent<Collider>());
                        }

                        go.name = "ForDestroy";

                        Invoke("DestroySunbeds", 1);
                    }

                    int prefab = Random.Range(0, 2);

                    GameObject bedObject;
                    bedObject = Instantiate(bedPrefab[prefab]);
                    bedObject.transform.position = new Vector3(v3.x, 0, 0);

                    click.Play();
                    colManager.touched = false;
                }
            }
        }
    }

    private void DestroySunbeds()
    {
        foreach (GameObject go in GameObject.FindGameObjectsWithTag("Sunbed"))
        {
            if (go.name == "ForDestroy")
            {
                Destroy(go);
            }
        }
    }
}
