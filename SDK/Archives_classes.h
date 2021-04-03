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

// Class Archives.InflictMadnessBaseQEEvaluator
// 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
class UInflictMadnessBaseQEEvaluator : public UQuestEventEvaluatorBase
{
public:
	int                                                _requiredTier;                                             // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_HIIT[0x4];                                     // 0x0094(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Archives.InflictMadnessBaseQEEvaluator");
		return ptr;
	}



};

// Class Archives.InjuredDyingHookManyQEEvaluator
// 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
class UInjuredDyingHookManyQEEvaluator : public UQuestEventEvaluatorBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Archives.InjuredDyingHookManyQEEvaluator");
		return ptr;
	}



};

// Class Archives.InjuredDyingMultipleQEEvaluator
// 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
class UInjuredDyingMultipleQEEvaluator : public UQuestEventEvaluatorBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Archives.InjuredDyingMultipleQEEvaluator");
		return ptr;
	}



};

// Class Archives.NearKillerQEEvaluator
// 0x0030 (FullSize[0x00C0] - InheritedSize[0x0090])
class UNearKillerQEEvaluator : public UQuestEventEvaluatorBase
{
public:
	unsigned char                                      UnknownData_CCMZ[0x30];                                    // 0x0090(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Archives.NearKillerQEEvaluator");
		return ptr;
	}



	void OnRangeChanged(bool inRange);
};

// Class Archives.InLockerNearKillerQEEvaluator
// 0x0008 (FullSize[0x00C8] - InheritedSize[0x00C0])
class UInLockerNearKillerQEEvaluator : public UNearKillerQEEvaluator
{
public:
	unsigned char                                      UnknownData_N5JQ[0x8];                                     // 0x00C0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Archives.InLockerNearKillerQEEvaluator");
		return ptr;
	}



	void OnClosetHideExit(const struct FgameplayTag& GameEventType, const struct FgameEventData& gameEventData);
	void OnClosetHideEnter(const struct FgameplayTag& GameEventType, const struct FgameEventData& gameEventData);
};

// Class Archives.InstigatorHookCountQEEvaluator
// 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
class UInstigatorHookCountQEEvaluator : public UQuestEventEvaluatorBase
{
public:
	unsigned char                                      UnknownData_JAID[0x8];                                     // 0x0090(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Archives.InstigatorHookCountQEEvaluator");
		return ptr;
	}



};

// Class Archives.InstigatorInBasementQEEvaluator
// 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
class UInstigatorInBasementQEEvaluator : public UQuestEventEvaluatorBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Archives.InstigatorInBasementQEEvaluator");
		return ptr;
	}



};

// Class Archives.InstigatorInBasementPercentQEEvaluator
// 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
class UInstigatorInBasementPercentQEEvaluator : public UInstigatorInBasementQEEvaluator
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Archives.InstigatorInBasementPercentQEEvaluator");
		return ptr;
	}



};

// Class Archives.IsInteractingEvaluatorCondition
// 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
class UIsInteractingEvaluatorCondition : public UEvaluatorCondition
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Archives.IsInteractingEvaluatorCondition");
		return ptr;
	}



};

// Class Archives.ItemConsumedQEEvaluator
// 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
class UItemConsumedQEEvaluator : public UQuestEventEvaluatorBase
{
public:
	unsigned char                                      UnknownData_Z799[0x8];                                     // 0x0090(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Archives.ItemConsumedQEEvaluator");
		return ptr;
	}



	void OnItemConsumed(const struct FgameplayTag& GameEventType, const struct FgameEventData& gameEventData);
};

// Class Archives.ItemPerformedQEEvaluator
// 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
class UItemPerformedQEEvaluator : public UQuestEventEvaluatorBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Archives.ItemPerformedQEEvaluator");
		return ptr;
	}



};

// Class Archives.ItemPerformedPercentQEEvaluator
// 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
class UItemPerformedPercentQEEvaluator : public UItemPerformedQEEvaluator
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Archives.ItemPerformedPercentQEEvaluator");
		return ptr;
	}



};

