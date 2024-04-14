extern "C" void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_SharedInternals();
	RegisterModule_SharedInternals();

	void RegisterModule_Core();
	RegisterModule_Core();

	void RegisterModule_AI();
	RegisterModule_AI();

	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_Director();
	RegisterModule_Director();

	void RegisterModule_ImageConversion();
	RegisterModule_ImageConversion();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_Input();
	RegisterModule_Input();

	void RegisterModule_InputLegacy();
	RegisterModule_InputLegacy();

	void RegisterModule_JSONSerialize();
	RegisterModule_JSONSerialize();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_PerformanceReporting();
	RegisterModule_PerformanceReporting();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_RuntimeInitializeOnLoadManagerInitializer();
	RegisterModule_RuntimeInitializeOnLoadManagerInitializer();

	void RegisterModule_SpriteMask();
	RegisterModule_SpriteMask();

	void RegisterModule_Subsystems();
	RegisterModule_Subsystems();

	void RegisterModule_Terrain();
	RegisterModule_Terrain();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_TextCoreFontEngine();
	RegisterModule_TextCoreFontEngine();

	void RegisterModule_TextCoreTextEngine();
	RegisterModule_TextCoreTextEngine();

	void RegisterModule_TLS();
	RegisterModule_TLS();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_UIElementsNative();
	RegisterModule_UIElementsNative();

	void RegisterModule_UIElements();
	RegisterModule_UIElements();

	void RegisterModule_UnityAnalyticsCommon();
	RegisterModule_UnityAnalyticsCommon();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

	void RegisterModule_UnityAnalytics();
	RegisterModule_UnityAnalytics();

	void RegisterModule_Vehicles();
	RegisterModule_Vehicles();

	void RegisterModule_VR();
	RegisterModule_VR();

	void RegisterModule_WebGL();
	RegisterModule_WebGL();

	void RegisterModule_XR();
	RegisterModule_XR();

}

template <typename T> void RegisterUnityClass(const char*);
template <typename T> void RegisterStrippedType(int, const char*, const char*);

void InvokeRegisterStaticallyLinkedModuleClasses()
{
	// Do nothing (we're in stripping mode)
}

