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

// Class TheK23.ActivateSuperMode
// 0x0080 (FullSize[0x0580] - InheritedSize[0x0500])
class UActivateSuperMode : public UinteractionDefinition
{
public:
	unsigned char                                      UnknownData_HLE7[0x8];                                     // 0x0500(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAnimationMontageDescriptor                 _activationMontage;                                        // 0x0508(0x0020) (Edit, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _activationDuration;                                       // 0x0528(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _confirmationChargeDuration;                               // 0x0550(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_RHTF[0x8];                                     // 0x0578(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheK23.ActivateSuperMode");
		return ptr;
	}



};

// Class TheK23.FastTrack
// 0x0018 (FullSize[0x0360] - InheritedSize[0x0348])
class UFastTrack : public Uperk
{
public:
	int                                                _tokensToAdd[0x3];                                         // 0x0348(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_RJRL[0xC];                                     // 0x0354(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheK23.FastTrack");
		return ptr;
	}



	void Cosmetic_OnTokenCountDecreased();
};

// Class TheK23.FlurryComboScoreComponent
// 0x01B0 (FullSize[0x0268] - InheritedSize[0x00B8])
class UFlurryComboScoreComponent : public UactorComponent
{
public:
	unsigned char                                      UnknownData_F8SS[0x1C];                                    // 0x00B8(0x001C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _comboScore;                                               // 0x00D4(0x0004) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _timeForCombo;                                             // 0x00D8(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _baseKnifeComboScore;                                      // 0x0100(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _maximumKnifeMultiplier;                                   // 0x0128(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _fillLacerationComboScore;                                 // 0x0150(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _longRangeThreshold;                                       // 0x0178(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _closeRangeScoreMultiplier;                                // 0x01A0(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _longRangeScoreMultiplier;                                 // 0x01C8(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<float>                                      _thresholds;                                               // 0x01F0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<float>                                      _thresholdsScoreForAudio;                                  // 0x0200(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FgameplayTag>                        _comboScoreEvents;                                         // 0x0210(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_VRFJ[0x48];                                    // 0x0220(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheK23.FlurryComboScoreComponent");
		return ptr;
	}



	void OnRep_ComboScore();
};

// Class TheK23.FlurryOfKnives
// 0x0498 (FullSize[0x0AC0] - InheritedSize[0x0628])
class UFlurryOfKnives : public UChargeableInteractionDefinition
{
public:
	unsigned char                                      UnknownData_1LUP[0x8];                                     // 0x0628(0x0008) Fix Super Size
	unsigned char                                      UnknownData_JLJJ[0x40];                                    // 0x0630(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                _replicatedNumOfStacksReduction;                           // 0x0670(0x0004) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_DIPL[0x4C];                                    // 0x0674(0x004C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UstatusEffect*                               _selfSlowEffect;                                           // 0x06C0(0x0008) (ExportObject, Net, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _flurryOfKnivesEnterDuration;                              // 0x06C8(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _flurryOfKnivesExitDuration;                               // 0x06F0(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _chargeTime;                                               // 0x0718(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTunableStat                                _baseTimeBetweenThrows;                                    // 0x0740(0x0040) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCurveFloat*                                 _throwRateModifierByKnivesThrown;                          // 0x0780(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _superModeThrowRateModifier;                               // 0x0788(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _knivesLaunchSpeed;                                        // 0x07B0(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _convergencePointDistance;                                 // 0x07D8(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCurveFloat*                                 _coneOfFireAngleCurve;                                     // 0x0800(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _consecutiveKnivesStacksDecayTime;                         // 0x0808(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _maxConsecutiveKnivesStacks;                               // 0x0830(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCurveFloat*                                 _movementSpeedByKnivesThrown;                              // 0x0858(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _superModeBaseMovementSpeed;                               // 0x0860(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _baseWalkSpeed;                                            // 0x0888(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCurveFloat*                                 _recoilIntensityByKnivesThrown;                            // 0x08B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _recoilDuration;                                           // 0x08B8(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _recoilAngle;                                              // 0x08E0(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _maximumRecoilAngleVariation;                              // 0x0908(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _rotationSpeedAdjustmentTime;                              // 0x0930(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _aimingStanceRotationYawScaleAdjustment;                   // 0x0958(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _aimingStanceRotationPitchScaleAdjustment;                 // 0x0980(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _throwingRotationYawScaleAdjustment;                       // 0x09A8(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _throwingRotationPitchScaleAdjustment;                     // 0x09D0(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _aimingStanceGamepadRotationYawScaleAdjustment;            // 0x09F8(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _aimingStanceGamepadRotationPitchScaleAdjustment;          // 0x0A20(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _throwingGamepadRotationYawScaleAdjustment;                // 0x0A48(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _throwingGamepadRotationPitchScaleAdjustment;              // 0x0A70(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCurveFloat*                                 _aimingGamepadPitchCurve;                                  // 0x0A98(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCurveFloat*                                 _aimingGamepadYawCurve;                                    // 0x0AA0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCurveFloat*                                 _throwingGamepadPitchCurve;                                // 0x0AA8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCurveFloat*                                 _throwingGamepadYawCurve;                                  // 0x0AB0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_70T6[0x8];                                     // 0x0AB8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheK23.FlurryOfKnives");
		return ptr;
	}



	void Server_StartThrowing();
	void Server_DecreaseConsecutiveKnivesStacks();
	void OnRep_NumOfStacksReduction();
	void Multicast_StartThrowing();
};

