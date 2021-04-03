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

// Class TheExecutioner.TormentTrailPointCollectionComponent
// 0x0048 (FullSize[0x0100] - InheritedSize[0x00B8])
class UTormentTrailPointCollectionComponent : public UactorComponent
{
public:
	unsigned char                                      UnknownData_ZXLP[0x18];                                    // 0x00B8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDBDTunableRowHandle                        _maxNumberOfTrailPointInGame;                              // 0x00D0(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_WEQM[0x8];                                     // 0x00F8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheExecutioner.TormentTrailPointCollectionComponent");
		return ptr;
	}



	void OnTrailAcquireChanged(class UTormentTrailPoint* trailPoint, bool Value);
};

// Class TheExecutioner.TormentTrailSpawnerComponent
// 0x0190 (FullSize[0x0248] - InheritedSize[0x00B8])
class UTormentTrailSpawnerComponent : public UactorComponent
{
public:
	class UTormentTrailController*                     _currentTrailController;                                   // 0x00B8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _restrictionRangeToHooks;                                  // 0x00C0(0x0028) (Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _restrictionRangeToGenerators;                             // 0x00E8(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _restrictionRangeToExitSwitch;                             // 0x0110(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _maxSlopeAngleForTrail;                                    // 0x0138(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _minSlopeAngleForTrail;                                    // 0x0160(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _restrictionRangeToHatch;                                  // 0x0188(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _restrictionMaxVerticalDistance;                           // 0x01B0(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTormentTrailPointCollectionComponent*       _tormentTrailPointCollectionComponent;                     // 0x01D8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTormentTrailPointCollectionComponent*       _restrictedTormentTrailPointCollectionComponent;           // 0x01E0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAuthoritativeActorPoolComponent*            _tormentTrailControllerPool;                               // 0x01E8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAuthoritativeActorPoolComponent*            _tormentRestrictedTrailControllerPool;                     // 0x01F0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_W7V8[0x18];                                    // 0x01F8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class Uactor*>                              _actorsInRange;                                            // 0x0210(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct Fvector                                     _slopeDetectionOverGroundVector;                           // 0x0220(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct Fvector                                     _slopeDetectionEndVector;                                  // 0x022C(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _forwardMultiplierSlopeDetection;                          // 0x0238(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_MZGI[0xC];                                     // 0x023C(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheExecutioner.TormentTrailSpawnerComponent");
		return ptr;
	}



	void Sever_SpawnTrailController(class UTormentTrailController* trailController, const struct FVector_NetQuantize10& location, const struct FRotator& rotation);
	void Server_StopTrailController(class UTormentTrailController* trailController);
	void Server_RequestMoreActorInPool(TheExecutioner_ETrailType trailType);
	void OnLevelReadyToPlay();
	void OnInRangeChanged(bool inRange, class Uactor* actor);
};

// Class TheExecutioner.TrailEffectLastingTimeBaseAddon
// 0x0008 (FullSize[0x0228] - InheritedSize[0x0220])
class UTrailEffectLastingTimeBaseAddon : public USpawnEffectsOnAllSurvivorsBaseAddon
{
public:
	float                                              _trailEffectLastingTimeModifierValue;                      // 0x0220(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_13WI[0x4];                                     // 0x0224(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheExecutioner.TrailEffectLastingTimeBaseAddon");
		return ptr;
	}



};

// Class TheExecutioner.TrailofTorment
// 0x0040 (FullSize[0x0388] - InheritedSize[0x0348])
class UTrailofTorment : public Uperk
{
public:
	unsigned char                                      UnknownData_PDRO[0x18];                                    // 0x0348(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _coolDownDuration[0x3];                                    // 0x0360(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                _highlightPriority;                                        // 0x036C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _isPerkActivated;                                          // 0x0370(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_2U2E[0x7];                                     // 0x0371(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class Ugenerator*                                  _highlightedGenerator;                                     // 0x0378(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UstatusEffect*                               _statusEffect;                                             // 0x0380(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheExecutioner.TrailofTorment");
		return ptr;
	}



	void OnRep_HighlightGenerator(class Ugenerator* _oldHighlightedGenerator);
};

// Class TheExecutioner.TrailPointOutlineUpdateStrategy
// 0x0028 (FullSize[0x0158] - InheritedSize[0x0130])
class UTrailPointOutlineUpdateStrategy : public USourceBasedOutlineUpdateStrategy
{
public:
	struct FDBDTunableRowHandle                        _tormentTrailRevealDistance;                               // 0x0130(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheExecutioner.TrailPointOutlineUpdateStrategy");
		return ptr;
	}



};