class NavMeshAgent; template <> void RegisterUnityClass<NavMeshAgent>(const char*);
class NavMeshProjectSettings; template <> void RegisterUnityClass<NavMeshProjectSettings>(const char*);
class NavMeshSettings; template <> void RegisterUnityClass<NavMeshSettings>(const char*);
class OffMeshLink; template <> void RegisterUnityClass<OffMeshLink>(const char*);
class Animation; template <> void RegisterUnityClass<Animation>(const char*);
class AnimationClip; template <> void RegisterUnityClass<AnimationClip>(const char*);
class Animator; template <> void RegisterUnityClass<Animator>(const char*);
class AnimatorController; template <> void RegisterUnityClass<AnimatorController>(const char*);
class AnimatorOverrideController; template <> void RegisterUnityClass<AnimatorOverrideController>(const char*);
class Avatar; template <> void RegisterUnityClass<Avatar>(const char*);
class AvatarMask; template <> void RegisterUnityClass<AvatarMask>(const char*);
class Motion; template <> void RegisterUnityClass<Motion>(const char*);
class RuntimeAnimatorController; template <> void RegisterUnityClass<RuntimeAnimatorController>(const char*);
class AudioBehaviour; template <> void RegisterUnityClass<AudioBehaviour>(const char*);
class AudioClip; template <> void RegisterUnityClass<AudioClip>(const char*);
class AudioListener; template <> void RegisterUnityClass<AudioListener>(const char*);
class AudioManager; template <> void RegisterUnityClass<AudioManager>(const char*);
class AudioMixer; template <> void RegisterUnityClass<AudioMixer>(const char*);
class AudioMixerGroup; template <> void RegisterUnityClass<AudioMixerGroup>(const char*);
class AudioSource; template <> void RegisterUnityClass<AudioSource>(const char*);
class SampleClip; template <> void RegisterUnityClass<SampleClip>(const char*);
class Behaviour; template <> void RegisterUnityClass<Behaviour>(const char*);
class BuildSettings; template <> void RegisterUnityClass<BuildSettings>(const char*);
class Camera; template <> void RegisterUnityClass<Camera>(const char*);
namespace Unity { class Component; } template <> void RegisterUnityClass<Unity::Component>(const char*);
class ComputeShader; template <> void RegisterUnityClass<ComputeShader>(const char*);
class Cubemap; template <> void RegisterUnityClass<Cubemap>(const char*);
class CubemapArray; template <> void RegisterUnityClass<CubemapArray>(const char*);
class DelayedCallManager; template <> void RegisterUnityClass<DelayedCallManager>(const char*);
class EditorExtension; template <> void RegisterUnityClass<EditorExtension>(const char*);
class GameManager; template <> void RegisterUnityClass<GameManager>(const char*);
class GameObject; template <> void RegisterUnityClass<GameObject>(const char*);
class GlobalGameManager; template <> void RegisterUnityClass<GlobalGameManager>(const char*);
class GraphicsSettings; template <> void RegisterUnityClass<GraphicsSettings>(const char*);
class InputManager; template <> void RegisterUnityClass<InputManager>(const char*);
class LevelGameManager; template <> void RegisterUnityClass<LevelGameManager>(const char*);
class Light; template <> void RegisterUnityClass<Light>(const char*);
class LightingSettings; template <> void RegisterUnityClass<LightingSettings>(const char*);
class LightmapSettings; template <> void RegisterUnityClass<LightmapSettings>(const char*);
class LightProbes; template <> void RegisterUnityClass<LightProbes>(const char*);
class LineRenderer; template <> void RegisterUnityClass<LineRenderer>(const char*);
class LowerResBlitTexture; template <> void RegisterUnityClass<LowerResBlitTexture>(const char*);
class Material; template <> void RegisterUnityClass<Material>(const char*);
class Mesh; template <> void RegisterUnityClass<Mesh>(const char*);
class MeshFilter; template <> void RegisterUnityClass<MeshFilter>(const char*);
class MeshRenderer; template <> void RegisterUnityClass<MeshRenderer>(const char*);
class MonoBehaviour; template <> void RegisterUnityClass<MonoBehaviour>(const char*);
class MonoManager; template <> void RegisterUnityClass<MonoManager>(const char*);
class MonoScript; template <> void RegisterUnityClass<MonoScript>(const char*);
class NamedObject; template <> void RegisterUnityClass<NamedObject>(const char*);
class Object; template <> void RegisterUnityClass<Object>(const char*);
class PlayerSettings; template <> void RegisterUnityClass<PlayerSettings>(const char*);
class PreloadData; template <> void RegisterUnityClass<PreloadData>(const char*);
class QualitySettings; template <> void RegisterUnityClass<QualitySettings>(const char*);
namespace UI { class RectTransform; } template <> void RegisterUnityClass<UI::RectTransform>(const char*);
class ReflectionProbe; template <> void RegisterUnityClass<ReflectionProbe>(const char*);
class Renderer; template <> void RegisterUnityClass<Renderer>(const char*);
class RenderSettings; template <> void RegisterUnityClass<RenderSettings>(const char*);
class RenderTexture; template <> void RegisterUnityClass<RenderTexture>(const char*);
class ResourceManager; template <> void RegisterUnityClass<ResourceManager>(const char*);
class RuntimeInitializeOnLoadManager; template <> void RegisterUnityClass<RuntimeInitializeOnLoadManager>(const char*);
class Shader; template <> void RegisterUnityClass<Shader>(const char*);
class ShaderNameRegistry; template <> void RegisterUnityClass<ShaderNameRegistry>(const char*);
class SkinnedMeshRenderer; template <> void RegisterUnityClass<SkinnedMeshRenderer>(const char*);
class Sprite; template <> void RegisterUnityClass<Sprite>(const char*);
class SpriteAtlas; template <> void RegisterUnityClass<SpriteAtlas>(const char*);
class SpriteRenderer; template <> void RegisterUnityClass<SpriteRenderer>(const char*);
class TagManager; template <> void RegisterUnityClass<TagManager>(const char*);
class TextAsset; template <> void RegisterUnityClass<TextAsset>(const char*);
class Texture; template <> void RegisterUnityClass<Texture>(const char*);
class Texture2D; template <> void RegisterUnityClass<Texture2D>(const char*);
class Texture2DArray; template <> void RegisterUnityClass<Texture2DArray>(const char*);
class Texture3D; template <> void RegisterUnityClass<Texture3D>(const char*);
class TimeManager; template <> void RegisterUnityClass<TimeManager>(const char*);
class TrailRenderer; template <> void RegisterUnityClass<TrailRenderer>(const char*);
class Transform; template <> void RegisterUnityClass<Transform>(const char*);
class PlayableDirector; template <> void RegisterUnityClass<PlayableDirector>(const char*);
class ParticleSystem; template <> void RegisterUnityClass<ParticleSystem>(const char*);
class ParticleSystemRenderer; template <> void RegisterUnityClass<ParticleSystemRenderer>(const char*);
class BoxCollider; template <> void RegisterUnityClass<BoxCollider>(const char*);
class CapsuleCollider; template <> void RegisterUnityClass<CapsuleCollider>(const char*);
class CharacterController; template <> void RegisterUnityClass<CharacterController>(const char*);
namespace Unity { class CharacterJoint; } template <> void RegisterUnityClass<Unity::CharacterJoint>(const char*);
class Collider; template <> void RegisterUnityClass<Collider>(const char*);
namespace Unity { class ConfigurableJoint; } template <> void RegisterUnityClass<Unity::ConfigurableJoint>(const char*);
class ConstantForce; template <> void RegisterUnityClass<ConstantForce>(const char*);
namespace Unity { class Joint; } template <> void RegisterUnityClass<Unity::Joint>(const char*);
class MeshCollider; template <> void RegisterUnityClass<MeshCollider>(const char*);
class PhysicMaterial; template <> void RegisterUnityClass<PhysicMaterial>(const char*);
class PhysicsManager; template <> void RegisterUnityClass<PhysicsManager>(const char*);
class Rigidbody; template <> void RegisterUnityClass<Rigidbody>(const char*);
class SphereCollider; template <> void RegisterUnityClass<SphereCollider>(const char*);
class Collider2D; template <> void RegisterUnityClass<Collider2D>(const char*);
class CompositeCollider2D; template <> void RegisterUnityClass<CompositeCollider2D>(const char*);
class Physics2DSettings; template <> void RegisterUnityClass<Physics2DSettings>(const char*);
class PolygonCollider2D; template <> void RegisterUnityClass<PolygonCollider2D>(const char*);
class Rigidbody2D; template <> void RegisterUnityClass<Rigidbody2D>(const char*);
class SpriteMask; template <> void RegisterUnityClass<SpriteMask>(const char*);
class Terrain; template <> void RegisterUnityClass<Terrain>(const char*);
class TerrainData; template <> void RegisterUnityClass<TerrainData>(const char*);
class TerrainLayer; template <> void RegisterUnityClass<TerrainLayer>(const char*);
namespace TextRendering { class Font; } template <> void RegisterUnityClass<TextRendering::Font>(const char*);
namespace UI { class Canvas; } template <> void RegisterUnityClass<UI::Canvas>(const char*);
namespace UI { class CanvasGroup; } template <> void RegisterUnityClass<UI::CanvasGroup>(const char*);
namespace UI { class CanvasRenderer; } template <> void RegisterUnityClass<UI::CanvasRenderer>(const char*);
class UnityConnectSettings; template <> void RegisterUnityClass<UnityConnectSettings>(const char*);
class WheelCollider; template <> void RegisterUnityClass<WheelCollider>(const char*);