// Class TheK23.HexCrowdControl
// 0x0010 (FullSize[0x03B8] - InheritedSize[0x03A8])
class UHexCrowdControl : public UHexPerk
{
public:
	float                                              _windowVaultBlockDuration[0x3];                            // 0x03A8(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_PSAB[0x4];                                     // 0x03B4(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheK23.HexCrowdControl");
		return ptr;
	}



};

// Class TheK23.K23PowerProgressPresentationComponent
// 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
class UK23PowerProgressPresentationComponent : public UPresentationItemProgressComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheK23.K23PowerProgressPresentationComponent");
		return ptr;
	}



};

// Class TheK23.KnifeProjectile
// 0x00F0 (FullSize[0x03E0] - InheritedSize[0x02F0])
class UKnifeProjectile : public UKillerProjectile
{
public:
	class UprimitiveComponent*                         _worldCollider;                                            // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UprimitiveComponent*                         _camperDetector;                                           // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_I2Z4[0x10];                                    // 0x0300(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      _playersAffectedSinceLastBounce[0x50];                     // 0x0300(0x0050) UNKNOWN PROPERTY: SetProperty
	class UPoolableProjectileComponent*                _poolableActorComponent;                                   // 0x0360(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _knifeMaxRange;                                            // 0x0368(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _addonExplosionRadius;                                     // 0x0390(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _numberOfAddonBounces;                                     // 0x03B8(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheK23.KnifeProjectile");
		return ptr;
	}



	bool WasLaunchedDuringSuperMode();
	bool ShouldPlayRicochetSound();
	void SetKnifeAcquired(bool acquired);
	void OnWorldColliderHit(class UprimitiveComponent* hitComponent, class Uactor* otherActor, class UprimitiveComponent* otherComp, const struct Fvector& normalImpulse, const struct FhitResult& hit);
	void OnProjectileBounce(const struct FhitResult& impactResult, const struct Fvector& impactVelocity);
	float GetAddonExplosionRadius();
	void BP_SetKnifeActive(bool active);
	void BP_OnLaunchCosmetic(const struct FlaunchInfo& launchInfo, bool hasImpactOnLaunch);
	void BP_CosmeticOnAddonExplosion(const struct Fvector& location, const struct Fvector& normal);
};

// Class TheK23.KnivesLauncher
// 0x00C0 (FullSize[0x0240] - InheritedSize[0x0180])
class UKnivesLauncher : public UKillerProjectileLauncher
{
public:
	struct FDBDTunableRowHandle                        _knifeSpawnOffset;                                         // 0x0180(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _knifeSpawnForwardOffset;                                  // 0x01A8(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _launchSpeed;                                              // 0x01D0(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTunableStat                                _maxAmmoTunable;                                           // 0x01F8(0x0040) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_XJPL[0x8];                                     // 0x0238(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheK23.KnivesLauncher");
		return ptr;
	}



	class UThrowingKnives* GetPower();
	int GetLocallyPredictedAmmo();
};

// Class TheK23.KnivesProvider
// 0x0008 (FullSize[0x00F8] - InheritedSize[0x00F0])
class UKnivesProvider : public UAuthoritativeActorPoolComponent
{
public:
	unsigned char                                      UnknownData_BA30[0x8];                                     // 0x00F0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheK23.KnivesProvider");
		return ptr;
	}



};

