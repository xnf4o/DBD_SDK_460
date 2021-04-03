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

// Class DBDUIViewsCore.CoreBaseLoadoutPartWidget
// 0x0020 (FullSize[0x0280] - InheritedSize[0x0260])
class UCoreBaseLoadoutPartWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData_3AK6[0x8];                                     // 0x0260(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UDBDImage*                                   ImageRarity;                                               // 0x0268(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDBDImage*                                   ImageIcon;                                                 // 0x0270(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  TextStackCount;                                            // 0x0278(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CoreBaseLoadoutPartWidget");
		return ptr;
	}



	void SetLoadoutStackCount(int stackCount);
	void SetLoadoutPartRarity(DBDSharedTypes_EItemRarity rarity);
	void SetLoadoutPartIcon(class UTexture2D* icon);
};

// Class DBDUIViewsCore.CorePerkWidget
// 0x0008 (FullSize[0x0288] - InheritedSize[0x0280])
class UCorePerkWidget : public UCoreBaseLoadoutPartWidget
{
public:
	unsigned char                                      UnknownData_FW9K[0x8];                                     // 0x0280(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CorePerkWidget");
		return ptr;
	}



};

// Class DBDUIViewsCore.CoreBaseUserWidget
// 0x0070 (FullSize[0x02D0] - InheritedSize[0x0260])
class UCoreBaseUserWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData_QOBR[0x10];                                    // 0x0260(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               IsInteractive;                                             // 0x0270(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	DBDSharedTypes_EControlMode                        _controlMode;                                              // 0x0271(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_BUDK[0x6];                                     // 0x0272(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UDBDInputManager*                            _inputManager;                                             // 0x0278(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_7FSZ[0x50];                                    // 0x0280(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CoreBaseUserWidget");
		return ptr;
	}



	void RegisterForInput();
	void OnControlModeChangedBP(DBDSharedTypes_EControlMode controlMode);
	void DeregisterFromInput();
};

// Class DBDUIViewsCore.CoreBaseHudWidget
// 0x0018 (FullSize[0x02E8] - InheritedSize[0x02D0])
class UCoreBaseHudWidget : public UCoreBaseUserWidget
{
public:
	float                                              FocusAnimationDuration;                                    // 0x02D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              FocusAnimationDelay;                                       // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	UITween_EEasingType                                FocusAnimationEasing;                                      // 0x02D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_70WU[0x3];                                     // 0x02D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FocusAnimationMaxOpacity;                                  // 0x02DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              FocusAnimationMinOpacity;                                  // 0x02E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_LAAE[0x4];                                     // 0x02E4(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CoreBaseHudWidget");
		return ptr;
	}



	bool ShouldPlayFocusAnimation();
	void PlayFocusAnimation();
};

// Class DBDUIViewsCore.CorePingStatusWidget
// 0x0008 (FullSize[0x02F0] - InheritedSize[0x02E8])
class UCorePingStatusWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_U8QG[0x8];                                     // 0x02E8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CorePingStatusWidget");
		return ptr;
	}



};

// Class DBDUIViewsCore.CorePlayerStatusesContainerWidget
// 0x0030 (FullSize[0x0318] - InheritedSize[0x02E8])
class UCorePlayerStatusesContainerWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_OE40[0x10];                                    // 0x02E8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UCorePlayerStatusWidget*>             PlayerStatusWidgets;                                       // 0x02F8(0x0010) (BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<TScriptInterface<class UPlayerStatusViewInterface>> _playerStatusViewInterfaces;                               // 0x0308(0x0010) (ZeroConstructor, Transient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CorePlayerStatusesContainerWidget");
		return ptr;
	}



};

