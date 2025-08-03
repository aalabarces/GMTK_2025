using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class menu : MonoBehaviour
{
    [Header("UI References")]
    public Button startGameButton;
    public Button exitGameButton;

    [Header("Game Settings")]
    public string gameSceneName = "GameScene"; // Nombre de la escena del juego

    void Start()
    {
        // Configurar los botones si están asignados
        if (startGameButton != null)
        {
            startGameButton.onClick.AddListener(StartGame);
        }
        else
        {
            Debug.LogWarning("Start Game Button no está asignado en el Menu script!");
        }

        if (exitGameButton != null)
        {
            exitGameButton.onClick.AddListener(ExitGame);
        }
        else
        {
            Debug.LogWarning("Exit Game Button no está asignado en el Menu script!");
        }

        // Asegurar que el cursor esté visible en el menú
        Cursor.lockState = CursorLockMode.None;
        Cursor.visible = true;
    }

    void Update()
    {
        // Permitir salir del juego con la tecla Escape
        if (Input.GetKeyDown(KeyCode.Escape))
        {
            ExitGame();
        }
    }

    /// <summary>
    /// Inicia el juego cargando la escena principal
    /// </summary>
    public void StartGame()
    {
        Debug.Log("Iniciando juego...");

        // Cargar la escena del juego
        if (!string.IsNullOrEmpty(gameSceneName))
        {
            SceneManager.LoadScene(gameSceneName);
        }
        else
        {
            // Si no se especifica nombre, cargar la siguiente escena en Build Settings
            int currentSceneIndex = SceneManager.GetActiveScene().buildIndex;
            SceneManager.LoadScene(currentSceneIndex + 1);
        }
    }

    /// <summary>
    /// Sale del juego
    /// </summary>
    public void ExitGame()
    {
        Debug.Log("Saliendo del juego...");

#if UNITY_EDITOR
        // En el editor, detener el modo de juego
        UnityEditor.EditorApplication.isPlaying = false;
#else
            // En build, cerrar la aplicación
            Application.Quit();
#endif
    }

    /// <summary>
    /// Método alternativo para cargar escena por índice
    /// </summary>
    public void StartGameByIndex(int sceneIndex)
    {
        Debug.Log($"Cargando escena con índice: {sceneIndex}");
        SceneManager.LoadScene(sceneIndex);
    }

    /// <summary>
    /// Recargar la escena actual (útil para restart)
    /// </summary>
    public void RestartCurrentScene()
    {
        Debug.Log("Reiniciando escena actual...");
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
    }
}