// Class TheK23.LacerationComponent
// 0x02E0 (FullSize[0x0398] - InheritedSize[0x00B8])
class ULacerationComponent : public UactorComponent
{
public:
	unsigned char                                      UnknownData_21JF[0x38];                                    // 0x00B8(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _laceration;                                               // 0x00F0(0x0004) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_DY92[0xC];                                     // 0x00F4(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UstatusEffect*                               _onHitSpeedBoost;                                          // 0x0100(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_8C5I[0x28];                                    // 0x0108(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTunableStat                                _maxLaceration;                                            // 0x0130(0x0040) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _lacerationExplosionDamage;                                // 0x0170(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTunableStat                                _lacerationRegressionPerSecond;                            // 0x0198(0x0040) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTunableStat                                _lacerationRegressionPerSecondWhileRunning;                // 0x01D8(0x0040) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _speedBoostIntensity;                                      // 0x0218(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _speedBoostDuration;                                       // 0x0240(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _stopTickingRegressionWhileInjured;                        // 0x0268(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _stopTickingRegressionWhileInChase;                        // 0x0290(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _stopTickingRegressionWithinTerrorRadius;                  // 0x02B8(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTunableStat                                _timeBeforeLacerationDecayStarts;                          // 0x02E0(0x0040) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _regressionBufferTimerAlwaysTicks;                         // 0x0320(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _lacerationToRemoveOnBasicAttack;                          // 0x0348(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _thresholdForGraceTimerScoreEvent;                         // 0x0370(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheK23.LacerationComponent");
		return ptr;
	}



	void OnRepLaceration(float oldLaceration);
	void Multicast_KnifeHit(float newLaceration, bool causedDamage, bool causedKo, const struct Fvector& impactLocation, const struct Fvector& impactNormal);
	void Cosmetic_OnLocallyObservedChanged(bool isLocallyObserved, float LacerationPercent, bool IsDangerous);
	void Cosmetic_OnLacerationChanged(float LacerationPercent, bool IsDangerous);
	void Cosmetic_OnKnifeHit(float LacerationPercent, bool IsDangerous, bool causedDamage, bool causedKo, const struct Fvector& impactNormal);
};

// Class TheK23.BaseLacerationLevelCondition
// 0x0000 (FullSize[0x00E8] - InheritedSize[0x00E8])
class UBaseLacerationLevelCondition : public UEventDrivenModifierCondition
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheK23.BaseLacerationLevelCondition");
		return ptr;
	}



};

// Class TheK23.LacerationLevelCondition
// 0x0008 (FullSize[0x00F0] - InheritedSize[0x00E8])
class ULacerationLevelCondition : public UBaseLacerationLevelCondition
{
public:
	float                                              _lacerationLevelRequired;                                  // 0x00E8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_OWO3[0x4];                                     // 0x00EC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheK23.LacerationLevelCondition");
		return ptr;
	}



};

// Class TheK23.LacerationAlmostFullCondition
// 0x0000 (FullSize[0x00E8] - InheritedSize[0x00E8])
class ULacerationAlmostFullCondition : public UBaseLacerationLevelCondition
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheK23.LacerationAlmostFullCondition");
		return ptr;
	}



};

// Class TheK23.NoWayOut
// 0x0038 (FullSize[0x0380] - InheritedSize[0x0348])
class UNoWayOut : public Uperk
{
public:
	float                                              _exitGatePanelBlockBaseDuration[0x3];                      // 0x0348(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _exitGatePanelBlockDurationPerToken[0x3];                  // 0x0354(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UcamperPlayer*>                       _hookedSurvivors;                                          // 0x0360(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_P5XH[0x10];                                    // 0x0370(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheK23.NoWayOut");
		return ptr;
	}



};

// Class TheK23.ReloadKnives
// 0x0008 (FullSize[0x0510] - InheritedSize[0x0508])
class UReloadKnives : public UBaseLockerInteraction
{
public:
	unsigned char                                      UnknownData_XB4F[0x8];                                     // 0x0508(0x0008) Fix Super Size


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheK23.ReloadKnives");
		return ptr;
	}



};

// Class TheK23.SelfPreservation
// 0x0018 (FullSize[0x0360] - InheritedSize[0x0348])
class USelfPreservation : public Uperk
{
public:
	float                                              _hitDistanceToTriggerPerkEffect[0x3];                      // 0x0348(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _selfPreservationEffectDuration[0x3];                      // 0x0354(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheK23.SelfPreservation");
		return ptr;
	}



};