// Class DBDUIViewsCore.CorePlayerStatusWidget
// 0x00C0 (FullSize[0x03A8] - InheritedSize[0x02E8])
class UCorePlayerStatusWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_KFDA[0x8];                                     // 0x02E8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAkAudioEvent*                               ObsessionSfx;                                              // 0x02F0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FPlayerStatusViewData                       _cachedViewData;                                           // 0x02F8(0x0060) (BlueprintVisible, Transient, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_5AOM[0x50];                                    // 0x0358(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CorePlayerStatusWidget");
		return ptr;
	}



	bool ShouldPlaySleepAnimation(DBDSharedTypes_ESleepingUIState newSleepState);
	bool HasTimerProgressChanged(float newTimerProgress);
	bool HasPlayerStatusDataChanged(const struct FPlayerStatusViewData& newViewData);
	bool HasPlayerStateChanged(DBDSharedTypes_EPlayerStatus NewPlayerState);
	bool HasObsessionStateChanged(DBDSharedTypes_EObsessionUIState newObsessionState);
	bool HasKillerStatusDataChanged(const struct FPlayerStatusViewData& newViewData);
	DBDSharedTypes_EPlayerStateChangeType GetPlayerStateChangeType(const struct FPlayerStatusViewData& newViewData);
};

// Class DBDUIViewsCore.CorePowerBundleWidget
// 0x0008 (FullSize[0x02D8] - InheritedSize[0x02D0])
class UCorePowerBundleWidget : public UCoreBaseUserWidget
{
public:
	unsigned char                                      UnknownData_LNKM[0x8];                                     // 0x02D0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CorePowerBundleWidget");
		return ptr;
	}



};

// Class DBDUIViewsCore.CorePowerWidget
// 0x0008 (FullSize[0x0288] - InheritedSize[0x0280])
class UCorePowerWidget : public UCoreBaseLoadoutPartWidget
{
public:
	unsigned char                                      UnknownData_0ZIL[0x8];                                     // 0x0280(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CorePowerWidget");
		return ptr;
	}



};

// Class DBDUIViewsCore.CoreScreenIndicatorWidget
// 0x0070 (FullSize[0x0358] - InheritedSize[0x02E8])
class UCoreScreenIndicatorWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_9NX8[0x8];                                     // 0x02E8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              InactiveThreshold;                                         // 0x02F0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_YAZN[0x4];                                     // 0x02F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCanvasPanel*                                container;                                                 // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      OffScreenIndicatorItemClass;                               // 0x0300(0x0008) (Edit, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<struct FString, class UCoreOffScreenIndicatorItem*> _offScreenIndicatorsMap;                                   // 0x0308(0x0050) (ExportObject, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CoreScreenIndicatorWidget");
		return ptr;
	}



	TMap<struct FString, class UCoreOffScreenIndicatorItem*> GetOffScreenIndicatorsMap();
	struct FString FindScreenIndicatorKey(class UCoreOffScreenIndicatorItem* Value);
};

// Class DBDUIViewsCore.CoreSkillCheckWidget
// 0x0008 (FullSize[0x02F0] - InheritedSize[0x02E8])
class UCoreSkillCheckWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_ZUS9[0x8];                                     // 0x02E8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CoreSkillCheckWidget");
		return ptr;
	}



};

// Class DBDUIViewsCore.CoreSpectateBarWidget
// 0x0038 (FullSize[0x0320] - InheritedSize[0x02E8])
class UCoreSpectateBarWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_KHQU[0x8];                                     // 0x02E8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    _leaveButtonClickDelegate;                                 // 0x02F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    _leftArrowClickDelegate;                                   // 0x0300(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    _rightArrowClickDelegate;                                  // 0x0310(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CoreSpectateBarWidget");
		return ptr;
	}



};

// Class DBDUIViewsCore.CoreStartSequenceWidget
// 0x00A0 (FullSize[0x0388] - InheritedSize[0x02E8])
class UCoreStartSequenceWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_1SY5[0x8];                                     // 0x02E8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FadeInDuration;                                            // 0x02F0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              FadeOutDuration;                                           // 0x02F4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	UITween_EEasingType                                FadeInEasing;                                              // 0x02F8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	UITween_EEasingType                                FadeOutEasing;                                             // 0x02F9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_2K28[0x6];                                     // 0x02FA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<DBDSharedTypes_EThemeColorId, struct FLinearColor> BorderColors;                                              // 0x0300(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FLinearColor                                DefaultColor;                                              // 0x0350(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDBDTextBlock*                               ThemeNameTextfield;                                        // 0x0360(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class Uimage*                                      SeparatorImage;                                            // 0x0368(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDBDTextBlock*                               MapNameTextfield;                                          // 0x0370(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScriptMulticastDelegate                    StartSequenceFadeOutDelegate;                              // 0x0378(0x0010) (ZeroConstructor, InstancedReference, BlueprintCallable, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CoreStartSequenceWidget");
		return ptr;
	}



};

