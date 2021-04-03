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

// Class DBDCompetence.TimedStatusEffect
// 0x0000 (FullSize[0x02A8] - InheritedSize[0x02A8])
class UTimedStatusEffect : public UstatusEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.TimedStatusEffect");
		return ptr;
	}



};

// Class DBDCompetence.AbilityStealthUndetectableEffect
// 0x0000 (FullSize[0x02A8] - InheritedSize[0x02A8])
class UAbilityStealthUndetectableEffect : public UTimedStatusEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.AbilityStealthUndetectableEffect");
		return ptr;
	}



};

// Class DBDCompetence.AdjustableCooldownStatusEffect
// 0x0010 (FullSize[0x02B8] - InheritedSize[0x02A8])
class UAdjustableCooldownStatusEffect : public UstatusEffect
{
public:
	struct FgameplayTag                                CooldownModifierType;                                      // 0x02A8(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_N45Z[0x4];                                     // 0x02B4(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.AdjustableCooldownStatusEffect");
		return ptr;
	}



};

// Class DBDCompetence.ExhaustedEffect
// 0x0008 (FullSize[0x02C0] - InheritedSize[0x02B8])
class UExhaustedEffect : public UAdjustableCooldownStatusEffect
{
public:
	float                                              CooldownModifier;                                          // 0x02B8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_D0EW[0x4];                                     // 0x02BC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.ExhaustedEffect");
		return ptr;
	}



};

// Class DBDCompetence.ActivatableExhaustedEffect
// 0x0000 (FullSize[0x02C0] - InheritedSize[0x02C0])
class UActivatableExhaustedEffect : public UExhaustedEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.ActivatableExhaustedEffect");
		return ptr;
	}



	void Authority_Start(float duration);
	void Authority_OnHookCamper(const struct FgameplayTag& gameEvent, const struct FgameEventData& gameEventData);
};

// Class DBDCompetence.ActivateOnEventTimedStatusEffect
// 0x0020 (FullSize[0x02C8] - InheritedSize[0x02A8])
class UActivateOnEventTimedStatusEffect : public UstatusEffect
{
public:
	struct FGameplayTagContainer                       _eventsToActivateOn;                                       // 0x02A8(0x0020) (Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.ActivateOnEventTimedStatusEffect");
		return ptr;
	}



};

// Class DBDCompetence.AllHexTotemsAreActive
// 0x0018 (FullSize[0x0100] - InheritedSize[0x00E8])
class UAllHexTotemsAreActive : public UEventDrivenModifierCondition
{
public:
	unsigned char                                      UnknownData_9WFK[0x18];                                    // 0x00E8(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.AllHexTotemsAreActive");
		return ptr;
	}



};

// Class DBDCompetence.AnyMeansNecessary
// 0x0020 (FullSize[0x0368] - InheritedSize[0x0348])
class UAnyMeansNecessary : public Uperk
{
public:
	bool                                               RevealSurvivorOnPalletPullUpStarted;                       // 0x0348(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               RevealSurvivorOnPalletPulledUp;                            // 0x0349(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_LH7G[0x2];                                     // 0x034A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RevealSurvivorDuration;                                    // 0x034C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class UstatusEffect>                _effect;                                                   // 0x0350(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _coolDownDuration[0x3];                                    // 0x0358(0x000C) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_WXXR[0x4];                                     // 0x0364(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.AnyMeansNecessary");
		return ptr;
	}



	void Authority_OnPalletPullUpStarted(const struct FgameplayTag& gameplayTag, const struct FgameEventData& gameEventData);
	void Authority_OnPalletPulledUp(const struct FgameplayTag& gameplayTag, const struct FgameEventData& gameEventData);
};

// Class DBDCompetence.AnySurvivorHasObjectState
// 0x0070 (FullSize[0x0158] - InheritedSize[0x00E8])
class UAnySurvivorHasObjectState : public UEventDrivenModifierCondition
{
public:
	unsigned char                                      UnknownData_H5WJ[0x50];                                    // 0x00E8(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FgameplayTag                                _stateTag;                                                 // 0x0138(0x000C) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_ZGG5[0x14];                                    // 0x0144(0x0014) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.AnySurvivorHasObjectState");
		return ptr;
	}



	void OnSurvivorRemoved(class UcamperPlayer* Survivor);
	void OnSurvivorAdded(class UcamperPlayer* Survivor);
};

// Class DBDCompetence.Babysitter
// 0x0028 (FullSize[0x0370] - InheritedSize[0x0348])
class UBabysitter : public Uperk
{
public:
	float                                              _scratchMarkHidingTime[0x3];                               // 0x0348(0x000C) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _showAuraTime[0x3];                                        // 0x0354(0x000C) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _cooldownTime[0x3];                                        // 0x0360(0x000C) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_EJY6[0x4];                                     // 0x036C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.Babysitter");
		return ptr;
	}



};

// Class DBDCompetence.BabysitterEffect
// 0x0000 (FullSize[0x02A8] - InheritedSize[0x02A8])
class UBabysitterEffect : public UstatusEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.BabysitterEffect");
		return ptr;
	}



};

// Class DBDCompetence.BetterTogether
// 0x0058 (FullSize[0x03A0] - InheritedSize[0x0348])
class UBetterTogether : public Uperk
{
public:
	bool                                               ShouldRevealKiller;                                        // 0x0348(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               ShouldRevealSurvivors;                                     // 0x0349(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_1A1A[0x2];                                     // 0x034A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RevealDistance;                                            // 0x034C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UdbdPlayer*>                          _affectedCampers;                                          // 0x0350(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_VYX0[0x8];                                     // 0x0360(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class Uactor*                                      _genToReveal;                                              // 0x0368(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _durationByLevel[0x3];                                     // 0x0370(0x000C) (Edit, EditFixedSize, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_JT1F[0x24];                                    // 0x037C(0x0024) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.BetterTogether");
		return ptr;
	}



	void OnStartedGeneratorRepair(const struct FgameplayTag& gameplayTag, const struct FgameEventData& gameEventData);
};

// Class DBDCompetence.BloodEcho
// 0x0018 (FullSize[0x0360] - InheritedSize[0x0348])
class UBloodEcho : public Uperk
{
public:
	struct FgameplayTag                                _statusEffectDurationTag;                                  // 0x0348(0x000C) (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _coolDownDuration[0x3];                                    // 0x0354(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.BloodEcho");
		return ptr;
	}



};

// Class DBDCompetence.Breakout
// 0x0078 (FullSize[0x03C0] - InheritedSize[0x0348])
class UBreakout : public Uperk
{
public:
	class UslasherPlayer*                              _slasher;                                                  // 0x0348(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UdbdPlayer*                                  _playerOwner;                                              // 0x0350(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _hasteEffect[0x3];                                         // 0x0358(0x000C) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _wiggleEffect;                                             // 0x0364(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _survivorDistanceMax;                                      // 0x0368(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _isPerkActive;                                             // 0x036C(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_PBJ2[0x53];                                    // 0x036D(0x0053) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.Breakout");
		return ptr;
	}



	void OnSlasherSet(class UslasherPlayer* slasher);
	void OnRep_IsPerkActive();
	void Authority_OnRangeChanged(bool inRange);
	void Authority_ImposeWiggleStatusEffect(class UcamperPlayer* Survivor);
};