// Class TheExecutioner.ActivateTormentModeInteraction
// 0x0018 (FullSize[0x0640] - InheritedSize[0x0628])
class UActivateTormentModeInteraction : public UChargeableInteractionDefinition
{
public:
	unsigned char                                      UnknownData_PVPO[0x8];                                     // 0x0628(0x0008) Fix Super Size
	unsigned char                                      UnknownData_S6F6[0x10];                                    // 0x0630(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheExecutioner.ActivateTormentModeInteraction");
		return ptr;
	}



	void SetTormentMode(class UTormentMode* tormentModeComponent);
};

// Class TheExecutioner.Addon_TormentMode_17
// 0x0008 (FullSize[0x0228] - InheritedSize[0x0220])
class UAddon_TormentMode_17 : public USpawnEffectsOnAllSurvivorsBaseAddon
{
public:
	float                                              _blindnessDuration;                                        // 0x0220(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_AR2D[0x4];                                     // 0x0224(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheExecutioner.Addon_TormentMode_17");
		return ptr;
	}



};

// Class TheExecutioner.Addon_TormentMode_18
// 0x0008 (FullSize[0x0228] - InheritedSize[0x0220])
class UAddon_TormentMode_18 : public USpawnEffectsOnAllSurvivorsBaseAddon
{
public:
	float                                              _obliviousDuration;                                        // 0x0220(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_3IYZ[0x4];                                     // 0x0224(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheExecutioner.Addon_TormentMode_18");
		return ptr;
	}



};

// Class TheExecutioner.Addon_TormentMode_19
// 0x0000 (FullSize[0x0218] - InheritedSize[0x0218])
class UAddon_TormentMode_19 : public UItemAddon
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheExecutioner.Addon_TormentMode_19");
		return ptr;
	}



};

// Class TheExecutioner.Addon_TormentMode_20
// 0x0008 (FullSize[0x0220] - InheritedSize[0x0218])
class UAddon_TormentMode_20 : public UItemAddon
{
public:
	float                                              _lingerDuration;                                           // 0x0218(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_S938[0x4];                                     // 0x021C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheExecutioner.Addon_TormentMode_20");
		return ptr;
	}



};

// Class TheExecutioner.Addon_TormentMode_21
// 0x0010 (FullSize[0x0230] - InheritedSize[0x0220])
class UAddon_TormentMode_21 : public USpawnEffectsOnAllSurvivorsBaseAddon
{
public:
	bool                                               _revealSurvivorsInAgony;                                   // 0x0220(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _revealSurvivorsNotInAgony;                                // 0x0221(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_ZML5[0x2];                                     // 0x0222(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _range;                                                    // 0x0224(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _revealDuration;                                           // 0x0228(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_O82Z[0x4];                                     // 0x022C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheExecutioner.Addon_TormentMode_21");
		return ptr;
	}



};

// Class TheExecutioner.AgonyComponent
// 0x0170 (FullSize[0x0228] - InheritedSize[0x00B8])
class UAgonyComponent : public UactorComponent
{
public:
	unsigned char                                      UnknownData_J5PN[0x10];                                    // 0x00B8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTagStateBool                               _isInAgony;                                                // 0x00C8(0x0030) (Net, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTagStateBool                               _isAgonyMoriable;                                          // 0x00F8(0x0030) (Net, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTunableStat                                _agonyNumberOfHookForMiniMori;                             // 0x0128(0x0040) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_6ITU[0x38];                                    // 0x0168(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               _inAttackTrailDamageCooldown;                              // 0x01A0(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_1DDS[0x7];                                     // 0x01A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTunableStat                                _attackTrailDamageCooldownTime;                            // 0x01A8(0x0040) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_RWL9[0x18];                                    // 0x01E8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FAgonyDisplayFxEvent>                _showAgonyFXEvents;                                        // 0x0200(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FAgonyDisplayFxEvent>                _hideAgonyFXEvents;                                        // 0x0210(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_VQKP[0x8];                                     // 0x0220(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheExecutioner.AgonyComponent");
		return ptr;
	}



	void ShowAgonyBarbWireFX_Cosmetic();
	void Server_SetCanBeAgonyMoried(bool Value);
	void Server_SetAgonyValue(bool Value);
	void OnTrailEffectStop_Cosmetic();
	void OnTrailEffectStart_Cosmetic();
	void OnShowBarbWireFXOnGameEvent(const struct FgameplayTag& GameEventType, const struct FgameEventData& gameEventData);
	void OnRep_IsInAgony();
	void OnLocallyObservedChanged(bool isLocallyObserved);
	void OnHitInAgony_Cosmetic();
	void OnHitByTormentAttackTrail_Cosmetic();
	void OnHideBarbWireFXOnGameEvent(const struct FgameplayTag& GameEventType, const struct FgameEventData& gameEventData);
	void OnAgonyChanged_Cosmetic(bool isInAgony);
	bool isInAgony();
	bool IsAgonyMoriable();
	void HideAgonyBarbWireFX_Cosmetic();
	void Authority_OnDrainStageChanged(int drainStage, class UdbdPlayer* target);
	void Authority_OnAttackTrailDamageCooldownTimerDone();
};

