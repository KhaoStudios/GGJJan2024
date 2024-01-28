using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CarSpawner : MonoBehaviour
{
    public BoxCollider SpawnLocation;
    public Car CarPrefab;
    public float CarSpawnRate; // Car spawns every x seconds
    public float CarLifeTime; // How long does a car live?

    float nextSpawnTime;

    // Start is called before the first frame update
    void Start()
    {
        SetNextCarSpawnTime();
    }

    void SetNextCarSpawnTime()
    {
        nextSpawnTime = Time.time + CarSpawnRate;
    }

    // Update is called once per frame
    void Update()
    {
        if (Time.time > nextSpawnTime)
        {
            SpawnCar();
            SetNextCarSpawnTime();
        }
    }

    void SpawnCar()
    {
        // Get a location inside the box collider
        Bounds bounds = SpawnLocation.bounds;
        Vector3 min = bounds.min;
        Vector3 max = bounds.max;

        Vector3 spawnPos = Vector3.Lerp(min, max, Random.Range(0f, 1f));

        Car car = Instantiate(CarPrefab, this.transform);
        car.transform.position = spawnPos;
        car.transform.rotation = Quaternion.LookRotation(Vector3.left);

        car.DestroyAfterSeconds(CarLifeTime);
    }
}