// Class DBDCompetence.BuckleUp
// 0x0030 (FullSize[0x0378] - InheritedSize[0x0348])
class UBuckleUp : public Uperk
{
public:
	struct FLinearColor                                _noRecoveryColor;                                          // 0x0348(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                                _fullRecoveryColor;                                        // 0x0358(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _revealDuration[0x3];                                      // 0x0368(0x000C) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_LOFG[0x4];                                     // 0x0374(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.BuckleUp");
		return ptr;
	}



};

// Class DBDCompetence.Camaraderie
// 0x0028 (FullSize[0x0370] - InheritedSize[0x0348])
class UCamaraderie : public Uperk
{
public:
	unsigned char                                      UnknownData_H0B3[0xC];                                     // 0x0348(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _percentUseItem[0x3];                                      // 0x0354(0x000C) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _pauseTimer[0x3];                                          // 0x0360(0x000C) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _needItemToTrigger;                                        // 0x036C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_NII9[0x3];                                     // 0x036D(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.Camaraderie");
		return ptr;
	}



	void Authority_EnablePerk();
};

// Class DBDCompetence.CollectableOwnerSubjectProvider
// 0x0018 (FullSize[0x0060] - InheritedSize[0x0048])
class UCollectableOwnerSubjectProvider : public UModifierSubjectProvider
{
public:
	unsigned char                                      UnknownData_YTJI[0x18];                                    // 0x0048(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.CollectableOwnerSubjectProvider");
		return ptr;
	}



};

// Class DBDCompetence.CorruptIntervention
// 0x0038 (FullSize[0x0380] - InheritedSize[0x0348])
class UCorruptIntervention : public Uperk
{
public:
	unsigned char                                      _blockedGeneratorCount[0x3];                               // 0x0348(0x0003) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_01AY[0x1];                                     // 0x034B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _generatorBlockDuration[0x3];                              // 0x034C(0x000C) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                                _generatorAuraColorForKiller;                              // 0x0358(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class Ugenerator*>                          _blockedGenerators;                                        // 0x0368(0x0010) (Net, ZeroConstructor, Transient, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_1FNM[0x8];                                     // 0x0378(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.CorruptIntervention");
		return ptr;
	}



	void Server_ActivatePerk();
	void OnRep_BlockedGenerators();
	void Local_OnIntroCompleted();
};

// Class DBDCompetence.CruelConfinement
// 0x00A0 (FullSize[0x03E8] - InheritedSize[0x0348])
class UCruelConfinement : public Uperk
{
public:
	float                                              _effectiveRadius[0x3];                                     // 0x0348(0x000C) (Edit, EditFixedSize, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _blockDuration[0x3];                                       // 0x0354(0x000C) (Edit, EditFixedSize, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FLinearColor                                _windowAuraColor;                                          // 0x0360(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<class Ugenerator*, struct FWindowBlockableList> _blockableLists;                                           // 0x0370(0x0050) (Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_IC02[0x28];                                    // 0x03C0(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.CruelConfinement");
		return ptr;
	}



};

// Class DBDCompetence.DarkDevotion
// 0x0018 (FullSize[0x0360] - InheritedSize[0x0348])
class UDarkDevotion : public Uperk
{
public:
	class UTerrorRadiusEmitterComponent*               _obsessionTerrorRadiusEmitter;                             // 0x0348(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _obsessionTerrorRadius;                                    // 0x0350(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _simulatedFixedDistance;                                   // 0x0354(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_XS2L[0x8];                                     // 0x0358(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.DarkDevotion");
		return ptr;
	}



};

// Class DBDCompetence.DarkSense
// 0x0018 (FullSize[0x0360] - InheritedSize[0x0348])
class UDarkSense : public Uperk
{
public:
	float                                              _effectDurationOnGeneratorComplete;                        // 0x0348(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _effectDurationOnFinalGeneratorComplete[0x3];              // 0x034C(0x000C) (Edit, EditFixedSize, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_CWS8[0x8];                                     // 0x0358(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.DarkSense");
		return ptr;
	}



};

// Class DBDCompetence.DBDConditionFactory
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UDBDConditionFactory : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.DBDConditionFactory");
		return ptr;
	}



	class UIsPlayerPerformingInteraction* STATIC_IsPlayerPerformingInteraction(const TScriptInterface<class UconditionReceiver>& conditionReceiver, const struct FGameplayTagContainer& interactionSemantics);
	class UDoesPerkHaveToken* STATIC_DoesPerkHaveToken(const TScriptInterface<class UconditionReceiver>& conditionReceiver, class Uperk* perk);
};

// Class DBDCompetence.DeadMansSwitchEffect
// 0x0000 (FullSize[0x02A8] - InheritedSize[0x02A8])
class UDeadMansSwitchEffect : public UstatusEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.DeadMansSwitchEffect");
		return ptr;
	}



};

// Class DBDCompetence.DeceptionEffect
// 0x0008 (FullSize[0x02B0] - InheritedSize[0x02A8])
class UDeceptionEffect : public UstatusEffect
{
public:
	bool                                               _hideBloodTrailsWhenCamperFakeEnterLocker;                 // 0x02A8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_DFSG[0x7];                                     // 0x02A9(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.DeceptionEffect");
		return ptr;
	}



};

// Class DBDCompetence.DecisiveStrike
// 0x00A0 (FullSize[0x03E8] - InheritedSize[0x0348])
class UDecisiveStrike : public Uperk
{
public:
	float                                              _timeAfterUnhook[0x3];                                     // 0x0348(0x000C) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _skillCheckDelay;                                          // 0x0354(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _skillCheckBuffer;                                         // 0x0358(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _killerHearsSkillCheckCue;                                 // 0x035C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_IU3S[0x73];                                    // 0x035D(0x0073) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FgameplayTag>                        _deactivationEvents;                                       // 0x03D0(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _hasBeenAttempted;                                         // 0x03E0(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_JTRI[0x7];                                     // 0x03E1(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.DecisiveStrike");
		return ptr;
	}



	void OnUnhookedTimerEnded();
	void OnSkillCheck(bool HadInput, bool Success, bool bonus, DBDSharedTypes_ESkillCheckCustomType type);
	void OnRep_HasBeenAttempted();
	void OnPickUpEnded(class UdbdPlayer* picker);
	void OnOwnerPickedUp(class UdbdPlayer* picker);
};

// Class DBDCompetence.DelayedHealEffect
// 0x0008 (FullSize[0x02B0] - InheritedSize[0x02A8])
class UDelayedHealEffect : public UstatusEffect
{
public:
	unsigned char                                      UnknownData_K9IL[0x8];                                     // 0x02A8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.DelayedHealEffect");
		return ptr;
	}



	void Authority_OnOwningCamperPickedUp(class UdbdPlayer* picker);
	void Authority_OnOwningCamperHealthChanged(DeadByDaylight_ECamperDamageState before, DeadByDaylight_ECamperDamageState after);
	void Authority_OnActivationTimerComplete();
};

