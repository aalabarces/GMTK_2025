using UnityEngine;

public class ObjetoLluvia : MonoBehaviour
{
    private float tiempoEnSuelo;
    private bool puedeRebotar;
    private bool haColisionado = false;
    private float tiempoColision;

    /// <summary>
    /// Configura el comportamiento del objeto de lluvia
    /// </summary>
    public void ConfigurarObjeto(float tiempo, bool rebote)
    {
        tiempoEnSuelo = tiempo;
        puedeRebotar = rebote;
        haColisionado = false;
    }

    void OnCollisionEnter(Collision collision)
    {
        // Verificar si colisionó con el terreno
        if (collision.gameObject.CompareTag("Terrain") ||
            collision.gameObject.name.ToLower().Contains("terrain") ||
            collision.gameObject.name.ToLower().Contains("ground"))
        {
            if (!haColisionado)
            {
                haColisionado = true;
                tiempoColision = Time.time;

                // Si no puede rebotar, detener el movimiento
                if (!puedeRebotar)
                {
                    Rigidbody rb = GetComponent<Rigidbody>();
                    if (rb != null)
                    {
                        rb.velocity = Vector3.zero;
                        rb.angularVelocity = Vector3.zero;
                        rb.isKinematic = true; // Detener completamente
                    }
                }
            }
        }
    }

    void Update()
    {
        // Verificar si debe desaparecer después del tiempo en suelo
        if (haColisionado && Time.time - tiempoColision >= tiempoEnSuelo)
        {
            // El eventSpawner se encargará de devolver el objeto al pool
            // Aquí solo marcamos que está listo para ser devuelto
            gameObject.SetActive(false);
        }
    }

    void OnEnable()
    {
        // Resetear cuando el objeto se activa desde el pool
        haColisionado = false;
        tiempoColision = 0f;

        // Asegurar que el rigidbody esté activo
        Rigidbody rb = GetComponent<Rigidbody>();
        if (rb != null)
        {
            rb.isKinematic = false;
        }
    }
}
