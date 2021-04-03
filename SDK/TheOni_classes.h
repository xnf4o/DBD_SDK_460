﻿#pragma once

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

// Class TheOni.OniDemonPowerAttackOpenSubstate
// 0x0010 (FullSize[0x0100] - InheritedSize[0x00F0])
class UOniDemonPowerAttackOpenSubstate : public UPounceAttackOpenSubstate
{
public:
	unsigned char                                      UnknownData_MW7K[0x10];                                    // 0x00F0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheOni.OniDemonPowerAttackOpenSubstate");
		return ptr;
	}



};

// Class TheOni.OniDemonDashAttackOpenSubstate
// 0x0000 (FullSize[0x0100] - InheritedSize[0x0100])
class UOniDemonDashAttackOpenSubstate : public UOniDemonPowerAttackOpenSubstate
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheOni.OniDemonDashAttackOpenSubstate");
		return ptr;
	}



};

// Class TheOni.OniDemonPowerAttackHittingSubstate
// 0x0000 (FullSize[0x0120] - InheritedSize[0x0120])
class UOniDemonPowerAttackHittingSubstate : public UPounceAttackHittingSubstate
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheOni.OniDemonPowerAttackHittingSubstate");
		return ptr;
	}



};

// Class TheOni.OniDemonPowerAttackSuccessSubstate
// 0x0030 (FullSize[0x0108] - InheritedSize[0x00D8])
class UOniDemonPowerAttackSuccessSubstate : public UPounceAttackSuccessSubstate
{
public:
	unsigned char                                      UnknownData_N77G[0x30];                                    // 0x00D8(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheOni.OniDemonPowerAttackSuccessSubstate");
		return ptr;
	}



};

// Class TheOni.OniDemonPowerAttackMissSubstate
// 0x0000 (FullSize[0x00E0] - InheritedSize[0x00E0])
class UOniDemonPowerAttackMissSubstate : public UPounceAttackMissSubstate
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheOni.OniDemonPowerAttackMissSubstate");
		return ptr;
	}



};

// Class TheOni.OniDemonPowerAttackObstructSubstate
// 0x0000 (FullSize[0x00E8] - InheritedSize[0x00E8])
class UOniDemonPowerAttackObstructSubstate : public UPounceAttackObstructSubstate
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheOni.OniDemonPowerAttackObstructSubstate");
		return ptr;
	}



};

// Class TheOni.OniPounceInteraction
// 0x0028 (FullSize[0x0650] - InheritedSize[0x0628])
class UOniPounceInteraction : public UChargeableInteractionDefinition
{
public:
	unsigned char                                      UnknownData_IBL8[0x8];                                     // 0x0628(0x0008) Fix Super Size
	unsigned char                                      UnknownData_A4C8[0x8];                                     // 0x0630(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UOniDemonModeAttackStateComponent*           _chargedAttackState;                                       // 0x0638(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDemonModeComponent*                         _demonModeComponent;                                       // 0x0640(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UslasherPlayer*                              _owningSlasher;                                            // 0x0648(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheOni.OniPounceInteraction");
		return ptr;
	}



};

// Class TheOni.RenjirosBloodyGlove
// 0x00B0 (FullSize[0x02C8] - InheritedSize[0x0218])
class URenjirosBloodyGlove : public UItemAddon
{
public:
	unsigned char                                      UnknownData_8QXH[0x8];                                     // 0x0218(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _revealTime;                                               // 0x0220(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_SUL2[0x4];                                     // 0x0224(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<class UcamperPlayer*, class UBloodOrbOverlapRevealToKiller*> _revealEffectPerCamper;                                    // 0x0228(0x0050) (ExportObject, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_NNIT[0x50];                                    // 0x0278(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheOni.RenjirosBloodyGlove");
		return ptr;
	}



	void Authority_OnBloodOrbOverlapBegin(class Uactor* overlappingActor, class UbloodOrb* bloodOrb);
};

// Class TheOni.StartDemonModeInteraction
// 0x0048 (FullSize[0x0670] - InheritedSize[0x0628])
class UStartDemonModeInteraction : public UChargeableInteractionDefinition
{
public:
	unsigned char                                      UnknownData_L5LD[0x8];                                     // 0x0628(0x0008) Fix Super Size
	struct FAnimationMontageDescriptor                 DemonModeActivationMontage;                                // 0x0630(0x0020) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_MTR1[0x20];                                    // 0x0650(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheOni.StartDemonModeInteraction");
		return ptr;
	}



	void SetPlayerOwner(class UdbdPlayer* owner);
	void OnLevelReadyToPlay();
};

