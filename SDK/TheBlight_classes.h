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

// Class TheBlight.ActivateBlightPower
// 0x0008 (FullSize[0x0630] - InheritedSize[0x0628])
class UActivateBlightPower : public UChargeableInteractionDefinition
{
public:
	unsigned char                                      UnknownData_BZMS[0x8];                                     // 0x0628(0x0008) Fix Super Size


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheBlight.ActivateBlightPower");
		return ptr;
	}



};

// Class TheBlight.Addon_TheBlight_14
// 0x0010 (FullSize[0x0228] - InheritedSize[0x0218])
class UAddon_TheBlight_14 : public UItemAddon
{
public:
	float                                              _speedIncreasePerDash;                                     // 0x0218(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_5D9V[0xC];                                     // 0x021C(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheBlight.Addon_TheBlight_14");
		return ptr;
	}



};

// Class TheBlight.Addon_TheBlight_15
// 0x0008 (FullSize[0x0230] - InheritedSize[0x0228])
class UAddon_TheBlight_15 : public UOnEventBaseAddon
{
public:
	float                                              _palletPulldownBlockRange;                                 // 0x0228(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _palletPulldownBlockSeconds;                               // 0x022C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheBlight.Addon_TheBlight_15");
		return ptr;
	}



};

// Class TheBlight.Addon_TheBlight_18
// 0x0008 (FullSize[0x0230] - InheritedSize[0x0228])
class UAddon_TheBlight_18 : public UOnEventBaseAddon
{
public:
	float                                              _survivorInRangeDistance;                                  // 0x0228(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _hinderedSeconds;                                          // 0x022C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheBlight.Addon_TheBlight_18");
		return ptr;
	}



	void SpawnParticleOnSurvivor(class UcamperPlayer* camperPlayer);
	void Multicast_SpawnParticleOnSurvivors(TArray<class UcamperPlayer*> survivors);
};

// Class TheBlight.Addon_TheBlight_19
// 0x0000 (FullSize[0x0218] - InheritedSize[0x0218])
class UAddon_TheBlight_19 : public UItemAddon
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheBlight.Addon_TheBlight_19");
		return ptr;
	}



};

// Class TheBlight.Addon_TheBlight_20
// 0x0008 (FullSize[0x0220] - InheritedSize[0x0218])
class UAddon_TheBlight_20 : public UItemAddon
{
public:
	float                                              _survivorInRangeDistance;                                  // 0x0218(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _survivorRevealTime;                                       // 0x021C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheBlight.Addon_TheBlight_20");
		return ptr;
	}



};

// Class TheBlight.Addon_TheBlight_21
// 0x0008 (FullSize[0x0220] - InheritedSize[0x0218])
class UAddon_TheBlight_21 : public UItemAddon
{
public:
	class UstatusEffect*                               _forceKoStatusEffect;                                      // 0x0218(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheBlight.Addon_TheBlight_21");
		return ptr;
	}



};

// Class TheBlight.Addon_TheBlight_ConsecutiveDashSpeedBonus
// 0x0010 (FullSize[0x0228] - InheritedSize[0x0218])
class UAddon_TheBlight_ConsecutiveDashSpeedBonus : public UItemAddon
{
public:
	float                                              _speedIncreasePerDash;                                     // 0x0218(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_KWIX[0xC];                                     // 0x021C(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheBlight.Addon_TheBlight_ConsecutiveDashSpeedBonus");
		return ptr;
	}



};

// Class TheBlight.Addon_TheBlight_SoulChemical
// 0x0068 (FullSize[0x0280] - InheritedSize[0x0218])
class UAddon_TheBlight_SoulChemical : public UItemAddon
{
public:
	float                                              _triggerDistance;                                          // 0x0218(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	DBDSharedTypes_ESkillCheckCustomType               _skillCheckType;                                           // 0x021C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_RACI[0x3];                                     // 0x021D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTagContainer                       _interactionSemantics;                                     // 0x0220(0x0020) (Edit, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                       _blightPowerStateTag;                                      // 0x0240(0x0020) (Edit, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_IE7A[0x20];                                    // 0x0260(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheBlight.Addon_TheBlight_SoulChemical");
		return ptr;
	}



};