// Class Archives.ItemUsedQEEvaluator
// 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
class UItemUsedQEEvaluator : public UQuestEventEvaluatorBase
{
public:
	unsigned char                                      UnknownData_IS5R[0x8];                                     // 0x0090(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Archives.ItemUsedQEEvaluator");
		return ptr;
	}



	void OnItemUsed(const struct FgameplayTag& GameEventType, const struct FgameEventData& gameEventData);
};

// Class Archives.LivingSurvivorsCountQEEvaluator
// 0x0010 (FullSize[0x00A0] - InheritedSize[0x0090])
class ULivingSurvivorsCountQEEvaluator : public UQuestEventEvaluatorBase
{
public:
	unsigned char                                      UnknownData_CJMN[0x10];                                    // 0x0090(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Archives.LivingSurvivorsCountQEEvaluator");
		return ptr;
	}



	void OnSurvivorRemoved(class UcamperPlayer* survivorRemoved);
	void OnSurvivorAdded(class UcamperPlayer* survivorAdded);
};

// Class Archives.MaxSameTargetQEEvaluator
// 0x0050 (FullSize[0x00E0] - InheritedSize[0x0090])
class UMaxSameTargetQEEvaluator : public UQuestEventEvaluatorBase
{
public:
	TMap<TWeakObjectPtr<class Uactor>, int>            _targetList;                                               // 0x0090(0x0050) (Transient, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Archives.MaxSameTargetQEEvaluator");
		return ptr;
	}



};

// Class Archives.MultipleEventsInTimeFrameQEEvaluator
// 0x0018 (FullSize[0x00A8] - InheritedSize[0x0090])
class UMultipleEventsInTimeFrameQEEvaluator : public UQuestEventEvaluatorBase
{
public:
	unsigned char                                      UnknownData_ALOI[0x18];                                    // 0x0090(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Archives.MultipleEventsInTimeFrameQEEvaluator");
		return ptr;
	}



};

// Class Archives.NearMeEvaluatorCondition
// 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
class UNearMeEvaluatorCondition : public UEvaluatorCondition
{
public:
	unsigned char                                      UnknownData_BR46[0x4];                                     // 0x0048(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               _questOwnerCanBeSubjectOfEvent;                            // 0x004C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_O2SY[0x3];                                     // 0x004D(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Archives.NearMeEvaluatorCondition");
		return ptr;
	}



};

// Class Archives.NearPalletVaultWallQEEvaluator
// 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
class UNearPalletVaultWallQEEvaluator : public UQuestEventEvaluatorBase
{
public:
	unsigned char                                      UnknownData_SO1U[0x8];                                     // 0x0090(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Archives.NearPalletVaultWallQEEvaluator");
		return ptr;
	}



};

// Class Archives.NearTrackedActorComponent
// 0x0028 (FullSize[0x00E0] - InheritedSize[0x00B8])
class UNearTrackedActorComponent : public UactorComponent
{
public:
	struct FScriptMulticastDelegate                    IsWithinRangeDelegate;                                     // 0x00B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	float                                              _distanceThreshold;                                        // 0x00C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_EQ0X[0x14];                                    // 0x00CC(0x0014) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Archives.NearTrackedActorComponent");
		return ptr;
	}



	void StopTrackingActor(class Uactor* actor);
	void StartTrackingActor(class Uactor* actor);
	void SetDistanceThreshold(float Value);
	void OnIsWithinRangeChanged__DelegateSignature(bool isWithinRange, class Uactor* trackedActor);
	bool IsActorWithinRange(class Uactor* actor);
};

// Class Archives.NurseChainBlinkNumberQEEvaluator
// 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
class UNurseChainBlinkNumberQEEvaluator : public UQuestEventEvaluatorBase
{
public:
	unsigned char                                      UnknownData_7SMP[0x8];                                     // 0x0090(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Archives.NurseChainBlinkNumberQEEvaluator");
		return ptr;
	}



};

// Class Archives.OniDashHitDiffInTimeQEEvaluator
// 0x0010 (FullSize[0x00A0] - InheritedSize[0x0090])
class UOniDashHitDiffInTimeQEEvaluator : public UQuestEventEvaluatorBase
{
public:
	unsigned char                                      UnknownData_L57N[0x8];                                     // 0x0090(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class Uactor*                                      _previousTarget;                                           // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Archives.OniDashHitDiffInTimeQEEvaluator");
		return ptr;
	}



};

