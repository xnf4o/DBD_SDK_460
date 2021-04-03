#pragma once

// Name: DBD, Version: 4.6.0


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class DBDGameplay.ActorPairQueryEvaluatorUtilities
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UActorPairQueryEvaluatorUtilities : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDGameplay.ActorPairQueryEvaluatorUtilities");
		return ptr;
	}



};

// Class DBDGameplay.AimableComponent
// 0x0058 (FullSize[0x0110] - InheritedSize[0x00B8])
class UAimableComponent : public UactorComponent
{
public:
	unsigned char                                      UnknownData_WHN6[0x8];                                     // 0x00B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class Uactor*>                              _occlusionIgnoredActors;                                   // 0x00C0(0x0010) (ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _maxAimDistance;                                           // 0x00D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_4HKF[0x4];                                     // 0x00D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAimDirectionProvider*                       _aimDirectionProvider;                                     // 0x00D8(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _useOcclusion;                                             // 0x00E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_PFQV[0x3];                                     // 0x00E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _aimPointLerpFactor;                                       // 0x00E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UAimPointProcessor*>                  _preOcclusionAimPointProcessors;                           // 0x00E8(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_PTG9[0x18];                                    // 0x00F8(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDGameplay.AimableComponent");
		return ptr;
	}



	void SetProcessors(TArray<class UAimPointProcessor*> processors);
	void SetOcclusionIgnoredActors(TArray<class Uactor*> ignoredActors);
	void SetMaxAimDistance(float maxAimDistance);
};

// Class DBDGameplay.AimDirectionProvider
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UAimDirectionProvider : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDGameplay.AimDirectionProvider");
		return ptr;
	}



};

// Class DBDGameplay.AimPointProcessor
// 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
class UAimPointProcessor : public UactorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDGameplay.AimPointProcessor");
		return ptr;
	}



};

// Class DBDGameplay.AimPointPerlinNoise
// 0x0030 (FullSize[0x00E8] - InheritedSize[0x00B8])
class UAimPointPerlinNoise : public UAimPointProcessor
{
public:
	unsigned char                                      UnknownData_2WTZ[0x4];                                     // 0x00B8(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _baseInaccuracyNoisePersistence;                           // 0x00BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                _baseInaccuracyNoiseOctaveCount;                           // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _baseInaccuracyNoiseAmplitude;                             // 0x00C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_91TP[0x4];                                     // 0x00C8(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _baseInaccuracyNoiseFrequency;                             // 0x00CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_2DK8[0x4];                                     // 0x00D0(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _timeOffset;                                               // 0x00D4(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_ZJDK[0x10];                                    // 0x00D8(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDGameplay.AimPointPerlinNoise");
		return ptr;
	}



	void SetNoiseFrequencyMultiplier(float multiplier);
	void SetNoiseAmplitudeMultiplier(float multiplier);
	void SetBaseInaccuracyNoisePersistence(float noisePersistence);
	void SetBaseInaccuracyNoiseOctaveCount(int octaveCount);
	void SetBaseInaccuracyNoiseFrequency(float frequency);
	void SetBaseInaccuracyNoiseAmplitude(float amplitude);
};

// Class DBDGameplay.FlashlightableLightingStrategy
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UFlashlightableLightingStrategy : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDGameplay.FlashlightableLightingStrategy");
		return ptr;
	}



};

// Class DBDGameplay.FlashlightablePointsLightingStrategy
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UFlashlightablePointsLightingStrategy : public UFlashlightableLightingStrategy
{
public:
	class UPointsProvider*                             _pointsProvider;                                           // 0x0030(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, NoClear, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _impactPointDistanceError;                                 // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_AQ3D[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDGameplay.FlashlightablePointsLightingStrategy");
		return ptr;
	}



};

// Class DBDGameplay.BlindFlashlightableLightingStrategy
// 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
class UBlindFlashlightableLightingStrategy : public UFlashlightablePointsLightingStrategy
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDGameplay.BlindFlashlightableLightingStrategy");
		return ptr;
	}



};