// Class TheOni.AbsorbBloodOrbsInteraction
// 0x0040 (FullSize[0x0540] - InheritedSize[0x0500])
class UAbsorbBloodOrbsInteraction : public UinteractionDefinition
{
public:
	unsigned char                                      UnknownData_FI1D[0x40];                                    // 0x0500(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheOni.AbsorbBloodOrbsInteraction");
		return ptr;
	}



	void SetPlayerOwner(class UdbdPlayer* player);
};

// Class TheOni.bloodOrb
// 0x0060 (FullSize[0x0290] - InheritedSize[0x0230])
class UbloodOrb : public Uactor
{
public:
	struct FFloatInterval                              _randomMoveDelayInterval;                                  // 0x0230(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USceneComponent*                             _absorbReference;                                          // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDBDOutlineComponent*                        _outlineComponent;                                         // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _despawnDelay;                                             // 0x0248(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_7QV3[0x4];                                     // 0x024C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TWeakObjectPtr<class UdbdPlayer>                   _droppingPlayer;                                           // 0x0250(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TheOni_EBloodOrbState                              _state;                                                    // 0x0258(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_8C2B[0x7];                                     // 0x0259(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBloodOrbFadeComponent*                      _fadeComponent;                                            // 0x0260(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_Y6WZ[0x28];                                    // 0x0268(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheOni.bloodOrb");
		return ptr;
	}



	void UpdateAttracted_Cosmetic(const struct Fvector& Destination, class UdbdPlayer* absorber, float deltaTime);
	void UpdateAbsorbed_Cosmetic(const struct Fvector& Destination, class UdbdPlayer* absorber, float deltaTime);
	void OnRep_State(TheOni_EBloodOrbState oldState);
	void OnIsAttractedChangedCosmetic(bool isAttracted);
	void OnDestroyedCosmetic();
	void OnAbsorbedCosmetic();
	class UdbdPlayer* GetDroppingPlayer();
	void Authority_OnDropped(class UdbdPlayer* droppedBy, float impulseFactor);
	void Authority_OnDropFinished();
	void Authority_DestroyBloodOrb();
	void Authority_Despawn();
};

// Class TheOni.bloodOrbAbsorberComponent
// 0x0058 (FullSize[0x0110] - InheritedSize[0x00B8])
class UbloodOrbAbsorberComponent : public UactorComponent
{
public:
	struct FScriptMulticastDelegate                    Authority_OnBloodOrbAbsorbed;                              // 0x00B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnIsAbsorbingChanged;                                      // 0x00C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct Fvector                                     AbsorbLocationOffset;                                      // 0x00D8(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_7QA3[0x1C];                                    // 0x00E4(0x001C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UBloodOrbDropperComponent*>           _camperBloodOrbDropperComponents;                          // 0x0100(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheOni.bloodOrbAbsorberComponent");
		return ptr;
	}



	void SetInAbsorbMode(bool inAbsorptionMode);
	bool IsInAbsorbMode();
};

// Class TheOni.BloodOrbCollection
// 0x0048 (FullSize[0x0100] - InheritedSize[0x00B8])
class UBloodOrbCollection : public UactorComponent
{
public:
	TArray<class UbloodOrb*>                           _bloodOrbs;                                                // 0x00B8(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_TLG5[0x38];                                    // 0x00C8(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheOni.BloodOrbCollection");
		return ptr;
	}



};

// Class TheOni.BloodOrbConfiguratorComponent
// 0x0070 (FullSize[0x0128] - InheritedSize[0x00B8])
class UBloodOrbConfiguratorComponent : public UactorComponent
{
public:
	class UClass*                                      _bloodOrbClass;                                            // 0x00B8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FGameEventBloodOrbDropParams>        _bloodOrbDropGameEvents;                                   // 0x00C0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _fadeDuration;                                             // 0x00D0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _initialFadeOutDelay;                                      // 0x00D4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                                _bloodOrbAuraColor;                                        // 0x00D8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                                _bloodOrbAttractedAuraColor;                               // 0x00E8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _bloodOrbVisibilityRangeInterpolationSpeed;                // 0x00F8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ONON[0x4];                                     // 0x00FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      _mobileBloodOrbRendererClass;                              // 0x0100(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_LJHF[0x20];                                    // 0x0108(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheOni.BloodOrbConfiguratorComponent");
		return ptr;
	}



	void UpdateSurvivorBloodOrbVisibilityRange(class UbloodOrbVisibilityComponent* bloodOrbVisibilityComponent, class UdbdPlayer* Killer);
	void UpdateKillerBloodOrbVisiblityRanges(class UbloodOrbVisibilityComponent* bloodOrbVisibilityComponent, class UdbdPlayer* Killer);
	void UpdateBloodOrbAttractSpeed(class UbloodOrbAbsorberComponent* bloodOrbAbsorberComponent, class UdbdPlayer* Killer);
	void OnLevelReadyToPlay();
	void Authority_UpdateSurvivorBloodOrbDropperOnCrouchModifier(class UdbdPlayer* Killer);
};

