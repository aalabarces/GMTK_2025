using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class soundManager : MonoBehaviour
{

    [Header("Sound Settings")]
    public AudioClip[] soundEffects; // Array de efectos de sonido
    public AudioSource audioSource; // Fuente de audio para reproducir los sonidos

    [Header("Music Settings")]
    public AudioClip backgroundMusic; // Música de fondo
    public AudioSource musicAudioSource; // Fuente de audio dedicada para música
    public float musicVolume = 0.5f; // Volumen de la música
    public bool playMusicOnStart = true; // Reproducir música al iniciar
    public bool musicLoop = true; // Si la música debe repetirse en bucle
    [Header("Volume Settings")]
    public float volume = 1f; // Volumen general de los sonidos
    [Header("Pitch Settings")]
    public float pitch = 1f; // Tono general de los sonidos
    [Header("Loop Settings")]
    public bool loop = false; // Si los sonidos deben repetirse en bucle
    [Header("Spatial Blend Settings")]
    [Range(0f, 1f)]
    public float spatialBlend = 0f; // Mezcla espacial para sonidos 2D/3D
    [Header("3D Sound Settings")]
    public float minDistance = 1f; // Distancia mínima para el sonido 3
    public float maxDistance = 500f; // Distancia máxima para el sonido 3D
    [Header("Audio Mixer Settings")]
    public string audioMixerGroupName = "Master"; // Nombre del grupo de mezcla de audio
    [Header("Debug Settings")]
    public bool showDebugInfo = true; // Mostrar información de depuración en la consola
    void Start()
    {
        // Configurar la fuente de audio para efectos de sonido
        if (audioSource == null)
        {
            audioSource = gameObject.AddComponent<AudioSource>();
        }

        audioSource.volume = volume;
        audioSource.pitch = pitch;
        audioSource.loop = loop;
        audioSource.spatialBlend = spatialBlend;

        // Configurar la fuente de audio para música
        ConfigureMusicAudioSource();

        // Reproducir música de fondo si está configurado
        if (playMusicOnStart && backgroundMusic != null)
        {
            PlayBackgroundMusic();
        }

        if (showDebugInfo)
        {
            Debug.Log("Sound Manager initialized with " + soundEffects.Length + " sound effects.");
            if (backgroundMusic != null)
            {
                Debug.Log("Background music loaded: " + backgroundMusic.name);
            }
        }
    }

    /// <summary>
    /// Configura el AudioSource dedicado para música
    /// </summary>
    void ConfigureMusicAudioSource()
    {
        if (musicAudioSource == null)
        {
            // Crear un nuevo AudioSource para música si no está asignado
            GameObject musicObject = new GameObject("Music AudioSource");
            musicObject.transform.SetParent(transform);
            musicAudioSource = musicObject.AddComponent<AudioSource>();
        }

        // Configurar propiedades de la música
        musicAudioSource.volume = musicVolume;
        musicAudioSource.loop = musicLoop;
        musicAudioSource.spatialBlend = 0f; // Música siempre en 2D
        musicAudioSource.clip = backgroundMusic;
    }

    /// <summary>
    /// Reproduce un efecto de sonido específico.
    /// </summary>
    /// <param name="index">Índice del efecto de sonido en el array.</param>
    /// <returns>True si se reproduce correctamente, false si el índice es inválido.</returns>
    /// <exception cref="System.IndexOutOfRangeException">Lanza si el índice está fuera del rango del array.</exception>
    public bool PlaySound(int index)
    {
        if (index < 0 || index >= soundEffects.Length)
        {
            if (showDebugInfo)
            {
                Debug.LogError("Índice de sonido fuera de rango: " + index);
            }
            return false;
        }

        audioSource.clip = soundEffects[index];
        audioSource.Play();

        if (showDebugInfo)
        {
            Debug.Log("Reproduciendo sonido: " + soundEffects[index].name);
        }

        return true;
    }

    // === MÉTODOS PARA MÚSICA DE FONDO ===

    /// <summary>
    /// Reproduce la música de fondo
    /// </summary>
    public void PlayBackgroundMusic()
    {
        if (musicAudioSource != null && backgroundMusic != null)
        {
            musicAudioSource.Play();

            if (showDebugInfo)
            {
                Debug.Log("Reproduciendo música de fondo: " + backgroundMusic.name);
            }
        }
        else
        {
            if (showDebugInfo)
            {
                Debug.LogWarning("No se puede reproducir música: AudioSource o clip no configurados");
            }
        }
    }

    /// <summary>
    /// Pausa la música de fondo
    /// </summary>
    public void PauseBackgroundMusic()
    {
        if (musicAudioSource != null && musicAudioSource.isPlaying)
        {
            musicAudioSource.Pause();

            if (showDebugInfo)
            {
                Debug.Log("Música de fondo pausada");
            }
        }
    }

    /// <summary>
    /// Reanuda la música de fondo
    /// </summary>
    public void ResumeBackgroundMusic()
    {
        if (musicAudioSource != null)
        {
            musicAudioSource.UnPause();

            if (showDebugInfo)
            {
                Debug.Log("Música de fondo reanudada");
            }
        }
    }

    /// <summary>
    /// Detiene la música de fondo
    /// </summary>
    public void StopBackgroundMusic()
    {
        if (musicAudioSource != null)
        {
            musicAudioSource.Stop();

            if (showDebugInfo)
            {
                Debug.Log("Música de fondo detenida");
            }
        }
    }

    /// <summary>
    /// Cambia la música de fondo por una nueva
    /// </summary>
    /// <param name="newMusic">Nueva pista de música</param>
    public void ChangeBackgroundMusic(AudioClip newMusic)
    {
        if (musicAudioSource != null && newMusic != null)
        {
            bool wasPlaying = musicAudioSource.isPlaying;

            musicAudioSource.Stop();
            musicAudioSource.clip = newMusic;
            backgroundMusic = newMusic;

            if (wasPlaying)
            {
                musicAudioSource.Play();
            }

            if (showDebugInfo)
            {
                Debug.Log("Música de fondo cambiada a: " + newMusic.name);
            }
        }
    }

    /// <summary>
    /// Ajusta el volumen de la música de fondo
    /// </summary>
    /// <param name="newVolume">Nuevo volumen (0.0 a 1.0)</param>
    public void SetMusicVolume(float newVolume)
    {
        musicVolume = Mathf.Clamp01(newVolume);

        if (musicAudioSource != null)
        {
            musicAudioSource.volume = musicVolume;
        }

        if (showDebugInfo)
        {
            Debug.Log("Volumen de música ajustado a: " + musicVolume);
        }
    }

    /// <summary>
    /// Verifica si la música está reproduciéndose
    /// </summary>
    /// <returns>True si la música está sonando</returns>
    public bool IsMusicPlaying()
    {
        return musicAudioSource != null && musicAudioSource.isPlaying;
    }

    /// <summary>
    /// Hace fade out de la música actual y fade in de una nueva
    /// </summary>
    /// <param name="newMusic">Nueva música</param>
    /// <param name="fadeDuration">Duración del fade en segundos</param>
    public void FadeToNewMusic(AudioClip newMusic, float fadeDuration = 2f)
    {
        if (newMusic != null)
        {
            StartCoroutine(FadeMusicCoroutine(newMusic, fadeDuration));
        }
    }

    /// <summary>
    /// Corrutina para hacer el fade entre músicas
    /// </summary>
    IEnumerator FadeMusicCoroutine(AudioClip newMusic, float fadeDuration)
    {
        float originalVolume = musicVolume;

        // Fade out de la música actual
        if (musicAudioSource != null && musicAudioSource.isPlaying)
        {
            float fadeOutTime = 0f;
            while (fadeOutTime < fadeDuration / 2f)
            {
                fadeOutTime += Time.deltaTime;
                float volume = Mathf.Lerp(originalVolume, 0f, fadeOutTime / (fadeDuration / 2f));
                musicAudioSource.volume = volume;
                yield return null;
            }
        }

        // Cambiar la música
        ChangeBackgroundMusic(newMusic);

        // Fade in de la nueva música
        if (musicAudioSource != null)
        {
            musicAudioSource.volume = 0f;
            musicAudioSource.Play();

            float fadeInTime = 0f;
            while (fadeInTime < fadeDuration / 2f)
            {
                fadeInTime += Time.deltaTime;
                float volume = Mathf.Lerp(0f, originalVolume, fadeInTime / (fadeDuration / 2f));
                musicAudioSource.volume = volume;
                yield return null;
            }

            musicAudioSource.volume = originalVolume;
        }
    }


}
