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

// Class DBDAnimation.Turn180Component
// 0x0030 (FullSize[0x00E8] - InheritedSize[0x00B8])
class UTurn180Component : public UactorComponent
{
public:
	unsigned char                                      UnknownData_A97F[0x28];                                    // 0x00B8(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTurn180Settings                            _settings;                                                 // 0x00E0(0x0001) (Net, NoDestructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_GTTR[0x7];                                     // 0x00E1(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDAnimation.Turn180Component");
		return ptr;
	}



	void Server_SetSettings(float timestamp, const struct FTurn180Settings& settings);
};

// Class DBDAnimation.WakerObjectAnimInstance
// 0x0040 (FullSize[0x02B0] - InheritedSize[0x0270])
class UWakerObjectAnimInstance : public UanimInstance
{
public:
	float                                              _reappearTimerCooldown;                                    // 0x0270(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _wakeUpCharge;                                             // 0x0274(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _chargeStarted;                                            // 0x0278(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _interactionComplete;                                      // 0x0279(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _outEnd;                                                   // 0x027A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _reset;                                                    // 0x027B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _inEnd;                                                    // 0x027C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _wakerObjectStarted;                                       // 0x027D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _respawnEnd;                                               // 0x027E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _cancelEnd;                                                // 0x027F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_Z7S6[0x30];                                    // 0x0280(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDAnimation.WakerObjectAnimInstance");
		return ptr;
	}



	void ResetReappearTimer();
	void OnReappear();
	bool GetWakerObjectStarted();
	bool GetWakerObjectChargeComplete();
	float GetWakerObjectCharge();
	class UWakerObject* GetWakerObject();
};

// Class DBDAnimation.PlayerAnimInstance
// 0x0278 (FullSize[0x04E8] - InheritedSize[0x0270])
class UPlayerAnimInstance : public UanimInstance
{
public:
	unsigned char                                      UnknownData_Q5QX[0x20];                                    // 0x0270(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UdbdPlayer*                                  _owningPlayer;                                             // 0x0290(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAnimEffectBlackBoard*                       _animEffectBlackBoard;                                     // 0x0298(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAnimEffectHandler*                          _animEffectHandlerForSFX;                                  // 0x02A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAnimEffectHandler*                          _animEffectHandlerForVFX;                                  // 0x02A8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      _animEffectHandlerClassForSFX;                             // 0x02B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      _animEffectHandlerClassForVFX;                             // 0x02B8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FTaggedAnimCollection>               _taggedAnimCollections;                                    // 0x02C0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<struct FgameplayTag, class UAnimSequence*>    _animations;                                               // 0x02D0(0x0050) (BlueprintVisible, BlueprintReadOnly, Transient, Protected, NativeAccessSpecifierProtected)
	TMap<struct FgameplayTag, class UBlendspace*>      _blendspaces;                                              // 0x0320(0x0050) (BlueprintVisible, BlueprintReadOnly, Transient, Protected, NativeAccessSpecifierProtected)
	TMap<struct FgameplayTag, class UAimOffsetBlendSpace*> _aimoffsets;                                               // 0x0370(0x0050) (BlueprintVisible, BlueprintReadOnly, Transient, Protected, NativeAccessSpecifierProtected)
	TMap<struct FgameplayTag, class UBlendSpace1D*>    _blendspaces1d;                                            // 0x03C0(0x0050) (BlueprintVisible, BlueprintReadOnly, Transient, Protected, NativeAccessSpecifierProtected)
	TMap<struct FgameplayTag, class UAimOffsetBlendSpace1D*> _aimoffsets1d;                                             // 0x0410(0x0050) (BlueprintVisible, BlueprintReadOnly, Transient, Protected, NativeAccessSpecifierProtected)
	TMap<struct FgameplayTag, struct FAnimSequenceSelector> _selectors;                                                // 0x0460(0x0050) (BlueprintVisible, BlueprintReadOnly, Transient, Protected, NativeAccessSpecifierProtected)
	bool                                               _isInParadise;                                             // 0x04B0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_PINM[0x7];                                     // 0x04B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FActivationDefinition                       _activationDefinition;                                     // 0x04B8(0x0028) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_3UYU[0x8];                                     // 0x04E0(0x0008) Fix Super Size


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDAnimation.PlayerAnimInstance");
		return ptr;
	}



	bool HasBeenNotified(const struct FName& animNotify);
	class UdbdPlayer* GetOwningPlayer();
};

// Class DBDAnimation.BaseKillerAnimInstance
// 0x0010 (FullSize[0x04F8] - InheritedSize[0x04E8])
class UBaseKillerAnimInstance : public UPlayerAnimInstance
{
public:
	class UslasherPlayer*                              _owningKiller;                                             // 0x04E8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _firstPersonView;                                          // 0x04F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_RMRT[0x7];                                     // 0x04F1(0x0007) Fix Super Size


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDAnimation.BaseKillerAnimInstance");
		return ptr;
	}



	class UslasherPlayer* GetOwningKiller();
	void DBD_ForceAnimPOV(int animPOV);
};