// Class TheExecutioner.AgonyMoriInteraction
// 0x0000 (FullSize[0x0640] - InheritedSize[0x0640])
class UAgonyMoriInteraction : public UKillInteractionDefinition
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheExecutioner.AgonyMoriInteraction");
		return ptr;
	}



};

// Class TheExecutioner.AgonySubAnimInstance
// 0x0010 (FullSize[0x0500] - InheritedSize[0x04F0])
class UAgonySubAnimInstance : public UBaseSurvivorAnimInstance
{
public:
	bool                                               _isInAgony;                                                // 0x04F0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isInTormentTrail;                                         // 0x04F1(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isInTormentTrailEffect;                                   // 0x04F2(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isInDeathBed;                                             // 0x04F3(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isDeadInDeathBed;                                         // 0x04F4(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isInStruggleInDeathBed;                                   // 0x04F5(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_3U22[0xA];                                     // 0x04F6(0x000A) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheExecutioner.AgonySubAnimInstance");
		return ptr;
	}



};

// Class TheExecutioner.BaseTormentTrailPoint
// 0x00B8 (FullSize[0x02E8] - InheritedSize[0x0230])
class UBaseTormentTrailPoint : public Uactor
{
public:
	unsigned char                                      UnknownData_M1YS[0x18];                                    // 0x0230(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USphereComponent*                            _collisionComponent;                                       // 0x0248(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _collisionRadius;                                          // 0x0250(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_YE7K[0x4];                                     // 0x0254(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTunableStat                                _tormentTrailAliveTime;                                    // 0x0258(0x0040) (Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_1RYL[0x30];                                    // 0x0298(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USplineMeshComponent*                        _splineMeshComponent;                                      // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UStaticMesh*>                         _trailMeshList;                                            // 0x02D0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      _indexInTrail;                                             // 0x02E0(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_UPP3[0x7];                                     // 0x02E1(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheExecutioner.BaseTormentTrailPoint");
		return ptr;
	}



	void EndOfDisapearCosmetic();
	void DisappearCosmetic();
};

// Class TheExecutioner.BloodPact
// 0x0078 (FullSize[0x03C0] - InheritedSize[0x0348])
class UBloodPact : public Uperk
{
public:
	unsigned char                                      UnknownData_5JEQ[0x18];                                    // 0x0348(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               _dyingToInjured;                                           // 0x0360(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _fullHealthStateOnly;                                      // 0x0361(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_DV0V[0x2];                                     // 0x0362(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _hasteEffectRange;                                         // 0x0364(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _hasteEffectMovementSpeedIncrease[0x3];                    // 0x0368(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_ZYY9[0x4];                                     // 0x0374(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UstatusEffect*                               _ownerStatusEffect;                                        // 0x0378(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UstatusEffect*                               _obsessionStatusEffect;                                    // 0x0380(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UstatusEffect*                               _ownerHasteStatusEffect;                                   // 0x0388(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UstatusEffect*                               _otherPlayerHasteStatusEffect;                             // 0x0390(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UdbdPlayer*                                  _otherPlayer;                                              // 0x0398(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_7C09[0x20];                                    // 0x03A0(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheExecutioner.BloodPact");
		return ptr;
	}



	void Authority_OnInRangeChanged(bool inRange);
};

// Class TheExecutioner.BloodPactEffect
// 0x0000 (FullSize[0x02A8] - InheritedSize[0x02A8])
class UBloodPactEffect : public UstatusEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheExecutioner.BloodPactEffect");
		return ptr;
	}



};

// Class TheExecutioner.deathBedAnticampComponent
// 0x00D8 (FullSize[0x0190] - InheritedSize[0x00B8])
class UdeathBedAnticampComponent : public UactorComponent
{
public:
	unsigned char                                      UnknownData_NPET[0x48];                                    // 0x00B8(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDBDTunableRowHandle                        _anticampZoneDistance;                                     // 0x0100(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _anticampZoneTimeToTrigger;                                // 0x0128(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_K2PE[0x40];                                    // 0x0150(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheExecutioner.deathBedAnticampComponent");
		return ptr;
	}



	void Multicast_TriggerDeathBedRelocate();
	void Authority_OnInRangeChanged(bool inRange);
};