// Class DBDGameplay.FlashlightTargetFXComponent
// 0x0048 (FullSize[0x0100] - InheritedSize[0x00B8])
class UFlashlightTargetFXComponent : public UactorComponent
{
public:
	unsigned char                                      UnknownData_T9K3[0x30];                                    // 0x00B8(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               _modifiesBeamAngle;                                        // 0x00E8(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_K2HN[0x7];                                     // 0x00E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UFlashLightableComponent*                    _flashlightable;                                           // 0x00F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_ZVMG[0x8];                                     // 0x00F8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDGameplay.FlashlightTargetFXComponent");
		return ptr;
	}



	void OnIsLitChanged(bool isLit);
};

// Class DBDGameplay.BlindFlashlightTargetFXComponent
// 0x0028 (FullSize[0x0128] - InheritedSize[0x0100])
class UBlindFlashlightTargetFXComponent : public UFlashlightTargetFXComponent
{
public:
	unsigned char                                      UnknownData_ALDR[0x28];                                    // 0x0100(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDGameplay.BlindFlashlightTargetFXComponent");
		return ptr;
	}



};

// Class DBDGameplay.CollectableComponentUtilities
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UCollectableComponentUtilities : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDGameplay.CollectableComponentUtilities");
		return ptr;
	}



	class UdbdPlayer* STATIC_GetCollector(class UactorComponent* component);
};

// Class DBDGameplay.DBDCharacterPusherComponent
// 0x0010 (FullSize[0x0180] - InheritedSize[0x0170])
class UDBDCharacterPusherComponent : public UCharacterPusherComponent
{
public:
	unsigned char                                      UnknownData_KZHY[0x10];                                    // 0x0170(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDGameplay.DBDCharacterPusherComponent");
		return ptr;
	}



};

// Class DBDGameplay.DebugIndicator
// 0x0020 (FullSize[0x0250] - InheritedSize[0x0230])
class UDebugIndicator : public Uactor
{
public:
	class UStaticMeshComponent*                        _staticMeshComponent;                                      // 0x0230(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDBDOutlineComponent*                        _outlineComponent;                                         // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_BBRP[0x10];                                    // 0x0240(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDGameplay.DebugIndicator");
		return ptr;
	}



	void SetVisible(bool Visible);
	void SetColor(const struct FLinearColor& color);
};

// Class DBDGameplay.EtherealComponent
// 0x0030 (FullSize[0x00E8] - InheritedSize[0x00B8])
class UEtherealComponent : public UactorComponent
{
public:
	unsigned char                                      UnknownData_FN6L[0x28];                                    // 0x00B8(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               _isEthereal;                                               // 0x00E0(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_2QG9[0x7];                                     // 0x00E1(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDGameplay.EtherealComponent");
		return ptr;
	}



	void Server_SetIsEthereal(float timestamp, bool ethereal);
	void OnRep_OnIsEtherealChanged();
};

// Class DBDGameplay.RangeToActorsTrackerStrategy
// 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
class URangeToActorsTrackerStrategy : public UObject
{
public:
	struct FDBDTunableRowHandle                        _range;                                                    // 0x0030(0x0028) (Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_OWHM[0x18];                                    // 0x0058(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDGameplay.RangeToActorsTrackerStrategy");
		return ptr;
	}



	void OnInRangeToTrackedActorsChanged(bool inRange);
};

// Class DBDGameplay.ExitGateSwitchesRangeTrackerStrategy
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UExitGateSwitchesRangeTrackerStrategy : public URangeToActorsTrackerStrategy
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDGameplay.ExitGateSwitchesRangeTrackerStrategy");
		return ptr;
	}



};

