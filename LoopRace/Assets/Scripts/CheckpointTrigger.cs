using UnityEngine;

public class CheckpointTrigger : MonoBehaviour
{
    [Header("Checkpoint Settings")]
    public int checkpointIndex = 0; // 0 = checkpoint1, 1 = checkpoint2, etc.
    public string playerTag = "Player";

    [Header("Detection Settings")]
    public float cooldownTime = 2f; // Tiempo antes de poder detectar el mismo checkpoint otra vez

    private gameManager gameManager;
    private float lastTriggerTime = -999f; // Tiempo del último trigger

    void Start()
    {
        Debug.Log($"=== Inicializando Checkpoint {checkpointIndex + 1} ===");

        // Buscar el gameManager en la escena
        gameManager = FindObjectOfType<gameManager>();

        if (gameManager == null)
        {
            Debug.LogError("No se encontró un gameManager en la escena!");
        }
        else
        {
            Debug.Log("GameManager encontrado correctamente");
        }

        // Verificar que este objeto tiene un collider configurado como trigger
        Collider col = GetComponent<Collider>();
        if (col == null)
        {
            Debug.LogError($"Checkpoint {checkpointIndex + 1} no tiene un Collider!");
        }
        else if (!col.isTrigger)
        {
            Debug.LogError($"Checkpoint {checkpointIndex + 1} - El Collider NO está marcado como Trigger! Esto es crítico.");
        }
        else
        {
            Debug.Log($"Checkpoint {checkpointIndex + 1} configurado correctamente: Collider={col.GetType().Name}, isTrigger={col.isTrigger}");
        }

        Debug.Log($"=== Checkpoint {checkpointIndex + 1} listo para detectar tag: '{playerTag}' ===");
    }

    void OnTriggerEnter(Collider other)
    {
        // DEBUG: Registrar CUALQUIER cosa que entre al trigger
        Debug.Log($"*** TRIGGER ACTIVADO *** Checkpoint {checkpointIndex + 1} - Objeto: {other.name}, Tag: '{other.tag}', Padre: {(other.transform.parent ? other.transform.parent.name : "ninguno")}");

        // Verificar cooldown para evitar múltiples detecciones
        if (Time.time - lastTriggerTime < cooldownTime)
        {
            Debug.Log("Trigger ignorado por cooldown");
            return; // Muy pronto desde la última detección
        }

        // Verificar si es el jugador directamente o si es parte del auto (ruedas, etc.)
        bool isPlayer = false;
        string debugInfo = "";

        // Opción 1: El objeto tiene el tag correcto
        if (other.CompareTag(playerTag))
        {
            isPlayer = true;
            debugInfo = $"Objeto directo con tag '{playerTag}'";
        }
        // Opción 2: El objeto padre tiene el tag correcto (para ruedas, etc.)
        else if (other.transform.parent != null && other.transform.parent.CompareTag(playerTag))
        {
            isPlayer = true;
            debugInfo = $"Padre '{other.transform.parent.name}' tiene tag '{playerTag}'";
        }
        // Opción 3: Buscar en los padres más arriba en la jerarquía
        else
        {
            Transform current = other.transform;
            while (current.parent != null)
            {
                current = current.parent;
                if (current.CompareTag(playerTag))
                {
                    isPlayer = true;
                    debugInfo = $"Ancestro '{current.name}' tiene tag '{playerTag}'";
                    break;
                }
            }
        }

        if (isPlayer && gameManager != null)
        {
            lastTriggerTime = Time.time; // Actualizar el tiempo del último trigger
            Debug.Log($"🎯 ¡JUGADOR DETECTADO! Checkpoint {checkpointIndex + 1} - {debugInfo}");
            // Notificar al gameManager que se alcanzó este checkpoint
            gameManager.OnCheckpointReached(checkpointIndex);
        }
        else if (!isPlayer)
        {
            Debug.Log($"❌ Objeto '{other.name}' no es el jugador (tag: '{other.tag}', buscando: '{playerTag}')");
        }
        else if (gameManager == null)
        {
            Debug.LogError("GameManager es null!");
        }
    }
}