// Class TheExecutioner.DeathBedInteractable
// 0x0140 (FullSize[0x0418] - InheritedSize[0x02D8])
class UDeathBedInteractable : public Uinteractable
{
public:
	unsigned char                                      UnknownData_PXS3[0x10];                                    // 0x02D8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USceneComponent*                             _root;                                                     // 0x02E8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UcamperPlayer*                               _inDeathBedCamper;                                         // 0x02F0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UchargeableComponent*                        _rescueChargeableComponent;                                // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UskeletalMeshComponent*                      _deathBedSkeletalMesh;                                     // 0x0300(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBoxComponent*                               _interactionZone;                                          // 0x0308(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBoxComponent*                               _playerOverlapZone;                                        // 0x0310(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMontagePlayer*                              _montagePlayer;                                            // 0x0318(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_MO8L[0x18];                                    // 0x0320(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBoxComponent*                               _deathBedCollision;                                        // 0x0338(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_SW7E[0x28];                                    // 0x0340(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimationMontageSlave*                      _animationMontageSlave;                                    // 0x0368(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAnimMontage*                                _montageToPlay;                                            // 0x0370(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_C6GO[0x4];                                     // 0x0378(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct Fvector                                     _rescuerSnapPosition;                                      // 0x037C(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UdeathBedAnticampComponent*                  _deathBedAnticampComponent;                                // 0x0388(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_50HI[0x40];                                    // 0x0390(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDBDTunableRowHandle                        _anticampDrainCooldownTime;                                // 0x03D0(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_UCXN[0x18];                                    // 0x03F8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAIPerceptionStimuliSourceComponent*         _perceptionStimuliComponent;                               // 0x0410(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheExecutioner.DeathBedInteractable");
		return ptr;
	}



	void TeleportCamperToDeathBed();
	void StartPlayerAbsorbedByGround();
	void SetInDeathBedCamper(class UcamperPlayer* camperPlayer);
	void PlayerOverlapZoneEndOverlap(class UprimitiveComponent* overlappedComponent, class Uactor* otherActor, class UprimitiveComponent* otherComp, int otherBodyIndex);
	void PlayerOverlapZoneBeginOverlap(class UprimitiveComponent* overlappedComponent, class Uactor* otherActor, class UprimitiveComponent* otherComp, int otherBodyIndex, bool bFromSweep, const struct FhitResult& sweepResult);
	void OnSkillCheckFailed_Cosmetic();
	void OnRescueCancelled();
	void OnRelocateStart_Cosmetic();
	void OnDeathBedDeathEnd();
	void Multicast_RelocateToOtherDeathBed(class UDeathBedInteractable* DeathBed, class UcamperPlayer* camperPlayer);
	struct Fvector GetRescuerSnapPosition();
	class UMontagePlayer* GetMontagePlayer();
	class UcamperPlayer* GetInDeathBedCamper();
	void FX_SurvivorSavedFromDeathBed();
	void FX_DeathBedAppear();
	void DeathBedDisappear();
	bool CanRescueSurvivor();
	void ActivateDeathBed(bool Value);
};

// Class TheExecutioner.DeathBedOutlineUpdateStrategy
// 0x0000 (FullSize[0x0130] - InheritedSize[0x0130])
class UDeathBedOutlineUpdateStrategy : public USourceBasedOutlineUpdateStrategy
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheExecutioner.DeathBedOutlineUpdateStrategy");
		return ptr;
	}



};

// Class TheExecutioner.DeathBedRescueInteraction
// 0x0038 (FullSize[0x0660] - InheritedSize[0x0628])
class UDeathBedRescueInteraction : public UChargeableInteractionDefinition
{
public:
	unsigned char                                      UnknownData_IWHV[0x8];                                     // 0x0628(0x0008) Fix Super Size
	struct FDBDTunableRowHandle                        _loudNoiseRange;                                           // 0x0630(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_WJFC[0x8];                                     // 0x0658(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheExecutioner.DeathBedRescueInteraction");
		return ptr;
	}



	struct Fvector GetRescuerSnapPosition();
};

// Class TheExecutioner.Deathbound
// 0x0058 (FullSize[0x03A0] - InheritedSize[0x0348])
class UDeathbound : public Uperk
{
public:
	float                                              _distanceFromRescuedSurvivorForOblivious[0x3];             // 0x0348(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _activationDuration;                                       // 0x0354(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _rescueDistanceFromKillerToActivate;                       // 0x0358(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_G5WT[0x4];                                     // 0x035C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _revealLocationDuration;                                   // 0x0360(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _unhook;                                                   // 0x0364(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _fromDyingState;                                           // 0x0365(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_EOQ1[0x2];                                     // 0x0366(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UstatusEffect*>                       _obliviousStatusEffects;                                   // 0x0368(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_RARO[0x10];                                    // 0x0378(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UdbdPlayer*>                          _survivorsToReveal;                                        // 0x0388(0x0010) (Net, ZeroConstructor, Transient, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_VBJX[0x8];                                     // 0x0398(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheExecutioner.Deathbound");
		return ptr;
	}



	void OnRep_SurvivorsToReveal();
	void MakeSurvivorScream(class UcamperPlayer* Survivor);
	float GetRevealLocationDuration();
};