// Class DBDCompetence.DidGameEventOccurred
// 0x0038 (FullSize[0x0120] - InheritedSize[0x00E8])
class UDidGameEventOccurred : public UEventDrivenModifierCondition
{
public:
	struct FgameplayTag                                EventTag;                                                  // 0x00E8(0x000C) (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_1RUI[0x2C];                                    // 0x00F4(0x002C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.DidGameEventOccurred");
		return ptr;
	}



};

// Class DBDCompetence.Distortion
// 0x0020 (FullSize[0x0368] - InheritedSize[0x0348])
class UDistortion : public Uperk
{
public:
	float                                              _activationDurations[0x3];                                 // 0x0348(0x000C) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _auraBlockIsActive;                                        // 0x0354(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_ALQN[0x13];                                    // 0x0355(0x0013) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.Distortion");
		return ptr;
	}



	void OnRep_AuraBlockIsActive();
	bool AuraBlockCanBeActive();
};

// Class DBDCompetence.Diversion
// 0x0000 (FullSize[0x0348] - InheritedSize[0x0348])
class UDiversion : public Uperk
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.Diversion");
		return ptr;
	}



	float GetThrowDistance();
	bool CanThrow();
};

// Class DBDCompetence.DoesPerkHaveToken
// 0x0010 (FullSize[0x00F8] - InheritedSize[0x00E8])
class UDoesPerkHaveToken : public UEventDrivenModifierCondition
{
public:
	TWeakObjectPtr<class Uperk>                        _perk;                                                     // 0x00E8(0x0008) (ExportObject, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, RepNotify, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_9OOD[0x8];                                     // 0x00F0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.DoesPerkHaveToken");
		return ptr;
	}



	void SetPerk(class Uperk* perk);
	void OnRep_Perk();
};

// Class DBDCompetence.DownedByBasicAttack
// 0x0058 (FullSize[0x0140] - InheritedSize[0x00E8])
class UDownedByBasicAttack : public UEventDrivenModifierCondition
{
public:
	bool                                               _replicatedIsTrue;                                         // 0x00E8(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_C343[0x57];                                    // 0x00E9(0x0057) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.DownedByBasicAttack");
		return ptr;
	}



	void OnRep_ReplicatedIsTrue();
};

// Class DBDCompetence.DyingLight
// 0x0040 (FullSize[0x0388] - InheritedSize[0x0348])
class UDyingLight : public Uperk
{
public:
	TArray<float>                                      _actionSpeedPenaltyPerToken;                               // 0x0348(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _obsessionActionSpeedBonus;                                // 0x0358(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FName                                       _obsessionStatusEffectID;                                  // 0x035C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FName                                       _nonObsessionStatusEffectID;                               // 0x0368(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_Z5N8[0x4];                                     // 0x0374(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UstatusEffect*>                       _survivorDebuffs;                                          // 0x0378(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.DyingLight");
		return ptr;
	}



	void OnObsessionChanged(class UcamperPlayer* newObsession, class UcamperPlayer* previousObsession);
};

// Class DBDCompetence.EnduranceHighlightEffect
// 0x0000 (FullSize[0x02A8] - InheritedSize[0x02A8])
class UEnduranceHighlightEffect : public UstatusEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.EnduranceHighlightEffect");
		return ptr;
	}



};

// Class DBDCompetence.ExposedEffect
// 0x0000 (FullSize[0x02A8] - InheritedSize[0x02A8])
class UExposedEffect : public UstatusEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.ExposedEffect");
		return ptr;
	}



};

// Class DBDCompetence.Fixated
// 0x0000 (FullSize[0x0348] - InheritedSize[0x0348])
class UFixated : public Uperk
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.Fixated");
		return ptr;
	}



};

// Class DBDCompetence.FlipFlop
// 0x0018 (FullSize[0x0360] - InheritedSize[0x0348])
class UFlipFlop : public Uperk
{
public:
	float                                              _recoveryProgressionConversionRatio[0x3];                  // 0x0348(0x000C) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _maxWiggleProgression[0x3];                                // 0x0354(0x000C) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.FlipFlop");
		return ptr;
	}



	void Authority_OnPickedUp(class UdbdPlayer* picker);
};

// Class DBDCompetence.FurtiveChase
// 0x0010 (FullSize[0x0358] - InheritedSize[0x0348])
class UFurtiveChase : public Uperk
{
public:
	int                                                _maxTokensByLevel[0x3];                                    // 0x0348(0x000C) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _terrorRadiusSuppressionPerToken;                          // 0x0354(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.FurtiveChase");
		return ptr;
	}



};

// Class DBDCompetence.HasPlayerReachedWiggleFillPercentCondition
// 0x0008 (FullSize[0x00F0] - InheritedSize[0x00E8])
class UHasPlayerReachedWiggleFillPercentCondition : public UEventDrivenModifierCondition
{
public:
	unsigned char                                      UnknownData_VJ37[0x4];                                     // 0x00E8(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               _isWigglePercentReached;                                   // 0x00EC(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_9991[0x3];                                     // 0x00ED(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.HasPlayerReachedWiggleFillPercentCondition");
		return ptr;
	}



	void OnRep_IsWigglePercentReached();
	void Authority_OnOwnerWiggleChargePercentChanged(class UchargeableComponent* chargeableComponent, float percentCompletionChange, float totalPercentComplete);
};

// Class DBDCompetence.HeadOn
// 0x0078 (FullSize[0x03C0] - InheritedSize[0x0348])
class UHeadOn : public Uperk
{
public:
	bool                                               IsPerformingHeadOn;                                        // 0x0348(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ExhaustOnlyOnSuccessfulStun;                               // 0x0349(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               StunKillersEnteringStunZone;                               // 0x034A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_E360[0x1];                                     // 0x034B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _hideDuration[0x3];                                        // 0x034C(0x000C) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ULocker*                                     _locker;                                                   // 0x0358(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_ZH7E[0x60];                                    // 0x0360(0x0060) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.HeadOn");
		return ptr;
	}



	void OnPawnOverlapExit(class UprimitiveComponent* hitComponent, class Uactor* otherActor, class UprimitiveComponent* otherComp, int otherBodyIndex);
	void OnPawnOverlapEnter(class UprimitiveComponent* hitComponent, class Uactor* otherActor, class UprimitiveComponent* otherComp, int otherBodyIndex, bool bFromSweep, const struct FhitResult& sweepResult);
	void OnHeadOnAnimationComplete();
	void Multicast_StunPlayer(class UstunnableComponent* stunnableComponent);
	bool CanApplyHeadOnInteraction();
	void Authority_ActivatePerk();
};