// Class TheOni.BloodOrbDropperComponent
// 0x0080 (FullSize[0x0138] - InheritedSize[0x00B8])
class UBloodOrbDropperComponent : public UactorComponent
{
public:
	unsigned char                                      UnknownData_KWX4[0x80];                                    // 0x00B8(0x0080) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheOni.BloodOrbDropperComponent");
		return ptr;
	}



	void Debug_Server_DropOrbs(int numOrbs);
	void DBD_DropBloodOrbs(int numOrbs);
	void Authority_SetPaused(bool paused);
	void Authority_OnOwningCamperDamageStateChanged(DeadByDaylight_ECamperDamageState oldState, DeadByDaylight_ECamperDamageState NewState);
	void Authority_OnDropOrbsGameEvent(const struct FgameplayTag& gameEvent, const struct FgameEventData& gameEventData, const struct FBloodOrbDropParams& dropParams);
	void Authority_OnCamperUnhooked(const struct FgameplayTag& gameEvent, const struct FgameEventData& gameEventData);
	void Authority_OnCamperHooked(const struct FgameplayTag& gameEvent, const struct FgameEventData& gameEventData);
	void Authority_OnCamperCrouched(const struct FgameplayTag& gameEvent, const struct FgameEventData& gameEventData);
};

// Class TheOni.BloodOrbFadeComponent
// 0x0008 (FullSize[0x00E0] - InheritedSize[0x00D8])
class UBloodOrbFadeComponent : public UFadeComponent
{
public:
	unsigned char                                      UnknownData_2QFE[0x8];                                     // 0x00D8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheOni.BloodOrbFadeComponent");
		return ptr;
	}



};

// Class TheOni.BloodOrbOverlapComponent
// 0x0040 (FullSize[0x00F8] - InheritedSize[0x00B8])
class UBloodOrbOverlapComponent : public UactorComponent
{
public:
	unsigned char                                      UnknownData_3WLW[0x8];                                     // 0x00B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                _currentOverlappingOrbs;                                   // 0x00C0(0x0004) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_ZJNA[0x34];                                    // 0x00C4(0x0034) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheOni.BloodOrbOverlapComponent");
		return ptr;
	}



	void OnRep_CurrentOverlappingOrbs(int previousOverlappingOrbs);
	void Authority_OnDestroyedBloodOrb(class Uactor* destroyedActor);
	void Authority_OnBloodOrbVisibilityModeChanged(TheOni_EBloodOrbVisibilityMode visibilityMode);
	void Authority_OnBloodOrbEndOverlap(class UprimitiveComponent* hitComponent, class Uactor* otherActor, class UprimitiveComponent* otherComp, int otherBodyIndex);
	void Authority_OnBloodOrbBeginOverlap(class UprimitiveComponent* hitComponent, class Uactor* otherActor, class UprimitiveComponent* otherComp, int otherBodyIndex, bool bFromSweep, const struct FhitResult& sweepResult);
};

// Class TheOni.BloodOrbOverlapRevealToKiller
// 0x0030 (FullSize[0x02D8] - InheritedSize[0x02A8])
class UBloodOrbOverlapRevealToKiller : public UstatusEffect
{
public:
	unsigned char                                      UnknownData_1A9V[0x28];                                    // 0x02A8(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimerObject*                                _revealTimer;                                              // 0x02D0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheOni.BloodOrbOverlapRevealToKiller");
		return ptr;
	}



	class UTimerObject* GetRevealTimer();
};

// Class TheOni.BloodOrbStateMonitorComponent
// 0x0070 (FullSize[0x0128] - InheritedSize[0x00B8])
class UBloodOrbStateMonitorComponent : public UactorComponent
{
public:
	struct FScriptMulticastDelegate                    OnBloodOrbAbsorbedCosmetic;                                // 0x00B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_V8PT[0x60];                                    // 0x00C8(0x0060) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheOni.BloodOrbStateMonitorComponent");
		return ptr;
	}



	void OnBloodOrbStateChanged(TheOni_EBloodOrbState oldState, TheOni_EBloodOrbState NewState, class UbloodOrb* bloodOrb);
	void OnBloodOrbSpawned(class UbloodOrb* bloodOrb);
	void OnBloodOrbDestroyed(class UbloodOrb* bloodOrb);
};