// Class TheExecutioner.ExecutionerTormentAttack
// 0x0000 (FullSize[0x02E0] - InheritedSize[0x02E0])
class UExecutionerTormentAttack : public UPounceAttack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheExecutioner.ExecutionerTormentAttack");
		return ptr;
	}



	void Server_TormentTryHitTargetNotInCoolDown(class UdbdPlayer* target);
	void Multicast_TormentHitTarget(class UdbdPlayer* target);
};

// Class TheExecutioner.ExecutionerTormentAttackSuccessSubstate
// 0x0000 (FullSize[0x00D8] - InheritedSize[0x00D8])
class UExecutionerTormentAttackSuccessSubstate : public UPounceAttackSuccessSubstate
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheExecutioner.ExecutionerTormentAttackSuccessSubstate");
		return ptr;
	}



};

// Class TheExecutioner.ExecutionerTormentAttackMissSubstate
// 0x0000 (FullSize[0x00E0] - InheritedSize[0x00E0])
class UExecutionerTormentAttackMissSubstate : public UPounceAttackMissSubstate
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheExecutioner.ExecutionerTormentAttackMissSubstate");
		return ptr;
	}



};

// Class TheExecutioner.ExecutionerTormentAttackObstructSubstate
// 0x0000 (FullSize[0x00E8] - InheritedSize[0x00E8])
class UExecutionerTormentAttackObstructSubstate : public UPounceAttackObstructSubstate
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheExecutioner.ExecutionerTormentAttackObstructSubstate");
		return ptr;
	}



};

// Class TheExecutioner.ForcedPenance
// 0x0010 (FullSize[0x0358] - InheritedSize[0x0348])
class UForcedPenance : public Uperk
{
public:
	float                                              _perkActivationDuration[0x3];                              // 0x0348(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _applyOblivious;                                           // 0x0354(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _applyBroken;                                              // 0x0355(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_9EG3[0x2];                                     // 0x0356(0x0002) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheExecutioner.ForcedPenance");
		return ptr;
	}



};

// Class TheExecutioner.MobileTormentTrailRenderer
// 0x0080 (FullSize[0x02B0] - InheritedSize[0x0230])
class UMobileTormentTrailRenderer : public Uactor
{
public:
	class UInstancedStaticMeshComponent*               _pillarIsmComponent;                                       // 0x0230(0x0008) (Edit, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UInstancedStaticMeshComponent*               _wireIsmComponent;                                         // 0x0238(0x0008) (Edit, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UInstancedStaticMeshComponent*               _trailIsmComponent;                                        // 0x0240(0x0008) (Edit, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UInstancedStaticMeshComponent*               _pillarOutlineIsmComponent;                                // 0x0248(0x0008) (Edit, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UInstancedStaticMeshComponent*               _wireOutlineIsmComponent;                                  // 0x0250(0x0008) (Edit, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<class UBaseTormentTrailPoint*, struct FTormentTrailPointInfo> _instanceMap;                                              // 0x0258(0x0050) (Transient, NativeAccessSpecifierPrivate)
	class UMaterialInstanceDynamic*                    _trailMaterialInstanceDynamic;                             // 0x02A8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheExecutioner.MobileTormentTrailRenderer");
		return ptr;
	}



	void Multicast_RemoveInstance(class UBaseTormentTrailPoint* trailPoint);
	void Multicast_AddInstance(class UBaseTormentTrailPoint* trailPoint, bool isAttackTrailPoint);
};

// Class TheExecutioner.RepressedAlliance
// 0x0070 (FullSize[0x03B8] - InheritedSize[0x0348])
class URepressedAlliance : public Uperk
{
public:
	struct FSecondaryInteractionProperties             _secondaryActionProperties;                                // 0x0348(0x0030) (Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	float                                              _repairTimesNeededToActivate[0x3];                         // 0x0378(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _generatorBlockDuration;                                   // 0x0384(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UinteractionDefinition*                      _currentRepairInteractionWithAbility;                      // 0x0388(0x0008) (ExportObject, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_UXS2[0x18];                                    // 0x0390(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class Ugenerator*                                  _blockedGenerator;                                         // 0x03A8(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_0DI9[0x8];                                     // 0x03B0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheExecutioner.RepressedAlliance");
		return ptr;
	}



	void Server_OnActionInputPressed(class Ugenerator* generator);
	void OnRep_CurrentRepairInteractionWithAbility(class UinteractionDefinition* oldRepairInteraction);
	void OnRep_BlockedGenerator(class Ugenerator* oldGenerator);
};