// Class DBDCompetence.HexPerk
// 0x0060 (FullSize[0x03A8] - InheritedSize[0x0348])
class UHexPerk : public Uperk
{
public:
	int                                                NumTotemsToBind;                                           // 0x0348(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               _doNotBindToTotemOnInit;                                   // 0x034C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_LOX1[0x3];                                     // 0x034D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UTotem*>                              _totemActors;                                              // 0x0350(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, RepNotify, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UTotem*>                              _authorityPrevTotemActors;                                 // 0x0360(0x0010) (ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UdbdPlayer*>                          _playersWhoKnowCurse;                                      // 0x0370(0x0010) (Net, ZeroConstructor, Transient, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_XQ03[0x28];                                    // 0x0380(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.HexPerk");
		return ptr;
	}



	void ReceiveGameplayEvent(DeadByDaylight_EDBDScoreTypes gameplayEventType, float Amount, class Uactor* instigator, class Uactor* target);
	void OnRep_TotemActors();
	void OnRep_PlayersWhoKnowCurse(TArray<class UdbdPlayer*> oldPlayersWhoKnowCurse);
	void OnHexPerkGameplayEvent(DeadByDaylight_EDBDScoreTypes gameplayEventType, float Amount, class Uactor* instigator, class Uactor* target);
	bool IsCurseRevealedToPlayer(class UdbdPlayer* player);
	TArray<class UTotem*> GetTotems();
	float GetDistanceToOwner(class Uactor* otherActor);
	TArray<class UTotem*> GetBoundTotems();
	void FireCursedStatusOnLocalPlayer();
	void Authority_UnbindFromTotem(class UTotem* aTotemActor, bool isCleansedTotem);
	void Authority_SetCurseRevealedToPlayer(class UdbdPlayer* player, bool revealed);
	void Authority_RevealCurseToAllSurvivors();
	void Authority_Reactivate_BP();
	bool Authority_BindToDullTotems();
};

// Class DBDCompetence.HexHauntedGround
// 0x0000 (FullSize[0x03A8] - InheritedSize[0x03A8])
class UHexHauntedGround : public UHexPerk
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.HexHauntedGround");
		return ptr;
	}



};

// Class DBDCompetence.HexRuin
// 0x0068 (FullSize[0x0410] - InheritedSize[0x03A8])
class UHexRuin : public UHexPerk
{
public:
	unsigned char                                      UnknownData_NIKY[0x18];                                    // 0x03A8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<class Ugenerator*, struct FFastTimer>         _curseActivationTimers;                                    // 0x03C0(0x0050) (Transient, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.HexRuin");
		return ptr;
	}



	void Authority_ConstructActivationTimersMap();
};

// Class DBDCompetence.HighestLevelAndClosestEffectCondition
// 0x0038 (FullSize[0x0108] - InheritedSize[0x00D0])
class UHighestLevelAndClosestEffectCondition : public UGameplayModifierCondition
{
public:
	unsigned char                                      UnknownData_04FO[0x8];                                     // 0x00D0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UstatusEffect*>                       _effectsLevel1;                                            // 0x00D8(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UstatusEffect*>                       _effectsLevel2;                                            // 0x00E8(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UstatusEffect*>                       _effectsLevel3;                                            // 0x00F8(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.HighestLevelAndClosestEffectCondition");
		return ptr;
	}



	void SetCurrentEffectLevel(int level);
	void InitEffectArrays(const struct FName& effectIDLevel1, const struct FName& effectIDLevel2, const struct FName& effectIDLevel3);
};

// Class DBDCompetence.ImAllEars
// 0x0058 (FullSize[0x03A0] - InheritedSize[0x0348])
class UImAllEars : public Uperk
{
public:
	int                                                _cooldownByLevel[0x3];                                     // 0x0348(0x000C) (Edit, EditFixedSize, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _durationByLevel[0x3];                                     // 0x0354(0x000C) (Edit, EditFixedSize, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _useTerrorRadius;                                          // 0x0360(0x0001) (Edit, EditFixedSize, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_EKNH[0x3];                                     // 0x0361(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _triggerOutsideRadius;                                     // 0x0364(0x0004) (Edit, EditFixedSize, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_Y5L5[0x38];                                    // 0x0368(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.ImAllEars");
		return ptr;
	}



	void Server_OnCamperLoudNoise(const struct FgameplayTag& gameplayTag, const struct FgameEventData& gameEventData);
};

// Class DBDCompetence.ImmediateUndetectableEffect
// 0x0000 (FullSize[0x02A8] - InheritedSize[0x02A8])
class UImmediateUndetectableEffect : public UstatusEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.ImmediateUndetectableEffect");
		return ptr;
	}



};

// Class DBDCompetence.InfectiousFright
// 0x0048 (FullSize[0x0390] - InheritedSize[0x0348])
class UInfectiousFright : public Uperk
{
public:
	bool                                               _revealPlayerInTerrorRadius;                               // 0x0348(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      _perkActivationCount;                                      // 0x0349(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_PY8J[0x6];                                     // 0x034A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UcamperPlayer*>                       _revealedSurvivors;                                        // 0x0350(0x0010) (Net, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UcamperPlayer*                               _targetSurvivor;                                           // 0x0360(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_TMB5[0x28];                                    // 0x0368(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.InfectiousFright");
		return ptr;
	}



	void RevealSurvivorLocation(class UcamperPlayer* target);
	void OnRep_PerkActivationCount();
};

// Class DBDCompetence.InnerStrength
// 0x0038 (FullSize[0x0380] - InheritedSize[0x0348])
class UInnerStrength : public Uperk
{
public:
	float                                              _hideDuration[0x3];                                        // 0x0348(0x000C) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _perkEnabled;                                              // 0x0354(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_YODQ[0x2B];                                    // 0x0355(0x002B) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.InnerStrength");
		return ptr;
	}



	void OnRep_PerkEnabled();
	void OnPlayerImmobilizeStateChanged(DeadByDaylight_ECamperImmobilizeState oldImmobilizeState, DeadByDaylight_ECamperImmobilizeState newImmobilizeState);
};

// Class DBDCompetence.Insidious
// 0x0000 (FullSize[0x0348] - InheritedSize[0x0348])
class UInsidious : public Uperk
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.Insidious");
		return ptr;
	}



};

// Class DBDCompetence.InsidiousEffect
// 0x0000 (FullSize[0x02A8] - InheritedSize[0x02A8])
class UInsidiousEffect : public UAbilityStealthUndetectableEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.InsidiousEffect");
		return ptr;
	}



};

// Class DBDCompetence.IsActivationTimerActive
// 0x0018 (FullSize[0x0100] - InheritedSize[0x00E8])
class UIsActivationTimerActive : public UEventDrivenModifierCondition
{
public:
	unsigned char                                      UnknownData_7OQS[0x18];                                    // 0x00E8(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.IsActivationTimerActive");
		return ptr;
	}



};

// Class DBDCompetence.IsActivationTimerActiveAndNotPaused
// 0x0020 (FullSize[0x0108] - InheritedSize[0x00E8])
class UIsActivationTimerActiveAndNotPaused : public UEventDrivenModifierCondition
{
public:
	unsigned char                                      UnknownData_1M6A[0x20];                                    // 0x00E8(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.IsActivationTimerActiveAndNotPaused");
		return ptr;
	}



};

// Class DBDCompetence.IsClosestEffectCondition
// 0x0000 (FullSize[0x00D0] - InheritedSize[0x00D0])
class UIsClosestEffectCondition : public UGameplayModifierCondition
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.IsClosestEffectCondition");
		return ptr;
	}



};