// Class DBDAnimation.KillerAnimInstance
// 0x00B0 (FullSize[0x05A8] - InheritedSize[0x04F8])
class UKillerAnimInstance : public UBaseKillerAnimInstance
{
public:
	struct Fvector                                     _leftHandIKLocationFPV;                                    // 0x04F8(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct Fvector                                     _rightHandIKLocationFPV;                                   // 0x0504(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isAnyMontagePlaying;                                      // 0x0510(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isCarrying;                                               // 0x0511(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_SLND[0x2];                                     // 0x0512(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct Fvector                                     _firstPersonCarryOffset;                                   // 0x0514(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct Fvector                                     _firstPersonCarryOffsetLookingDown;                        // 0x0520(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isInAir;                                                  // 0x052C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isSpectator;                                              // 0x052D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isIdle;                                                   // 0x052E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_DRNP[0x1];                                     // 0x052F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _animDirection;                                            // 0x0530(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _animSpeed;                                                // 0x0534(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _animPitch;                                                // 0x0538(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _animYaw;                                                  // 0x053C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _pelvisHeight;                                             // 0x0540(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _idleTime;                                                 // 0x0544(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                _directionSwitch;                                          // 0x0548(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isAttacking;                                              // 0x054C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isPlayingAnyMontage;                                      // 0x054D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_2CQX[0x2];                                     // 0x054E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct Fvector                                     _leftClearFrontSpaceVector;                                // 0x0550(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct Fvector                                     _rightClearFrontSpaceVector;                               // 0x055C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct Fvector                                     _velocity;                                                 // 0x0568(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct Fvector                                     _rightFootEffectorLocation;                                // 0x0574(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct Fvector                                     _leftFootEffectorLocation;                                 // 0x0580(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	DBDSharedTypes_EInteractionAnimation               _interactionType;                                          // 0x058C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_6T1H[0x3];                                     // 0x058D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UArmIKSensorComponent*                       _armIKSensorComponent;                                     // 0x0590(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	DBDSharedTypes_EAttackSubstate                     _attackState;                                              // 0x0598(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_TK3B[0x3];                                     // 0x0599(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _forwardVelocity;                                          // 0x059C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _lateralVelocity;                                          // 0x05A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_NQ1A[0x4];                                     // 0x05A4(0x0004) Fix Super Size


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDAnimation.KillerAnimInstance");
		return ptr;
	}



};

// Class DBDAnimation.BasePlayerAttackSubAnimInstance
// 0x00C8 (FullSize[0x05B0] - InheritedSize[0x04E8])
class UBasePlayerAttackSubAnimInstance : public UPlayerAnimInstance
{
public:
	unsigned char                                      UnknownData_5WAS[0x4];                                     // 0x04E8(0x0004) Fix Super Size
	float                                              _direction;                                                // 0x04EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _strafeAngle;                                              // 0x04F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isStrafe;                                                 // 0x04F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_TGTQ[0x3];                                     // 0x04F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _attackInPlayRate;                                         // 0x04F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_PHDJ[0x4];                                     // 0x04FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAnimSequenceSelector                       _attackIn;                                                 // 0x0500(0x0018) (Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	float                                              _attackSwingPlayRate;                                      // 0x0518(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_P1IC[0x4];                                     // 0x051C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAnimSequenceSelector                       _attackSwing;                                              // 0x0520(0x0018) (Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	float                                              _attackMissPlayRate;                                       // 0x0538(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_LY49[0x4];                                     // 0x053C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAnimSequenceSelector                       _attackMiss;                                               // 0x0540(0x0018) (Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	float                                              _attackHitPlayRate;                                        // 0x0558(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_XTND[0x4];                                     // 0x055C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAnimSequenceSelector                       _attackHit;                                                // 0x0560(0x0018) (Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	float                                              _attackBounceOfWallPlayRate;                               // 0x0578(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_T644[0x4];                                     // 0x057C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAnimSequenceSelector                       _attackBounceOfWall;                                       // 0x0580(0x0018) (Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_2GCF[0x14];                                    // 0x0598(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               _firstPersonView;                                          // 0x05AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_BOBH[0x3];                                     // 0x05AD(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDAnimation.BasePlayerAttackSubAnimInstance");
		return ptr;
	}



};

// Class DBDAnimation.BaseKillerAttackSubAnimInstance
// 0x0010 (FullSize[0x05C0] - InheritedSize[0x05B0])
class UBaseKillerAttackSubAnimInstance : public UBasePlayerAttackSubAnimInstance
{
public:
	class UslasherPlayer*                              _owningKiller;                                             // 0x05B0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ZZQV[0x8];                                     // 0x05B8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDAnimation.BaseKillerAttackSubAnimInstance");
		return ptr;
	}



	class UslasherPlayer* GetOwningKiller();
};

// Class DBDAnimation.KillerAttackSubAnimInstance
// 0x0000 (FullSize[0x05C0] - InheritedSize[0x05C0])
class UKillerAttackSubAnimInstance : public UBaseKillerAttackSubAnimInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDAnimation.KillerAttackSubAnimInstance");
		return ptr;
	}



};