// Class TheExecutioner.SendToDeathBedInteraction
// 0x0018 (FullSize[0x0640] - InheritedSize[0x0628])
class USendToDeathBedInteraction : public UChargeableInteractionDefinition
{
public:
	unsigned char                                      UnknownData_GL29[0x8];                                     // 0x0628(0x0008) Fix Super Size
	class UDeathBedInteractable*                       _deathBed;                                                 // 0x0630(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_DYEF[0x8];                                     // 0x0638(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheExecutioner.SendToDeathBedInteraction");
		return ptr;
	}



	void Multicast_SendCamperToDeathBed(class UDeathBedInteractable* DeathBed);
	class UcamperPlayer* GetOwningSurvivor();
	void FX_InteractionStart();
	void FX_InteractionCancel();
};

// Class TheExecutioner.SoulGuard
// 0x0018 (FullSize[0x0360] - InheritedSize[0x0348])
class USoulGuard : public Uperk
{
public:
	bool                                               _recover;                                                  // 0x0348(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_V66W[0x3];                                     // 0x0349(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _enduranceEffectDuration[0x3];                             // 0x034C(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_BMR3[0x8];                                     // 0x0358(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheExecutioner.SoulGuard");
		return ptr;
	}



	void Authority_ShowOnKOPreventedFX();
	void Authority_OnSurvivorHealed(const struct FCamperHealResult& healResult);
};

// Class TheExecutioner.TormentTrailDetectorComponent
// 0x0100 (FullSize[0x01B8] - InheritedSize[0x00B8])
class UTormentTrailDetectorComponent : public UactorComponent
{
public:
	unsigned char                                      UnknownData_0NY5[0x18];                                    // 0x00B8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UTormentTrailPoint*>                  _overlappedTrailPoints;                                    // 0x00D0(0x0010) (ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FTagStateBool                               _isInTormentTrail;                                         // 0x00E0(0x0030) (Net, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FTagStateBool                               _isInTormentTrailEffect;                                   // 0x0110(0x0030) (Net, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_Y36J[0x8];                                     // 0x0140(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTunableStat                                _inTormentTrailLastingEffectTime;                          // 0x0148(0x0040) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_68G3[0x30];                                    // 0x0188(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheExecutioner.TormentTrailDetectorComponent");
		return ptr;
	}



};

// Class TheExecutioner.SurvivorTormentTrailDetector
// 0x0018 (FullSize[0x01D0] - InheritedSize[0x01B8])
class USurvivorTormentTrailDetector : public UTormentTrailDetectorComponent
{
public:
	unsigned char                                      UnknownData_RYXS[0x18];                                    // 0x01B8(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheExecutioner.SurvivorTormentTrailDetector");
		return ptr;
	}



};

// Class TheExecutioner.TheExecutionerAnimInstance
// 0x0088 (FullSize[0x0630] - InheritedSize[0x05A8])
class UTheExecutionerAnimInstance : public UKillerAnimInstance
{
public:
	unsigned char                                      UnknownData_ACYI[0x4];                                     // 0x05A8(0x0004) Fix Super Size
	float                                              _tormentModeVerticalInput;                                 // 0x05AC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _tormentModeHorizontalInput;                               // 0x05B0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_W01C[0x7C];                                    // 0x05B4(0x007C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheExecutioner.TheExecutionerAnimInstance");
		return ptr;
	}



	void NoInputFeedbackCosmetic();
};

// Class TheExecutioner.TheExecutionerCheatComponent
// 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
class UTheExecutionerCheatComponent : public UactorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheExecutioner.TheExecutionerCheatComponent");
		return ptr;
	}



	void DBD_SetCanBeAgonyMoriedOnLocallyControlledPlayer(bool Value);
	void DBD_SetAgonyOnLocallyControlledPlayer(bool Value);
	void DBD_LocalKillSurvivorInDeathBed();
	void DBD_DisplayAllDeathBed(bool Value);
	void DBD_DeathBedPlayStruggleHitReaction();
};

// Class TheExecutioner.TrailControllerBase
// 0x0070 (FullSize[0x02A0] - InheritedSize[0x0230])
class UTrailControllerBase : public Uactor
{
public:
	class UTormentTrailPointCollectionComponent*       _tormentTrailPointCollection;                              // 0x0230(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FTunableStat                                _distanceBetweenTormentTrailPoint;                         // 0x0238(0x0040) (Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UsplineComponent*                            _splineComponent;                                          // 0x0278(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_IU1J[0x10];                                    // 0x0280(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAuthoritativePoolableActorComponent*        _poolableComponent;                                        // 0x0290(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TheExecutioner_ETrailType                          _trailType;                                                // 0x0298(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_NY1G[0x7];                                     // 0x0299(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheExecutioner.TrailControllerBase");
		return ptr;
	}



	void RemoveTormentTrailController();
	void OnTrailPointDeath(class UBaseTormentTrailPoint* baseTrailPoint);
	void OnAcquireChanged(bool acquired);
	void ActivateCosmetic(bool Value);
};