// Class DBDGameplay.FadeComponent
// 0x0020 (FullSize[0x00D8] - InheritedSize[0x00B8])
class UFadeComponent : public UactorComponent
{
public:
	struct FScriptMulticastDelegate                    OnFadePercentChanged;                                      // 0x00B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	float                                              _fadeDuration;                                             // 0x00C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_3OSW[0xC];                                     // 0x00CC(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDGameplay.FadeComponent");
		return ptr;
	}



	float GetFadePercent();
};

// Class DBDGameplay.FlashLightableComponent
// 0x0088 (FullSize[0x0140] - InheritedSize[0x00B8])
class UFlashLightableComponent : public UactorComponent
{
public:
	struct FScriptMulticastDelegate                    OnFlashlightAddedEvent;                                    // 0x00B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFlashlightRemovedEvent;                                  // 0x00C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFlashlightLitChangedEvent;                               // 0x00D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UFlashlightableLightingStrategy*             _lightingStrategy;                                         // 0x00E8(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      _flashlights[0x50];                                        // 0x00F0(0x0050) UNKNOWN PROPERTY: SetProperty


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDGameplay.FlashLightableComponent");
		return ptr;
	}



	void OnFlashlightLitChangedEvent__DelegateSignature(bool isLit);
	void OnFlashlightAddedRemovedEvent__DelegateSignature(class UFlashlightComponent* FlashLight);
	bool isLit();
};

// Class DBDGameplay.FlashlightComponent
// 0x0148 (FullSize[0x0200] - InheritedSize[0x00B8])
class UFlashlightComponent : public UactorComponent
{
public:
	unsigned char                                      UnknownData_TSRZ[0x8];                                     // 0x00B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnFlashlightTurnedOn;                                      // 0x00C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFlashlightTurnedOff;                                     // 0x00D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFlashlightablesUpdated;                                  // 0x00E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FDBDTunableRowHandle                        _baseBlindnessDuration;                                    // 0x00F0(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _baseAccuracy;                                             // 0x0118(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _lagDuration;                                              // 0x011C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      _flashlightables[0x50];                                    // 0x0120(0x0050) UNKNOWN PROPERTY: SetProperty
	unsigned char                                      _autonomousLitFlashlightables[0x50];                       // 0x0170(0x0050) UNKNOWN PROPERTY: SetProperty
	TArray<class UFlashLightableComponent*>            _replicatedLitFlashlightables;                             // 0x01C0(0x0010) (ExportObject, Net, ZeroConstructor, Transient, RepNotify, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _isOwnerLagging;                                           // 0x01D0(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_BVCX[0x2F];                                    // 0x01D1(0x002F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDGameplay.FlashlightComponent");
		return ptr;
	}



	void TurnOn();
	void TurnOff();
	void Server_SetAndUpdateAutonomousLitFlashlightables(TArray<class UFlashLightableComponent*> newLitFlashlightables);
	void OnRep_ReplicatedLitFlashlightables();
	void OnRep_IsOwnerLagging();
	void OnFlashlightEvent__DelegateSignature();
	bool IsOn();
	float GetEffectiveTimeToBlindModifier();
	float GetEffectiveBlindnessDuration();
};

// Class DBDGameplay.FlashlightConeComponent
// 0x0090 (FullSize[0x0148] - InheritedSize[0x00B8])
class UFlashlightConeComponent : public UactorComponent
{
public:
	struct Fvector                                     AIAimBeamLocationOffset;                                   // 0x00B8(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    AIAimBeamRotationOffset;                                   // 0x00C4(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class USceneComponent*                             _flashlightBottom;                                         // 0x00D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _baseBeamAngle;                                            // 0x00D8(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _baseBeamLength;                                           // 0x0100(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class Uactor>                       _cacheCollidingActor;                                      // 0x0128(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_L5LE[0x18];                                    // 0x0130(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDGameplay.FlashlightConeComponent");
		return ptr;
	}



	float GetOcclusionDistance();
	float GetEffectiveConeLength();
	float GetEffectiveConeHalfAngle();
};

