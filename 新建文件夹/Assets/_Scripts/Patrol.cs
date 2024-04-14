using System.Collections.Generic;
using UnityEngine;

namespace _Scripts
{
    public class Patrol : MonoBehaviour
    {
        public List<Transform> waypoints;

        public float speed;

        private CharacterController controller;

        [SerializeField]
        private int currentWaypoint;

        private void Start()
        {
            controller = GetComponent<CharacterController>();
        }

        private void Update()
        {
            if (controller.isGrounded == false) controller.SimpleMove(new Vector3(0, 0, 1)*Time.deltaTime*speed);
            //controller.SimpleMove(new Vector3(1, 1, 1));
            if (controller.isGrounded)
            {
                transform.LookAt(waypoints[currentWaypoint]);

                var direction = (waypoints[currentWaypoint].position - transform.position).normalized;
                direction.y = transform.position.y;
                controller.SimpleMove(direction * speed * Time.deltaTime);

                if (Vector3.Distance(transform.position, waypoints[currentWaypoint].position) < 3)
                {
                    currentWaypoint++;
                    if (currentWaypoint >= waypoints.Count) currentWaypoint = 0;
                }
            }
        }
    }
}