// Class Archives.questEventsHandler
// 0x0048 (FullSize[0x0100] - InheritedSize[0x00B8])
class UquestEventsHandler : public UactorComponent
{
public:
	unsigned char                                      UnknownData_QW20[0x8];                                     // 0x00B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UQuestEventEvaluatorBase*>            _evaluatorList;                                            // 0x00C0(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_16VX[0x30];                                    // 0x00D0(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Archives.questEventsHandler");
		return ptr;
	}



	void OnPlayerGameStateChanged(DBDSharedTypes_EGameState gameState);
	void OnGameEnded(DeadByDaylight_EEndGameReason Reason);
	void OnFinishedPlaying(const struct FgameplayTag& GameEventType, const struct FgameEventData& gameEventData);
	void DBD_ShowInGameCurrentQuestInfos();
	void DBD_InGameAddProgressionToCurrentQuest(int Amount);
};

// Class Archives.QuestEventsHandlerTest
// 0x0008 (FullSize[0x0108] - InheritedSize[0x0100])
class UQuestEventsHandlerTest : public UquestEventsHandler
{
public:
	class UdbdPlayer*                                  _dbdplayer;                                                // 0x0100(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Archives.QuestEventsHandlerTest");
		return ptr;
	}



};

// Class Archives.QuestEventsHandlerUtilities
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UQuestEventsHandlerUtilities : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Archives.QuestEventsHandlerUtilities");
		return ptr;
	}



	void STATIC_InitializeQuestEventHandler(class UquestEventsHandler* questEventsHandler);
};

// Class Archives.RecentlyActiveStateTagEvaluatorCondition
// 0x0040 (FullSize[0x0088] - InheritedSize[0x0048])
class URecentlyActiveStateTagEvaluatorCondition : public UEvaluatorCondition
{
public:
	unsigned char                                      UnknownData_886F[0x4];                                     // 0x0048(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FgameplayTag                                _stateTag;                                                 // 0x004C(0x000C) (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_UQ2U[0x30];                                    // 0x0058(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Archives.RecentlyActiveStateTagEvaluatorCondition");
		return ptr;
	}



};

// Class Archives.RepairCoopQEEvaluator
// 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
class URepairCoopQEEvaluator : public UQuestEventEvaluatorBase
{
public:
	unsigned char                                      UnknownData_ZJSC[0x8];                                     // 0x0090(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Archives.RepairCoopQEEvaluator");
		return ptr;
	}



};

// Class Archives.ReturnTheFavorQEEvaluator
// 0x0050 (FullSize[0x00E0] - InheritedSize[0x0090])
class UReturnTheFavorQEEvaluator : public UQuestEventEvaluatorBase
{
public:
	unsigned char                                      _instigatorList[0x50];                                     // 0x0090(0x0050) UNKNOWN PROPERTY: SetProperty


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Archives.ReturnTheFavorQEEvaluator");
		return ptr;
	}



};

// Class Archives.ScreamSpecialCaseQEEvaluator
// 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
class UScreamSpecialCaseQEEvaluator : public UQuestEventEvaluatorBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Archives.ScreamSpecialCaseQEEvaluator");
		return ptr;
	}



};

// Class Archives.ItemRarityQEEvaluator
// 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
class UItemRarityQEEvaluator : public UQuestEventEvaluatorBase
{
public:
	unsigned char                                      UnknownData_YSES[0x8];                                     // 0x0090(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Archives.ItemRarityQEEvaluator");
		return ptr;
	}



};

// Class Archives.SearchItemRarityQEEvaluator
// 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
class USearchItemRarityQEEvaluator : public UItemRarityQEEvaluator
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Archives.SearchItemRarityQEEvaluator");
		return ptr;
	}



	void OnItemSpawnedFromChest(const struct FgameplayTag& GameEventType, const struct FgameEventData& gameEventData);
};

// Class Archives.SecondHookStageReachedQEEvaluator
// 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
class USecondHookStageReachedQEEvaluator : public UQuestEventEvaluatorBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Archives.SecondHookStageReachedQEEvaluator");
		return ptr;
	}



};