// Class DBDCompetence.IsCooldownTimerActive
// 0x0018 (FullSize[0x0100] - InheritedSize[0x00E8])
class UIsCooldownTimerActive : public UEventDrivenModifierCondition
{
public:
	unsigned char                                      UnknownData_MAKC[0x18];                                    // 0x00E8(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.IsCooldownTimerActive");
		return ptr;
	}



};

// Class DBDCompetence.IsHexCursed
// 0x0018 (FullSize[0x0100] - InheritedSize[0x00E8])
class UIsHexCursed : public UEventDrivenModifierCondition
{
public:
	unsigned char                                      UnknownData_Z64W[0x18];                                    // 0x00E8(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.IsHexCursed");
		return ptr;
	}



};

// Class DBDCompetence.IsHighestLevelAndClosestOriginatingEffect
// 0x0028 (FullSize[0x00F8] - InheritedSize[0x00D0])
class UIsHighestLevelAndClosestOriginatingEffect : public UGameplayModifierCondition
{
public:
	TArray<class UstatusEffect*>                       _applicableEffects;                                        // 0x00D0(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_2H02[0x18];                                    // 0x00E0(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.IsHighestLevelAndClosestOriginatingEffect");
		return ptr;
	}



	void OnStatusEffectAddedOrRemoved(class UstatusEffect* effect, bool valid);
};

// Class DBDCompetence.IsInAnyHookedSurvivorOriginatorAuraReadingRange
// 0x00B0 (FullSize[0x01A0] - InheritedSize[0x00F0])
class UIsInAnyHookedSurvivorOriginatorAuraReadingRange : public URangeBasedCondition
{
public:
	unsigned char                                      UnknownData_TL1Q[0xB0];                                    // 0x00F0(0x00B0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.IsInAnyHookedSurvivorOriginatorAuraReadingRange");
		return ptr;
	}



};

// Class DBDCompetence.IsLifetimeActive
// 0x0010 (FullSize[0x00F8] - InheritedSize[0x00E8])
class UIsLifetimeActive : public UEventDrivenModifierCondition
{
public:
	unsigned char                                      UnknownData_WO6U[0x10];                                    // 0x00E8(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.IsLifetimeActive");
		return ptr;
	}



};

// Class DBDCompetence.IsOnHitSprintEffectActive
// 0x0000 (FullSize[0x00E8] - InheritedSize[0x00E8])
class UIsOnHitSprintEffectActive : public UEventDrivenModifierCondition
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.IsOnHitSprintEffectActive");
		return ptr;
	}



};

// Class DBDCompetence.BaseIsPerkUsableCondition
// 0x0008 (FullSize[0x00F0] - InheritedSize[0x00E8])
class UBaseIsPerkUsableCondition : public UEventDrivenModifierCondition
{
public:
	unsigned char                                      UnknownData_TXRJ[0x8];                                     // 0x00E8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.BaseIsPerkUsableCondition");
		return ptr;
	}



};

// Class DBDCompetence.IsOriginatingPerkUsableCondition
// 0x0000 (FullSize[0x00F0] - InheritedSize[0x00F0])
class UIsOriginatingPerkUsableCondition : public UBaseIsPerkUsableCondition
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.IsOriginatingPerkUsableCondition");
		return ptr;
	}



};

// Class DBDCompetence.IsOutRangeOfOriginatingPlayer
// 0x0028 (FullSize[0x0118] - InheritedSize[0x00F0])
class UIsOutRangeOfOriginatingPlayer : public URangeBasedCondition
{
public:
	unsigned char                                      UnknownData_X9FW[0x28];                                    // 0x00F0(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.IsOutRangeOfOriginatingPlayer");
		return ptr;
	}



	void OnInRangeChanged(bool inRange);
};

// Class DBDCompetence.AnyActorPairQueryRangeIsTrue
// 0x0010 (FullSize[0x0100] - InheritedSize[0x00F0])
class UAnyActorPairQueryRangeIsTrue : public URangeBasedCondition
{
public:
	unsigned char                                      UnknownData_7GDA[0x10];                                    // 0x00F0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.AnyActorPairQueryRangeIsTrue");
		return ptr;
	}



	void OnInRangeChanged(bool inRange);
};

// Class DBDCompetence.IsOwningPlayerInRangeFromHook
// 0x0008 (FullSize[0x0108] - InheritedSize[0x0100])
class UIsOwningPlayerInRangeFromHook : public UAnyActorPairQueryRangeIsTrue
{
public:
	unsigned char                                      UnknownData_X6IY[0x8];                                     // 0x0100(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.IsOwningPlayerInRangeFromHook");
		return ptr;
	}



	void OnLevelReadyToPlay();
};

// Class DBDCompetence.IsOwningPlayerInHookRangeWhenKillerCarry
// 0x0018 (FullSize[0x0120] - InheritedSize[0x0108])
class UIsOwningPlayerInHookRangeWhenKillerCarry : public UIsOwningPlayerInRangeFromHook
{
public:
	unsigned char                                      UnknownData_4OXY[0x18];                                    // 0x0108(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.IsOwningPlayerInHookRangeWhenKillerCarry");
		return ptr;
	}



};

// Class DBDCompetence.IsOwningPlayerLastSurvivor
// 0x0008 (FullSize[0x00F0] - InheritedSize[0x00E8])
class UIsOwningPlayerLastSurvivor : public UEventDrivenModifierCondition
{
public:
	unsigned char                                      UnknownData_58Z5[0x8];                                     // 0x00E8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.IsOwningPlayerLastSurvivor");
		return ptr;
	}



};

// Class DBDCompetence.IsPerkUsableCondition
// 0x0000 (FullSize[0x00F0] - InheritedSize[0x00F0])
class UIsPerkUsableCondition : public UBaseIsPerkUsableCondition
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.IsPerkUsableCondition");
		return ptr;
	}



};

// Class DBDCompetence.BaseIsPlayerPerformingInteraction
// 0x0030 (FullSize[0x0118] - InheritedSize[0x00E8])
class UBaseIsPlayerPerformingInteraction : public UEventDrivenModifierCondition
{
public:
	struct FGameplayTagContainer                       _interactionSemantics;                                     // 0x00E8(0x0020) (Edit, BlueprintVisible, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_0IYV[0x10];                                    // 0x0108(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.BaseIsPlayerPerformingInteraction");
		return ptr;
	}



	void UpdateIsTrue(class UinteractionDefinition* interactionDefinition);
	void SetInteractionSemantics(const struct FGameplayTagContainer& interactionSemantics);
};

// Class DBDCompetence.IsPlayerPerformingItemInteraction
// 0x0020 (FullSize[0x0138] - InheritedSize[0x0118])
class UIsPlayerPerformingItemInteraction : public UBaseIsPlayerPerformingInteraction
{
public:
	unsigned char                                      UnknownData_CDVH[0x20];                                    // 0x0118(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.IsPlayerPerformingItemInteraction");
		return ptr;
	}



	void OnCollectablePickedUp(class UdbdPlayer* player);
	void OnCollectableDropped();
	void OnCollectableChargeStateChange(bool empty);
};