// Class DBDUIViewsCore.CoreStatusEffectIcon
// 0x0030 (FullSize[0x0300] - InheritedSize[0x02D0])
class UCoreStatusEffectIcon : public UCoreBaseUserWidget
{
public:
	unsigned char                                      UnknownData_MZLK[0x30];                                    // 0x02D0(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CoreStatusEffectIcon");
		return ptr;
	}



	void UpdateWidget();
	void UpdatePercentageFill(float percentage);
	void SetStatusEffectData(const struct FStatusEffectViewData& data);
	void SetInactiveTicks(int inactiveTicks);
	struct FStatusEffectViewData GetStatusEffectData();
	int GetInactiveTicks();
};

// Class DBDUIViewsCore.CoreStatusEffectWidget
// 0x0098 (FullSize[0x0380] - InheritedSize[0x02E8])
class UCoreStatusEffectWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_Q5Y1[0x8];                                     // 0x02E8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                InactiveThreshold;                                         // 0x02F0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                PrepooledItemAmount;                                       // 0x02F4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                ItemsByColumn;                                             // 0x02F8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              EvenColumnOffset;                                          // 0x02FC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      CoreStatusEffectIconClass;                                 // 0x0300(0x0008) (Edit, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGridPanel*                                  StatusEffectContainer;                                     // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UCoreStatusEffectIcon*>               _statusEffectPool;                                         // 0x0310(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FName>                               _statusEffectOrder;                                        // 0x0320(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<struct FName, class UCoreStatusEffectIcon*>   _statusEffectMap;                                          // 0x0330(0x0050) (BlueprintVisible, ExportObject, BlueprintReadOnly, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CoreStatusEffectWidget");
		return ptr;
	}



	TMap<struct FName, class UCoreStatusEffectIcon*> GetStatusEffectMap();
};

// Class DBDUIViewsCore.CoreTemplateWidget
// 0x0008 (FullSize[0x0268] - InheritedSize[0x0260])
class UCoreTemplateWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData_HQ3I[0x8];                                     // 0x0260(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CoreTemplateWidget");
		return ptr;
	}



};

// Class DBDUIViewsCore.CoreTestBuildFlagWidget
// 0x0018 (FullSize[0x0300] - InheritedSize[0x02E8])
class UCoreTestBuildFlagWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_RBQZ[0x8];                                     // 0x02E8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTextBlock*                                  TopLineTextfield;                                          // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  BottomLineTextfield;                                       // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CoreTestBuildFlagWidget");
		return ptr;
	}



};

// Class DBDUIViewsCore.CoreTutorialMysteryNoteWidget
// 0x0008 (FullSize[0x02F0] - InheritedSize[0x02E8])
class UCoreTutorialMysteryNoteWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_HKT3[0x8];                                     // 0x02E8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CoreTutorialMysteryNoteWidget");
		return ptr;
	}



};

// Class DBDUIViewsCore.CoreTutorialObjectiveItem
// 0x0010 (FullSize[0x02E0] - InheritedSize[0x02D0])
class UCoreTutorialObjectiveItem : public UCoreBaseUserWidget
{
public:
	struct FScriptMulticastDelegate                    TutorialObjectiveCompletedDelegate;                        // 0x02D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintCallable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CoreTutorialObjectiveItem");
		return ptr;
	}



	void SetObjectiveCompleted(bool removeAfterCompletion);
	void InitObjective(const struct FString& description);
};