// Class Archives.SkillCheckConsecutiveQEEvaluator
// 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
class USkillCheckConsecutiveQEEvaluator : public UQuestEventEvaluatorBase
{
public:
	unsigned char                                      UnknownData_X998[0x8];                                     // 0x0090(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Archives.SkillCheckConsecutiveQEEvaluator");
		return ptr;
	}



	void OnSkillCheckSuccess(const struct FgameplayTag& GameEventType, const struct FgameEventData& gameEventData);
	void OnSkillCheckFail(const struct FgameplayTag& GameEventType, const struct FgameEventData& gameEventData);
};

// Class Archives.SlasherIsCarryingQEEvaluator
// 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
class USlasherIsCarryingQEEvaluator : public UQuestEventEvaluatorBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Archives.SlasherIsCarryingQEEvaluator");
		return ptr;
	}



};

// Class Archives.StateTagEvaluatorCondition
// 0x0010 (FullSize[0x0058] - InheritedSize[0x0048])
class UStateTagEvaluatorCondition : public UEvaluatorCondition
{
public:
	struct FgameplayTag                                _gameplayTag;                                              // 0x0048(0x000C) (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_KJ5M[0x4];                                     // 0x0054(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Archives.StateTagEvaluatorCondition");
		return ptr;
	}



};

// Class Archives.SurvivorNearMeEvaluatorCondition
// 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
class USurvivorNearMeEvaluatorCondition : public UEvaluatorCondition
{
public:
	unsigned char                                      UnknownData_U9YT[0x8];                                     // 0x0048(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Archives.SurvivorNearMeEvaluatorCondition");
		return ptr;
	}



};

// Class Archives.TargetInBasementQEEvaluator
// 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
class UTargetInBasementQEEvaluator : public UQuestEventEvaluatorBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Archives.TargetInBasementQEEvaluator");
		return ptr;
	}



};

// Class Archives.TargetIsObsessionQEEvaluator
// 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
class UTargetIsObsessionQEEvaluator : public UQuestEventEvaluatorBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Archives.TargetIsObsessionQEEvaluator");
		return ptr;
	}



};

// Class Archives.TargetOfEventRecentlyQEEvaluator
// 0x0018 (FullSize[0x00A8] - InheritedSize[0x0090])
class UTargetOfEventRecentlyQEEvaluator : public UQuestEventEvaluatorBase
{
public:
	unsigned char                                      UnknownData_128A[0x8];                                     // 0x0090(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FgameplayTag                                _firstGameEvent;                                           // 0x0098(0x000C) (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _secondEventOnSelf;                                        // 0x00A4(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_4ZBJ[0x3];                                     // 0x00A5(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Archives.TargetOfEventRecentlyQEEvaluator");
		return ptr;
	}



};

// Class Archives.TargetTriggeredEventRecentlyQEEvaluator
// 0x0010 (FullSize[0x00A0] - InheritedSize[0x0090])
class UTargetTriggeredEventRecentlyQEEvaluator : public UQuestEventEvaluatorBase
{
public:
	unsigned char                                      UnknownData_SHU2[0x4];                                     // 0x0090(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FgameplayTag                                _gameEvent;                                                // 0x0094(0x000C) (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Archives.TargetTriggeredEventRecentlyQEEvaluator");
		return ptr;
	}



};

// Class Archives.EndOfGameQEEvaluator
// 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
class UEndOfGameQEEvaluator : public UQuestEventEvaluatorBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Archives.EndOfGameQEEvaluator");
		return ptr;
	}



	void OnFinishedPlaying(const struct FgameplayTag& GameEventType, const struct FgameEventData& gameEventData);
};

// Class Archives.TotemsAtEndTrialCountQEEvaluator
// 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
class UTotemsAtEndTrialCountQEEvaluator : public UEndOfGameQEEvaluator
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Archives.TotemsAtEndTrialCountQEEvaluator");
		return ptr;
	}



};

// Class Archives.UniqueTargetIncrementQEEvaluator
// 0x0050 (FullSize[0x00E0] - InheritedSize[0x0090])
class UUniqueTargetIncrementQEEvaluator : public UQuestEventEvaluatorBase
{
public:
	unsigned char                                      _targetList[0x50];                                         // 0x0090(0x0050) UNKNOWN PROPERTY: SetProperty


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Archives.UniqueTargetIncrementQEEvaluator");
		return ptr;
	}



};