// Class DBDCompetence.IsPlayerPerformingInteraction
// 0x0040 (FullSize[0x0128] - InheritedSize[0x00E8])
class UIsPlayerPerformingInteraction : public UEventDrivenModifierCondition
{
public:
	struct FGameplayTagContainer                       _interactionSemantics;                                     // 0x00E8(0x0020) (Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_8V04[0x20];                                    // 0x0108(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.IsPlayerPerformingInteraction");
		return ptr;
	}



	void UpdateIsTrue(class UinteractionDefinition* interactionDefinition);
	void SetInteractionSemantics(const struct FGameplayTagContainer& interactionSemantics);
};

// Class DBDCompetence.KillerIsLowOnAmmo
// 0x0018 (FullSize[0x0100] - InheritedSize[0x00E8])
class UKillerIsLowOnAmmo : public UEventDrivenModifierCondition
{
public:
	int                                                _ammoThreshold;                                            // 0x00E8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_OIR2[0x14];                                    // 0x00EC(0x0014) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.KillerIsLowOnAmmo");
		return ptr;
	}



};

// Class DBDCompetence.KillerSubjectProvider
// 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
class UKillerSubjectProvider : public UModifierSubjectProvider
{
public:
	unsigned char                                      UnknownData_L7MW[0x8];                                     // 0x0048(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.KillerSubjectProvider");
		return ptr;
	}



	void RegisterWhenKillerSet(class UslasherPlayer* Killer);
};

// Class DBDCompetence.KindredPerk
// 0x0028 (FullSize[0x0370] - InheritedSize[0x0348])
class UKindredPerk : public Uperk
{
public:
	unsigned char                                      UnknownData_ZJK9[0x10];                                    // 0x0348(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<float>                                      _killerAuraRevealRange;                                    // 0x0358(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_S77X[0x8];                                     // 0x0368(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.KindredPerk");
		return ptr;
	}



};

// Class DBDCompetence.BaseLingeringStatusEffect
// 0x0008 (FullSize[0x02B0] - InheritedSize[0x02A8])
class UBaseLingeringStatusEffect : public UstatusEffect
{
public:
	float                                              _lingerDuration;                                           // 0x02A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_JD12[0x4];                                     // 0x02AC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.BaseLingeringStatusEffect");
		return ptr;
	}



	void SetLingerDuration(float lingerDuration);
};

// Class DBDCompetence.LingeringStateTagStatusEffect
// 0x0038 (FullSize[0x02E8] - InheritedSize[0x02B0])
class ULingeringStateTagStatusEffect : public UBaseLingeringStatusEffect
{
public:
	struct FgameplayTag                                _ownerStateTag;                                            // 0x02B0(0x000C) (Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_Y84C[0x2C];                                    // 0x02BC(0x002C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.LingeringStateTagStatusEffect");
		return ptr;
	}



};

// Class DBDCompetence.LuckyBreak
// 0x0010 (FullSize[0x0358] - InheritedSize[0x0348])
class ULuckyBreak : public Uperk
{
public:
	float                                              _activationTime[0x3];                                      // 0x0348(0x000C) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_UXPP[0x4];                                     // 0x0354(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.LuckyBreak");
		return ptr;
	}



	void OnDamageStateChanged(DeadByDaylight_ECamperDamageState oldDamageState, DeadByDaylight_ECamperDamageState currentDamageState);
	void ActivationTimerEnded();
};

// Class DBDCompetence.Mindbreaker
// 0x0040 (FullSize[0x0388] - InheritedSize[0x0348])
class UMindbreaker : public Uperk
{
public:
	float                                              _effectDurationAfterRepair[0x3];                           // 0x0348(0x000C) (Edit, EditFixedSize, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _generatorRepairThreshold[0x3];                            // 0x0354(0x000C) (Edit, EditFixedSize, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_778F[0x28];                                    // 0x0360(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.Mindbreaker");
		return ptr;
	}



};

// Class DBDCompetence.Nemesis
// 0x0020 (FullSize[0x0368] - InheritedSize[0x0348])
class UNemesis : public Uperk
{
public:
	unsigned char                                      UnknownData_PKEO[0x8];                                     // 0x0348(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _revealToKillerTime[0x3];                                  // 0x0350(0x000C) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _obliviousTime[0x3];                                       // 0x035C(0x000C) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.Nemesis");
		return ptr;
	}



};

// Class DBDCompetence.NoOneLeftBehind
// 0x0010 (FullSize[0x0358] - InheritedSize[0x0348])
class UNoOneLeftBehind : public Uperk
{
public:
	TArray<float>                                      _speedBoostEffect;                                         // 0x0348(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.NoOneLeftBehind");
		return ptr;
	}



	float GetSpeedBoostEffect();
};

// Class DBDCompetence.ObliviousEffect
// 0x0000 (FullSize[0x02A8] - InheritedSize[0x02A8])
class UObliviousEffect : public UstatusEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.ObliviousEffect");
		return ptr;
	}



};

// Class DBDCompetence.ObsessionTargetSubjectProvider
// 0x0010 (FullSize[0x0058] - InheritedSize[0x0048])
class UObsessionTargetSubjectProvider : public UModifierSubjectProvider
{
public:
	unsigned char                                      UnknownData_FYX3[0x10];                                    // 0x0048(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.ObsessionTargetSubjectProvider");
		return ptr;
	}



};

// Class DBDCompetence.OnEventBaseAddon
// 0x0010 (FullSize[0x0228] - InheritedSize[0x0218])
class UOnEventBaseAddon : public UItemAddon
{
public:
	struct FgameplayTag                                _eventToListenTo;                                          // 0x0218(0x000C) (Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_P3IM[0x4];                                     // 0x0224(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.OnEventBaseAddon");
		return ptr;
	}



	void OnEventFired(const struct FgameEventData& gameEventData);
};

// Class DBDCompetence.OwningPlayerInTotemRange
// 0x0018 (FullSize[0x0118] - InheritedSize[0x0100])
class UOwningPlayerInTotemRange : public UAnyActorPairQueryRangeIsTrue
{
public:
	unsigned char                                      UnknownData_91ZH[0x18];                                    // 0x0100(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.OwningPlayerInTotemRange");
		return ptr;
	}



	void OnLevelReadyToPlay();
};

// Class DBDCompetence.OwningPlayerInDullTotemRange
// 0x0000 (FullSize[0x0118] - InheritedSize[0x0118])
class UOwningPlayerInDullTotemRange : public UOwningPlayerInTotemRange
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.OwningPlayerInDullTotemRange");
		return ptr;
	}



};

// Class DBDCompetence.OwningSlasherHasBeenStill
// 0x0008 (FullSize[0x00D8] - InheritedSize[0x00D0])
class UOwningSlasherHasBeenStill : public UGameplayModifierCondition
{
public:
	float                                              _secondsOfStillnessRequired;                               // 0x00D0(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_EVYB[0x4];                                     // 0x00D4(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.OwningSlasherHasBeenStill");
		return ptr;
	}



	void Authority_SetSecondsOfStillnessRequired(float secondsRequired);
};

