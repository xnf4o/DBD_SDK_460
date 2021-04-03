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

// Class DBDInteraction.ThrowRockInteraction
// 0x0000 (FullSize[0x0500] - InheritedSize[0x0500])
class UThrowRockInteraction : public UinteractionDefinition
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDInteraction.ThrowRockInteraction");
		return ptr;
	}



};

// Class DBDInteraction.HookSurvivorDefinition
// 0x0008 (FullSize[0x0630] - InheritedSize[0x0628])
class UHookSurvivorDefinition : public UChargeableInteractionDefinition
{
public:
	class UcamperPlayer*                               _survivorBeingHooked;                                      // 0x0628(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDInteraction.HookSurvivorDefinition");
		return ptr;
	}



	class UMeatHook* GetMeatHook();
};

// Class DBDInteraction.LinkedVomitInteraction
// 0x0028 (FullSize[0x0650] - InheritedSize[0x0628])
class ULinkedVomitInteraction : public UChargeableInteractionDefinition
{
public:
	unsigned char                                      UnknownData_OFBF[0x8];                                     // 0x0628(0x0008) Fix Super Size
	unsigned char                                      UnknownData_G8ZB[0x14];                                    // 0x0630(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               _chargeComplete;                                           // 0x0644(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_ZFO5[0xB];                                     // 0x0645(0x000B) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDInteraction.LinkedVomitInteraction");
		return ptr;
	}



	bool IsVomiting();
	bool IsChargeComplete();
	class UVomitStateComponent* GetVomitStateComponent();
};

// Class DBDInteraction.LockerFakeEnterInteraction
// 0x0040 (FullSize[0x0540] - InheritedSize[0x0500])
class ULockerFakeEnterInteraction : public UinteractionDefinition
{
public:
	float                                              _lockerInteractionBlockTime;                               // 0x0500(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_9M91[0x4];                                     // 0x0504(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ULocker*                                     _owningLocker;                                             // 0x0508(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _fakeEnterLoudNoiseRange;                                  // 0x0510(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_VN6C[0x8];                                     // 0x0538(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDInteraction.LockerFakeEnterInteraction");
		return ptr;
	}



};

// Class DBDInteraction.SearchChestInteractionBase
// 0x0020 (FullSize[0x0648] - InheritedSize[0x0628])
class USearchChestInteractionBase : public UChargeableInteractionDefinition
{
public:
	struct FgameplayTag                                _searchableCompleteContributionPercentTag;                 // 0x0628(0x000C) (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _scoreEventFired;                                          // 0x0634(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_NR9I[0x3];                                     // 0x0635(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USearchable*                                 _owningChest;                                              // 0x0638(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _onLastInteractionWasComplete;                             // 0x0640(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_R3JQ[0x7];                                     // 0x0641(0x0007) Fix Super Size


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDInteraction.SearchChestInteractionBase");
		return ptr;
	}



	void FireChestScoreEvent(class UdbdPlayer* player);
};

// Class DBDInteraction.OpenChestInteraction
// 0x0028 (FullSize[0x0670] - InheritedSize[0x0648])
class UOpenChestInteraction : public USearchChestInteractionBase
{
public:
	struct FgameplayTag                                _camperSearchablePercentTag;                               // 0x0648(0x000C) (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_F9N4[0x4];                                     // 0x0654(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimSequence*                               _successExitTimeAnimSequenceReference;                     // 0x0658(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _startTime;                                                // 0x0660(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_98QM[0xC];                                     // 0x0664(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDInteraction.OpenChestInteraction");
		return ptr;
	}



	void CollectItemIfEmptyHanded(class Ucollectable* collectable, class UdbdPlayer* player);
};

// Class DBDInteraction.PalletPullUpInteraction
// 0x0018 (FullSize[0x0640] - InheritedSize[0x0628])
class UPalletPullUpInteraction : public UChargeableInteractionDefinition
{
public:
	unsigned char                                      UnknownData_43S7[0x8];                                     // 0x0628(0x0008) Fix Super Size
	class Upallet*                                     _owningPallet;                                             // 0x0630(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_BUFF[0x8];                                     // 0x0638(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDInteraction.PalletPullUpInteraction");
		return ptr;
	}



};

