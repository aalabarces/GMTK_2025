using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using System.Reflection;
using UnityEngine.UI;

public class gameManager : MonoBehaviour
{
    [Header("Checkpoint System")]
    public Collider[] checkpoints = new Collider[4]; // check1, check2, check3, check4
    public string playerTag = "Player"; // Tag del jugador (Prometheus)

    [Header("Race Progress")]
    public int completedLaps = 0;
    public int currentCheckpoint = 0; // Próximo checkpoint esperado (0-3)
    public bool[] checkpointsPassed = new bool[4]; // Track de checkpoints pasados en la vuelta actual

    [Header("Event Spawner")]
    public GameObject eventSpawner; // Referencia al objeto que maneja los eventos de la carrera

    [Header("UI References")]
    public GameObject speedText; // Referencia al texto de velocidad
    public GameObject vueltasText; // Referencia al texto de vueltas
    public GameObject imgFillRound; // Referencia al objeto ImgFillRound

    [Header("Player References")]
    public GameObject playerCar; // Referencia al auto del jugador

    [Header("Speed Settings")]
    public float maxSpeedForGauge = 100f; // Velocidad máxima para el gauge (para normalizar)
    public string speedUnit = "km/h"; // Unidad de velocidad a mostrar

    [Header("Debug Info")]
    public bool showDebugInfo = true;

    // Referencias privadas
    private ImgsFillDynamic fillDynamicScript;
    private float currentPlayerSpeed = 0f;

    void Start()
    {
        // Inicializar el sistema
        ResetLap();

        // Inicializar UI
        InitializeUI();

        // Inicializar referencias del jugador
        InitializePlayerReferences();

        if (showDebugInfo)
        {
            Debug.Log("Checkpoint system initialized. Total checkpoints: " + checkpoints.Length);
        }
    }

    void InitializeUI()
    {
        // Buscar el script ImgsFillDynamic en el objeto ImgFillRound
        if (imgFillRound != null)
        {
            fillDynamicScript = imgFillRound.GetComponent<ImgsFillDynamic>();
            if (fillDynamicScript == null)
            {
                Debug.LogWarning("No se encontró el script ImgsFillDynamic en ImgFillRound!");
            }
            else
            {
                Debug.Log("ImgsFillDynamic encontrado y configurado");
            }
        }
        else
        {
            Debug.LogWarning("ImgFillRound no está asignado en el GameManager!");
        }

        // Verificar que el texto esté asignado
        if (speedText == null)
        {
            Debug.LogWarning("Speed Text no está asignado en el GameManager!");
        }
    }

    void InitializePlayerReferences()
    {
        // Si no se asignó manualmente, buscar el auto del jugador
        if (playerCar == null)
        {
            GameObject foundPlayer = GameObject.FindGameObjectWithTag(playerTag);
            if (foundPlayer != null)
            {
                playerCar = foundPlayer;
                Debug.Log($"Auto del jugador encontrado automáticamente: {playerCar.name}");
            }
            else
            {
                Debug.LogWarning($"No se encontró ningún objeto con tag '{playerTag}'!");
            }
        }
    }

    public void OnCheckpointReached(int checkpointIndex)
    {
        if (showDebugInfo)
        {
            Debug.Log($"Player reached checkpoint {checkpointIndex + 1}");
        }

        // Marcar este checkpoint como pasado
        checkpointsPassed[checkpointIndex] = true;

        // Verificar si es el checkpoint 1 (índice 0) y ya pasamos por todos
        if (checkpointIndex == 0 && HasPassedAllCheckpoints())
        {
            CompleteLap();
        }
    }

    bool HasPassedAllCheckpoints()
    {
        // Verificar que hayamos pasado por todos los checkpoints
        for (int i = 0; i < checkpointsPassed.Length; i++)
        {
            if (!checkpointsPassed[i])
            {
                return false;
            }
        }
        return true;
    }