// Class TheBlight.BlightAnimInstance
// 0x0018 (FullSize[0x05C0] - InheritedSize[0x05A8])
class UBlightAnimInstance : public UKillerAnimInstance
{
public:
	class UBlightPowerStateComponent*                  _blightPowerStateComponent;                                // 0x05A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TheBlight_EWallGrabState                           _powerState;                                               // 0x05B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_MUAT[0x3];                                     // 0x05B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _stateTimeRemaining;                                       // 0x05B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _lookAngle;                                                // 0x05B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_S74N[0x4];                                     // 0x05BC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheBlight.BlightAnimInstance");
		return ptr;
	}



};

// Class TheBlight.BlightAttackPicker
// 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
class UBlightAttackPicker : public USlasherAttackPickerComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheBlight.BlightAttackPicker");
		return ptr;
	}



};

// Class TheBlight.BlightDashAttack
// 0x0000 (FullSize[0x02E0] - InheritedSize[0x02E0])
class UBlightDashAttack : public UPounceAttack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheBlight.BlightDashAttack");
		return ptr;
	}



};

// Class TheBlight.BlightDashAttackOpenSubstate
// 0x0000 (FullSize[0x00F0] - InheritedSize[0x00F0])
class UBlightDashAttackOpenSubstate : public UPounceAttackOpenSubstate
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheBlight.BlightDashAttackOpenSubstate");
		return ptr;
	}



};

// Class TheBlight.BlightDashAttackSuccessSubstate
// 0x0000 (FullSize[0x00D8] - InheritedSize[0x00D8])
class UBlightDashAttackSuccessSubstate : public UPounceAttackSuccessSubstate
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheBlight.BlightDashAttackSuccessSubstate");
		return ptr;
	}



};

// Class TheBlight.BlightDashAttackMissSubstate
// 0x0000 (FullSize[0x00E0] - InheritedSize[0x00E0])
class UBlightDashAttackMissSubstate : public UPounceAttackMissSubstate
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheBlight.BlightDashAttackMissSubstate");
		return ptr;
	}



};

// Class TheBlight.BlightDashAttackObstructSubstate
// 0x0000 (FullSize[0x00E8] - InheritedSize[0x00E8])
class UBlightDashAttackObstructSubstate : public UPounceAttackObstructSubstate
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheBlight.BlightDashAttackObstructSubstate");
		return ptr;
	}



};

// Class TheBlight.BlightPower
// 0x0118 (FullSize[0x0538] - InheritedSize[0x0420])
class UBlightPower : public Ucollectable
{
public:
	class UPowerChargeComponent*                       _blightPowerCharge;                                        // 0x0420(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPowerToggleComponent*                       _blightPowerToggle;                                        // 0x0428(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UchargeableComponent*                        _blightPowerActivateChargeable;                            // 0x0430(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBlightPowerStateComponent*                  _blightPowerStateComponent;                                // 0x0438(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _blightPowerActivateMaxCharge;                             // 0x0440(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTunableStat                                _blightPowerMaxCharge;                                     // 0x0468(0x0040) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _blightPowerDechargeRate;                                  // 0x04A8(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _blightPowerRechargeRate;                                  // 0x04D0(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_MN41[0x40];                                    // 0x04F8(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheBlight.BlightPower");
		return ptr;
	}



	void OnPowerStateChanged(TheBlight_EWallGrabState PreviousState, TheBlight_EWallGrabState NewState);
};

// Class TheBlight.BlightPowerEstimatedCollisionIndicator
// 0x0008 (FullSize[0x0238] - InheritedSize[0x0230])
class UBlightPowerEstimatedCollisionIndicator : public Uactor
{
public:
	unsigned char                                      UnknownData_YN9T[0x8];                                     // 0x0230(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheBlight.BlightPowerEstimatedCollisionIndicator");
		return ptr;
	}



	void OnShowIndicator_Cosmetic();
	void OnHideIndicator_Cosmetic();
};