// Class DBDAnimation.KillerLocomotionSubAnimInstance
// 0x00B8 (FullSize[0x05B0] - InheritedSize[0x04F8])
class UKillerLocomotionSubAnimInstance : public UBaseKillerAnimInstance
{
public:
	class UAnimSequence*                               _landLightTPV;                                             // 0x04F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAnimSequence*                               _landLightFPV;                                             // 0x0500(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBlendSpace1D*                               _BSLandTPV;                                                // 0x0508(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBlendSpace1D*                               _BSLandFPV;                                                // 0x0510(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAnimSequence*                               _walkToFallTPV;                                            // 0x0518(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAnimSequence*                               _walkToFallFPV;                                            // 0x0520(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAnimSequence*                               _carryIdleTPV;                                             // 0x0528(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAnimSequence*                               _carryIdleFPV;                                             // 0x0530(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAnimSequence*                               _fallingTPV;                                               // 0x0538(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAnimSequence*                               _fallingFPV;                                               // 0x0540(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isFirstPersonView;                                        // 0x0548(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_LZYI[0x7];                                     // 0x0549(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimSequence*                               _landLight;                                                // 0x0550(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBlendSpace1D*                               _BSLand;                                                   // 0x0558(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAnimSequence*                               _walkToFall;                                               // 0x0560(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAnimSequence*                               _carryIdle;                                                // 0x0568(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAnimSequence*                               _falling;                                                  // 0x0570(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isVaultingToFall;                                         // 0x0578(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_BKO3[0x7];                                     // 0x0579(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTagStateBool                               _isVaultingToFallState;                                    // 0x0580(0x0030) (Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDAnimation.KillerLocomotionSubAnimInstance");
		return ptr;
	}



};

// Class DBDAnimation.BaseSurvivorAnimInstance
// 0x0008 (FullSize[0x04F0] - InheritedSize[0x04E8])
class UBaseSurvivorAnimInstance : public UPlayerAnimInstance
{
public:
	class UcamperPlayer*                               _owningSurvivor;                                           // 0x04E8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDAnimation.BaseSurvivorAnimInstance");
		return ptr;
	}



	class UcamperPlayer* GetOwningSurvivor();
};

// Class DBDAnimation.LegIKSurvivorSubAnimInstance
// 0x0110 (FullSize[0x0600] - InheritedSize[0x04F0])
class ULegIKSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance
{
public:
	struct Fvector                                     _leftFootOffset;                                           // 0x04F0(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct Fvector                                     _rightFootOffset;                                          // 0x04FC(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct Fvector                                     _pelvisOffset;                                             // 0x0508(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isIdle;                                                   // 0x0514(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isCrouched;                                               // 0x0515(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_OD0H[0x2];                                     // 0x0516(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRotator                                    _rightFootDeltaRotator;                                    // 0x0518(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FRotator                                    _leftFootDeltaRotator;                                     // 0x0524(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class UANimCollection*                             ANimCollection;                                            // 0x0530(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FName                                       _floorJoint;                                               // 0x0538(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _pelvisOffsetTreshold;                                     // 0x0544(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FFloatRange                                 _pelvisOffsetRange;                                        // 0x0548(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FFloatRange                                 _pelvisOffsetRangeCrouched;                                // 0x0558(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _pelvisOffsetInterpolationSpeed;                           // 0x0568(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FFloatRange                                 _footOffsetRange;                                          // 0x056C(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FFloatRange                                 _footOffsetRangeCrouched;                                  // 0x057C(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _footOffsetInterpolationSpeed;                             // 0x058C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FFloatRange                                 _footPitchDeltaRange;                                      // 0x0590(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBaseGroundDetectorComponent*                _leftFootGroundDetector;                                   // 0x05A0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBaseGroundDetectorComponent*                _rightFootGroundDetector;                                  // 0x05A8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              maxLocalHeightForPlanting;                                 // 0x05B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_ZSDU[0x3C];                                    // 0x05B4(0x003C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ULocomotionPredictor*                        _locomotionPredictor;                                      // 0x05F0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_JJ71[0x8];                                     // 0x05F8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDAnimation.LegIKSurvivorSubAnimInstance");
		return ptr;
	}



};

// Class DBDAnimation.LocomotionPredictor
// 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
class ULocomotionPredictor : public UObject
{
public:
	TMap<class UAnimSequence*, struct FFootBoneData>   _animFootData;                                             // 0x0030(0x0050) (Transient, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDAnimation.LocomotionPredictor");
		return ptr;
	}



};