// Class DBDGameplay.FlashlightFXComponent
// 0x01A0 (FullSize[0x0258] - InheritedSize[0x00B8])
class UFlashlightFXComponent : public UactorComponent
{
public:
	struct FScriptMulticastDelegate                    OnFlashEvent;                                              // 0x00B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class USceneComponent*                             _tip;                                                      // 0x00C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UStaticMeshComponent*                        _centerGlowMesh;                                           // 0x00D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USplineMeshComponent*                        _beamMesh;                                                 // 0x00D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _minimumOcclusionDistanceForSpotlight;                     // 0x00E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_4G7Z[0x4];                                     // 0x00E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveFloat*                                 _flashEffectIntensityCurve;                                // 0x00E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _flashEffectDuration;                                      // 0x00F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _spotLightHalfAngle;                                       // 0x00F4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _spotLightIntensity;                                       // 0x00F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _visualReworkSpotLightIntensity;                           // 0x00FC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _beamBlindingHalfAngle;                                    // 0x0100(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _beamFlashHalfAngle;                                       // 0x0104(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _beamBlindingRatioInterpSpeedWithTarget;                   // 0x0108(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _beamBlindingRatioInterpSpeedWithoutTarget;                // 0x010C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _resizeConeLength;                                         // 0x0110(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_EHUQ[0x3];                                     // 0x0111(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _centerGlowWidthScaleWithoutBlindTarget;                   // 0x0114(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _centerGlowWidthScaleWithBlindTarget;                      // 0x0118(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _centerGlowWidthScaleDuringFlash;                          // 0x011C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _centerGlowShrinkDistance;                                 // 0x0120(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _centerGlowLengthMaxScale;                                 // 0x0124(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FAkObservedPlayerSoundLoop                  _aimedAtSoundLoop;                                         // 0x0128(0x0040) (Edit, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	class UFlashlightTargetFXComponent*                _currentBeamModifyingTarget;                               // 0x0168(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      _targets[0x50];                                            // 0x0170(0x0050) UNKNOWN PROPERTY: SetProperty
	unsigned char                                      UnknownData_RHWF[0x98];                                    // 0x01C0(0x0098) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDGameplay.FlashlightFXComponent");
		return ptr;
	}



	void UpdateFXTargets();
	void UpdateConeEvent(float length, float halfAngle);
	void PostUpdateEvent();
	void OnTurnedOn();
	void OnTurnedOff();
	void OnStopEvent();
	void OnStartEvent();
	void OnFlashEvent__DelegateSignature();
	void OnDroppedEvent();
	void OnCollectorLocallyObservedChangedEvent(bool isLocallyObserved);
	void OnCollectedEvent(class UdbdPlayer* collector);
	float GetBlindingSuccessRatio();
};

// Class DBDGameplay.FlashlightUtilities
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UFlashlightUtilities : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDGameplay.FlashlightUtilities");
		return ptr;
	}



};

// Class DBDGameplay.HooksWithSurvivorRangeTrackerStrategy
// 0x0068 (FullSize[0x00D8] - InheritedSize[0x0070])
class UHooksWithSurvivorRangeTrackerStrategy : public URangeToActorsTrackerStrategy
{
public:
	unsigned char                                      UnknownData_PX3P[0x68];                                    // 0x0070(0x0068) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDGameplay.HooksWithSurvivorRangeTrackerStrategy");
		return ptr;
	}



};

// Class DBDGameplay.InteractionStarterComponent
// 0x0018 (FullSize[0x00D0] - InheritedSize[0x00B8])
class UInteractionStarterComponent : public UactorComponent
{
public:
	unsigned char                                      UnknownData_N1FX[0x8];                                     // 0x00B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UinteractionDefinition*                      _interaction;                                              // 0x00C0(0x0008) (ExportObject, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _shouldStartInteraction;                                   // 0x00C8(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_V0BQ[0x7];                                     // 0x00C9(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDGameplay.InteractionStarterComponent");
		return ptr;
	}



	void OnRep_ShouldStartInteraction();
	void OnInteractionStarted();
};