    void CompleteLap()
    {
        completedLaps++;

        if (completedLaps == 2)
        {
            eventSpawner spawner = FindObjectOfType<eventSpawner>();
            if (spawner != null)
            {
                spawner.eventoLluviaDeInstancias();
            }
        }

        vueltasText.GetComponent<TextMeshProUGUI>().text = $"Vueltas: {completedLaps}";

        if (showDebugInfo)
        {
            Debug.Log($"¡Vuelta completada! Total de vueltas: {completedLaps}");
        }

        // Resetear para la próxima vuelta
        ResetLap();

        // Aquí puedes añadir eventos para cuando se complete una vuelta
        OnLapCompleted();
    }

    void ResetLap()
    {
        // Resetear el tracking de checkpoints para la nueva vuelta
        for (int i = 0; i < checkpointsPassed.Length; i++)
        {
            checkpointsPassed[i] = false;
        }
        checkpointsPassed[0] = true; // Marcar el primer checkpoint como pasado para iniciar la vuelta
        currentCheckpoint = 1;
    }

    void OnLapCompleted()
    {
        // Evento que se ejecuta cuando se completa una vuelta
        // Aquí puedes añadir lógica adicional como:
        // - Actualizar UI
        // - Guardar tiempos
        // - Efectos de sonido
        // - Etc.

        Debug.Log("¡Nueva vuelta iniciada!");
    }

    // Método para obtener información del progreso (útil para UI)
    public float GetLapProgress()
    {
        int passedCheckpoints = 0;
        for (int i = 0; i < checkpointsPassed.Length; i++)
        {
            if (checkpointsPassed[i]) passedCheckpoints++;
        }
        return (float)passedCheckpoints / checkpointsPassed.Length;
    }

    void Update()
    {
        // Actualizar velocidad del jugador y UI
        UpdatePlayerSpeed();
        UpdateSpeedUI();
    }

    void UpdatePlayerSpeed()
    {
        if (playerCar != null)
        {
            // Intentar obtener la velocidad del auto de diferentes formas
            bool speedFound = false;

            // Opción 1: Buscar en todos los componentes MonoBehaviour del auto
            MonoBehaviour[] components = playerCar.GetComponents<MonoBehaviour>();
            foreach (MonoBehaviour component in components)
            {
                if (component == null) continue;

                // Buscar la variable carSpeed
                FieldInfo speedField = component.GetType().GetField("carSpeed");
                if (speedField != null && speedField.FieldType == typeof(float))
                {
                    currentPlayerSpeed = (float)speedField.GetValue(component);
                    speedFound = true;
                    if (showDebugInfo && Time.frameCount % 60 == 0) // Log cada segundo aprox.
                    {
                        // Debug.Log($"Velocidad obtenida de {component.GetType().Name}: {currentPlayerSpeed}");
                    }
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
                        currentPlayerSpeed = (float)field.GetValue(component);
                        speedFound = true;
                        if (showDebugInfo && Time.frameCount % 60 == 0)
                        {
                            // Debug.Log($"Velocidad obtenida de {component.GetType().Name}.{field.Name}: {currentPlayerSpeed}");
                        }
                        break;
                    }
                }

                if (speedFound) break;
            }

            // Opción 2: Si no se encuentra carSpeed, usar Rigidbody como fallback
            if (!speedFound)
            {
                Rigidbody rb = playerCar.GetComponent<Rigidbody>();
                if (rb != null)
                {
                    // Velocidad en m/s, convertir a km/h
                    currentPlayerSpeed = rb.velocity.magnitude * 3.6f;

                    if (showDebugInfo && Time.frameCount % 60 == 0)
                    {
                        // Debug.Log($"Velocidad obtenida de Rigidbody: {currentPlayerSpeed} km/h");
                    }
                }
            }
        }
    }

    void UpdateSpeedUI()
    {
        // Actualizar el texto de velocidad
        if (speedText != null)
        {
            speedText.GetComponent<Text>().text = $"{currentPlayerSpeed:F0} {speedUnit}";
        }

        // Actualizar el gauge (normalizar la velocidad entre 0 y 1)
        if (fillDynamicScript != null)
        {
            float normalizedSpeed = currentPlayerSpeed / maxSpeedForGauge;
            normalizedSpeed = Mathf.Clamp01(normalizedSpeed); // Asegurar que esté entre 0 y 1

            fillDynamicScript.SetValue(normalizedSpeed);
        }
    }
}
