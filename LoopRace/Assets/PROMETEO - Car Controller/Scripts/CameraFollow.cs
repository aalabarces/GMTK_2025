using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraFollow : MonoBehaviour
{
	public Transform carTransform;
	[Range(1, 10)]
	public float followSpeed = 2;
	private Vector3 offset;

	void Start()
	{
		offset = transform.position - carTransform.position;
	}

	void LateUpdate()
	{
		Vector3 targetPosition = carTransform.position + offset;

		// Solo mueve en X e Y (mantiene la altura aérea)
		transform.position = Vector3.Lerp(transform.position, targetPosition, followSpeed * Time.deltaTime);

		// Rotación fija desde arriba (vista aérea)
		transform.rotation = Quaternion.Euler(90f, 0f, 0f);
	}
}