// Class TheK23.SmashHit
// 0x0020 (FullSize[0x0368] - InheritedSize[0x0348])
class USmashHit : public Uperk
{
public:
	float                                              _exhaustedTime[0x3];                                       // 0x0348(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _hasteTime[0x3];                                           // 0x0354(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_0KUQ[0x8];                                     // 0x0360(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheK23.SmashHit");
		return ptr;
	}



};

// Class TheK23.Starstruck
// 0x0120 (FullSize[0x0468] - InheritedSize[0x0348])
class UStarstruck : public Uperk
{
public:
	float                                              _exposedEffectDuration[0x3];                               // 0x0348(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _perkCooldownDuration[0x3];                                // 0x0354(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<TWeakObjectPtr<class UcamperPlayer>, TWeakObjectPtr<class UstatusEffect>> _camperExposedEffects;                                     // 0x0360(0x0050) (ExportObject, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_SF21[0xB8];                                    // 0x03B0(0x00B8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheK23.Starstruck");
		return ptr;
	}



};

// Class TheK23.SuperModeDeactivation
// 0x0030 (FullSize[0x0530] - InheritedSize[0x0500])
class USuperModeDeactivation : public UinteractionDefinition
{
public:
	struct FDBDTunableRowHandle                        _deactivationDuration;                                     // 0x0500(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_S7JO[0x8];                                     // 0x0528(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheK23.SuperModeDeactivation");
		return ptr;
	}



};

// Class TheK23.ThrowingKnives
// 0x00B8 (FullSize[0x04D8] - InheritedSize[0x0420])
class UThrowingKnives : public Ucollectable
{
public:
	unsigned char                                      UnknownData_XNBQ[0x40];                                    // 0x0420(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UFlurryComboScoreComponent*                  _flurryScoreComponent;                                     // 0x0460(0x0008) (Edit, ExportObject, Net, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTricksterSuperModeComponent*                _superModeComponent;                                       // 0x0468(0x0008) (Edit, ExportObject, Net, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UK23PowerProgressPresentationComponent*      _superModeChargePresentationComponent;                     // 0x0470(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPowerChargeComponent*                       _superModeChargeComponent;                                 // 0x0478(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UInteractionStarterComponent*                _flurryStarterComponent;                                   // 0x0480(0x0008) (ExportObject, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UKnivesProvider*                             _knivesProvider;                                           // 0x0488(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UKnivesLauncher*                             _knivesLauncher;                                           // 0x0490(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UClass*                                      _lacerationComponentClass;                                 // 0x0498(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UClass*                                      _reloadInteractionClass;                                   // 0x04A0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UClass*                                      _closetReloadActor;                                        // 0x04A8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _minimumTimeBetweenBroadcast;                              // 0x04B0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_JQTG[0x24];                                    // 0x04B4(0x0024) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheK23.ThrowingKnives");
		return ptr;
	}



	void OnItemUsedStateChanged(bool pressed);
	void Multicast_OnUsePowerWhenOutOfAmmo();
	void Multicast_OnUsePowerWhenInCooldown();
	bool IsRequestingFlurryOfKnives();
	class UslasherPlayer* GetSlasher();
	class UKnivesLauncher* GetLauncher();
	void Cosmetic_OnUsePowerWhenOutOfAmmo();
	void Cosmetic_OnUsePowerWhenInCooldown();
	void Cosmetic_OnLaunch();
	void Cosmetic_OnComboScoreChanged(float scoreNormalizedForAudio);
	void Cosmetic_OnComboFinished(bool isSRankCombo);
	void Authority_SpawnReloadInteractionOnLockers();
};

// Class TheK23.ThrowingKnivesHitSubAnimInstance
// 0x0020 (FullSize[0x0510] - InheritedSize[0x04F0])
class UThrowingKnivesHitSubAnimInstance : public UBaseSurvivorAnimInstance
{
public:
	bool                                               _hitByKnifeTrigger;                                        // 0x04F0(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _knifeHitCausedKOTrigger;                                  // 0x04F1(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _knifeHitCausedDamageTrigger;                              // 0x04F2(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _useAlternateHitReactionState;                             // 0x04F3(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _knifeHitAngle;                                            // 0x04F4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _knifeHitStateHitAngle;                                    // 0x04F8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _alternateKnifeHitStateHitAngle;                           // 0x04FC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_USID[0x10];                                    // 0x0500(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheK23.ThrowingKnivesHitSubAnimInstance");
		return ptr;
	}



};