// Class DBDGameplay.KillerFlashlightSFXComponent
// 0x00A0 (FullSize[0x0158] - InheritedSize[0x00B8])
class UKillerFlashlightSFXComponent : public UactorComponent
{
public:
	struct FAkObservedPlayerSoundLoop                  _targetSoundLoop;                                          // 0x00B8(0x0040) (Edit, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TArray<class UFlashlightTargetFXComponent*>        _flashlightTargets;                                        // 0x00F8(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_0TMQ[0x50];                                    // 0x0108(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDGameplay.KillerFlashlightSFXComponent");
		return ptr;
	}



};

// Class DBDGameplay.LightBurnableFlashlightTargetFXComponent
// 0x0010 (FullSize[0x0110] - InheritedSize[0x0100])
class ULightBurnableFlashlightTargetFXComponent : public UFlashlightTargetFXComponent
{
public:
	class ULightBurnable*                              _burnable;                                                 // 0x0100(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_FWNQ[0x8];                                     // 0x0108(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDGameplay.LightBurnableFlashlightTargetFXComponent");
		return ptr;
	}



};

// Class DBDGameplay.Medkit
// 0x0090 (FullSize[0x04B0] - InheritedSize[0x0420])
class UMedkit : public Ucollectable
{
public:
	class USphereComponent*                            _interactable;                                             // 0x0420(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class Uinteractor*                                 _collectableInteractor;                                    // 0x0428(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDropItemInteraction*                        _dropItemInteractor;                                       // 0x0430(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCollectItemInteraction*                     _collectItemInteractor;                                    // 0x0438(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USphereComponent*                            _sphereComponent;                                          // 0x0440(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDBDOutlineComponent*                        _outlineComponent;                                         // 0x0448(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UinterruptionDefinition*                     _dropInterrupt;                                            // 0x0450(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UinterruptionDefinition*                     _collectInterrupt;                                         // 0x0458(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkComponent*                                _akComponent;                                              // 0x0460(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialHelper*                             _materialHelper;                                           // 0x0468(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USurvivorCollectableOutlineUpdateStrategy*   _survivorCollectableOutlineUpdateStrategy;                 // 0x0470(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UChargerComponent*                           _charger;                                                  // 0x0478(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UparticleSystem*                             _dustRingTemplate;                                         // 0x0480(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkAudioEvent*                               _medkitGetAkEvent;                                         // 0x0488(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkAudioEvent*                               _medkitDropAkEvent;                                        // 0x0490(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkAudioBank*                                _medkitBank;                                               // 0x0498(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _healOtherChargeMultiplier;                                // 0x04A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_26QA[0xC];                                     // 0x04A4(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDGameplay.Medkit");
		return ptr;
	}



	void UseCharge(float seconds);
	void OnMedkitHealedCamper(class UdbdPlayer* healedPlayer);
	bool HasCharge();
	float GetChargeMultiplier();
	void Authority_OnChargeStateChange(bool empty);
	void Authority_OnAnyOngoingInteractionChanged(bool isInteracting);
	void Authority_ConsumeIfNotInteracting();
};

// Class DBDGameplay.PointsProvider
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UPointsProvider : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDGameplay.PointsProvider");
		return ptr;
	}



};

// Class DBDGameplay.MeshSocketPointsProvider
// 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
class UMeshSocketPointsProvider : public UPointsProvider
{
public:
	struct FComponentReference                         _meshReference;                                            // 0x0030(0x0030) (Edit, NativeAccessSpecifierPrivate)
	class UMeshComponent*                              _mesh;                                                     // 0x0060(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FName>                               _sockets;                                                  // 0x0068(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDGameplay.MeshSocketPointsProvider");
		return ptr;
	}



};

// Class DBDGameplay.PlayerCameraAimDirectionProvider
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UPlayerCameraAimDirectionProvider : public UAimDirectionProvider
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDGameplay.PlayerCameraAimDirectionProvider");
		return ptr;
	}



};