// Class TheOni.BloodOrbUtilities
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UBloodOrbUtilities : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheOni.BloodOrbUtilities");
		return ptr;
	}



	TArray<class UbloodOrb*> STATIC_GetAllBloodOrbs(class UObject* worldContextObject);
};

// Class TheOni.bloodOrbVisibilityComponent
// 0x0038 (FullSize[0x00F0] - InheritedSize[0x00B8])
class UbloodOrbVisibilityComponent : public UactorComponent
{
public:
	unsigned char                                      UnknownData_D7BK[0x38];                                    // 0x00B8(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheOni.bloodOrbVisibilityComponent");
		return ptr;
	}



	void SetVisibilityRange(float visibilityRange);
	void SetVisibilityMode(TheOni_EBloodOrbVisibilityMode visibilityMode);
	void SetShowAttractedBloodOrbsAuras(bool show);
	void SetAuraVisibilityRange(float auraVisibilityRange);
	void OnBloodOrbSpawned(class UbloodOrb* bloodOrb);
};

// Class TheOni.DemonModeComponent
// 0x0118 (FullSize[0x01D0] - InheritedSize[0x00B8])
class UDemonModeComponent : public UactorComponent
{
public:
	struct FScriptMulticastDelegate                    OnDemonModeReady;                                          // 0x00B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnDemonModeStarted;                                        // 0x00C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnDemonModeEnded;                                          // 0x00D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnDemonModeInterruptedDuringStartup;                       // 0x00E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnDemonModeInterruptedDuringEnding;                        // 0x00F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnChargeGainedAfterAttackCosmetic;                         // 0x0108(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnChargeGainedAfterLockerGrabCosmetic;                     // 0x0118(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UPowerChargeComponent*                       _powerChargeComponent;                                     // 0x0128(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPowerToggleComponent*                       _powerToggleComponent;                                     // 0x0130(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UInteractionStarterComponent*                _authority_demonModeCooldownStarterComponent;              // 0x0138(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UinteractionDefinition*                      _demonModeCooldownInteraction;                             // 0x0140(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_CQLY[0x34];                                    // 0x0148(0x0034) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TheOni_EDemonModeState                             _demonModeState;                                           // 0x017C(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_MMQW[0x53];                                    // 0x017D(0x0053) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheOni.DemonModeComponent");
		return ptr;
	}



	bool ShouldLoseDemonModeOnStun();
	void OnPowerChargeFull();
	void OnPowerChargeEmpty();
	void OnIsPowerChanged(bool isInPower);
	void Multicast_DemonModeInterruptedOnStartup();
	void Multicast_DemonModeInterruptedOnEnding();
	bool isInDemonMode();
	TheOni_EDemonModeState GetDemonModeState();
	float GetCurrentCharge();
	float GetChargePercent();
	void DBD_DemonModeForever(bool forever);
	bool CanStartDemonMode();
	void Authority_SetDemonModeCooldownInteraction(class UinteractionDefinition* interaction);
	void Authority_OnLevelReadyToPlay();
	void Authority_OnChargeChanged(float currentChargePercent);
	void Authority_InterruptedMontage(const struct FAnimationMontageDescriptor& montage, bool interrupted);
	void Authority_AddCharge(float chargeAmount);
};

// Class TheOni.DemonModeCooldownInteraction
// 0x0020 (FullSize[0x0520] - InheritedSize[0x0500])
class UDemonModeCooldownInteraction : public UinteractionDefinition
{
public:
	unsigned char                                      UnknownData_UAUF[0x20];                                    // 0x0500(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheOni.DemonModeCooldownInteraction");
		return ptr;
	}



	void SetPlayerOwner(class UdbdPlayer* owner);
	void OnLevelReadyToPlay();
};

// Class TheOni.DemonModeMenuComponent
// 0x0020 (FullSize[0x00D8] - InheritedSize[0x00B8])
class UDemonModeMenuComponent : public UactorComponent
{
public:
	unsigned char                                      UnknownData_1IDC[0x20];                                    // 0x00B8(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheOni.DemonModeMenuComponent");
		return ptr;
	}



	void SetInMenuDemonMode(bool inMenuDemonMode);
};

// Class TheOni.IsPlayerAbsorbingBloodOrbsCondition
// 0x0000 (FullSize[0x0128] - InheritedSize[0x0128])
class UIsPlayerAbsorbingBloodOrbsCondition : public UIsPlayerPerformingInteraction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheOni.IsPlayerAbsorbingBloodOrbsCondition");
		return ptr;
	}



};