// Class DBDAnimation.LocomotionSurvivorSubAnimInstance
// 0x02B0 (FullSize[0x07A0] - InheritedSize[0x04F0])
class ULocomotionSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance
{
public:
	bool                                               _isRecoveringWhileCrawling;                                // 0x04F0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isTenacityPerkActive;                                     // 0x04F1(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_6ULE[0x2];                                     // 0x04F2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _wasStandingResetTime;                                     // 0x04F4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _wasRunningResetTime;                                      // 0x04F8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _wasCrouchingResetTime;                                    // 0x04FC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _wasMovingResetTime;                                       // 0x0500(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isIdle;                                                   // 0x0504(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_4HFY[0x3];                                     // 0x0505(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _recentlyIdleCooldownTime;                                 // 0x0508(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _recentlyNotIdleCooldownTime;                              // 0x050C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _wasIdleRecently;                                          // 0x0510(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _idleInterupt;                                             // 0x0511(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isAgainstSmallKiller;                                     // 0x0512(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isMoving;                                                 // 0x0513(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _wasRunning;                                               // 0x0514(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isRunning;                                                // 0x0515(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _wasCrouching;                                             // 0x0516(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isCrouching;                                              // 0x0517(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _wasStanding;                                              // 0x0518(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isStanding;                                               // 0x0519(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isCrawling;                                               // 0x051A(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isDead;                                                   // 0x051B(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _walkAnimSpeed;                                            // 0x051C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _walkAnimStartOffset;                                      // 0x0520(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _walkAnimPlayRateMultiplier;                               // 0x0524(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _wasLastDamageSourceDeepWounds;                            // 0x0528(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isStrafing;                                               // 0x0529(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isUsingDeadHard;                                          // 0x052A(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_Z26K[0x1];                                     // 0x052B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _direction;                                                // 0x052C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isUsingAimItem;                                           // 0x0530(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isBeingCarried;                                           // 0x0531(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_KGZN[0x2];                                     // 0x0532(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _aimOffsetPitch;                                           // 0x0534(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _aimOffsetYaw;                                             // 0x0538(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _turn180Active;                                            // 0x053C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _turningRight;                                             // 0x053D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _start180Active;                                           // 0x053E(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_7RPZ[0x1];                                     // 0x053F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _aimOffsetYawInterpolated;                                 // 0x0540(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _allowLookAt;                                              // 0x0544(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isInjured;                                                // 0x0545(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isDrasticAimOffsetYawChangeDetected;                      // 0x0546(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_6S42[0x1];                                     // 0x0547(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _aimOffsetYawInterpolationSpeed;                           // 0x0548(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _aimOffsetYawDeadzoneStart;                                // 0x054C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _aimOffsetYawClampValue;                                   // 0x0550(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _aimOffsetYawDrasticChangeUpperLimit;                      // 0x0554(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _aimOffsetYawDrasticChangeLowerLimit;                      // 0x0558(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _aimOffsetYawDrasticChangeInterpolationSpeed;              // 0x055C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveFloat*                                 _aimOffsetYawInterpolateEaseIn;                            // 0x0560(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveFloat*                                 _aimOffsetYawInterpolateEaseOut;                           // 0x0568(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _aimOffsetYawInterpolationEaseInLength;                    // 0x0570(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _aimOffsetYawInterpolationEaseOutDistance;                 // 0x0574(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isAimOffsetYawInDeadZone;                                 // 0x0578(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_2HAG[0x3];                                     // 0x0579(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _currentTargetAimOffsetYaw;                                // 0x057C(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _aimOffsetYawAcceleration;                                 // 0x0580(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _aimOffsetYawAccelerationTime;                             // 0x0584(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _maxParadiseWalkCycleOffSet;                               // 0x0588(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_NEJD[0x4];                                     // 0x058C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _minParadiseWalkPlayRateMultiplier;                        // 0x0590(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_262E[0x4];                                     // 0x0594(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _turn180DetectionPrecision;                                // 0x0598(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _turn180DetectionDeadZone;                                 // 0x059C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _turn180PrevVelocitiesCacheDuration;                       // 0x05A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _minDurationBetweenTurn180Detection;                       // 0x05A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _start180DetectionPrecision;                               // 0x05A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _idleDurationFor180StartDetection;                         // 0x05AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _durationBeforeStart180Reset;                              // 0x05B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_K5QK[0x1EC];                                   // 0x05B4(0x01EC) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDAnimation.LocomotionSurvivorSubAnimInstance");
		return ptr;
	}



};

// Class DBDAnimation.LookAtTargetKillerSubAnimInstance
// 0x01B8 (FullSize[0x06B0] - InheritedSize[0x04F8])
class ULookAtTargetKillerSubAnimInstance : public UBaseKillerAnimInstance
{
public:
	unsigned char                                      UnknownData_952X[0x4];                                     // 0x04F8(0x0004) Fix Super Size
	struct FName                                       _headSocket;                                               // 0x04FC(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       _rootSocket;                                               // 0x0508(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _preferredMinLookAtTime;                                   // 0x0514(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _distanceScoreFactor;                                      // 0x0518(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _angleScoreFactor;                                         // 0x051C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _sameTargetScoreFactor;                                    // 0x0520(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _yawToTarget;                                              // 0x0524(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _pitchToTarget;                                            // 0x0528(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _hasVisibleTarget;                                         // 0x052C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_2QWN[0x183];                                   // 0x052D(0x0183) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDAnimation.LookAtTargetKillerSubAnimInstance");
		return ptr;
	}



	void OnChaseStarted(class UdbdPlayer* target);
	void OnChaseEnded(class UdbdPlayer* target, float chaseTime);
};

// Class DBDAnimation.LookAtThreatSurvivorSubAnimInstance
// 0x0160 (FullSize[0x0650] - InheritedSize[0x04F0])
class ULookAtThreatSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance
{
public:
	float                                              _maxDistanceForThreatDetection;                            // 0x04F0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       _headSocket;                                               // 0x04F4(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       _rootSocket;                                               // 0x0500(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _yawToThreat;                                              // 0x050C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _pitchToThreat;                                            // 0x0510(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isVisibleThreat;                                          // 0x0514(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_WH23[0x13B];                                   // 0x0515(0x013B) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDAnimation.LookAtThreatSurvivorSubAnimInstance");
		return ptr;
	}



};