// Class DBDGameplay.LightBurnable
// 0x0048 (FullSize[0x0100] - InheritedSize[0x00B8])
class ULightBurnable : public UactorComponent
{
public:
	struct FScriptMulticastDelegate                    OnBurnChargeCompleteEvent;                                 // 0x00B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CII8[0x18];                                    // 0x00C8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UchargeableComponent*                        _chargeable;                                               // 0x00E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFlashLightableComponent*                    _flashlightable;                                           // 0x00E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFirecrackerEffectHandlerComponent*          _firecrackerEffectHandler;                                 // 0x00F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _isBurning;                                                // 0x00F8(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_IG09[0x7];                                     // 0x00F9(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDGameplay.LightBurnable");
		return ptr;
	}



	void OnRep_IsBurning();
	void OnChargeableCompleteEvent(bool Completed, TArray<class Uactor*> instigatorsForCompletion);
	void OnBurnChargeEmpty();
	void OnBurnChargeCompleteEvent__DelegateSignature(TArray<class Uactor*> instigatorsForCompletion);
	void Authority_OnFlashlightAddedRemoved(class UFlashlightComponent* FlashLight);
	void Authority_OnFirecrackerInRangeBegin(const struct FFirecrackerEffectData& effectData);
};

// Class DBDGameplay.PlayerLightBurnable
// 0x0000 (FullSize[0x0100] - InheritedSize[0x0100])
class UPlayerLightBurnable : public ULightBurnable
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDGameplay.PlayerLightBurnable");
		return ptr;
	}



};

// Class DBDGameplay.PlayerMovementUtilities
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UPlayerMovementUtilities : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDGameplay.PlayerMovementUtilities");
		return ptr;
	}



	void STATIC_Local_SetGamepadYawCurve(class UdbdPlayer* player, class UCurveFloat* curve);
	void STATIC_Local_SetGamepadPitchCurve(class UdbdPlayer* player, class UCurveFloat* curve);
	void STATIC_Local_ResetRotationScale(class UdbdPlayer* player, float adjustmentTime);
	void STATIC_Local_ResetGamepadLookCurves(class UdbdPlayer* player);
	void STATIC_Local_ApplyYawScaleMultiplier(class UdbdPlayer* player, float multiplier, float adjustmentTime);
	void STATIC_Local_ApplyRotationScaleMultiplier(class UdbdPlayer* player, float multiplier, float adjustmentTime);
	void STATIC_Local_ApplyPitchScaleMultiplier(class UdbdPlayer* player, float multiplier, float adjustmentTime);
	void STATIC_Local_ApplyMouseYawScaleMultiplier(class UdbdPlayer* player, float multiplier, float adjustmentTime);
	void STATIC_Local_ApplyMousePitchScaleMultiplier(class UdbdPlayer* player, float multiplier, float adjustmentTime);
	void STATIC_Local_ApplyGamepadYawScaleMultiplier(class UdbdPlayer* player, float multiplier, float adjustmentTime);
	void STATIC_Local_ApplyGamepadPitchScaleMultiplier(class UdbdPlayer* player, float multiplier, float adjustmentTime);
};

// Class DBDGameplay.PowerChargeComponent
// 0x00A8 (FullSize[0x0160] - InheritedSize[0x00B8])
class UPowerChargeComponent : public UactorComponent
{
public:
	struct FScriptMulticastDelegate                    OnPowerChargeChanged;                                      // 0x00B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_V0BZ[0x58];                                    // 0x00C8(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSpeedBasedNetSyncedValue                   _currentCharge;                                            // 0x0120(0x0038) (Net, Transient, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_WFCY[0x4];                                     // 0x0158(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               _forceFullCharge;                                          // 0x015C(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_IAK5[0x3];                                     // 0x015D(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDGameplay.PowerChargeComponent");
		return ptr;
	}



	void OnRep_CurrentCharge();
	void OnCurrentChargeChanged(float Value);
	void Debug_Server_SetForceFullCharge(bool forceFullCharge);
};

