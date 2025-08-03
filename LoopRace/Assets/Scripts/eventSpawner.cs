using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Reflection;

public class eventSpawner : MonoBehaviour
{
    [Header("Object Pool Reference")]
    public ObjectPool objectPool; // Referencia al ObjectPool
    public GameObject prefabObjeto1; // Prefab alternativo si no hay pool
    public GameObject prefabObjeto2; // Prefab alternativo si no hay pool

    [Header("Rain Event Settings")]
    [Tooltip("Altura desde donde caen los objetos")]
    public float alturaSpawn = 50f;

    [Tooltip("Coordenadas X del área de spawn")]
    public Vector2 rangoX = new Vector2(-20f, 20f);

    [Tooltip("Coordenadas Z del área de spawn")]
    public Vector2 rangoZ = new Vector2(-20f, 20f);

    [Tooltip("Velocidad de caída de los objetos")]
    public float velocidadCaida = 10f;

    [Tooltip("Tiempo que permanecen los objetos en el suelo antes de desaparecer")]
    public float tiempoEnSuelo = 5f;

    [Header("Rain Intensity")]
    [Tooltip("Cantidad de objetos por segundo")]
    public float objetosPorSegundo = 5f;

    [Tooltip("Duración total del evento en segundos")]
    public float duracionEvento = 10f;

    [Tooltip("Usar objeto 1 (true) o objeto 2 (false) del pool")]
    public bool usarObjeto1 = true;

    [Header("Physics Settings")]
    [Tooltip("¿Los objetos rebotan al tocar el suelo?")]
    public bool objetosRebotan = false;

    [Tooltip("Fuerza de rebote si está activado")]
    public float fuerzaRebote = 5f;

    [Header("Debug")]
    public bool mostrarGizmos = true;

    // Variables privadas
    private bool eventoActivo = false;
    private Coroutine lluviaCoroutine;

    void Start()
    {
        // Buscar ObjectPool si no está asignado
        if (objectPool == null)
        {
            objectPool = FindObjectOfType<ObjectPool>();
            if (objectPool == null)
            {
                Debug.LogError("No se encontró ObjectPool en la escena!");
            }
        }
    }

    void Update()
    {
        // Aquí puedes agregar lógica para activar eventos según condiciones
        // Por ejemplo, basado en vueltas completadas desde gameManager
    }

    /// <summary>
    /// Inicia el evento de lluvia de instancias
    /// </summary>
    public void eventoLluviaDeInstancias()
    {
        if (eventoActivo)
        {
            Debug.LogWarning("El evento de lluvia ya está activo!");
            return;
        }

        if (objectPool == null)
        {
            Debug.LogError("ObjectPool no está asignado!");
            return;
        }

        Debug.Log($"Iniciando lluvia de objetos - Duración: {duracionEvento}s, Intensidad: {objetosPorSegundo}/s");

        // Iniciar corrutina de lluvia
        lluviaCoroutine = StartCoroutine(LluviaCoroutine());
    }

    /// <summary>
    /// Detiene el evento de lluvia si está activo
    /// </summary>
    public void DetenerLluvia()
    {
        if (lluviaCoroutine != null)
        {
            StopCoroutine(lluviaCoroutine);
            lluviaCoroutine = null;
        }
        eventoActivo = false;
        Debug.Log("Lluvia de objetos detenida");
    }

    /// <summary>
    /// Corrutina que maneja la lluvia de objetos
    /// </summary>
    IEnumerator LluviaCoroutine()
    {
        eventoActivo = true;
        float tiempoTranscurrido = 0f;
        float intervaloSpawn = 1f / objetosPorSegundo;
        float proximoSpawn = 0f;

        while (tiempoTranscurrido < duracionEvento)
        {
            // Verificar si es momento de crear un nuevo objeto
            if (tiempoTranscurrido >= proximoSpawn)
            {
                CrearObjetoLluvia();
                proximoSpawn += intervaloSpawn;
            }

            tiempoTranscurrido += Time.deltaTime;
            yield return null;
        }

        eventoActivo = false;
        Debug.Log("Evento de lluvia completado");
    }