// Class DBDUIViewsCore.CoreTutorialObjectivesContainer
// 0x0080 (FullSize[0x0368] - InheritedSize[0x02E8])
class UCoreTutorialObjectivesContainer : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_R9VK[0x8];                                     // 0x02E8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      CoreTutorialObjectiveItemClass;                            // 0x02F0(0x0008) (Edit, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                BasePooledInstanceAmount;                                  // 0x02F8(0x0004) (Edit, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_YYG1[0x4];                                     // 0x02FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UGridPanel*                                  ObjectiveContainer;                                        // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UCoreTutorialObjectiveItem*>          _objectivePool;                                            // 0x0308(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<struct FName, class UCoreTutorialObjectiveItem*> _objectiveItems;                                           // 0x0318(0x0050) (ExportObject, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CoreTutorialObjectivesContainer");
		return ptr;
	}



	void OnTutorialObjectiveCompleted(class UCoreTutorialObjectiveItem* Item);
};

// Class DBDUIViewsCore.CoreTutorialPopupWidget
// 0x0040 (FullSize[0x0328] - InheritedSize[0x02E8])
class UCoreTutorialPopupWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_NT6Q[0x8];                                     // 0x02E8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAkAudioEvent*                               ClosePopupSfx;                                             // 0x02F0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScriptMulticastDelegate                    _tallyTutoNextButtonClickDelegate;                         // 0x02F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintCallable, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    _tallyTutoLeaveButtonClickDelegate;                        // 0x0308(0x0010) (ZeroConstructor, InstancedReference, BlueprintCallable, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    _notifTutoConfirmButtonClickDelegate;                      // 0x0318(0x0010) (ZeroConstructor, InstancedReference, BlueprintCallable, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CoreTutorialPopupWidget");
		return ptr;
	}



};

// Class DBDUIViewsCore.DBDImage
// 0x0008 (FullSize[0x0250] - InheritedSize[0x0248])
class UDBDImage : public Uimage
{
public:
	class UTexture2D*                                  DefaultImage;                                              // 0x0248(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.DBDImage");
		return ptr;
	}



	void SetBrushFromTextureWithDefault(class UTexture2D* texture, bool matchSize);
};

// Class DBDUIViewsCore.DBDTextBlock
// 0x00A0 (FullSize[0x0388] - InheritedSize[0x02E8])
class UDBDTextBlock : public UTextBlock
{
public:
	bool                                               _debugPreviewUndockedState;                                // 0x02E8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_AOU0[0x7];                                     // 0x02E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USwitchDockStateManager*                     _switchDockStateManager;                                   // 0x02F0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isUpperCase;                                              // 0x02F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _hasUndocking;                                             // 0x02F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_5530[0x6];                                     // 0x02FA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDBDTextDockingProperties                   _undockedProperties;                                       // 0x0300(0x0040) (Edit, BlueprintVisible, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_JJM5[0x48];                                    // 0x0340(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.DBDTextBlock");
		return ptr;
	}



	void SetUndockedProperties(const struct FDBDTextDockingProperties& undockedProperties);
	void SetIsUpperCase(bool isUpperCase);
	void SetHasUndocking(bool hasUndocking);
	void OnSwitchDockStateChanged(bool isDocked);
	struct FDBDTextDockingProperties GetUndockedProperties();
	bool GetIsUpperCase();
	bool GetHasUndocking();
};

// Class DBDUIViewsCore.DBDWrapBox
// 0x0020 (FullSize[0x0160] - InheritedSize[0x0140])
class UDBDWrapBox : public UPanelWidget
{
public:
	struct FVector2D                                   InnerSlotPadding;                                          // 0x0140(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WrapWidth;                                                 // 0x0148(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bExplicitWrapWidth;                                        // 0x014C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalAlignment;                                       // 0x014D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4SJ7[0x12];                                    // 0x014E(0x0012) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.DBDWrapBox");
		return ptr;
	}



	void SetInnerSlotPadding(const struct FVector2D& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment);
	class UDBDWrapBoxSlot* AddChildToWrapBox(class UWidget* content);
};

// Class DBDUIViewsCore.DBDWrapBoxSlot
// 0x0028 (FullSize[0x0068] - InheritedSize[0x0040])
class UDBDWrapBoxSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                   // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bFillEmptySpace;                                           // 0x0050(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_76ZF[0x3];                                     // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FillSpanWhenLessThan;                                      // 0x0054(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalAlignment;                                       // 0x0058(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EVerticalAlignment>          VerticalAlignment;                                         // 0x0059(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UZAE[0xE];                                     // 0x005A(0x000E) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.DBDWrapBoxSlot");
		return ptr;
	}



	void SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment);
	void SetFillSpanWhenLessThan(float InFillSpanWhenLessThan);
	void SetFillEmptySpace(bool InbFillEmptySpace);
};