// Class TheBlight.BlightPowerState
// 0x0110 (FullSize[0x0140] - InheritedSize[0x0030])
class UBlightPowerState : public UObject
{
public:
	unsigned char                                      UnknownData_5ODG[0x10];                                    // 0x0030(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveFloat*                                 _stateSpeedCurve;                                          // 0x0040(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FTunableStat                                _stateDuration;                                            // 0x0048(0x0040) (Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _cameraPitchRecenterTime;                                  // 0x0088(0x0028) (Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _wallDashCollisionRadius;                                  // 0x00B0(0x0028) (Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _wallDashCollisionHeight;                                  // 0x00D8(0x0028) (Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _wallDashCollisionRange;                                   // 0x0100(0x0028) (Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _playerCanCancelEarly;                                     // 0x0128(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_YOHG[0xF];                                     // 0x0129(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               _displayCollisionIndicator;                                // 0x0138(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_9HTZ[0x7];                                     // 0x0139(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheBlight.BlightPowerState");
		return ptr;
	}



	float GetStateDuration();
};

// Class TheBlight.BlightPowerStateAdjusting
// 0x0040 (FullSize[0x0180] - InheritedSize[0x0140])
class UBlightPowerStateAdjusting : public UBlightPowerState
{
public:
	bool                                               _adjustRotationOnCollision;                                // 0x0140(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _bounceAwayFromCollision;                                  // 0x0141(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _allowNavigation;                                          // 0x0142(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _smashBreakables;                                          // 0x0143(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_2NUG[0x4];                                     // 0x0144(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDBDTunableRowHandle                        _maxDistanceForSurvivorFacing;                             // 0x0148(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_9D2K[0x10];                                    // 0x0170(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheBlight.BlightPowerStateAdjusting");
		return ptr;
	}



};

// Class TheBlight.BlightPowerStateDash
// 0x0078 (FullSize[0x01B8] - InheritedSize[0x0140])
class UBlightPowerStateDash : public UBlightPowerState
{
public:
	struct FTunableStat                                _vectorInterpToSpeed;                                      // 0x0140(0x0040) (Edit, BlueprintVisible, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveFloat*                                 _noDashTimeLimitSpeedCurve;                                // 0x0180(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveFloat*                                 _lookAngleToTurnRateCurveController;                       // 0x0188(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveFloat*                                 _lookAngleToTurnRateCurveMouse;                            // 0x0190(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_L3PB[0x20];                                    // 0x0198(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheBlight.BlightPowerStateDash");
		return ptr;
	}



};

// Class TheBlight.BlightPowerStateAttack
// 0x0028 (FullSize[0x01E0] - InheritedSize[0x01B8])
class UBlightPowerStateAttack : public UBlightPowerStateDash
{
public:
	unsigned char                                      UnknownData_OSHV[0x28];                                    // 0x01B8(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheBlight.BlightPowerStateAttack");
		return ptr;
	}



};