// Class DBDAnimation.MeshRotationCorrectionSubAnimInstance
// 0x0020 (FullSize[0x0510] - InheritedSize[0x04F0])
class UMeshRotationCorrectionSubAnimInstance : public UBaseSurvivorAnimInstance
{
public:
	float                                              _rotationInterpSpeed;                                      // 0x04F0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isCrawling;                                               // 0x04F4(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_IM6E[0x3];                                     // 0x04F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRotator                                    _toSlopeRotation;                                          // 0x04F8(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_TTBA[0x4];                                     // 0x0504(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCharacterMovementComponent*                 _movementComponent;                                        // 0x0508(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDAnimation.MeshRotationCorrectionSubAnimInstance");
		return ptr;
	}



};

// Class DBDAnimation.OpenChestSurvivorSubAnimInstance
// 0x0030 (FullSize[0x0520] - InheritedSize[0x04F0])
class UOpenChestSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance
{
public:
	bool                                               _isInteractingWithChest;                                   // 0x04F0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_LGY9[0x3];                                     // 0x04F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FgameplayTag                                _interactionPhase;                                         // 0x04F4(0x000C) (BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isInteractingWithOpenChest;                               // 0x0500(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_NNEQ[0x3];                                     // 0x0501(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct Fvector                                     _snapPosition;                                             // 0x0504(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isVomiting;                                               // 0x0510(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_TR3V[0xF];                                     // 0x0511(0x000F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDAnimation.OpenChestSurvivorSubAnimInstance");
		return ptr;
	}



};

// Class DBDAnimation.RBTSurvivorSubAnimInstance
// 0x0050 (FullSize[0x0540] - InheritedSize[0x04F0])
class URBTSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance
{
public:
	unsigned char                                      UnknownData_UNLY[0x40];                                    // 0x04F0(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               _isRemovingRBT;                                            // 0x0530(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _hasSkillCheckFailed;                                      // 0x0531(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_NNCG[0xE];                                     // 0x0532(0x000E) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDAnimation.RBTSurvivorSubAnimInstance");
		return ptr;
	}



};

// Class DBDAnimation.RepairGeneratorSubAnimInstance
// 0x0090 (FullSize[0x0300] - InheritedSize[0x0270])
class URepairGeneratorSubAnimInstance : public UanimInstance
{
public:
	class Ugenerator*                                  _owningGenerator;                                          // 0x0270(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isBeingRepaired;                                          // 0x0278(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_GHY9[0x7];                                     // 0x0279(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UcamperPlayer*                               _repairingSurvivor;                                        // 0x0280(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAnimSequence*                               _animSequence;                                             // 0x0288(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FgameplayTag                                _interactionTag;                                           // 0x0290(0x000C) (Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FgameplayTag                                _currentAnimId;                                            // 0x029C(0x000C) (BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<struct FgameplayTag, class UAnimSequence*>    _taggedAnimSequences;                                      // 0x02A8(0x0050) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_OKY5[0x8];                                     // 0x02F8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDAnimation.RepairGeneratorSubAnimInstance");
		return ptr;
	}



};

// Class DBDAnimation.RepairGeneratorSurvivorSubAnimInstance
// 0x0080 (FullSize[0x0570] - InheritedSize[0x04F0])
class URepairGeneratorSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance
{
public:
	unsigned char                                      UnknownData_5W1W[0x48];                                    // 0x04F0(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct Fvector                                     _snapPosition;                                             // 0x0538(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                _side;                                                     // 0x0544(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                _repairAnimIndex;                                          // 0x0548(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_Z72D[0xC];                                     // 0x054C(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               _isRepairingGenerator;                                     // 0x0558(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _rightFootDown;                                            // 0x0559(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_2PHN[0x2];                                     // 0x055A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                _animSequenceVariationCount;                               // 0x055C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isVomiting;                                               // 0x0560(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _hasSkillCheckFailed;                                      // 0x0561(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_UFPB[0xE];                                     // 0x0562(0x000E) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDAnimation.RepairGeneratorSurvivorSubAnimInstance");
		return ptr;
	}



};

// Class DBDAnimation.SabotageSurvivorSubAnimInstance
// 0x0050 (FullSize[0x0540] - InheritedSize[0x04F0])
class USabotageSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance
{
public:
	unsigned char                                      UnknownData_W7UE[0x40];                                    // 0x04F0(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               _isSabotaging;                                             // 0x0530(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _hasSkillCheckFailed;                                      // 0x0531(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_SZ3N[0xE];                                     // 0x0532(0x000E) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDAnimation.SabotageSurvivorSubAnimInstance");
		return ptr;
	}



};

// Class DBDAnimation.ScreamSurvivorSubAnimInstance
// 0x0010 (FullSize[0x0500] - InheritedSize[0x04F0])
class UScreamSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance
{
public:
	bool                                               _screamTrigger;                                            // 0x04F0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_K28Q[0xF];                                     // 0x04F1(0x000F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDAnimation.ScreamSurvivorSubAnimInstance");
		return ptr;
	}



	void ResetScreamTrigger();
};

// Class DBDAnimation.SkillCheckFailureTracker
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class USkillCheckFailureTracker : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDAnimation.SkillCheckFailureTracker");
		return ptr;
	}



	void ResetSkillCheckFailed();
	void OnSkillCheckFailed(const struct FgameplayTag& GameEventType, const struct FgameEventData& gameEventData);
};