// Class TheK23.TricksterAnimInstance
// 0x0078 (FullSize[0x0620] - InheritedSize[0x05A8])
class UTricksterAnimInstance : public UKillerAnimInstance
{
public:
	unsigned char                                      UnknownData_7O9K[0x4];                                     // 0x05A8(0x0004) Fix Super Size
	float                                              _isThrowInputPressed;                                      // 0x05AC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isThrowingWithLeftArm;                                    // 0x05B0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isThrowingWithRightArm;                                   // 0x05B1(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_SWLL[0x2];                                     // 0x05B2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _throwPlayRate;                                            // 0x05B4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _baseThrowDuration;                                        // 0x05B8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                _consecutiveKnivesThrownStacks;                            // 0x05BC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _timeSinceLastKnifeLaunched;                               // 0x05C0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                _currentAmmoCount;                                         // 0x05C4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isInSuperMode;                                            // 0x05C8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isInActivation;                                           // 0x05C9(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_TAJG[0x2];                                     // 0x05CA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _activationDuration;                                       // 0x05CC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isInDeactivation;                                         // 0x05D0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_WFHA[0x3];                                     // 0x05D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _deactivationDuration;                                     // 0x05D4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_LY98[0x38];                                    // 0x05D8(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UThrowingKnives*                             _throwingKnives;                                           // 0x0610(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_27X3[0x8];                                     // 0x0618(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheK23.TricksterAnimInstance");
		return ptr;
	}



};

// Class TheK23.TricksterChainedThrowsAddon
// 0x0018 (FullSize[0x0230] - InheritedSize[0x0218])
class UTricksterChainedThrowsAddon : public UItemAddon
{
public:
	unsigned char                                      UnknownData_WG9X[0x4];                                     // 0x0218(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               _resetOnEnteringFlurryInteraction;                         // 0x021C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_E43P[0x3];                                     // 0x021D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _lacerationPenaltyRangeThreshold;                          // 0x0220(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _closeRangeLacerationPenalty;                              // 0x0224(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _maximumMultiplier;                                        // 0x0228(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_JF7V[0x4];                                     // 0x022C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheK23.TricksterChainedThrowsAddon");
		return ptr;
	}



};

// Class TheK23.TricksterCharacterVFXInterface
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UTricksterCharacterVFXInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheK23.TricksterCharacterVFXInterface");
		return ptr;
	}



	void ShowWeapon();
	void SetSuperModeActive(bool active);
	void SetKnivesVisibility(bool leftKnife, bool rightKnife);
	void SetIsSuperModeReady(bool isSuperModeReady);
	void SetIsInCooldown(bool isInCooldown);
	void HideWeapon();
};

// Class TheK23.TricksterSuperModeComponent
// 0x0130 (FullSize[0x01E8] - InheritedSize[0x00B8])
class UTricksterSuperModeComponent : public UactorComponent
{
public:
	bool                                               _isInSuperMode;                                            // 0x00B8(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _isSuperModeReady;                                         // 0x00B9(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _isInCooldown;                                             // 0x00BA(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_PHLF[0xD];                                     // 0x00BB(0x000D) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDBDTunableRowHandle                        _chargesToAddOnKnifeHit;                                   // 0x00C8(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _superModeMaxCharge;                                       // 0x00F0(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _superModeReadyDepletionPerSecond;                         // 0x0118(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTunableStat                                _superModeActiveDuration;                                  // 0x0140(0x0040) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _superModeCooldown;                                        // 0x0180(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _shouldDisableFlurryDuringCooldown;                        // 0x01A8(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_7AYO[0x18];                                    // 0x01D0(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheK23.TricksterSuperModeComponent");
		return ptr;
	}



	void OnRepIsSuperModeReady();
	void OnRepIsInSuperMode();
	void OnRepIsInCooldown();
};

// Class TheK23.TriggerTimerOnLacerationAlmostFullEffect
// 0x0010 (FullSize[0x02B8] - InheritedSize[0x02A8])
class UTriggerTimerOnLacerationAlmostFullEffect : public UstatusEffect
{
public:
	class ULacerationComponent*                        _lacerationComponent;                                      // 0x02A8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _duration;                                                 // 0x02B0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_6DFK[0x4];                                     // 0x02B4(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheK23.TriggerTimerOnLacerationAlmostFullEffect");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
