using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class ScoreManager : MonoBehaviour
{
    [SerializeField]
    private TMP_Text score;

    static public int _score = 0;

    // Start is called before the first frame update
    void Start()
    {
        score.text = "Score: " + _score;
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