// Class DBDAnimation.SurvivorAimableArmSensor
// 0x0038 (FullSize[0x0160] - InheritedSize[0x0128])
class USurvivorAimableArmSensor : public UArmIKSensorComponent
{
public:
	unsigned char                                      UnknownData_09GJ[0x10];                                    // 0x0128(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class Ucollectable*                                _aimableCollectable;                                       // 0x0138(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAimableComponent*                           _aimable;                                                  // 0x0140(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_YP20[0x18];                                    // 0x0148(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDAnimation.SurvivorAimableArmSensor");
		return ptr;
	}



};

// Class DBDAnimation.SurvivorAimableSubAnimInstance
// 0x0030 (FullSize[0x0520] - InheritedSize[0x04F0])
class USurvivorAimableSubAnimInstance : public UBaseSurvivorAnimInstance
{
public:
	float                                              _pitch;                                                    // 0x04F0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isHoldingAimItem;                                         // 0x04F4(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isAiming;                                                 // 0x04F5(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_WQRI[0x2];                                     // 0x04F6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _isAimingAlpha;                                            // 0x04F8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct Fvector                                     _aimPoint;                                                 // 0x04FC(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _shoulderToCollisionDistance;                              // 0x0508(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_PUGZ[0x14];                                    // 0x050C(0x0014) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDAnimation.SurvivorAimableSubAnimInstance");
		return ptr;
	}



};

// Class DBDAnimation.SurvivorAnimInstance
// 0x0110 (FullSize[0x0600] - InheritedSize[0x04F0])
class USurvivorAnimInstance : public UBaseSurvivorAnimInstance
{
public:
	class UcamperPlayer*                               camperPlayer;                                              // 0x04F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               IsHooked;                                                  // 0x04F8(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               IsSacrificeStruggling;                                     // 0x04F9(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_2Z2M[0x6];                                     // 0x04FA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimMontage*                                MontageMadnessTierUp;                                      // 0x0500(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UAnimCompositeBase*>                  ArrayCarryAttackMontage;                                   // 0x0508(0x0010) (Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isFrightScreaming;                                        // 0x0518(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               isBeingCarried;                                            // 0x0519(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               IsBeingPutOnHook;                                          // 0x051A(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               IsCrouched;                                                // 0x051B(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	DeadByDaylight_ECamperGuidedAction                 GuidedAction;                                              // 0x051C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               IsTrapped;                                                 // 0x051D(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               IsCrawling;                                                // 0x051E(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               isDead;                                                    // 0x051F(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MaxSpeed;                                                  // 0x0520(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               IsInsideCloset;                                            // 0x0524(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_XZIR[0x3];                                     // 0x0525(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              IsPlayingMadnessTierUpWeight;                              // 0x0528(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               IsBeingKilled;                                             // 0x052C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               IsCarryAttackSucess;                                       // 0x052D(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               IsUsingAimItem;                                            // 0x052E(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               IsHoldingAimItem;                                          // 0x052F(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               AllowLookAt;                                               // 0x0530(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ZUNG[0x3];                                     // 0x0531(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DropStaggerTimeLeft;                                       // 0x0534(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              RightArmIKAlpha;                                           // 0x0538(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_3NL7[0x4];                                     // 0x053C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  RightHandIKTransform;                                      // 0x0540(0x0030) (BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                               Strafe;                                                    // 0x0570(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               isInteracting;                                             // 0x0571(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               Injured;                                                   // 0x0572(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	DBDSharedTypes_EInteractionAnimation               InteractionType;                                           // 0x0573(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	DBDSharedTypes_EInteractionAnimation               PreviousInteractionType;                                   // 0x0574(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               IsSlasherInFPV;                                            // 0x0575(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_8MN3[0x2];                                     // 0x0576(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CarriedAlpha;                                              // 0x0578(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               IsHoldingHandleItem;                                       // 0x057C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               IsHoldingSmallItem;                                        // 0x057D(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               IsHoldingFirecracker;                                      // 0x057E(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               InAir;                                                     // 0x057F(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _walkAnimSpeed;                                            // 0x0580(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              direction;                                                 // 0x0584(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              Pitch;                                                     // 0x0588(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              Yaw;                                                       // 0x058C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct Fvector                                     RightFootEffectorLocation;                                 // 0x0590(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct Fvector                                     LeftFootEffectorLocation;                                  // 0x059C(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               Idle;                                                      // 0x05A8(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_J7YE[0x3];                                     // 0x05A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MyTime;                                                    // 0x05AC(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               HasAnyMontagePlaying;                                      // 0x05B0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_MZOF[0x3];                                     // 0x05B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       CurrentlyPlayerMontageId;                                  // 0x05B4(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               IsBeingCarriedByTheSpirit;                                 // 0x05C0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               IsBeingCarriedByTheNightmare;                              // 0x05C1(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               IsBeingCarriedByThePig;                                    // 0x05C2(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               IsBeingCarriedByTheHag;                                    // 0x05C3(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               IsBeingCarriedByTheLegion;                                 // 0x05C4(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               IsBeingCarriedByTheGhostFace;                              // 0x05C5(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               IsUsingDeadHard;                                           // 0x05C6(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               IsPlayingWakeUpOther;                                      // 0x05C7(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               IsPlayingFreddyMori;                                       // 0x05C8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               isHealingKOCamper;                                         // 0x05C9(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               HasLinkInput;                                              // 0x05CA(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_PLZ7[0x35];                                    // 0x05CB(0x0035) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDAnimation.SurvivorAnimInstance");
		return ptr;
	}



	void SetAudioRummageAkEvent(const struct FName& distance);
	void OnInfectiousFrightScream();
	bool IsPlayingMontageByName(const struct FName& montageID);
	void AddAudioRepairRateRadius(int distance);
};