// Class Archives.UniqueTargetsInTimeQEEvaluator
// 0x0010 (FullSize[0x00A0] - InheritedSize[0x0090])
class UUniqueTargetsInTimeQEEvaluator : public UQuestEventEvaluatorBase
{
public:
	unsigned char                                      UnknownData_XQGY[0x10];                                    // 0x0090(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Archives.UniqueTargetsInTimeQEEvaluator");
		return ptr;
	}



};

// Class Archives.WithPulledUpPalletQEEvaluator
// 0x0010 (FullSize[0x00A0] - InheritedSize[0x0090])
class UWithPulledUpPalletQEEvaluator : public UQuestEventEvaluatorBase
{
public:
	unsigned char                                      UnknownData_UQ60[0x10];                                    // 0x0090(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Archives.WithPulledUpPalletQEEvaluator");
		return ptr;
	}



};

// Class Archives.AfterExitOpenQEEvaluator
// 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
class UAfterExitOpenQEEvaluator : public UQuestEventEvaluatorBase
{
public:
	unsigned char                                      UnknownData_9BWS[0x8];                                     // 0x0090(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Archives.AfterExitOpenQEEvaluator");
		return ptr;
	}



	void OnExitGateOpened(const struct FgameplayTag& GameEventType, const struct FgameEventData& gameEventData);
};

// Class Archives.BloodPointsQEEvaluator
// 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
class UBloodPointsQEEvaluator : public UQuestEventEvaluatorBase
{
public:
	unsigned char                                      UnknownData_FAQS[0x8];                                     // 0x0090(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Archives.BloodPointsQEEvaluator");
		return ptr;
	}



	void OnFinishedPlaying(const struct FgameplayTag& GameEventType, const struct FgameEventData& gameEventData);
};

// Class Archives.ContextualQuestUtilities
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UContextualQuestUtilities : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Archives.ContextualQuestUtilities");
		return ptr;
	}



	bool STATIC_PlayerHasToCompleteAssociatedQuest(class UdbdPlayer* player, const struct FName& specialBehaviourId);
	bool STATIC_PlayerHasAssociatedQuest(class UdbdPlayer* player, const struct FName& specialBehaviourId);
};

// Class Archives.CustomDistanceEvaluatorCondition
// 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
class UCustomDistanceEvaluatorCondition : public UEvaluatorCondition
{
public:
	unsigned char                                      UnknownData_NVRC[0x8];                                     // 0x0048(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Archives.CustomDistanceEvaluatorCondition");
		return ptr;
	}



};

// Class Archives.CustomValueLessThanAmountQEEvaluator
// 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
class UCustomValueLessThanAmountQEEvaluator : public UQuestEventEvaluatorBase
{
public:
	unsigned char                                      UnknownData_EOFK[0x8];                                     // 0x0090(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Archives.CustomValueLessThanAmountQEEvaluator");
		return ptr;
	}



};

// Class Archives.CustomValueMoreThanAmountQEEvaluator
// 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
class UCustomValueMoreThanAmountQEEvaluator : public UQuestEventEvaluatorBase
{
public:
	unsigned char                                      UnknownData_Q9K8[0x8];                                     // 0x0090(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Archives.CustomValueMoreThanAmountQEEvaluator");
		return ptr;
	}



};

// Class Archives.CustomValuePercentQEEvaluator
// 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
class UCustomValuePercentQEEvaluator : public UQuestEventEvaluatorBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Archives.CustomValuePercentQEEvaluator");
		return ptr;
	}



};

// Class Archives.CustomValueQEEvaluator
// 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
class UCustomValueQEEvaluator : public UQuestEventEvaluatorBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Archives.CustomValueQEEvaluator");
		return ptr;
	}



};

// Class Archives.DifferentSurvivorsNearMeQEEvaluator
// 0x0058 (FullSize[0x00E8] - InheritedSize[0x0090])
class UDifferentSurvivorsNearMeQEEvaluator : public UQuestEventEvaluatorBase
{
public:
	unsigned char                                      UnknownData_G3A7[0x8];                                     // 0x0090(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      _foundSurvivors[0x50];                                     // 0x0090(0x0050) UNKNOWN PROPERTY: SetProperty


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Archives.DifferentSurvivorsNearMeQEEvaluator");
		return ptr;
	}



};

