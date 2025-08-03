using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Reflection;

public class CameraFollow : MonoBehaviour
{
	public Transform carTransform;
	[Range(1, 10)]
	public float followSpeed = 2;

	[Header("Camera View Settings")]
	public CameraView cameraView = CameraView.TopDown;

	// Configuraciones para vista trasera 3/4
	[Header("Third Person Settings")]
	public Vector3 thirdPersonOffset = new Vector3(0, 5, -8);
	public float lookAtHeight = 1.5f;

	[Header("Speed-Based Height Settings")]
	public float baseHeight = 10f; // Altura base de la cámara
	public float heightMultiplier = 0.1f; // Multiplicador de altura por velocidad
	public float maxExtraHeight = 15f; // Altura máxima adicional
	public float heightSmoothSpeed = 2f; // Velocidad de suavizado para cambios de altura

	[Header("Predictive Camera Settings")]
	public float forwardOffset = 5f; // Distancia base adelante del auto
	public float speedForwardMultiplier = 0.1f; // Multiplicador adicional por velocidad
	public float maxForwardDistance = 15f; // Distancia máxima adelante
	public float offsetSmoothSpeed = 3f; // Velocidad de suavizado para cambios de offset

	private Vector3 offset;
	private float currentCarSpeed = 0f;
	private float targetCameraHeight;
	private float currentCameraHeight;
	private Vector3 currentForwardOffset = Vector3.zero;
	private Vector3 targetForwardOffset = Vector3.zero; public enum CameraView
	{
		TopDown,
		ThirdPerson
	}

	void Start()
	{
		// Configurar offset inicial basado en el tipo de vista
		switch (cameraView)
		{
			case CameraView.TopDown:
				offset = transform.position - carTransform.position;
				currentCameraHeight = baseHeight;
				targetCameraHeight = baseHeight;
				break;
			case CameraView.ThirdPerson:
				offset = thirdPersonOffset;
				currentCameraHeight = thirdPersonOffset.y;
				targetCameraHeight = thirdPersonOffset.y;
				break;
		}
	}

	void LateUpdate()
	{
		// Obtener la velocidad del auto
		UpdateCarSpeed();

		// Calcular altura objetivo basada en velocidad
		CalculateTargetHeight();

		// Calcular offset predictivo basado en dirección y velocidad
		CalculatePredictiveOffset();

		// Suavizar la altura de la cámara
		SmoothCameraHeight();

		// Suavizar el offset predictivo
		SmoothPredictiveOffset();

		// Actualizar posición de cámara según el tipo
		switch (cameraView)
		{
			case CameraView.TopDown:
				UpdateTopDownCamera();
				break;
			case CameraView.ThirdPerson:
				UpdateThirdPersonCamera();
				break;
		}
	}

	void UpdateCarSpeed()
	{
		if (carTransform != null)
		{
			// Intentar obtener la velocidad del controlador del auto
			bool speedFound = false;

			// Buscar en todos los componentes MonoBehaviour del auto
			MonoBehaviour[] components = carTransform.GetComponents<MonoBehaviour>();
			foreach (MonoBehaviour component in components)
			{
				if (component == null) continue;

				// Buscar la variable carSpeed
				FieldInfo speedField = component.GetType().GetField("carSpeed");
				if (speedField != null && speedField.FieldType == typeof(float))
				{
					currentCarSpeed = (float)speedField.GetValue(component);
					speedFound = true;
					break;
				}

				// También buscar variantes comunes
				FieldInfo[] speedVariants = {
					component.GetType().GetField("speed"),
					component.GetType().GetField("currentSpeed"),
					component.GetType().GetField("velocity")
				};

				foreach (FieldInfo field in speedVariants)
				{
					if (field != null && field.FieldType == typeof(float))
					{
						currentCarSpeed = (float)field.GetValue(component);
						speedFound = true;
						break;
					}
				}

				if (speedFound) break;
			}

			// Si no se encuentra carSpeed, usar Rigidbody como fallback
			if (!speedFound)
			{
				Rigidbody rb = carTransform.GetComponent<Rigidbody>();
				if (rb != null)
				{
					// Velocidad en m/s, convertir a km/h para consistencia
					currentCarSpeed = rb.velocity.magnitude * 3.6f;
				}
			}
		}
	}

	void CalculateTargetHeight()
	{
		// Calcular altura adicional basada en velocidad
		float extraHeight = currentCarSpeed * heightMultiplier;
		extraHeight = Mathf.Clamp(extraHeight, 0f, maxExtraHeight);

		// Altura objetivo
		targetCameraHeight = baseHeight + extraHeight;
	}

	void CalculatePredictiveOffset()
	{
		if (carTransform != null)
		{
			// Obtener la dirección forward del auto
			Vector3 carForward = carTransform.forward;

			// Calcular distancia adelante basada en velocidad
			float speedBasedDistance = currentCarSpeed * speedForwardMultiplier;
			float totalForwardDistance = forwardOffset + speedBasedDistance;
			totalForwardDistance = Mathf.Clamp(totalForwardDistance, 0f, maxForwardDistance);

			// Calcular offset objetivo adelante del auto
			targetForwardOffset = carForward * totalForwardDistance;
		}
	}

	void SmoothCameraHeight()
	{
		// Suavizar cambios de altura para evitar movimientos bruscos
		currentCameraHeight = Mathf.Lerp(currentCameraHeight, targetCameraHeight, heightSmoothSpeed * Time.deltaTime);
	}

	void SmoothPredictiveOffset()
	{
		// Suavizar cambios de offset para evitar movimientos bruscos al doblar o chocar
		currentForwardOffset = Vector3.Lerp(currentForwardOffset, targetForwardOffset, offsetSmoothSpeed * Time.deltaTime);
	}

	void UpdateTopDownCamera()
	{
		// Combinar offset original con offset predictivo para vista aérea
		Vector3 combinedOffset = new Vector3(offset.x + currentForwardOffset.x, currentCameraHeight, offset.z + currentForwardOffset.z);
		Vector3 targetPosition = carTransform.position + combinedOffset;

		transform.position = Vector3.Lerp(transform.position, targetPosition, followSpeed * Time.deltaTime);
		transform.rotation = Quaternion.Euler(90f, 0f, 90f);
	}

	void UpdateThirdPersonCamera()
	{
		// Para vista trasera, el offset predictivo ayuda a anticipar movimientos
		Vector3 baseOffset = new Vector3(offset.x, currentCameraHeight, offset.z);

		// Agregar offset predictivo para que la cámara anticipe hacia dónde va el auto
		Vector3 predictivePosition = carTransform.position + currentForwardOffset;

		// Posición de la cámara relativa al punto predictivo
		Vector3 desiredPosition = predictivePosition + carTransform.TransformDirection(baseOffset);
		transform.position = Vector3.Lerp(transform.position, desiredPosition, followSpeed * Time.deltaTime);

		// Mirar hacia el punto predictivo en lugar del auto directamente
		Vector3 lookAtTarget = predictivePosition + Vector3.up * lookAtHeight;
		transform.LookAt(lookAtTarget);
	}
}