// Class DBDAnimation.AimOffsetSurvivorSubAnimInstance
// 0x0060 (FullSize[0x0550] - InheritedSize[0x04F0])
class UAimOffsetSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance
{
public:
	float                                              _pitch;                                                    // 0x04F0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _yaw;                                                      // 0x04F4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _yawInterpolated;                                          // 0x04F8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _allowLookAt;                                              // 0x04FC(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isUsingAimItem;                                           // 0x04FD(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isInjured;                                                // 0x04FE(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isCrawling;                                               // 0x04FF(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isIdle;                                                   // 0x0500(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isDrasticYawChangeDetected;                               // 0x0501(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_RP4P[0x2];                                     // 0x0502(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _yawInterpolationSpeed;                                    // 0x0504(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _yawDeadzoneStart;                                         // 0x0508(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _yawClampValue;                                            // 0x050C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _yawDrasticChangeUpperLimit;                               // 0x0510(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _yawDrasticChangeLowerLimit;                               // 0x0514(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _yawDrasticChangeInterpolationSpeed;                       // 0x0518(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_QF2I[0x4];                                     // 0x051C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveFloat*                                 _yawInterpolateEaseIn;                                     // 0x0520(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveFloat*                                 _yawInterpolateEaseOut;                                    // 0x0528(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _yawInterpolationEaseInLength;                             // 0x0530(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _yawInterpolationEaseOutDistance;                          // 0x0534(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isYawInDeadZone;                                          // 0x0538(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_QK5F[0x3];                                     // 0x0539(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _currentTargetYaw;                                         // 0x053C(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _yawAcceleration;                                          // 0x0540(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _yawAccelerationTime;                                      // 0x0544(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_QWHD[0x8];                                     // 0x0548(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDAnimation.AimOffsetSurvivorSubAnimInstance");
		return ptr;
	}



};

// Class DBDAnimation.ArmIKSurvivorSubAnimInstance
// 0x0080 (FullSize[0x0570] - InheritedSize[0x04F0])
class UArmIKSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance
{
public:
	struct FRotator                                    _rightWristUpRotation;                                     // 0x04F0(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FRotator                                    _leftWristUpRotation;                                      // 0x04FC(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FFloatRange                                 _localWristYawRange;                                       // 0x0508(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FFloatRange                                 _localWristPitchRange;                                     // 0x0518(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _armInterpolationSpeed;                                    // 0x0528(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _handInterpolationSpeed;                                   // 0x052C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _alphaLerpTime;                                            // 0x0530(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _reachPadding;                                             // 0x0534(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _rightArmIKAlpha;                                          // 0x0538(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _leftArmIKAlpha;                                           // 0x053C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	DBDAnimation_EArmIkMode                            _armIkMode;                                                // 0x0540(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_LMMN[0x7];                                     // 0x0541(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UArmDetectionFanComponent*                   _rightDetectionFan;                                        // 0x0548(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UArmDetectionFanComponent*                   _leftDetectionFan;                                         // 0x0550(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UskeletalMeshComponent*                      _meshComponent;                                            // 0x0558(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_PMVX[0x10];                                    // 0x0560(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDAnimation.ArmIKSurvivorSubAnimInstance");
		return ptr;
	}



	void ChangeMode(DBDAnimation_EArmIkMode newMode);
};

// Class DBDAnimation.BaseKillerWeaponAnimInstance
// 0x0010 (FullSize[0x0280] - InheritedSize[0x0270])
class UBaseKillerWeaponAnimInstance : public UanimInstance
{
public:
	DBDSharedTypes_EAttackSubstate                     _attackState;                                              // 0x0270(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_K2P9[0xF];                                     // 0x0271(0x000F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDAnimation.BaseKillerWeaponAnimInstance");
		return ptr;
	}



};

// Class DBDAnimation.BaseMenuAnimInstance
// 0x0000 (FullSize[0x0270] - InheritedSize[0x0270])
class UBaseMenuAnimInstance : public UanimInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDAnimation.BaseMenuAnimInstance");
		return ptr;
	}



	class UDBDMenuPlayer* GetOwningMenuPlayer();
};

// Class DBDAnimation.BasePowerSubAnimInstance
// 0x0008 (FullSize[0x0500] - InheritedSize[0x04F8])
class UBasePowerSubAnimInstance : public UBaseKillerAnimInstance
{
public:
	unsigned char                                      UnknownData_C8KX[0x8];                                     // 0x04F8(0x0008) Fix Super Size


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDAnimation.BasePowerSubAnimInstance");
		return ptr;
	}



};

// Class DBDAnimation.BreathingSurvivorSubAnimInstance
// 0x0010 (FullSize[0x0500] - InheritedSize[0x04F0])
class UBreathingSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance
{
public:
	bool                                               _isDead;                                                   // 0x04F0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_LFP1[0x7];                                     // 0x04F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimSequence*                               _breathing;                                                // 0x04F8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDAnimation.BreathingSurvivorSubAnimInstance");
		return ptr;
	}



};