// Class DBDCompetence.PharmacyPerk
// 0x0010 (FullSize[0x0358] - InheritedSize[0x0348])
class UPharmacyPerk : public Uperk
{
public:
	TArray<float>                                      _searchSpeeds;                                             // 0x0348(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.PharmacyPerk");
		return ptr;
	}



};

// Class DBDCompetence.PlayerIsInExitArea
// 0x0008 (FullSize[0x00D8] - InheritedSize[0x00D0])
class UPlayerIsInExitArea : public UGameplayModifierCondition
{
public:
	unsigned char                                      UnknownData_TQVV[0x8];                                     // 0x00D0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.PlayerIsInExitArea");
		return ptr;
	}



	void PlayerExitExitArea();
	void PlayerEnterExitArea();
};

// Class DBDCompetence.Poised
// 0x0028 (FullSize[0x0370] - InheritedSize[0x0348])
class UPoised : public Uperk
{
public:
	float                                              _activationTime[0x3];                                      // 0x0348(0x000C) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_E6LV[0x1C];                                    // 0x0354(0x001C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.Poised");
		return ptr;
	}



};

// Class DBDCompetence.PreventKOEffect
// 0x0008 (FullSize[0x02B0] - InheritedSize[0x02A8])
class UPreventKOEffect : public UstatusEffect
{
public:
	unsigned char                                      UnknownData_CK6D[0x8];                                     // 0x02A8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.PreventKOEffect");
		return ptr;
	}



};

// Class DBDCompetence.QKPerk3ExhaustedEffect
// 0x0028 (FullSize[0x02E8] - InheritedSize[0x02C0])
class UQKPerk3ExhaustedEffect : public UExhaustedEffect
{
public:
	unsigned char                                      UnknownData_A6RQ[0x28];                                    // 0x02C0(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.QKPerk3ExhaustedEffect");
		return ptr;
	}



};

// Class DBDCompetence.ResiliencePerk
// 0x0010 (FullSize[0x0358] - InheritedSize[0x0348])
class UResiliencePerk : public Uperk
{
public:
	float                                              _actionSpeed[0x3];                                         // 0x0348(0x000C) (Edit, EditFixedSize, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_5M56[0x4];                                     // 0x0354(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.ResiliencePerk");
		return ptr;
	}



};

// Class DBDCompetence.saboteur
// 0x0028 (FullSize[0x0370] - InheritedSize[0x0348])
class Usaboteur : public Uperk
{
public:
	float                                              _coolDownDuration[0x3];                                    // 0x0348(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _revealHookDistance[0x3];                                  // 0x0354(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UMeatHookOutlineUpdateStrategy*>      _revealedMeatHooksOultineStrategy;                         // 0x0360(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.saboteur");
		return ptr;
	}



};

// Class DBDCompetence.SecondsToRateModifierBaseAddon
// 0x0090 (FullSize[0x02A8] - InheritedSize[0x0218])
class USecondsToRateModifierBaseAddon : public UItemAddon
{
public:
	struct FTunableStat                                _chargeRate;                                               // 0x0218(0x0040) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTunableStat                                _maxCharge;                                                // 0x0258(0x0040) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _secondsToAdd;                                             // 0x0298(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FgameplayTag                                _rateModifierTagToCompute;                                 // 0x029C(0x000C) (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.SecondsToRateModifierBaseAddon");
		return ptr;
	}



};

// Class DBDCompetence.SecondWind
// 0x0038 (FullSize[0x0380] - InheritedSize[0x0348])
class USecondWind : public Uperk
{
public:
	unsigned char                                      UnknownData_YO64[0x8];                                     // 0x0348(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	DBDCompetence_ESecondWindState                     _currentState;                                             // 0x0350(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_PTQ1[0x3];                                     // 0x0351(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _amountHealed;                                             // 0x0354(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_QAZE[0x4];                                     // 0x0358(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _numberOfHealStateToHealToActivate[0x3];                   // 0x035C(0x000C) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _durationOfHeal[0x3];                                      // 0x0368(0x000C) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _applyBrokenEffect;                                        // 0x0374(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_IBU9[0xB];                                     // 0x0375(0x000B) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.SecondWind");
		return ptr;
	}



};

// Class DBDCompetence.SpawnEffectsOnAllSurvivorsBaseAddon
// 0x0008 (FullSize[0x0220] - InheritedSize[0x0218])
class USpawnEffectsOnAllSurvivorsBaseAddon : public UItemAddon
{
public:
	unsigned char                                      UnknownData_YDXY[0x8];                                     // 0x0218(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.SpawnEffectsOnAllSurvivorsBaseAddon");
		return ptr;
	}



};

// Class DBDCompetence.SimpleSpawnEffectsOnAllSurvivorsAddon
// 0x0010 (FullSize[0x0230] - InheritedSize[0x0220])
class USimpleSpawnEffectsOnAllSurvivorsAddon : public USpawnEffectsOnAllSurvivorsBaseAddon
{
public:
	TArray<struct FSimpleSpawnEffectsOnAllSurvivorsAddonParams> _statusEffectsSpawnParams;                                 // 0x0220(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.SimpleSpawnEffectsOnAllSurvivorsAddon");
		return ptr;
	}



};

// Class DBDCompetence.SoleSurvivor
// 0x0030 (FullSize[0x0378] - InheritedSize[0x0348])
class USoleSurvivor : public Uperk
{
public:
	float                                              _auraHideDistancePerDeadOrDisconnectedSurvivor[0x3];       // 0x0348(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_IO79[0x4];                                     // 0x0354(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UcamperPlayer*>                       _otherSurvivors;                                           // 0x0358(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_9EUC[0x10];                                    // 0x0368(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.SoleSurvivor");
		return ptr;
	}



	void Authority_OnSurvivorAdded(class UcamperPlayer* Survivor);
};

// Class DBDCompetence.Solidarity
// 0x0030 (FullSize[0x0378] - InheritedSize[0x0348])
class USolidarity : public Uperk
{
public:
	bool                                               _allowMedkit;                                              // 0x0348(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_YKBS[0x7];                                     // 0x0349(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UchargeableComponent*                        _healerHPSlot;                                             // 0x0350(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UchargeableComponent*                        _targetHPSlot;                                             // 0x0358(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UChargeableInteractionDefinition*            _healOtherInteraction;                                     // 0x0360(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_EKJZ[0x10];                                    // 0x0368(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.Solidarity");
		return ptr;
	}



	void Authority_OnSkillCheckResponse(bool Success, bool bonus, class UdbdPlayer* player, bool triggerLoudNoise, bool HadInput, DBDSharedTypes_ESkillCheckCustomType type, float chargeChange);
	void Authority_OnHealthChargeApplied(float IndividualChargeAmount, float TotalChargeAmount, class Uactor* ChargeInstigator, bool WasCoop, float deltaTime);
};

// Class DBDCompetence.spiesfromtheshadows
// 0x0008 (FullSize[0x0350] - InheritedSize[0x0348])
class Uspiesfromtheshadows : public Uperk
{
public:
	float                                              _cooldownDurationSecs;                                     // 0x0348(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_136Q[0x4];                                     // 0x034C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.spiesfromtheshadows");
		return ptr;
	}



	void StartCooldownIfInRange(const struct Fvector& loudNoiseLocation);
	void Server_TriggerCooldown();
};