// Class TheBlight.BlightPowerStateComponent
// 0x01D8 (FullSize[0x0290] - InheritedSize[0x00B8])
class UBlightPowerStateComponent : public UactorComponent
{
public:
	unsigned char                                      UnknownData_9BK2[0x18];                                    // 0x00B8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnPowerCollided;                                           // 0x00D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<class UClass*>                              _blightPowerStateClasses;                                  // 0x00E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _canDashCheckCollisionRadius;                              // 0x00F0(0x0028) (Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _canDashCheckCollisionHeight;                              // 0x0118(0x0028) (Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _canDashCheckCollisionRange;                               // 0x0140(0x0028) (Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _blightLethalDashDodgeRadius;                              // 0x0168(0x0028) (Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UinteractionDefinition*                      _powerInteractionDefinition;                               // 0x0190(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_IB74[0x18];                                    // 0x0198(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimerObject*                                _stateTimer;                                               // 0x01B0(0x0008) (ExportObject, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UBlightPowerState*>                   _blightPowerStates;                                        // 0x01B8(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBlightPowerState*                           _currentBlightPowerState;                                  // 0x01C8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      _dashTokens;                                               // 0x01D0(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_YI2D[0x7];                                     // 0x01D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTunableStat                                _maximumDashTokens;                                        // 0x01D8(0x0040) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTunableStat                                _tokenChargeRate;                                          // 0x0218(0x0040) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_M0TZ[0x38];                                    // 0x0258(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheBlight.BlightPowerStateComponent");
		return ptr;
	}



	void Server_SetWallGrabState(TheBlight_EWallGrabState NewState);
	void ResetDashTokens();
	void OnRep_StateTimer();
	void OnRep_DashTokens();
	void OnLevelReadyToPlay();
	void Multicast_SetWallGrabState(TheBlight_EWallGrabState NewState);
	float GetStateTimeRemaining();
	class UTimerObject* GetStateTimer();
	float GetStateTimeElapsed();
	class UBlightPowerState* GetPowerStateByEnum(TheBlight_EWallGrabState stateEnum);
	TheBlight_EWallGrabState GetPowerState();
	float GetLookAngleDegrees();
	unsigned char GetDashTokensRemaining();
	class UBlightPowerState* GetCurrentPowerState();
	bool CanDash();
};

// Class TheBlight.BlightPowerStateCooldown
// 0x0000 (FullSize[0x0140] - InheritedSize[0x0140])
class UBlightPowerStateCooldown : public UBlightPowerState
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheBlight.BlightPowerStateCooldown");
		return ptr;
	}



};

// Class TheBlight.BlightPowerStateHolding
// 0x0038 (FullSize[0x0178] - InheritedSize[0x0140])
class UBlightPowerStateHolding : public UBlightPowerState
{
public:
	struct FSecondaryInteractionProperties             _secondaryInteractionProperties;                           // 0x0140(0x0030) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	bool                                               _allowNavigation;                                          // 0x0170(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_L6GW[0x3];                                     // 0x0171(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _dashSpeedForProjection;                                   // 0x0174(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheBlight.BlightPowerStateHolding");
		return ptr;
	}



};

// Class TheBlight.BlightPowerStateInterface
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UBlightPowerStateInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheBlight.BlightPowerStateInterface");
		return ptr;
	}



};

// Class TheBlight.BlightPowerStateLethalDash
// 0x0038 (FullSize[0x01F0] - InheritedSize[0x01B8])
class UBlightPowerStateLethalDash : public UBlightPowerStateDash
{
public:
	struct FSecondaryInteractionProperties             _secondaryInteractionProperties;                           // 0x01B8(0x0030) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	bool                                               _smashBreakables;                                          // 0x01E8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_RR08[0x7];                                     // 0x01E9(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheBlight.BlightPowerStateLethalDash");
		return ptr;
	}



};

// Class TheBlight.BlightPowerStateNonLethalDash
// 0x0008 (FullSize[0x01C0] - InheritedSize[0x01B8])
class UBlightPowerStateNonLethalDash : public UBlightPowerStateDash
{
public:
	bool                                               _smashBreakables;                                          // 0x01B8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_E4II[0x7];                                     // 0x01B9(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheBlight.BlightPowerStateNonLethalDash");
		return ptr;
	}



};

// Class TheBlight.BlightPowerStateReady
// 0x0000 (FullSize[0x0140] - InheritedSize[0x0140])
class UBlightPowerStateReady : public UBlightPowerState
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheBlight.BlightPowerStateReady");
		return ptr;
	}



};

// Class TheBlight.BuiltToLast
// 0x0040 (FullSize[0x0388] - InheritedSize[0x0348])
class UBuiltToLast : public Uperk
{
public:
	float                                              _refillPercentage[0x3];                                    // 0x0348(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _depletionToRefillWaitDuration[0x3];                       // 0x0354(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _isPerkTriggeredThisTrial;                                 // 0x0360(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_Z9BJ[0x7];                                     // 0x0361(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class Ucollectable*                                _heldItem;                                                 // 0x0368(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_JUZM[0x18];                                    // 0x0370(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheBlight.BuiltToLast");
		return ptr;
	}



	void OnBuiltToLastTrigger_Cosmetic();
};