// Class DBDUIViewsCore.TestWidget
// 0x0010 (FullSize[0x0270] - InheritedSize[0x0260])
class UTestWidget : public UUserWidget
{
public:
	class UPanelWidget*                                Workbench;                                                 // 0x0260(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               ShowWorkbench;                                             // 0x0268(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_PZ9S[0x7];                                     // 0x0269(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.TestWidget");
		return ptr;
	}



	void SetShowWorkbench(bool ShowWorkbench);
};

// Class DBDUIViewsCore.CoreAddonWidget
// 0x0008 (FullSize[0x0288] - InheritedSize[0x0280])
class UCoreAddonWidget : public UCoreBaseLoadoutPartWidget
{
public:
	unsigned char                                      UnknownData_XAJR[0x8];                                     // 0x0280(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CoreAddonWidget");
		return ptr;
	}



};

// Class DBDUIViewsCore.CoreButtonPromptWidget
// 0x0038 (FullSize[0x0308] - InheritedSize[0x02D0])
class UCoreButtonPromptWidget : public UCoreBaseUserWidget
{
public:
	class UAkAudioEvent*                               CursorOverSfx;                                             // 0x02D0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkAudioEvent*                               CursorPressSfx;                                            // 0x02D8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkAudioEvent*                               CursorReleaseSfx;                                          // 0x02E0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCoreInputPromptTextWidget*                  _inputPromptText;                                          // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  _buttonTextField;                                          // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScriptMulticastDelegate                    _buttonPromptTriggeredDelegate;                            // 0x02F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CoreButtonPromptWidget");
		return ptr;
	}



	void SetText(const struct FText& text);
	void SetInputKey(const struct Fkey& key);
	void SetAction(DBDInput_EUIActionType ActionType);
	void EnablePrompts();
	void DisablePrompts();
};

// Class DBDUIViewsCore.CoreEndGameCollapseBarWidget
// 0x0078 (FullSize[0x0360] - InheritedSize[0x02E8])
class UCoreEndGameCollapseBarWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_SP7N[0x8];                                     // 0x02E8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _progressBarInterpSpeed;                                   // 0x02F0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_EEFH[0x6C];                                    // 0x02F4(0x006C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CoreEndGameCollapseBarWidget");
		return ptr;
	}



	void UpdateBarProgression(float progress);
	void PlayToZeroAnimation();
};

// Class DBDUIViewsCore.CoreEndGameCollapseProgressWidget
// 0x0048 (FullSize[0x0318] - InheritedSize[0x02D0])
class UCoreEndGameCollapseProgressWidget : public UCoreBaseUserWidget
{
public:
	class UProgressBar*                                ProgressBar;                                               // 0x02D0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCanvasPanel*                                MarkerLeftCanvas;                                          // 0x02D8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCanvasPanel*                                MarkerRightCanvas;                                         // 0x02E0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UHorizontalBoxSlot*                          _markerLeftBox;                                            // 0x02E8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UHorizontalBoxSlot*                          _markerRightBox;                                           // 0x02F0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_SJX3[0x20];                                    // 0x02F8(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CoreEndGameCollapseProgressWidget");
		return ptr;
	}



};

// Class DBDUIViewsCore.CoreEquippedItemWidget
// 0x0010 (FullSize[0x02F8] - InheritedSize[0x02E8])
class UCoreEquippedItemWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_AZC4[0x8];                                     // 0x02E8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAkAudioEvent*                               ItemDisappearSfx;                                          // 0x02F0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CoreEquippedItemWidget");
		return ptr;
	}



};

// Class DBDUIViewsCore.CoreEquippedPowerWidget
// 0x0008 (FullSize[0x02F0] - InheritedSize[0x02E8])
class UCoreEquippedPowerWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_A2ZB[0x8];                                     // 0x02E8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CoreEquippedPowerWidget");
		return ptr;
	}



};