// Class TheOni.MobileBloodOrbRenderer
// 0x0090 (FullSize[0x02C0] - InheritedSize[0x0230])
class UMobileBloodOrbRenderer : public Uactor
{
public:
	class UMaterialInstance*                           OrbMaterialInstance;                                       // 0x0230(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstance*                           OutlineMaterialInstance;                                   // 0x0238(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CullInterval;                                              // 0x0240(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IKUZ[0x4];                                     // 0x0244(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UInstancedStaticMeshComponent*               _ismComponent;                                             // 0x0248(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UInstancedStaticMeshComponent*               _outlineIsmComponent;                                      // 0x0250(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<class UbloodOrb*, struct FBloodOrbInfo>       _instanceMap;                                              // 0x0258(0x0050) (Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	class UMaterialInstanceDynamic*                    _outlineMaterialInstanceDynamic;                           // 0x02A8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMaterialInstanceDynamic*                    _orbMaterialInstanceDynamic;                               // 0x02B0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UbloodOrbVisibilityComponent*                _bloodOrbVisibilityComponent;                              // 0x02B8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheOni.MobileBloodOrbRenderer");
		return ptr;
	}



};

// Class TheOni.OniAttackPicker
// 0x0010 (FullSize[0x00C8] - InheritedSize[0x00B8])
class UOniAttackPicker : public USlasherAttackPickerComponent
{
public:
	unsigned char                                      UnknownData_2W9R[0x10];                                    // 0x00B8(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheOni.OniAttackPicker");
		return ptr;
	}



};

// Class TheOni.OniBasicAttack
// 0x0010 (FullSize[0x02F0] - InheritedSize[0x02E0])
class UOniBasicAttack : public UPounceAttack
{
public:
	unsigned char                                      UnknownData_4LKQ[0x10];                                    // 0x02E0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheOni.OniBasicAttack");
		return ptr;
	}



};

// Class TheOni.OniBasicAttackSuccessSubstate
// 0x0000 (FullSize[0x00D8] - InheritedSize[0x00D8])
class UOniBasicAttackSuccessSubstate : public UPounceAttackSuccessSubstate
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheOni.OniBasicAttackSuccessSubstate");
		return ptr;
	}



};

// Class TheOni.OniCustomizationItemAnimInstance
// 0x0020 (FullSize[0x0290] - InheritedSize[0x0270])
class UOniCustomizationItemAnimInstance : public UanimInstance
{
public:
	bool                                               _isInDemonMode;                                            // 0x0270(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_Q1GG[0x1F];                                    // 0x0271(0x001F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheOni.OniCustomizationItemAnimInstance");
		return ptr;
	}



	void SetIsInDemonMode(bool isInDemonMode);
};

// Class TheOni.OniDashInteraction
// 0x0048 (FullSize[0x0670] - InheritedSize[0x0628])
class UOniDashInteraction : public UChargeableInteractionDefinition
{
public:
	class UCurveFloat*                                 _chargingSpeedCurve;                                       // 0x0628(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveFloat*                                 _dashingSpeedCurve;                                        // 0x0630(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _yawAdjustTime;                                            // 0x0638(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_WH3B[0x4];                                     // 0x063C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveFloat*                                 _cooldownSpeedCurve;                                       // 0x0640(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_O9N5[0x28];                                    // 0x0648(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheOni.OniDashInteraction");
		return ptr;
	}



	void SetPlayerOwner(class UdbdPlayer* player);
	void OnLevelReadyToPlay();
	void OnDashEnd(class UdbdPlayer* player);
	void OnDashBegin(class UdbdPlayer* player);
	void OnChargeEnd(class UdbdPlayer* player, bool chargeCompleted);
	void OnChargeBegin(class UdbdPlayer* player);
};

// Class TheOni.OniDemonBasicAttack
// 0x0000 (FullSize[0x02E0] - InheritedSize[0x02E0])
class UOniDemonBasicAttack : public UPounceAttack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheOni.OniDemonBasicAttack");
		return ptr;
	}



};

// Class TheOni.OniDemonPowerAttack
// 0x0020 (FullSize[0x0300] - InheritedSize[0x02E0])
class UOniDemonPowerAttack : public UPounceAttack
{
public:
	unsigned char                                      UnknownData_IX7H[0x20];                                    // 0x02E0(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheOni.OniDemonPowerAttack");
		return ptr;
	}



};

// Class TheOni.OniDemonDashAttack
// 0x0000 (FullSize[0x0300] - InheritedSize[0x0300])
class UOniDemonDashAttack : public UOniDemonPowerAttack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheOni.OniDemonDashAttack");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