// Class DBDGameplay.PowerChargePresentationItemProgressComponent
// 0x0018 (FullSize[0x00D0] - InheritedSize[0x00B8])
class UPowerChargePresentationItemProgressComponent : public UPresentationItemProgressComponent
{
public:
	class UPowerChargeComponent*                       _powerChargeComponent;                                     // 0x00B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPowerToggleComponent*                       _powerToggleComponent;                                     // 0x00C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _chargeReadyThreshold;                                     // 0x00C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_BOH6[0x4];                                     // 0x00CC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDGameplay.PowerChargePresentationItemProgressComponent");
		return ptr;
	}



};

// Class DBDGameplay.PowerToggleComponent
// 0x0020 (FullSize[0x00D8] - InheritedSize[0x00B8])
class UPowerToggleComponent : public UactorComponent
{
public:
	unsigned char                                      UnknownData_DGYA[0x18];                                    // 0x00B8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               _isInPower;                                                // 0x00D0(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_YN5J[0x7];                                     // 0x00D1(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDGameplay.PowerToggleComponent");
		return ptr;
	}



	void OnRep_IsInPower();
};

// Class DBDGameplay.RangeToActorsTrackerComponent
// 0x0010 (FullSize[0x00C8] - InheritedSize[0x00B8])
class URangeToActorsTrackerComponent : public UactorComponent
{
public:
	TArray<class URangeToActorsTrackerStrategy*>       _rangeTrackers;                                            // 0x00B8(0x0010) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, NoClear, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDGameplay.RangeToActorsTrackerComponent");
		return ptr;
	}



	void OnLevelReadyToPlay();
};

// Class DBDGameplay.RangeToActorsTrackerDefaultStrategy
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
class URangeToActorsTrackerDefaultStrategy : public URangeToActorsTrackerStrategy
{
public:
	class UClass*                                      _actorClass;                                               // 0x0070(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDGameplay.RangeToActorsTrackerDefaultStrategy");
		return ptr;
	}



};

// Class DBDGameplay.SceneComponentPointProvider
// 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
class USceneComponentPointProvider : public UPointsProvider
{
public:
	struct FComponentReference                         _sceneReference;                                           // 0x0030(0x0030) (Edit, NativeAccessSpecifierPrivate)
	class USceneComponent*                             _sceneComponent;                                           // 0x0060(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDGameplay.SceneComponentPointProvider");
		return ptr;
	}



};

// Class DBDGameplay.SurvivorAimStanceCameraDirectionProvider
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class USurvivorAimStanceCameraDirectionProvider : public UAimDirectionProvider
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDGameplay.SurvivorAimStanceCameraDirectionProvider");
		return ptr;
	}



};

// Class DBDGameplay.TracingConeFlashlightableLightingStrategy
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UTracingConeFlashlightableLightingStrategy : public UFlashlightableLightingStrategy
{
public:
	int                                                _aroundConeCircleTraceCount;                               // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_1U03[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDGameplay.TracingConeFlashlightableLightingStrategy");
		return ptr;
	}



};

// Class DBDGameplay.UnhookedSurvivorTrackerComponent
// 0x0030 (FullSize[0x00E8] - InheritedSize[0x00B8])
class UUnhookedSurvivorTrackerComponent : public UactorComponent
{
public:
	unsigned char                                      UnknownData_1Q20[0x30];                                    // 0x00B8(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDGameplay.UnhookedSurvivorTrackerComponent");
		return ptr;
	}



};

// Class DBDGameplay.VisibleHatchRangeTrackerStrategy
// 0x0028 (FullSize[0x0098] - InheritedSize[0x0070])
class UVisibleHatchRangeTrackerStrategy : public URangeToActorsTrackerStrategy
{
public:
	unsigned char                                      UnknownData_CJ4Q[0x28];                                    // 0x0070(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDGameplay.VisibleHatchRangeTrackerStrategy");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