// Class Archives.DoBeforeEscapeQEEvaluator
// 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
class UDoBeforeEscapeQEEvaluator : public UQuestEventEvaluatorBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Archives.DoBeforeEscapeQEEvaluator");
		return ptr;
	}



	void OnEscaped(const struct FgameplayTag& GameEventType, const struct FgameEventData& gameEventData);
};

// Class Archives.DoBeforeHookQEEvaluator
// 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
class UDoBeforeHookQEEvaluator : public UQuestEventEvaluatorBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Archives.DoBeforeHookQEEvaluator");
		return ptr;
	}



	void OnHooked(const struct FgameplayTag& GameEventType, const struct FgameEventData& gameEventData);
};

// Class Archives.DuringEndGameCollapseQEEvaluator
// 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
class UDuringEndGameCollapseQEEvaluator : public UQuestEventEvaluatorBase
{
public:
	unsigned char                                      UnknownData_T544[0x8];                                     // 0x0090(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Archives.DuringEndGameCollapseQEEvaluator");
		return ptr;
	}



	void OnEndGameCollapseStart(const struct FgameplayTag& GameEventType, const struct FgameEventData& gameEventData);
};

// Class Archives.EarnEmblemQualityQEEvaluator
// 0x0010 (FullSize[0x00A0] - InheritedSize[0x0090])
class UEarnEmblemQualityQEEvaluator : public UQuestEventEvaluatorBase
{
public:
	unsigned char                                      UnknownData_UJVD[0x10];                                    // 0x0090(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Archives.EarnEmblemQualityQEEvaluator");
		return ptr;
	}



	void OnFinishedPlaying(const struct FgameplayTag& GameEventType, const struct FgameEventData& gameEventData);
};

// Class Archives.EventCountComparisonQEEvaluator
// 0x0030 (FullSize[0x00C0] - InheritedSize[0x0090])
class UEventCountComparisonQEEvaluator : public UQuestEventEvaluatorBase
{
public:
	TArray<struct FgameplayTag>                        _incrementCountEvents;                                     // 0x0090(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FgameplayTag>                        _resetCountEvents;                                         // 0x00A0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	Archives_EventCountComparisonOperator              _comparisonOperator;                                       // 0x00B0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_GQ0I[0xF];                                     // 0x00B1(0x000F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Archives.EventCountComparisonQEEvaluator");
		return ptr;
	}



};

// Class Archives.EventInTimeQEEvaluator
// 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
class UEventInTimeQEEvaluator : public UQuestEventEvaluatorBase
{
public:
	unsigned char                                      UnknownData_Y8D1[0x8];                                     // 0x0090(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Archives.EventInTimeQEEvaluator");
		return ptr;
	}



};

// Class Archives.EventOccurredBetweenQEEvaluator
// 0x0020 (FullSize[0x00B0] - InheritedSize[0x0090])
class UEventOccurredBetweenQEEvaluator : public UQuestEventEvaluatorBase
{
public:
	unsigned char                                      UnknownData_S1IE[0x10];                                    // 0x0090(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FgameplayTag                                _middleEvent;                                              // 0x00A0(0x000C) (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               outerEventsDifferentTargets;                               // 0x00AC(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_UWSR[0x3];                                     // 0x00AD(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Archives.EventOccurredBetweenQEEvaluator");
		return ptr;
	}



};

// Class Archives.GeneratorsNeededCountQEEvaluator
// 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
class UGeneratorsNeededCountQEEvaluator : public UEndOfGameQEEvaluator
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Archives.GeneratorsNeededCountQEEvaluator");
		return ptr;
	}



};