void RegisterAllClasses()
{
void RegisterBuiltinTypes();
RegisterBuiltinTypes();
	//Total: 107 non stripped classes
	//0. NavMeshAgent
	RegisterUnityClass<NavMeshAgent>("AI");
	//1. NavMeshProjectSettings
	RegisterUnityClass<NavMeshProjectSettings>("AI");
	//2. NavMeshSettings
	RegisterUnityClass<NavMeshSettings>("AI");
	//3. OffMeshLink
	RegisterUnityClass<OffMeshLink>("AI");
	//4. Animation
	RegisterUnityClass<Animation>("Animation");
	//5. AnimationClip
	RegisterUnityClass<AnimationClip>("Animation");
	//6. Animator
	RegisterUnityClass<Animator>("Animation");
	//7. AnimatorController
	RegisterUnityClass<AnimatorController>("Animation");
	//8. AnimatorOverrideController
	RegisterUnityClass<AnimatorOverrideController>("Animation");
	//9. Avatar
	RegisterUnityClass<Avatar>("Animation");
	//10. AvatarMask
	RegisterUnityClass<AvatarMask>("Animation");
	//11. Motion
	RegisterUnityClass<Motion>("Animation");
	//12. RuntimeAnimatorController
	RegisterUnityClass<RuntimeAnimatorController>("Animation");
	//13. AudioBehaviour
	RegisterUnityClass<AudioBehaviour>("Audio");
	//14. AudioClip
	RegisterUnityClass<AudioClip>("Audio");
	//15. AudioListener
	RegisterUnityClass<AudioListener>("Audio");
	//16. AudioManager
	RegisterUnityClass<AudioManager>("Audio");
	//17. AudioMixer
	RegisterUnityClass<AudioMixer>("Audio");
	//18. AudioMixerGroup
	RegisterUnityClass<AudioMixerGroup>("Audio");
	//19. AudioSource
	RegisterUnityClass<AudioSource>("Audio");
	//20. SampleClip
	RegisterUnityClass<SampleClip>("Audio");
	//21. Behaviour
	RegisterUnityClass<Behaviour>("Core");
	//22. BuildSettings
	RegisterUnityClass<BuildSettings>("Core");
	//23. Camera
	RegisterUnityClass<Camera>("Core");
	//24. Component
	RegisterUnityClass<Unity::Component>("Core");
	//25. ComputeShader
	RegisterUnityClass<ComputeShader>("Core");
	//26. Cubemap
	RegisterUnityClass<Cubemap>("Core");
	//27. CubemapArray
	RegisterUnityClass<CubemapArray>("Core");
	//28. DelayedCallManager
	RegisterUnityClass<DelayedCallManager>("Core");
	//29. EditorExtension
	RegisterUnityClass<EditorExtension>("Core");
	//30. GameManager
	RegisterUnityClass<GameManager>("Core");
	//31. GameObject
	RegisterUnityClass<GameObject>("Core");
	//32. GlobalGameManager
	RegisterUnityClass<GlobalGameManager>("Core");
	//33. GraphicsSettings
	RegisterUnityClass<GraphicsSettings>("Core");
	//34. InputManager
	RegisterUnityClass<InputManager>("Core");
	//35. LevelGameManager
	RegisterUnityClass<LevelGameManager>("Core");
	//36. Light
	RegisterUnityClass<Light>("Core");
	//37. LightingSettings
	RegisterUnityClass<LightingSettings>("Core");
	//38. LightmapSettings
	RegisterUnityClass<LightmapSettings>("Core");
	//39. LightProbes
	RegisterUnityClass<LightProbes>("Core");
	//40. LineRenderer
	RegisterUnityClass<LineRenderer>("Core");
	//41. LowerResBlitTexture
	RegisterUnityClass<LowerResBlitTexture>("Core");
	//42. Material
	RegisterUnityClass<Material>("Core");
	//43. Mesh
	RegisterUnityClass<Mesh>("Core");
	//44. MeshFilter
	RegisterUnityClass<MeshFilter>("Core");
	//45. MeshRenderer
	RegisterUnityClass<MeshRenderer>("Core");
	//46. MonoBehaviour
	RegisterUnityClass<MonoBehaviour>("Core");
	//47. MonoManager
	RegisterUnityClass<MonoManager>("Core");
	//48. MonoScript
	RegisterUnityClass<MonoScript>("Core");
	//49. NamedObject
	RegisterUnityClass<NamedObject>("Core");
	//50. Object
	//Skipping Object
	//51. PlayerSettings
	RegisterUnityClass<PlayerSettings>("Core");
	//52. PreloadData
	RegisterUnityClass<PreloadData>("Core");
	//53. QualitySettings
	RegisterUnityClass<QualitySettings>("Core");
	//54. RectTransform
	RegisterUnityClass<UI::RectTransform>("Core");
	//55. ReflectionProbe
	RegisterUnityClass<ReflectionProbe>("Core");
	//56. Renderer
	RegisterUnityClass<Renderer>("Core");
	//57. RenderSettings
	RegisterUnityClass<RenderSettings>("Core");
	//58. RenderTexture
	RegisterUnityClass<RenderTexture>("Core");
	//59. ResourceManager
	RegisterUnityClass<ResourceManager>("Core");
	//60. RuntimeInitializeOnLoadManager
	RegisterUnityClass<RuntimeInitializeOnLoadManager>("Core");
	//61. Shader
	RegisterUnityClass<Shader>("Core");
	//62. ShaderNameRegistry
	RegisterUnityClass<ShaderNameRegistry>("Core");
	//63. SkinnedMeshRenderer
	RegisterUnityClass<SkinnedMeshRenderer>("Core");
	//64. Sprite
	RegisterUnityClass<Sprite>("Core");
	//65. SpriteAtlas
	RegisterUnityClass<SpriteAtlas>("Core");
	//66. SpriteRenderer
	RegisterUnityClass<SpriteRenderer>("Core");
	//67. TagManager
	RegisterUnityClass<TagManager>("Core");
	//68. TextAsset
	RegisterUnityClass<TextAsset>("Core");
	//69. Texture
	RegisterUnityClass<Texture>("Core");
	//70. Texture2D
	RegisterUnityClass<Texture2D>("Core");
	//71. Texture2DArray
	RegisterUnityClass<Texture2DArray>("Core");
	//72. Texture3D
	RegisterUnityClass<Texture3D>("Core");
	//73. TimeManager
	RegisterUnityClass<TimeManager>("Core");
	//74. TrailRenderer
	RegisterUnityClass<TrailRenderer>("Core");
	//75. Transform
	RegisterUnityClass<Transform>("Core");
	//76. PlayableDirector
	RegisterUnityClass<PlayableDirector>("Director");
	//77. ParticleSystem
	RegisterUnityClass<ParticleSystem>("ParticleSystem");
	//78. ParticleSystemRenderer
	RegisterUnityClass<ParticleSystemRenderer>("ParticleSystem");
	//79. BoxCollider
	RegisterUnityClass<BoxCollider>("Physics");
	//80. CapsuleCollider
	RegisterUnityClass<CapsuleCollider>("Physics");
	//81. CharacterController
	RegisterUnityClass<CharacterController>("Physics");
	//82. CharacterJoint
	RegisterUnityClass<Unity::CharacterJoint>("Physics");
	//83. Collider
	RegisterUnityClass<Collider>("Physics");
	//84. ConfigurableJoint
	RegisterUnityClass<Unity::ConfigurableJoint>("Physics");
	//85. ConstantForce
	RegisterUnityClass<ConstantForce>("Physics");
	//86. Joint
	RegisterUnityClass<Unity::Joint>("Physics");
	//87. MeshCollider
	RegisterUnityClass<MeshCollider>("Physics");
	//88. PhysicMaterial
	RegisterUnityClass<PhysicMaterial>("Physics");
	//89. PhysicsManager
	RegisterUnityClass<PhysicsManager>("Physics");
	//90. Rigidbody
	RegisterUnityClass<Rigidbody>("Physics");
	//91. SphereCollider
	RegisterUnityClass<SphereCollider>("Physics");
	//92. Collider2D
	RegisterUnityClass<Collider2D>("Physics2D");
	//93. CompositeCollider2D
	RegisterUnityClass<CompositeCollider2D>("Physics2D");
	//94. Physics2DSettings
	RegisterUnityClass<Physics2DSettings>("Physics2D");
	//95. PolygonCollider2D
	RegisterUnityClass<PolygonCollider2D>("Physics2D");
	//96. Rigidbody2D
	RegisterUnityClass<Rigidbody2D>("Physics2D");
	//97. SpriteMask
	RegisterUnityClass<SpriteMask>("SpriteMask");
	//98. Terrain
	RegisterUnityClass<Terrain>("Terrain");
	//99. TerrainData
	RegisterUnityClass<TerrainData>("Terrain");
	//100. TerrainLayer
	RegisterUnityClass<TerrainLayer>("Terrain");
	//101. Font
	RegisterUnityClass<TextRendering::Font>("TextRendering");
	//102. Canvas
	RegisterUnityClass<UI::Canvas>("UI");
	//103. CanvasGroup
	RegisterUnityClass<UI::CanvasGroup>("UI");
	//104. CanvasRenderer
	RegisterUnityClass<UI::CanvasRenderer>("UI");
	//105. UnityConnectSettings
	RegisterUnityClass<UnityConnectSettings>("UnityConnect");
	//106. WheelCollider
	RegisterUnityClass<WheelCollider>("Vehicles");

}