    /// <summary>
    /// Crea un objeto individual de la lluvia
    /// </summary>
    void CrearObjetoLluvia()
    {
        // Generar posición aleatoria en el área definida
        float x = Random.Range(rangoX.x, rangoX.y);
        float z = Random.Range(rangoZ.x, rangoZ.y);
        Vector3 posicionSpawn = new Vector3(x, alturaSpawn, z);

        GameObject objeto = null;

        // Intentar obtener objeto del pool primero
        if (objectPool != null)
        {
            // Usar reflexión para obtener objetos del pool de manera genérica
            try
            {
                var method = objectPool.GetType().GetMethod(usarObjeto1 ? "GetObject1" : "GetObject2");
                if (method != null)
                {
                    objeto = (GameObject)method.Invoke(objectPool, null);
                }
            }
            catch (System.Exception e)
            {
                Debug.LogWarning($"No se pudo obtener objeto del pool: {e.Message}");
            }
        }

        // Si no hay pool o falló, crear objeto directamente
        if (objeto == null)
        {
            GameObject prefab = usarObjeto1 ? prefabObjeto1 : prefabObjeto2;
            if (prefab != null)
            {
                objeto = Instantiate(prefab);
            }
            else
            {
                Debug.LogError("No hay prefab asignado y el ObjectPool no funcionó!");
                return;
            }
        }

        if (objeto != null)
        {
            // Posicionar el objeto
            objeto.transform.position = posicionSpawn;
            objeto.transform.rotation = Random.rotation; // Rotación aleatoria
            objeto.SetActive(true); // Asegurar que esté activo

            // Configurar física del objeto
            ConfigurarFisicaObjeto(objeto);

            // Programar la destrucción del objeto
            StartCoroutine(DestruirObjetoDespuesDeTiempo(objeto, tiempoEnSuelo + (alturaSpawn / velocidadCaida)));
        }
    }

    /// <summary>
    /// Configura la física del objeto que cae
    /// </summary>
    void ConfigurarFisicaObjeto(GameObject objeto)
    {
        Rigidbody rb = objeto.GetComponent<Rigidbody>();
        if (rb == null)
        {
            rb = objeto.AddComponent<Rigidbody>();
        }

        // Aplicar velocidad de caída
        rb.velocity = Vector3.down * velocidadCaida;

        // Configurar rebote si está activado
        if (objetosRebotan)
        {
            // Buscar o agregar collider
            Collider col = objeto.GetComponent<Collider>();
            if (col == null)
            {
                col = objeto.AddComponent<BoxCollider>();
            }

            // Configurar material físico para rebote
            PhysicMaterial bouncyMaterial = new PhysicMaterial("BouncyMaterial");
            bouncyMaterial.bounciness = fuerzaRebote / 10f; // Normalizar
            bouncyMaterial.dynamicFriction = 0.3f;
            bouncyMaterial.staticFriction = 0.3f;
            col.material = bouncyMaterial;
        }

        // Agregar componente para manejar colisión con terreno usando reflexión
        try
        {
            var objetoLluviaType = System.Type.GetType("ObjetoLluvia");
            if (objetoLluviaType != null)
            {
                var objetoScript = objeto.GetComponent(objetoLluviaType);
                if (objetoScript == null)
                {
                    objetoScript = objeto.AddComponent(objetoLluviaType);
                }

                // Configurar usando reflexión
                MethodInfo configMethod = objetoLluviaType.GetMethod("ConfigurarObjeto");
                if (configMethod != null)
                {
                    configMethod.Invoke(objetoScript, new object[] { tiempoEnSuelo, objetosRebotan });
                }
            }
        }
        catch (System.Exception e)
        {
            Debug.LogWarning($"No se pudo configurar ObjetoLluvia: {e.Message}");
        }
    }

    /// <summary>
    /// Destruye el objeto después del tiempo especificado
    /// </summary>
    IEnumerator DestruirObjetoDespuesDeTiempo(GameObject objeto, float tiempo)
    {
        yield return new WaitForSeconds(tiempo);

        if (objeto != null)
        {
            // Intentar devolver al pool usando reflexión
            bool devueltoAlPool = false;

            if (objectPool != null)
            {
                try
                {
                    string methodName = usarObjeto1 ? "ReturnObject1" : "ReturnObject2";
                    MethodInfo method = objectPool.GetType().GetMethod(methodName);
                    if (method != null)
                    {
                        method.Invoke(objectPool, new object[] { objeto });
                        devueltoAlPool = true;
                    }
                }
                catch (System.Exception e)
                {
                    Debug.LogWarning($"No se pudo devolver objeto al pool: {e.Message}");
                }
            }

            // Si no se pudo devolver al pool, destruir el objeto
            if (!devueltoAlPool)
            {
                Destroy(objeto);
            }
        }
    }

    /// <summary>
    /// Dibuja gizmos para visualizar el área de spawn
    /// </summary>
    void OnDrawGizmos()
    {
        if (!mostrarGizmos) return;

        // Área de spawn
        Gizmos.color = Color.yellow;
        Vector3 centro = new Vector3((rangoX.x + rangoX.y) / 2f, alturaSpawn, (rangoZ.x + rangoZ.y) / 2f);
        Vector3 tamaño = new Vector3(rangoX.y - rangoX.x, 1f, rangoZ.y - rangoZ.x);
        Gizmos.DrawWireCube(centro, tamaño);

        // Altura de spawn
        Gizmos.color = Color.red;
        Gizmos.DrawLine(centro, centro + Vector3.down * alturaSpawn);
    }
}