// Class DBDInteraction.SearchOpenedChestInteraction
// 0x0008 (FullSize[0x0650] - InheritedSize[0x0648])
class USearchOpenedChestInteraction : public USearchChestInteractionBase
{
public:
	unsigned char                                      UnknownData_6YE2[0x8];                                     // 0x0648(0x0008) Fix Super Size


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDInteraction.SearchOpenedChestInteraction");
		return ptr;
	}



};

// Class DBDInteraction.SetGroundPortalInteraction
// 0x0018 (FullSize[0x0640] - InheritedSize[0x0628])
class USetGroundPortalInteraction : public UChargeableInteractionDefinition
{
public:
	class UPortalPlacerStateComponent*                 _portalPlacerState;                                        // 0x0628(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UObjectPlacerComponent*                      _trapPlacerComponent;                                      // 0x0630(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UClass*                                      _portalClassToSpawn;                                       // 0x0638(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDInteraction.SetGroundPortalInteraction");
		return ptr;
	}



};

// Class DBDInteraction.SetTrapInteraction
// 0x0068 (FullSize[0x0690] - InheritedSize[0x0628])
class USetTrapInteraction : public UChargeableInteractionDefinition
{
public:
	struct FSocketOrBoneCache                          _dropSocket;                                               // 0x0628(0x0060) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_KUK1[0x8];                                     // 0x0688(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDInteraction.SetTrapInteraction");
		return ptr;
	}



};

// Class DBDInteraction.SleepingChestAnimInstance
// 0x0010 (FullSize[0x0290] - InheritedSize[0x0280])
class USleepingChestAnimInstance : public USleepingAnimInstance
{
public:
	bool                                               _isObjectSpawned;                                          // 0x0280(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_EU8O[0xF];                                     // 0x0281(0x000F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDInteraction.SleepingChestAnimInstance");
		return ptr;
	}



	void SetObjectSpawned(bool isObjectSpawned);
};

// Class DBDInteraction.TeleportToDemogorgonPortalInteraction
// 0x00A8 (FullSize[0x06D0] - InheritedSize[0x0628])
class UTeleportToDemogorgonPortalInteraction : public UChargeableInteractionDefinition
{
public:
	unsigned char                                      UnknownData_GYLI[0x4];                                     // 0x0628(0x0004) Fix Super Size
	float                                              _cancelTeleportingPhaseDuration;                           // 0x062C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPortalTargetingComponent*                   _portalTargetingComponent;                                 // 0x0630(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPortalPlacerStateComponent*                 _portalPlacerState;                                        // 0x0638(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDemogorgonPortal*                           _startingPortal;                                           // 0x0640(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDemogorgonPortal*                           _targetedPortal;                                           // 0x0648(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UdbdPlayer*                                  _interactingPlayer;                                        // 0x0650(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_NCPU[0x60];                                    // 0x0658(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class Uactor*                                      _huskRef;                                                  // 0x06B8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UClass*                                      ClassToSpawnForHusk;                                       // 0x06C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_LN7P[0x8];                                     // 0x06C8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDInteraction.TeleportToDemogorgonPortalInteraction");
		return ptr;
	}



	void OnTeleportInteractionCanceledVFX();
	void OnSlasherSet(class UslasherPlayer* slasher);
};

// Class DBDInteraction.ThrowInteraction
// 0x0010 (FullSize[0x0638] - InheritedSize[0x0628])
class UThrowInteraction : public UChargeableInteractionDefinition
{
public:
	class UCurveFloat*                                 _throwCancelledSpeedCurve;                                 // 0x0628(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _throwCancellationExitTime;                                // 0x0630(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_AT09[0x4];                                     // 0x0634(0x0004) Fix Super Size


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDInteraction.ThrowInteraction");
		return ptr;
	}



	void InitThrowCancellationExitTime(float Value);
	bool HasCancelledThrow();
};

// Class DBDInteraction.ActivePhaseWalkInteraction
// 0x0028 (FullSize[0x0650] - InheritedSize[0x0628])
class UActivePhaseWalkInteraction : public UChargeableInteractionDefinition
{
public:
	unsigned char                                      UnknownData_38WO[0x8];                                     // 0x0628(0x0008) Fix Super Size
	class UCurveFloat*                                 _chargingSpeedCurve;                                       // 0x0630(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_H9L1[0x18];                                    // 0x0638(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDInteraction.ActivePhaseWalkInteraction");
		return ptr;
	}



	void ResetMovementSpeedMultipliers();
	void ResetChargeVFX(class UdbdPlayer* player);
	void Local_SendPhaseWalkInfo(bool startActivePhaseWalk, bool teleportToHusk, class UdbdPlayer* player);
};