// Class DBDUIViewsCore.CoreExampleWidget
// 0x0098 (FullSize[0x0380] - InheritedSize[0x02E8])
class UCoreExampleWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_B5FK[0x8];                                     // 0x02E8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     EditAnywhere;                                              // 0x02F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     EditDefaultsOnly;                                          // 0x0300(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     EditInstanceOnly;                                          // 0x0310(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     EditNoBlueprint;                                           // 0x0320(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     EditDefaultsOnlyBlueprintReadOnly;                         // 0x0330(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     VisibleAnywhere;                                           // 0x0340(0x0010) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     VisibleDefaultsOnly;                                       // 0x0350(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     VisibleInstanceOnly;                                       // 0x0360(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    ExampleButtonClickDelegate;                                // 0x0370(0x0010) (ZeroConstructor, InstancedReference, BlueprintCallable, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CoreExampleWidget");
		return ptr;
	}



};

// Class DBDUIViewsCore.CoreExternalEffectsWidget
// 0x01B0 (FullSize[0x0498] - InheritedSize[0x02E8])
class UCoreExternalEffectsWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_SX3O[0x8];                                     // 0x02E8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UCorePerkWidget*>                     PerkWidgets;                                               // 0x02F0(0x0010) (BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UCoreAddonWidget*>                    AddonWidgets;                                              // 0x0300(0x0010) (BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_KEVX[0x8];                                     // 0x0310(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<TScriptInterface<class UPerkViewInterface>> _perkViewInterfaces;                                       // 0x0318(0x0010) (ZeroConstructor, Transient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<TScriptInterface<class UAddonViewInterface>> _addonViewInterfaces;                                      // 0x0328(0x0010) (ZeroConstructor, Transient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_KUW6[0x160];                                   // 0x0338(0x0160) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CoreExternalEffectsWidget");
		return ptr;
	}



	void HideExternalPerk(const struct FName& perkID);
	void HideExternalAddon(const struct FName& addonID);
};

// Class DBDUIViewsCore.CoreHookCountWidget
// 0x0008 (FullSize[0x02F0] - InheritedSize[0x02E8])
class UCoreHookCountWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_A722[0x8];                                     // 0x02E8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CoreHookCountWidget");
		return ptr;
	}



};

// Class DBDUIViewsCore.CoreHudAlertWidget
// 0x0090 (FullSize[0x0378] - InheritedSize[0x02E8])
class UCoreHudAlertWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_NYH0[0x8];                                     // 0x02E8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MaxDisplayedItems;                                         // 0x02F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              SecondaryAlpha;                                            // 0x02F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              FullAlertDuration;                                         // 0x02F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              PendingAlertDuration;                                      // 0x02FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              AnimationDuration;                                         // 0x0300(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	UITween_EEasingType                                AnimationEasing;                                           // 0x0304(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_TOFA[0x3];                                     // 0x0305(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AnimationTranslationY;                                     // 0x0308(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ENV9[0x4];                                     // 0x030C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      CoreHudScoreAlertItemClass;                                // 0x0310(0x0008) (Edit, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      CoreHudStatusEffectAlertItemClass;                         // 0x0318(0x0008) (Edit, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGridPanel*                                  AlertContainer;                                            // 0x0320(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UCoreBaseUserWidget*>                 _alerts;                                                   // 0x0328(0x0010) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UCoreBaseUserWidget*>                 _pendingAlerts;                                            // 0x0338(0x0010) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UCoreHudScoreAlertItem*>              _scoreAlertPool;                                           // 0x0348(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UCoreHudStatusEffectAlertItem*>       _statusEffectAlertPool;                                    // 0x0358(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_HCYH[0x10];                                    // 0x0368(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CoreHudAlertWidget");
		return ptr;
	}



	void PopAlert();
	void OnPopAlertComplete(struct FUITweenInstance* tween);
	void OnClearAlertsComplete(struct FUITweenInstance* tween);
	float GetRemainingTime();
	TArray<class UCoreBaseUserWidget*> GetPendingAlerts();
	TArray<class UCoreBaseUserWidget*> GetAlerts();
	void ClearAlerts();
};

// Class DBDUIViewsCore.CoreHudObjectiveWidget
// 0x0010 (FullSize[0x02F8] - InheritedSize[0x02E8])
class UCoreHudObjectiveWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_Q45Y[0x10];                                    // 0x02E8(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CoreHudObjectiveWidget");
		return ptr;
	}



};