// Class DBDCompetence.SpineChillPerk
// 0x0010 (FullSize[0x0358] - InheritedSize[0x0348])
class USpineChillPerk : public Uperk
{
public:
	float                                              _actionSpeed[0x3];                                         // 0x0348(0x000C) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_3EVJ[0x4];                                     // 0x0354(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.SpineChillPerk");
		return ptr;
	}



};

// Class DBDCompetence.SprintBurst
// 0x0020 (FullSize[0x0368] - InheritedSize[0x0348])
class USprintBurst : public Uperk
{
public:
	float                                              _exhaustionDuration[0x3];                                  // 0x0348(0x000C) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _sprintDuration;                                           // 0x0354(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UActivatableExhaustedEffect*                 _exhaustedEffect;                                          // 0x0358(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_SDC1[0x8];                                     // 0x0360(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.SprintBurst");
		return ptr;
	}



	void Authority_OnIsRunningAndMovingChanged(bool isRunningAndMoving);
};

// Class DBDCompetence.StatsSystemUtilities
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UStatsSystemUtilities : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.StatsSystemUtilities");
		return ptr;
	}



	void STATIC_InitStatBP(struct FTunableStat* theStat, const TScriptInterface<class UmodifierProvider>& modifierProvider);
	float STATIC_GetStatValueBP(const struct FTunableStat& theStat);
};

// Class DBDCompetence.StatusEffectOriginatorSubjectProvider
// 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
class UStatusEffectOriginatorSubjectProvider : public UModifierSubjectProvider
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.StatusEffectOriginatorSubjectProvider");
		return ptr;
	}



};

// Class DBDCompetence.Surge
// 0x0040 (FullSize[0x0388] - InheritedSize[0x0348])
class USurge : public Uperk
{
public:
	float                                              _zoneRadius[0x3];                                          // 0x0348(0x000C) (Edit, EditFixedSize, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _instantRegression[0x3];                                   // 0x0354(0x000C) (Edit, EditFixedSize, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _coolDownDuration[0x3];                                    // 0x0360(0x000C) (Edit, EditFixedSize, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _hasCooldown;                                              // 0x036C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _useTerrorRadiusInsteadOfFixedDistance;                    // 0x036D(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_BHGN[0x1A];                                    // 0x036E(0x001A) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.Surge");
		return ptr;
	}



	void Client_TriggerEffects(TArray<class Ugenerator*> Generators);
};

// Class DBDCompetence.TestAnyActorPairQueryRangeIsTrue
// 0x0008 (FullSize[0x0108] - InheritedSize[0x0100])
class UTestAnyActorPairQueryRangeIsTrue : public UAnyActorPairQueryRangeIsTrue
{
public:
	class UActorPairQueryEvaluatorComponent*           _actorPairQueryEvaluatorComponent;                         // 0x0100(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.TestAnyActorPairQueryRangeIsTrue");
		return ptr;
	}



};

// Class DBDCompetence.TestCollectable
// 0x0000 (FullSize[0x0420] - InheritedSize[0x0420])
class UTestCollectable : public Ucollectable
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.TestCollectable");
		return ptr;
	}



};

// Class DBDCompetence.TestDBDGameState
// 0x0000 (FullSize[0x0768] - InheritedSize[0x0768])
class UTestDBDGameState : public UDBDGameState
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.TestDBDGameState");
		return ptr;
	}



};

// Class DBDCompetence.TestStatusEffect
// 0x0000 (FullSize[0x02A8] - InheritedSize[0x02A8])
class UTestStatusEffect : public UstatusEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.TestStatusEffect");
		return ptr;
	}



};

// Class DBDCompetence.TheMettleOfMan
// 0x0038 (FullSize[0x0380] - InheritedSize[0x0348])
class UTheMettleOfMan : public Uperk
{
public:
	int                                                _tokenNeededToActivate[0x3];                               // 0x0348(0x000C) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _revealOutsideRange[0x3];                                  // 0x0354(0x000C) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _mustBeInjured;                                            // 0x0360(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_PD9I[0x3];                                     // 0x0361(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                _numTokenSoFar;                                            // 0x0364(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	DBDCompetence_ETheMettleOfManPhase                 _currentPhase;                                             // 0x0368(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_E1AP[0xF];                                     // 0x0369(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UstatusEffect*                               _revealToKillerEffect;                                     // 0x0378(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.TheMettleOfMan");
		return ptr;
	}



};

// Class DBDCompetence.ThrillingTremors
// 0x0060 (FullSize[0x03A8] - InheritedSize[0x0348])
class UThrillingTremors : public Uperk
{
public:
	int                                                _cooldownByLevel[0x3];                                     // 0x0348(0x000C) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _durationByLevel[0x3];                                     // 0x0354(0x000C) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _disableWhenSurvivorPutDownOrUnhooked;                     // 0x0360(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_CRMH[0x3];                                     // 0x0361(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLinearColor                                _generatorAuraColorForKiller;                              // 0x0364(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_ND7Q[0x4];                                     // 0x0374(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class Ugenerator*>                          _blockedGenerators;                                        // 0x0378(0x0010) (Net, ZeroConstructor, Transient, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class Ugenerator*>                          _revealedGenerators;                                       // 0x0388(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_XFJ3[0x10];                                    // 0x0398(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.ThrillingTremors");
		return ptr;
	}



	void OnRep_BlockedGenerators();
};

// Class DBDCompetence.TimedObliviousEffect
// 0x0000 (FullSize[0x02A8] - InheritedSize[0x02A8])
class UTimedObliviousEffect : public UObliviousEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.TimedObliviousEffect");
		return ptr;
	}



};

// Class DBDCompetence.WeddingRing
// 0x0008 (FullSize[0x0220] - InheritedSize[0x0218])
class UWeddingRing : public UItemAddon
{
public:
	unsigned char                                      UnknownData_TOKO[0x8];                                     // 0x0218(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.WeddingRing");
		return ptr;
	}



};

// Class DBDCompetence.YamaokaFamilyCrest
// 0x0038 (FullSize[0x0250] - InheritedSize[0x0218])
class UYamaokaFamilyCrest : public UItemAddon
{
public:
	float                                              _revealDuration;                                           // 0x0218(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _revealRange;                                              // 0x021C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UcamperPlayer*>                       _survivorsToReveal;                                        // 0x0220(0x0010) (Net, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      _addonActivationCount;                                     // 0x0230(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_73NN[0x1F];                                    // 0x0231(0x001F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.YamaokaFamilyCrest");
		return ptr;
	}



	void RevealSurvivor(class UcamperPlayer* survivorToReveal);
	void OnRep_AddonActivationCount();
};

// Class DBDCompetence.ZanshinTactics
// 0x0010 (FullSize[0x0358] - InheritedSize[0x0348])
class UZanshinTactics : public Uperk
{
public:
	float                                              _coolDownDuration[0x3];                                    // 0x0348(0x000C) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_X7EZ[0x4];                                     // 0x0354(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDCompetence.ZanshinTactics");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