// Class DBDInteraction.BaseLockerInteraction
// 0x0008 (FullSize[0x0508] - InheritedSize[0x0500])
class UBaseLockerInteraction : public UinteractionDefinition
{
public:
	class ULocker*                                     _owningLocker;                                             // 0x0500(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDInteraction.BaseLockerInteraction");
		return ptr;
	}



};

// Class DBDInteraction.BaseStalkModeInteraction
// 0x0010 (FullSize[0x0510] - InheritedSize[0x0500])
class UBaseStalkModeInteraction : public UinteractionDefinition
{
public:
	unsigned char                                      UnknownData_IE27[0x10];                                    // 0x0500(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDInteraction.BaseStalkModeInteraction");
		return ptr;
	}



	class UStalkerComponent* GetStalkerComponent();
	bool CanStalk();
};

// Class DBDInteraction.CollectItemInteraction
// 0x0030 (FullSize[0x0530] - InheritedSize[0x0500])
class UCollectItemInteraction : public UinteractionDefinition
{
public:
	struct FScriptMulticastDelegate                    OnCollectUpdateStart;                                      // 0x0500(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnCollectUpdateEnd;                                        // 0x0510(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_T72U[0x10];                                    // 0x0520(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDInteraction.CollectItemInteraction");
		return ptr;
	}



	class Ucollectable* GetItem();
};

// Class DBDInteraction.CollectItemFromSearchableInteraction
// 0x0010 (FullSize[0x0540] - InheritedSize[0x0530])
class UCollectItemFromSearchableInteraction : public UCollectItemInteraction
{
public:
	unsigned char                                      UnknownData_UYH6[0x10];                                    // 0x0530(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDInteraction.CollectItemFromSearchableInteraction");
		return ptr;
	}



};

// Class DBDInteraction.DeadHardDashInteraction
// 0x0000 (FullSize[0x0500] - InheritedSize[0x0500])
class UDeadHardDashInteraction : public UinteractionDefinition
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDInteraction.DeadHardDashInteraction");
		return ptr;
	}



};

// Class DBDInteraction.DestroyDemogorgonPortalInteraction
// 0x0008 (FullSize[0x0630] - InheritedSize[0x0628])
class UDestroyDemogorgonPortalInteraction : public UChargeableInteractionDefinition
{
public:
	class UDemogorgonPortal*                           _owningPortal;                                             // 0x0628(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDInteraction.DestroyDemogorgonPortalInteraction");
		return ptr;
	}



	void Authority_OnChargeApplied(float IndividualChargeAmount, float TotalChargeAmount, class Uactor* ChargeInstigator, bool WasCoop, float deltaTime);
};

// Class DBDInteraction.DropItemInteraction
// 0x0000 (FullSize[0x0500] - InheritedSize[0x0500])
class UDropItemInteraction : public UinteractionDefinition
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDInteraction.DropItemInteraction");
		return ptr;
	}



	class Ucollectable* GetItem();
};

// Class DBDInteraction.EscapeMapInteraction
// 0x0000 (FullSize[0x0500] - InheritedSize[0x0500])
class UEscapeMapInteraction : public UinteractionDefinition
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDInteraction.EscapeMapInteraction");
		return ptr;
	}



};

// Class DBDInteraction.GeneratorDamageInteraction
// 0x0008 (FullSize[0x0630] - InheritedSize[0x0628])
class UGeneratorDamageInteraction : public UChargeableInteractionDefinition
{
public:
	unsigned char                                      UnknownData_5CP8[0x8];                                     // 0x0628(0x0008) Fix Super Size


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDInteraction.GeneratorDamageInteraction");
		return ptr;
	}



	void Authority_DamageGenerator(class UdbdPlayer* damageBy, class Ugenerator* generator);
};

// Class DBDInteraction.GhostChargeStalkModeInteraction
// 0x0010 (FullSize[0x0520] - InheritedSize[0x0510])
class UGhostChargeStalkModeInteraction : public UBaseStalkModeInteraction
{
public:
	unsigned char                                      UnknownData_ILM7[0x10];                                    // 0x0510(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDInteraction.GhostChargeStalkModeInteraction");
		return ptr;
	}



	class UGhostStealthComponent* GetStealthComponent();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