// Class Archives.Glyph
// 0x0130 (FullSize[0x0410] - InheritedSize[0x02E0])
class UGlyph : public USpecialBehaviourInteractable
{
public:
	TArray<class UdbdPlayer*>                          _playersWithVisibility;                                    // 0x02E0(0x0010) (Net, ZeroConstructor, Transient, RepNotify, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UdbdPlayer*>                          _oldPlayersWithVisibility;                                 // 0x02F0(0x0010) (ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       _specialBehaviourId;                                       // 0x0300(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UdbdPlayer>                   lastPlayerToStartInteraction;                              // 0x030C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_GSCR[0x4];                                     // 0x0314(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UGlyphInteraction*                           _glyphInteraction;                                         // 0x0318(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGlyphInteraction*                           _glyphInteractionKiller;                                   // 0x0320(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UchargeableComponent*                        _glyphInteractionChargeable;                               // 0x0328(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UchargeableComponent*                        _glyphInteractionChargeableKiller;                         // 0x0330(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class Uinteractor*                                 _glyphInteractor;                                          // 0x0338(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UprimitiveComponent*                         _glyphInteractionZone;                                     // 0x0340(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDBDOutlineComponent*                        _outlineComponent;                                         // 0x0348(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UStaticMeshComponent*                        _glyphMesh;                                                // 0x0350(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UNearTrackedActorComponent*                  _nearTrackedActorComponent;                                // 0x0358(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FgameplayTag                                _associatedSurvivorScoreEvent;                             // 0x0360(0x000C) (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FgameplayTag                                _associatedKillerScoreEvent;                               // 0x036C(0x000C) (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _glyphInteractionSecondsToCharge;                          // 0x0378(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _glyphInteractionSecondsToChargeKiller;                    // 0x03A0(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _glyphDetectionRange;                                      // 0x03C8(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FLinearColor                                _auraColorWhileInteracting;                                // 0x03F0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UdbdPlayer*>                          _playersThatInteractedWithGlyph;                           // 0x0400(0x0010) (Net, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Archives.Glyph");
		return ptr;
	}



	void OnRep_PlayersWithVisibility();
	bool DoesLocalPlayerHaveVisibility();
	void Cosmetic_OnStoppedInteracting();
	void Cosmetic_OnStartedInteracting(class UdbdPlayer* interactingPlayer, float interactionDuration);
	void Cosmetic_OnInteractionCompleted(class UdbdPlayer* interactingPlayer);
	void Cosmetic_OnGlyphVisibilityChanged(class UdbdPlayer* interactingPlayer, bool isVisible);
	void Authority_OnPlayerBreachedRangeThreshold(bool isWithinRange, class Uactor* trackedActor);
	void Authority_OnIntroCompleted();
};

// Class Archives.GlyphInteraction
// 0x0018 (FullSize[0x0640] - InheritedSize[0x0628])
class UGlyphInteraction : public UChargeableInteractionDefinition
{
public:
	unsigned char                                      UnknownData_OIJ8[0x8];                                     // 0x0628(0x0008) Fix Super Size
	unsigned char                                      UnknownData_OT8A[0x10];                                    // 0x0630(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Archives.GlyphInteraction");
		return ptr;
	}



};

// Class Archives.HasEventHappenedEvaluatorCondition
// 0x0010 (FullSize[0x0058] - InheritedSize[0x0048])
class UHasEventHappenedEvaluatorCondition : public UEvaluatorCondition
{
public:
	struct FgameplayTag                                _firstGameEvent;                                           // 0x0048(0x000C) (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_X0QV[0x4];                                     // 0x0054(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Archives.HasEventHappenedEvaluatorCondition");
		return ptr;
	}



};

// Class Archives.HasGameplayTagEvaluatorCondition
// 0x0010 (FullSize[0x0058] - InheritedSize[0x0048])
class UHasGameplayTagEvaluatorCondition : public UEvaluatorCondition
{
public:
	TArray<struct FgameplayTag>                        _gameplayTagList;                                          // 0x0048(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Archives.HasGameplayTagEvaluatorCondition");
		return ptr;
	}



};

// Class Archives.HasItemNoChargesQEEvaluator
// 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
class UHasItemNoChargesQEEvaluator : public UQuestEventEvaluatorBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Archives.HasItemNoChargesQEEvaluator");
		return ptr;
	}



};

// Class Archives.HasItemRarityQEEvaluator
// 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
class UHasItemRarityQEEvaluator : public UItemRarityQEEvaluator
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Archives.HasItemRarityQEEvaluator");
		return ptr;
	}



};