// Class TheExecutioner.TormentAttackTrailController
// 0x0180 (FullSize[0x0420] - InheritedSize[0x02A0])
class UTormentAttackTrailController : public UTrailControllerBase
{
public:
	class UClass*                                      _tormentTrailAttackPointClass;                             // 0x02A0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UClass*                                      _tormentTrailAttackSign;                                   // 0x02A8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTunableStat                                _trailSpawnDelay;                                          // 0x02B0(0x0040) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTunableStat                                _timeIntervalBetweenPointsSpawn;                           // 0x02F0(0x0040) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTunableStat                                _attackTrailLenght;                                        // 0x0330(0x0040) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTunableStat                                _consideredAsSlopeAngle;                                   // 0x0370(0x0040) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FTransform>                          _pointsTransform;                                          // 0x03B0(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct Fvector                                     _slopeDetectionOverGroundVector;                           // 0x03C0(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct Fvector                                     _groundDetectionEndVector;                                 // 0x03CC(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct Fvector                                     _slopeCompensationVector;                                  // 0x03D8(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_9GKK[0x1C];                                    // 0x03E4(0x001C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FSpawnedAttackPoint>                 _spawnedAttackPointList;                                   // 0x0400(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _trailSpawnStarted;                                        // 0x0410(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_15IW[0x3];                                     // 0x0411(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _soundDistanceOnTrail;                                     // 0x0414(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMobileTormentTrailRenderer*                 _mobileTormentTrailRenderer;                               // 0x0418(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheExecutioner.TormentAttackTrailController");
		return ptr;
	}



	void OnTrailPointRemovedCosmetic(int index);
	void OnStartTrailTimerDone();
	void OnIntervalBetweenPointsTimerDone();
	void OnAttackTrailStartCosmetic();
	void Multicast_StartAttackTrail(float serverTimeSpawn, const struct FVector_NetQuantize10& location, const struct FRotator& rotation);
	void DisplayAttackTrailSpawnSign();
};

// Class TheExecutioner.TormentAttackTrailPoint
// 0x0058 (FullSize[0x0340] - InheritedSize[0x02E8])
class UTormentAttackTrailPoint : public UBaseTormentTrailPoint
{
public:
	unsigned char                                      UnknownData_ZCEM[0x30];                                    // 0x02E8(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDBDTunableRowHandle                        _attackPointDelayToEnableCollision;                        // 0x0318(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheExecutioner.TormentAttackTrailPoint");
		return ptr;
	}



	void DisplayTrailSplineMesh(class UsplineComponent* splinemesh, int indexInTrail);
};