// Class DBDUIViewsCore.CoreHudScoreAlertItem
// 0x0000 (FullSize[0x02D0] - InheritedSize[0x02D0])
class UCoreHudScoreAlertItem : public UCoreBaseUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CoreHudScoreAlertItem");
		return ptr;
	}



	void SetData(const struct FScoreAlertViewData& data);
};

// Class DBDUIViewsCore.CoreHudStatusEffectAlertItem
// 0x0000 (FullSize[0x02D0] - InheritedSize[0x02D0])
class UCoreHudStatusEffectAlertItem : public UCoreBaseUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CoreHudStatusEffectAlertItem");
		return ptr;
	}



	void SetData(const struct FStatusEffectAlertViewData& data);
};

// Class DBDUIViewsCore.CoreInputPromptTextWidget
// 0x0048 (FullSize[0x0318] - InheritedSize[0x02D0])
class UCoreInputPromptTextWidget : public UCoreBaseUserWidget
{
public:
	class UCoreInputPromptWidget*                      InputPrompt;                                               // 0x02D0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  TextField;                                                 // 0x02D8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct Fkey                                        inputKey;                                                  // 0x02E0(0x0020) (Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FText                                       text;                                                      // 0x0300(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CoreInputPromptTextWidget");
		return ptr;
	}



	void SetText(const struct FText& text);
	void SetInputKey(const struct Fkey& inputKey);
};

// Class DBDUIViewsCore.CoreInputPromptWidget
// 0x0038 (FullSize[0x0308] - InheritedSize[0x02D0])
class UCoreInputPromptWidget : public UCoreBaseUserWidget
{
public:
	struct FText                                       UnfoundInputKeyText;                                       // 0x02D0(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct Fkey                                        inputKey;                                                  // 0x02E8(0x0020) (Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CoreInputPromptWidget");
		return ptr;
	}



	void SetInputKey(const struct Fkey& inputKey);
	void PromptNotFound();
	struct FText GetInputShortDisplayName();
	void DisplayPrompt();
};

// Class DBDUIViewsCore.CoreInteractionProgressWidget
// 0x0020 (FullSize[0x0308] - InheritedSize[0x02E8])
class UCoreInteractionProgressWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_SFLV[0x10];                                    // 0x02E8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UCoreStatusEffectIcon*>               Proficiencies;                                             // 0x02F8(0x0010) (BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CoreInteractionProgressWidget");
		return ptr;
	}



};

// Class DBDUIViewsCore.CoreInteractionPromptActionWidget
// 0x0040 (FullSize[0x0358] - InheritedSize[0x0318])
class UCoreInteractionPromptActionWidget : public UCoreInputPromptTextWidget
{
public:
	class UCoreInputPromptWidget*                      InputPrompt2;                                              // 0x0318(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       IdleAnimationName;                                         // 0x0320(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_XMJA[0x4];                                     // 0x032C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct Fkey                                        inputKey2;                                                 // 0x0330(0x0020) (Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_6QX1[0x8];                                     // 0x0350(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CoreInteractionPromptActionWidget");
		return ptr;
	}



	void StopIdleAnimation();
	void SetInputKey2(const struct Fkey& inputKey2);
	void PlayIdleAnimation();
	bool HasSecondPrompt();
};

// Class DBDUIViewsCore.CoreInteractionPromptsContainerWidget
// 0x00A0 (FullSize[0x0388] - InheritedSize[0x02E8])
class UCoreInteractionPromptsContainerWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_H9WD[0x10];                                    // 0x02E8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UDBDWrapBox*                                 CenterContainerBox;                                        // 0x02F8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDBDWrapBox*                                 ContainerBox;                                              // 0x0300(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      InteractionPromptWidgetClass;                              // 0x0308(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                MaxDisplayedPrompts;                                       // 0x0310(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FMargin                                     SlotMargin;                                                // 0x0314(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ZOGG[0x4];                                     // 0x0324(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UCoreInteractionPromptWidget*>        _promptWidgetPool;                                         // 0x0328(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<struct FName, class UCoreInteractionPromptWidget*> _displayedPromptsMap;                                      // 0x0338(0x0050) (ExportObject, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CoreInteractionPromptsContainerWidget");
		return ptr;
	}



};