// Class Archives.HasModifierOfTypeEvaluatorCondition
// 0x0010 (FullSize[0x0058] - InheritedSize[0x0048])
class UHasModifierOfTypeEvaluatorCondition : public UEvaluatorCondition
{
public:
	TArray<struct FgameplayTag>                        _gameplayModifierList;                                     // 0x0048(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Archives.HasModifierOfTypeEvaluatorCondition");
		return ptr;
	}



};

// Class Archives.HasStatusEffectEvaluatorCondition
// 0x0010 (FullSize[0x0058] - InheritedSize[0x0048])
class UHasStatusEffectEvaluatorCondition : public UEvaluatorCondition
{
public:
	TArray<struct FName>                               _statusEffectList;                                         // 0x0048(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Archives.HasStatusEffectEvaluatorCondition");
		return ptr;
	}



};

// Class Archives.HideNearKillerQEEvaluator
// 0x0028 (FullSize[0x00E8] - InheritedSize[0x00C0])
class UHideNearKillerQEEvaluator : public UNearKillerQEEvaluator
{
public:
	unsigned char                                      UnknownData_XTCN[0x28];                                    // 0x00C0(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Archives.HideNearKillerQEEvaluator");
		return ptr;
	}



	void OnFinishedPlaying(const struct FgameplayTag& GameEventType, const struct FgameEventData& gameEventData);
	void OnChaseStart(class UdbdPlayer* chasedSurvivor);
	void OnChaseEnd(class UdbdPlayer* chasedSurvivor, float chaseTime);
};

// Class Archives.MaxEventCountQEEvaluator
// 0x0038 (FullSize[0x00C8] - InheritedSize[0x0090])
class UMaxEventCountQEEvaluator : public UQuestEventEvaluatorBase
{
public:
	TArray<struct FgameplayTag>                        _incrementEventCount;                                      // 0x0090(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FgameplayTag>                        _decrementEventCount;                                      // 0x00A0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FgameplayTag>                        _stopEventCount;                                           // 0x00B0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_KR4K[0x8];                                     // 0x00C0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Archives.MaxEventCountQEEvaluator");
		return ptr;
	}



	void OnStopEventCount(const struct FgameplayTag& GameEventType, const struct FgameEventData& gameEventData);
	void OnIncrementEventCount(const struct FgameplayTag& GameEventType, const struct FgameEventData& gameEventData);
	void OnDecrementEventCount(const struct FgameplayTag& GameEventType, const struct FgameEventData& gameEventData);
};

// Class Archives.HitDifferentInFrenzyMaxCountQEEvaluator
// 0x0050 (FullSize[0x0118] - InheritedSize[0x00C8])
class UHitDifferentInFrenzyMaxCountQEEvaluator : public UMaxEventCountQEEvaluator
{
public:
	unsigned char                                      _targetList[0x50];                                         // 0x00C8(0x0050) UNKNOWN PROPERTY: SetProperty


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Archives.HitDifferentInFrenzyMaxCountQEEvaluator");
		return ptr;
	}



};

// Class Archives.SurvivorHookSameTimeQEEvaluator
// 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
class USurvivorHookSameTimeQEEvaluator : public UQuestEventEvaluatorBase
{
public:
	unsigned char                                      UnknownData_VPAZ[0x8];                                     // 0x0090(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Archives.SurvivorHookSameTimeQEEvaluator");
		return ptr;
	}



	void OnSurvivorUnhooked(const struct FgameplayTag& GameEventType, const struct FgameEventData& gameEventData);
	void OnSurvivorHooked(const struct FgameplayTag& GameEventType, const struct FgameEventData& gameEventData);
};

// Class Archives.HookSameTimeBasementQEEvaluator
// 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
class UHookSameTimeBasementQEEvaluator : public USurvivorHookSameTimeQEEvaluator
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Archives.HookSameTimeBasementQEEvaluator");
		return ptr;
	}



};

// Class Archives.InDirectionOfKillerQEEvaluator
// 0x0018 (FullSize[0x00A8] - InheritedSize[0x0090])
class UInDirectionOfKillerQEEvaluator : public UQuestEventEvaluatorBase
{
public:
	class UdbdPlayer*                                  _killer;                                                   // 0x0090(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_V8EP[0x10];                                    // 0x0098(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Archives.InDirectionOfKillerQEEvaluator");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
