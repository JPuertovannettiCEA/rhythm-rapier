using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Spawner : MonoBehaviour
{

    public GameObject[] Cubes;
    public Transform[] Points;
    public float Beat = (60/130);
    private float _timer;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if(_timer>Beat)
        {
            GameObject cube = Instantiate(Cubes[Random.Range(0,2)], Points[Random.Range(0,4)]);
            cube.transform.localPosition = Vector3.zero;
            cube.transform.Rotate(transform.forward, 90 * Random.Range(0,4));
            _timer -= Beat;

        }

        _timer += Time.deltaTime;
    }
}