// Class DBDUIViewsCore.CoreInteractionPromptWidget
// 0x0000 (FullSize[0x0260] - InheritedSize[0x0260])
class UCoreInteractionPromptWidget : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CoreInteractionPromptWidget");
		return ptr;
	}



	void SetData(const struct FInteractionPromptViewData& data);
	void ClearData();
};

// Class DBDUIViewsCore.CoreItemBundleWidget
// 0x0008 (FullSize[0x02D8] - InheritedSize[0x02D0])
class UCoreItemBundleWidget : public UCoreBaseUserWidget
{
public:
	unsigned char                                      UnknownData_HELW[0x8];                                     // 0x02D0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CoreItemBundleWidget");
		return ptr;
	}



};

// Class DBDUIViewsCore.CoreItemInteractionWidget
// 0x0008 (FullSize[0x02F0] - InheritedSize[0x02E8])
class UCoreItemInteractionWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_7WU7[0x8];                                     // 0x02E8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CoreItemInteractionWidget");
		return ptr;
	}



};

// Class DBDUIViewsCore.CoreItemWidget
// 0x0008 (FullSize[0x0288] - InheritedSize[0x0280])
class UCoreItemWidget : public UCoreBaseLoadoutPartWidget
{
public:
	unsigned char                                      UnknownData_UBG4[0x8];                                     // 0x0280(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CoreItemWidget");
		return ptr;
	}



};

// Class DBDUIViewsCore.CoreLeaningArrowsWidget
// 0x0008 (FullSize[0x02F0] - InheritedSize[0x02E8])
class UCoreLeaningArrowsWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_BADL[0x8];                                     // 0x02E8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CoreLeaningArrowsWidget");
		return ptr;
	}



};

// Class DBDUIViewsCore.CoreMatchResultWidget
// 0x0008 (FullSize[0x02F0] - InheritedSize[0x02E8])
class UCoreMatchResultWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_QWIR[0x8];                                     // 0x02E8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CoreMatchResultWidget");
		return ptr;
	}



};

// Class DBDUIViewsCore.CoreOfferingInteractionWidget
// 0x0008 (FullSize[0x02F0] - InheritedSize[0x02E8])
class UCoreOfferingInteractionWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_E93S[0x8];                                     // 0x02E8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CoreOfferingInteractionWidget");
		return ptr;
	}



};

// Class DBDUIViewsCore.CoreOfferingWidget
// 0x0008 (FullSize[0x0288] - InheritedSize[0x0280])
class UCoreOfferingWidget : public UCoreBaseLoadoutPartWidget
{
public:
	unsigned char                                      UnknownData_FBI6[0x8];                                     // 0x0280(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CoreOfferingWidget");
		return ptr;
	}



};

// Class DBDUIViewsCore.CoreOffScreenIndicatorItem
// 0x0020 (FullSize[0x02F0] - InheritedSize[0x02D0])
class UCoreOffScreenIndicatorItem : public UCoreBaseUserWidget
{
public:
	float                                              InactiveTime;                                              // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   IndicatorPadding;                                          // 0x02D4(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   DistanceClamping;                                          // 0x02DC(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinDistanceRatio;                                          // 0x02E4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinDistanceAlpha;                                          // 0x02E8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SOYB[0x4];                                     // 0x02EC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CoreOffScreenIndicatorItem");
		return ptr;
	}



	void SetData(const struct FScreenIndicatorViewData& data);
};

// Class DBDUIViewsCore.CorePerksContainerWidget
// 0x0028 (FullSize[0x0310] - InheritedSize[0x02E8])
class UCorePerksContainerWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_EXIY[0x8];                                     // 0x02E8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UCorePerkWidget*>                     PerkWidgets;                                               // 0x02F0(0x0010) (BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<TScriptInterface<class UPerkViewInterface>> _perkViewInterfaces;                                       // 0x0300(0x0010) (ZeroConstructor, Transient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class DBDUIViewsCore.CorePerksContainerWidget");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