// Class TheExecutioner.TormentMode
// 0x04C0 (FullSize[0x08E0] - InheritedSize[0x0420])
class UTormentMode : public Ucollectable
{
public:
	unsigned char                                      UnknownData_AA3E[0x78];                                    // 0x0420(0x0078) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UchargeableComponent*                        _activateTormentModeCharge;                                // 0x0498(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPowerChargeComponent*                       _tormentModeCharge;                                        // 0x04A0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_BW5H[0x8];                                     // 0x04A8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPowerChargePresentationItemProgressComponent* _tormentModeChargePresentation;                            // 0x04B0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPowerToggleComponent*                       _powerToggleComponent;                                     // 0x04B8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTormentTrailSpawnerComponent*               _tormentTrailSpawnerComponent;                             // 0x04C0(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTormentTrailPointCollectionComponent*       _tormentTrailPointCollectionComponent;                     // 0x04C8(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTormentTrailPointCollectionComponent*       _restrictedTormentTrailPointCollectionComponent;           // 0x04D0(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAuthoritativeActorPoolComponent*            _tormentTrailControllerPool;                               // 0x04D8(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAuthoritativeActorPoolComponent*            _tormentAttackTrailControllerPool;                         // 0x04E0(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAuthoritativeActorPoolComponent*            _restrictedTormentTrailControllerPool;                     // 0x04E8(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAuthoritativeActorPoolComponent*            _tormentTrailPointPool;                                    // 0x04F0(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAuthoritativeActorPoolComponent*            _restrictedTormentTrailPointPool;                          // 0x04F8(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTunableStat                                _activateTormentModeSecondsToCharge;                       // 0x0500(0x0040) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTunableStat                                _tormentModeMaxCharge;                                     // 0x0540(0x0040) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTunableStat                                _tormentModeChargeRate;                                    // 0x0580(0x0040) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTunableStat                                _tormentModeDischargeRate;                                 // 0x05C0(0x0040) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTunableStat                                _tormentModePauseChargeRate;                               // 0x0600(0x0040) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _tormentModeAttackConsumePower;                            // 0x0640(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _tormentModeMinimumPercentToActivate;                      // 0x0668(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTunableStat                                _tormentModeMouseYawScale;                                 // 0x0690(0x0040) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTunableStat                                _tormentModeYawAdjustTime;                                 // 0x06D0(0x0040) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTunableStat                                _tormentModeGamePadYawScale;                               // 0x0710(0x0040) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _tormentModeYawInputLimit;                                 // 0x0750(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTunableStat                                _tormentModeNotMovingYawScaleMultiplier;                   // 0x0778(0x0040) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTunableStat                                _tormentModeNotMovingYawAdjustTime;                        // 0x07B8(0x0040) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTunableStat                                _tormentModeWalkSpeed;                                     // 0x07F8(0x0040) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTunableStat                                _normalWalkSpeed;                                          // 0x0838(0x0040) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _tormentModeForcedPitch;                                   // 0x0878(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UClass*                                      _agonyComponentClass;                                      // 0x08A0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_HLD9[0x10];                                    // 0x08A8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      _killerTormentTrailDetectorClass;                          // 0x08B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UClass*                                      _survivorTormentTrailDetectorClass;                        // 0x08C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTormentModeCooldownInteraction*             _tormentModeCooldownInteraction;                           // 0x08C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCurveFloat*                                 _tormentModeChargeSpeedCurve;                              // 0x08D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UClass*                                      _mobileTormentTrailRendererClass;                          // 0x08D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheExecutioner.TormentMode");
		return ptr;
	}



	void Server_RequestMoreActorInAttackPool();
	void OnTormentModeStop_Cosmetic();
	void OnTormentModeStart_Cosmetic();
	void OnTormentModeChargeEmpty();
	bool IsInTormentMode();
};

// Class TheExecutioner.TormentModeCooldownInteraction
// 0x0080 (FullSize[0x0580] - InheritedSize[0x0500])
class UTormentModeCooldownInteraction : public UinteractionDefinition
{
public:
	struct FDBDTunableRowHandle                        _tormentModeCooldownTime;                                  // 0x0500(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _tormentModeCancelWalkSpeed;                               // 0x0528(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _normalWalkSpeed;                                          // 0x0550(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_URE5[0x8];                                     // 0x0578(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheExecutioner.TormentModeCooldownInteraction");
		return ptr;
	}



};

// Class TheExecutioner.Tormentor
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UTormentor : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheExecutioner.Tormentor");
		return ptr;
	}



	struct Fvector GetTormentTrailSpawnPoint();
	struct Fvector GetTormentTrailAttackSpawnPoint();
};

// Class TheExecutioner.TormentTrailController
// 0x0128 (FullSize[0x03C8] - InheritedSize[0x02A0])
class UTormentTrailController : public UTrailControllerBase
{
public:
	struct FReplicatedTrailPointList                   _trailPointList;                                           // 0x02A0(0x0120) (Net, NativeAccessSpecifierPrivate)
	class UMobileTormentTrailRenderer*                 _mobileTormentTrailRenderer;                               // 0x03C0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheExecutioner.TormentTrailController");
		return ptr;
	}



	void Server_SpawnTormentTrailPoint(class UTormentTrailPoint* trailPoint, const struct FVector_NetQuantize10& location, const struct FRotator& rotation);
};

// Class TheExecutioner.TormentTrailPoint
// 0x0030 (FullSize[0x0318] - InheritedSize[0x02E8])
class UTormentTrailPoint : public UBaseTormentTrailPoint
{
public:
	unsigned char                                      UnknownData_YYYW[0x18];                                    // 0x02E8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAuthoritativePoolableActorComponent*        _poolableComponent;                                        // 0x0300(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_BQT5[0x8];                                     // 0x0308(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _splineMeshOverlapDistance;                                // 0x0310(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_WWOQ[0x4];                                     // 0x0314(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheExecutioner.TormentTrailPoint");
		return ptr;
	}



	void Server_RemoveTrailPoint();
	void RefreshTrailPointCosmetic(TheExecutioner_ETrailPointRefreshReason trailPointRefreshReason);
	void OnAcquireChanged(bool acquired);
	void Multicast_TriggerTrailPointDisappear();
	void GetTrailLocationAndTangeant(int indexInTrail, class UsplineComponent* splineComponent, struct Fvector* outStartLocation, struct Fvector* outStartTangent, struct Fvector* outEndLocation, struct Fvector* outEndTangent);
	void AddTrailCosmetic(class UsplineComponent* splineComponent, unsigned char indexInTrail);
	void ActivateCosmetic(bool Value);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