// Class DBDAnimation.ChestAnimInstance
// 0x0020 (FullSize[0x0290] - InheritedSize[0x0270])
class UChestAnimInstance : public UanimInstance
{
public:
	class USearchable*                                 _owningChest;                                              // 0x0270(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isOpen;                                                   // 0x0278(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isBeingPriedOpen;                                         // 0x0279(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_NXLA[0xE];                                     // 0x027A(0x000E) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UinteractionDefinition*                      _openChestInteraction;                                     // 0x0288(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDAnimation.ChestAnimInstance");
		return ptr;
	}



	void OnSearchedChanged(bool searched);
};

// Class DBDAnimation.CrowAnimInstance
// 0x0010 (FullSize[0x0280] - InheritedSize[0x0270])
class UCrowAnimInstance : public UanimInstance
{
public:
	bool                                               _shouldTakeOff;                                            // 0x0270(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_LAI7[0x7];                                     // 0x0271(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWorldRunawayMeshComponent*                  _crow;                                                     // 0x0278(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDAnimation.CrowAnimInstance");
		return ptr;
	}



};

// Class DBDAnimation.DynamicAccessoryAnimInstance
// 0x0010 (FullSize[0x0280] - InheritedSize[0x0270])
class UDynamicAccessoryAnimInstance : public UanimInstance
{
public:
	bool                                               _isInMenu;                                                 // 0x0270(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isInGame;                                                 // 0x0271(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_5E23[0x2];                                     // 0x0272(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TWeakObjectPtr<class UskeletalMeshComponent>       _masterMesh;                                               // 0x0274(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_RWNF[0x4];                                     // 0x027C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDAnimation.DynamicAccessoryAnimInstance");
		return ptr;
	}



};

// Class DBDAnimation.FaceCorrectionSurvivorSubAnimInstance
// 0x0010 (FullSize[0x0500] - InheritedSize[0x04F0])
class UFaceCorrectionSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance
{
public:
	bool                                               _isIdle;                                                   // 0x04F0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isFreddyMori;                                             // 0x04F1(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isInCloset;                                               // 0x04F2(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isEdgeCase;                                               // 0x04F3(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isInjured;                                                // 0x04F4(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isHealingOthers;                                          // 0x04F5(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isCrouched;                                               // 0x04F6(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_GGGM[0x9];                                     // 0x04F7(0x0009) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDAnimation.FaceCorrectionSurvivorSubAnimInstance");
		return ptr;
	}



};

// Class DBDAnimation.GeneratorAnimInstance
// 0x0010 (FullSize[0x0290] - InheritedSize[0x0280])
class UGeneratorAnimInstance : public USleepingAnimInstance
{
public:
	class Ugenerator*                                  _owningGenerator;                                          // 0x0280(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _rushFailed;                                               // 0x0288(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isActivated;                                              // 0x0289(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_EVNN[0x2];                                     // 0x028A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _percentComplete;                                          // 0x028C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDAnimation.GeneratorAnimInstance");
		return ptr;
	}



	void SetSkillCheckSuccess(bool Success);
};

// Class DBDAnimation.HealSurvivorSubAnimInstance
// 0x0050 (FullSize[0x0540] - InheritedSize[0x04F0])
class UHealSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance
{
public:
	unsigned char                                      UnknownData_J9SD[0x40];                                    // 0x04F0(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               _isHealingACrawlingTarget;                                 // 0x0530(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isHealingOtherNoMedkit;                                   // 0x0531(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isHealingOtherMedkit;                                     // 0x0532(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isHealingSelfNoMedkit;                                    // 0x0533(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isHealingSelfMedkit;                                      // 0x0534(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isWakingUpOther;                                          // 0x0535(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isBeingHealed;                                            // 0x0536(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isBeingMended;                                            // 0x0537(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isMendingOther;                                           // 0x0538(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _hasSkillCheckFailed;                                      // 0x0539(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isCrawling;                                               // 0x053A(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _hasHealerSkillCheckFailed;                                // 0x053B(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ATUJ[0x4];                                     // 0x053C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDAnimation.HealSurvivorSubAnimInstance");
		return ptr;
	}



	void ResetHealerSkillCheckFailed();
	void OnHealerSkillCheckResponseAesthetic(bool Success, class UdbdPlayer* healer);
};

// Class DBDAnimation.InteractionSurvivorSubAnimInstance
// 0x0040 (FullSize[0x0530] - InheritedSize[0x04F0])
class UInteractionSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance
{
public:
	bool                                               _isAgainstSmallKiller;                                     // 0x04F0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isInsideCloset;                                           // 0x04F1(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isEnteringCloset;                                         // 0x04F2(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isBeingCarried;                                           // 0x04F3(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isHooked;                                                 // 0x04F4(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isSacrificeStruggling;                                    // 0x04F5(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_A3NM[0x2];                                     // 0x04F6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _sacrificeStrugglePercent;                                 // 0x04F8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _selfUnhookFailed;                                         // 0x04FC(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	DBDSharedTypes_EInteractionAnimation               _interactionAnimation;                                     // 0x04FD(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_VWB1[0x2];                                     // 0x04FE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct Fvector                                     _snapPosition;                                             // 0x0500(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isInteractingWithEscapeDoor;                              // 0x050C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_0543[0x23];                                    // 0x050D(0x0023) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDAnimation.InteractionSurvivorSubAnimInstance");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
