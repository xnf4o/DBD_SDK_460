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
// Parameters
//---------------------------------------------------------------------------

// Function DBDUIViewsCore.CoreBaseLoadoutPartWidget.SetLoadoutStackCount
struct UCoreBaseLoadoutPartWidget_SetLoadoutStackCount_Params
{
	int                                                stackCount;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreBaseLoadoutPartWidget.SetLoadoutPartRarity
struct UCoreBaseLoadoutPartWidget_SetLoadoutPartRarity_Params
{
	DBDSharedTypes_EItemRarity                         rarity;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreBaseLoadoutPartWidget.SetLoadoutPartIcon
struct UCoreBaseLoadoutPartWidget_SetLoadoutPartIcon_Params
{
	class UTexture2D*                                  icon;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreBaseUserWidget.RegisterForInput
struct UCoreBaseUserWidget_RegisterForInput_Params
{
};

// Function DBDUIViewsCore.CoreBaseUserWidget.OnControlModeChangedBP
struct UCoreBaseUserWidget_OnControlModeChangedBP_Params
{
	DBDSharedTypes_EControlMode                        controlMode;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreBaseUserWidget.DeregisterFromInput
struct UCoreBaseUserWidget_DeregisterFromInput_Params
{
};

// Function DBDUIViewsCore.CoreBaseHudWidget.ShouldPlayFocusAnimation
struct UCoreBaseHudWidget_ShouldPlayFocusAnimation_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreBaseHudWidget.PlayFocusAnimation
struct UCoreBaseHudWidget_PlayFocusAnimation_Params
{
};

// Function DBDUIViewsCore.CorePlayerStatusWidget.ShouldPlaySleepAnimation
struct UCorePlayerStatusWidget_ShouldPlaySleepAnimation_Params
{
	DBDSharedTypes_ESleepingUIState                    newSleepState;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CorePlayerStatusWidget.HasTimerProgressChanged
struct UCorePlayerStatusWidget_HasTimerProgressChanged_Params
{
	float                                              newTimerProgress;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CorePlayerStatusWidget.HasPlayerStatusDataChanged
struct UCorePlayerStatusWidget_HasPlayerStatusDataChanged_Params
{
	struct FPlayerStatusViewData                       newViewData;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CorePlayerStatusWidget.HasPlayerStateChanged
struct UCorePlayerStatusWidget_HasPlayerStateChanged_Params
{
	DBDSharedTypes_EPlayerStatus                       NewPlayerState;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CorePlayerStatusWidget.HasObsessionStateChanged
struct UCorePlayerStatusWidget_HasObsessionStateChanged_Params
{
	DBDSharedTypes_EObsessionUIState                   newObsessionState;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CorePlayerStatusWidget.HasKillerStatusDataChanged
struct UCorePlayerStatusWidget_HasKillerStatusDataChanged_Params
{
	struct FPlayerStatusViewData                       newViewData;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CorePlayerStatusWidget.GetPlayerStateChangeType
struct UCorePlayerStatusWidget_GetPlayerStateChangeType_Params
{
	struct FPlayerStatusViewData                       newViewData;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	DBDSharedTypes_EPlayerStateChangeType              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreScreenIndicatorWidget.GetOffScreenIndicatorsMap
struct UCoreScreenIndicatorWidget_GetOffScreenIndicatorsMap_Params
{
	TMap<struct FString, class UCoreOffScreenIndicatorItem*> ReturnValue;                                               // (ExportObject, Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreScreenIndicatorWidget.FindScreenIndicatorKey
struct UCoreScreenIndicatorWidget_FindScreenIndicatorKey_Params
{
	class UCoreOffScreenIndicatorItem*                 Value;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreStatusEffectIcon.UpdateWidget
struct UCoreStatusEffectIcon_UpdateWidget_Params
{
};

// Function DBDUIViewsCore.CoreStatusEffectIcon.UpdatePercentageFill
struct UCoreStatusEffectIcon_UpdatePercentageFill_Params
{
	float                                              percentage;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreStatusEffectIcon.SetStatusEffectData
struct UCoreStatusEffectIcon_SetStatusEffectData_Params
{
	struct FStatusEffectViewData                       data;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreStatusEffectIcon.SetInactiveTicks
struct UCoreStatusEffectIcon_SetInactiveTicks_Params
{
	int                                                inactiveTicks;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreStatusEffectIcon.GetStatusEffectData
struct UCoreStatusEffectIcon_GetStatusEffectData_Params
{
	struct FStatusEffectViewData                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreStatusEffectIcon.GetInactiveTicks
struct UCoreStatusEffectIcon_GetInactiveTicks_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreStatusEffectWidget.GetStatusEffectMap
struct UCoreStatusEffectWidget_GetStatusEffectMap_Params
{
	TMap<struct FName, class UCoreStatusEffectIcon*>   ReturnValue;                                               // (ExportObject, Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreTutorialObjectiveItem.SetObjectiveCompleted
struct UCoreTutorialObjectiveItem_SetObjectiveCompleted_Params
{
	bool                                               removeAfterCompletion;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreTutorialObjectiveItem.InitObjective
struct UCoreTutorialObjectiveItem_InitObjective_Params
{
	struct FString                                     description;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreTutorialObjectivesContainer.OnTutorialObjectiveCompleted
struct UCoreTutorialObjectivesContainer_OnTutorialObjectiveCompleted_Params
{
	class UCoreTutorialObjectiveItem*                  Item;                                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.DBDImage.SetBrushFromTextureWithDefault
struct UDBDImage_SetBrushFromTextureWithDefault_Params
{
	class UTexture2D*                                  texture;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               matchSize;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.DBDTextBlock.SetUndockedProperties
struct UDBDTextBlock_SetUndockedProperties_Params
{
	struct FDBDTextDockingProperties                   undockedProperties;                                        // (Parm, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.DBDTextBlock.SetIsUpperCase
struct UDBDTextBlock_SetIsUpperCase_Params
{
	bool                                               isUpperCase;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.DBDTextBlock.SetHasUndocking
struct UDBDTextBlock_SetHasUndocking_Params
{
	bool                                               hasUndocking;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.DBDTextBlock.OnSwitchDockStateChanged
struct UDBDTextBlock_OnSwitchDockStateChanged_Params
{
	bool                                               isDocked;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.DBDTextBlock.GetUndockedProperties
struct UDBDTextBlock_GetUndockedProperties_Params
{
	struct FDBDTextDockingProperties                   ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.DBDTextBlock.GetIsUpperCase
struct UDBDTextBlock_GetIsUpperCase_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.DBDTextBlock.GetHasUndocking
struct UDBDTextBlock_GetHasUndocking_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.DBDWrapBox.SetInnerSlotPadding
struct UDBDWrapBox_SetInnerSlotPadding_Params
{
	struct FVector2D                                   InPadding;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.DBDWrapBox.SetHorizontalAlignment
struct UDBDWrapBox_SetHorizontalAlignment_Params
{
	TEnumAsByte<SlateCore_EHorizontalAlignment>        InHorizontalAlignment;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.DBDWrapBox.AddChildToWrapBox
struct UDBDWrapBox_AddChildToWrapBox_Params
{
	class UWidget*                                     content;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDBDWrapBoxSlot*                             ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.DBDWrapBoxSlot.SetVerticalAlignment
struct UDBDWrapBoxSlot_SetVerticalAlignment_Params
{
	TEnumAsByte<SlateCore_EVerticalAlignment>          InVerticalAlignment;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.DBDWrapBoxSlot.SetPadding
struct UDBDWrapBoxSlot_SetPadding_Params
{
	struct FMargin                                     InPadding;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.DBDWrapBoxSlot.SetHorizontalAlignment
struct UDBDWrapBoxSlot_SetHorizontalAlignment_Params
{
	TEnumAsByte<SlateCore_EHorizontalAlignment>        InHorizontalAlignment;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.DBDWrapBoxSlot.SetFillSpanWhenLessThan
struct UDBDWrapBoxSlot_SetFillSpanWhenLessThan_Params
{
	float                                              InFillSpanWhenLessThan;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.DBDWrapBoxSlot.SetFillEmptySpace
struct UDBDWrapBoxSlot_SetFillEmptySpace_Params
{
	bool                                               InbFillEmptySpace;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.TestWidget.SetShowWorkbench
struct UTestWidget_SetShowWorkbench_Params
{
	bool                                               ShowWorkbench;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreButtonPromptWidget.SetText
struct UCoreButtonPromptWidget_SetText_Params
{
	struct FText                                       text;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreButtonPromptWidget.SetInputKey
struct UCoreButtonPromptWidget_SetInputKey_Params
{
	struct Fkey                                        key;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreButtonPromptWidget.SetAction
struct UCoreButtonPromptWidget_SetAction_Params
{
	DBDInput_EUIActionType                             ActionType;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreButtonPromptWidget.EnablePrompts
struct UCoreButtonPromptWidget_EnablePrompts_Params
{
};

// Function DBDUIViewsCore.CoreButtonPromptWidget.DisablePrompts
struct UCoreButtonPromptWidget_DisablePrompts_Params
{
};

// Function DBDUIViewsCore.CoreEndGameCollapseBarWidget.UpdateBarProgression
struct UCoreEndGameCollapseBarWidget_UpdateBarProgression_Params
{
	float                                              progress;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreEndGameCollapseBarWidget.PlayToZeroAnimation
struct UCoreEndGameCollapseBarWidget_PlayToZeroAnimation_Params
{
};

// Function DBDUIViewsCore.CoreExternalEffectsWidget.HideExternalPerk
struct UCoreExternalEffectsWidget_HideExternalPerk_Params
{
	struct FName                                       perkID;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreExternalEffectsWidget.HideExternalAddon
struct UCoreExternalEffectsWidget_HideExternalAddon_Params
{
	struct FName                                       addonID;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreHudAlertWidget.PopAlert
struct UCoreHudAlertWidget_PopAlert_Params
{
};

// Function DBDUIViewsCore.CoreHudAlertWidget.OnPopAlertComplete
struct UCoreHudAlertWidget_OnPopAlertComplete_Params
{
	struct FUITweenInstance                            tween;                                                     // (Parm, OutParm, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreHudAlertWidget.OnClearAlertsComplete
struct UCoreHudAlertWidget_OnClearAlertsComplete_Params
{
	struct FUITweenInstance                            tween;                                                     // (Parm, OutParm, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreHudAlertWidget.GetRemainingTime
struct UCoreHudAlertWidget_GetRemainingTime_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreHudAlertWidget.GetPendingAlerts
struct UCoreHudAlertWidget_GetPendingAlerts_Params
{
	TArray<class UCoreBaseUserWidget*>                 ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreHudAlertWidget.GetAlerts
struct UCoreHudAlertWidget_GetAlerts_Params
{
	TArray<class UCoreBaseUserWidget*>                 ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreHudAlertWidget.ClearAlerts
struct UCoreHudAlertWidget_ClearAlerts_Params
{
};

// Function DBDUIViewsCore.CoreHudScoreAlertItem.SetData
struct UCoreHudScoreAlertItem_SetData_Params
{
	struct FScoreAlertViewData                         data;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreHudStatusEffectAlertItem.SetData
struct UCoreHudStatusEffectAlertItem_SetData_Params
{
	struct FStatusEffectAlertViewData                  data;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreInputPromptTextWidget.SetText
struct UCoreInputPromptTextWidget_SetText_Params
{
	struct FText                                       text;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreInputPromptTextWidget.SetInputKey
struct UCoreInputPromptTextWidget_SetInputKey_Params
{
	struct Fkey                                        inputKey;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreInputPromptWidget.SetInputKey
struct UCoreInputPromptWidget_SetInputKey_Params
{
	struct Fkey                                        inputKey;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreInputPromptWidget.PromptNotFound
struct UCoreInputPromptWidget_PromptNotFound_Params
{
};

// Function DBDUIViewsCore.CoreInputPromptWidget.GetInputShortDisplayName
struct UCoreInputPromptWidget_GetInputShortDisplayName_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreInputPromptWidget.DisplayPrompt
struct UCoreInputPromptWidget_DisplayPrompt_Params
{
};

// Function DBDUIViewsCore.CoreInteractionPromptActionWidget.StopIdleAnimation
struct UCoreInteractionPromptActionWidget_StopIdleAnimation_Params
{
};

// Function DBDUIViewsCore.CoreInteractionPromptActionWidget.SetInputKey2
struct UCoreInteractionPromptActionWidget_SetInputKey2_Params
{
	struct Fkey                                        inputKey2;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreInteractionPromptActionWidget.PlayIdleAnimation
struct UCoreInteractionPromptActionWidget_PlayIdleAnimation_Params
{
};

// Function DBDUIViewsCore.CoreInteractionPromptActionWidget.HasSecondPrompt
struct UCoreInteractionPromptActionWidget_HasSecondPrompt_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreInteractionPromptWidget.SetData
struct UCoreInteractionPromptWidget_SetData_Params
{
	struct FInteractionPromptViewData                  data;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreInteractionPromptWidget.ClearData
struct UCoreInteractionPromptWidget_ClearData_Params
{
};

// Function DBDUIViewsCore.CoreOffScreenIndicatorItem.SetData
struct UCoreOffScreenIndicatorItem_SetData_Params
{
	struct FScreenIndicatorViewData                    data;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