// Class TheBlight.DesperateMeasures
// 0x0010 (FullSize[0x0358] - InheritedSize[0x0348])
class UDesperateMeasures : public Uperk
{
public:
	float                                              _healAndUnhookMultiplier[0x3];                             // 0x0348(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                _nbInjuredHookedOrDyingSurvivors;                          // 0x0354(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheBlight.DesperateMeasures");
		return ptr;
	}



};

// Class TheBlight.DragonsGrip
// 0x0060 (FullSize[0x03A8] - InheritedSize[0x0348])
class UDragonsGrip : public Uperk
{
public:
	class Ugenerator*                                  _kickedGenerator;                                          // 0x0348(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _activationDuration[0x3];                                  // 0x0350(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _coolDownDuration[0x3];                                    // 0x035C(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _exposedEffectDuration[0x3];                               // 0x0368(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _onlyExposeFirstSurvivor;                                  // 0x0374(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_F6NN[0xB];                                     // 0x0375(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDBDTunableRowHandle                        _loudNoiseRange;                                           // 0x0380(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheBlight.DragonsGrip");
		return ptr;
	}



	void OnRevealSurvivor(class UdbdPlayer* instigator);
	void Multicast_OnRevealSurvivor(class UdbdPlayer* Survivor);
};

// Class TheBlight.HexBloodFavor
// 0x0030 (FullSize[0x03D8] - InheritedSize[0x03A8])
class UHexBloodFavor : public UHexPerk
{
public:
	float                                              _palletInRange[0x3];                                       // 0x03A8(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _palletPulldownBlockTime[0x3];                             // 0x03B4(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _coolDownDuration[0x3];                                    // 0x03C0(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _basicAttack;                                              // 0x03CC(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_67KM[0xB];                                     // 0x03CD(0x000B) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheBlight.HexBloodFavor");
		return ptr;
	}



};

// Class TheBlight.HexUndying
// 0x0068 (FullSize[0x0410] - InheritedSize[0x03A8])
class UHexUndying : public UHexPerk
{
public:
	unsigned char                                      UnknownData_NREE[0x58];                                    // 0x03A8(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                _amountOfTokenRemove;                                      // 0x0400(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _revealAuraDistanceFromTotem[0x3];                         // 0x0404(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheBlight.HexUndying");
		return ptr;
	}



	void Authority_UpdateHexPerkStatusView(class UgameplayModifierContainer* gameplayModifierContainer, bool isApplicable);
	void Authority_OnSurvivorAdded(class UcamperPlayer* Survivor);
	void Authority_OnCamperCleansedHexPerk(const struct FgameplayTag& gameplayTag, const struct FgameEventData& gameEventData);
};

// Class TheBlight.Visionary
// 0x0018 (FullSize[0x0360] - InheritedSize[0x0348])
class UVisionary : public Uperk
{
public:
	float                                              _auraVisibilityRange[0x3];                                 // 0x0348(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _coolDownDuration[0x3];                                    // 0x0354(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheBlight.Visionary");
		return ptr;
	}



};

// Class TheBlight.WallGrabInteractionDefinition
// 0x0040 (FullSize[0x0540] - InheritedSize[0x0500])
class UWallGrabInteractionDefinition : public UinteractionDefinition
{
public:
	class UBlightPowerStateComponent*                  _blightPowerStateComponent;                                // 0x0500(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _wallDashAccelerationMultiplier;                           // 0x0508(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBlightPowerEstimatedCollisionIndicator*     _blightPowerCollisionIndicator;                            // 0x0530(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UClass*                                      _collisionIndicatorActorClass;                             // 0x0538(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheBlight.WallGrabInteractionDefinition");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
