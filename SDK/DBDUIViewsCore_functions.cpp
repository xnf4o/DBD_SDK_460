// Name: DBD, Version: 4.6.0

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function DBDUIViewsCore.CoreBaseLoadoutPartWidget.SetLoadoutStackCount
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int                            stackCount                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreBaseLoadoutPartWidget::SetLoadoutStackCount(int stackCount)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreBaseLoadoutPartWidget.SetLoadoutStackCount");

	UCoreBaseLoadoutPartWidget_SetLoadoutStackCount_Params params;
	params.stackCount = stackCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreBaseLoadoutPartWidget.SetLoadoutPartRarity
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// DBDSharedTypes_EItemRarity     rarity                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreBaseLoadoutPartWidget::SetLoadoutPartRarity(DBDSharedTypes_EItemRarity rarity)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreBaseLoadoutPartWidget.SetLoadoutPartRarity");

	UCoreBaseLoadoutPartWidget_SetLoadoutPartRarity_Params params;
	params.rarity = rarity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreBaseLoadoutPartWidget.SetLoadoutPartIcon
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UTexture2D*              icon                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreBaseLoadoutPartWidget::SetLoadoutPartIcon(class UTexture2D* icon)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreBaseLoadoutPartWidget.SetLoadoutPartIcon");

	UCoreBaseLoadoutPartWidget_SetLoadoutPartIcon_Params params;
	params.icon = icon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreBaseUserWidget.RegisterForInput
// (Final, Native, Protected, BlueprintCallable)
void UCoreBaseUserWidget::RegisterForInput()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreBaseUserWidget.RegisterForInput");

	UCoreBaseUserWidget_RegisterForInput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreBaseUserWidget.OnControlModeChangedBP
// (Event, Protected, BlueprintEvent)
// Parameters:
// DBDSharedTypes_EControlMode    controlMode                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreBaseUserWidget::OnControlModeChangedBP(DBDSharedTypes_EControlMode controlMode)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreBaseUserWidget.OnControlModeChangedBP");

	UCoreBaseUserWidget_OnControlModeChangedBP_Params params;
	params.controlMode = controlMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreBaseUserWidget.DeregisterFromInput
// (Final, Native, Protected, BlueprintCallable)
void UCoreBaseUserWidget::DeregisterFromInput()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreBaseUserWidget.DeregisterFromInput");

	UCoreBaseUserWidget_DeregisterFromInput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreBaseHudWidget.ShouldPlayFocusAnimation
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UCoreBaseHudWidget::ShouldPlayFocusAnimation()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreBaseHudWidget.ShouldPlayFocusAnimation");

	UCoreBaseHudWidget_ShouldPlayFocusAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDUIViewsCore.CoreBaseHudWidget.PlayFocusAnimation
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
void UCoreBaseHudWidget::PlayFocusAnimation()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreBaseHudWidget.PlayFocusAnimation");

	UCoreBaseHudWidget_PlayFocusAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CorePlayerStatusWidget.ShouldPlaySleepAnimation
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// DBDSharedTypes_ESleepingUIState newSleepState                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UCorePlayerStatusWidget::ShouldPlaySleepAnimation(DBDSharedTypes_ESleepingUIState newSleepState)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CorePlayerStatusWidget.ShouldPlaySleepAnimation");

	UCorePlayerStatusWidget_ShouldPlaySleepAnimation_Params params;
	params.newSleepState = newSleepState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDUIViewsCore.CorePlayerStatusWidget.HasTimerProgressChanged
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          newTimerProgress               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UCorePlayerStatusWidget::HasTimerProgressChanged(float newTimerProgress)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CorePlayerStatusWidget.HasTimerProgressChanged");

	UCorePlayerStatusWidget_HasTimerProgressChanged_Params params;
	params.newTimerProgress = newTimerProgress;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDUIViewsCore.CorePlayerStatusWidget.HasPlayerStatusDataChanged
// (Final, Native, Protected, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPlayerStatusViewData   newViewData                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UCorePlayerStatusWidget::HasPlayerStatusDataChanged(const struct FPlayerStatusViewData& newViewData)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CorePlayerStatusWidget.HasPlayerStatusDataChanged");

	UCorePlayerStatusWidget_HasPlayerStatusDataChanged_Params params;
	params.newViewData = newViewData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDUIViewsCore.CorePlayerStatusWidget.HasPlayerStateChanged
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// DBDSharedTypes_EPlayerStatus   NewPlayerState                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UCorePlayerStatusWidget::HasPlayerStateChanged(DBDSharedTypes_EPlayerStatus NewPlayerState)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CorePlayerStatusWidget.HasPlayerStateChanged");

	UCorePlayerStatusWidget_HasPlayerStateChanged_Params params;
	params.NewPlayerState = NewPlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDUIViewsCore.CorePlayerStatusWidget.HasObsessionStateChanged
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// DBDSharedTypes_EObsessionUIState newObsessionState              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UCorePlayerStatusWidget::HasObsessionStateChanged(DBDSharedTypes_EObsessionUIState newObsessionState)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CorePlayerStatusWidget.HasObsessionStateChanged");

	UCorePlayerStatusWidget_HasObsessionStateChanged_Params params;
	params.newObsessionState = newObsessionState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDUIViewsCore.CorePlayerStatusWidget.HasKillerStatusDataChanged
// (Final, Native, Protected, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPlayerStatusViewData   newViewData                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UCorePlayerStatusWidget::HasKillerStatusDataChanged(const struct FPlayerStatusViewData& newViewData)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CorePlayerStatusWidget.HasKillerStatusDataChanged");

	UCorePlayerStatusWidget_HasKillerStatusDataChanged_Params params;
	params.newViewData = newViewData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDUIViewsCore.CorePlayerStatusWidget.GetPlayerStateChangeType
// (Final, Native, Protected, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPlayerStatusViewData   newViewData                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// DBDSharedTypes_EPlayerStateChangeType ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
DBDSharedTypes_EPlayerStateChangeType UCorePlayerStatusWidget::GetPlayerStateChangeType(const struct FPlayerStatusViewData& newViewData)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CorePlayerStatusWidget.GetPlayerStateChangeType");

	UCorePlayerStatusWidget_GetPlayerStateChangeType_Params params;
	params.newViewData = newViewData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDUIViewsCore.CoreScreenIndicatorWidget.GetOffScreenIndicatorsMap
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// TMap<struct FString, class UCoreOffScreenIndicatorItem*> ReturnValue                    (ExportObject, Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
TMap<struct FString, class UCoreOffScreenIndicatorItem*> UCoreScreenIndicatorWidget::GetOffScreenIndicatorsMap()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreScreenIndicatorWidget.GetOffScreenIndicatorsMap");

	UCoreScreenIndicatorWidget_GetOffScreenIndicatorsMap_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDUIViewsCore.CoreScreenIndicatorWidget.FindScreenIndicatorKey
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCoreOffScreenIndicatorItem* Value                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UCoreScreenIndicatorWidget::FindScreenIndicatorKey(class UCoreOffScreenIndicatorItem* Value)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreScreenIndicatorWidget.FindScreenIndicatorKey");

	UCoreScreenIndicatorWidget_FindScreenIndicatorKey_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDUIViewsCore.CoreStatusEffectIcon.UpdateWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
void UCoreStatusEffectIcon::UpdateWidget()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreStatusEffectIcon.UpdateWidget");

	UCoreStatusEffectIcon_UpdateWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreStatusEffectIcon.UpdatePercentageFill
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          percentage                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreStatusEffectIcon::UpdatePercentageFill(float percentage)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreStatusEffectIcon.UpdatePercentageFill");

	UCoreStatusEffectIcon_UpdatePercentageFill_Params params;
	params.percentage = percentage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreStatusEffectIcon.SetStatusEffectData
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FStatusEffectViewData   data                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UCoreStatusEffectIcon::SetStatusEffectData(const struct FStatusEffectViewData& data)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreStatusEffectIcon.SetStatusEffectData");

	UCoreStatusEffectIcon_SetStatusEffectData_Params params;
	params.data = data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreStatusEffectIcon.SetInactiveTicks
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            inactiveTicks                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreStatusEffectIcon::SetInactiveTicks(int inactiveTicks)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreStatusEffectIcon.SetInactiveTicks");

	UCoreStatusEffectIcon_SetInactiveTicks_Params params;
	params.inactiveTicks = inactiveTicks;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreStatusEffectIcon.GetStatusEffectData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FStatusEffectViewData   ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FStatusEffectViewData UCoreStatusEffectIcon::GetStatusEffectData()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreStatusEffectIcon.GetStatusEffectData");

	UCoreStatusEffectIcon_GetStatusEffectData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDUIViewsCore.CoreStatusEffectIcon.GetInactiveTicks
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UCoreStatusEffectIcon::GetInactiveTicks()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreStatusEffectIcon.GetInactiveTicks");

	UCoreStatusEffectIcon_GetInactiveTicks_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDUIViewsCore.CoreStatusEffectWidget.GetStatusEffectMap
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TMap<struct FName, class UCoreStatusEffectIcon*> ReturnValue                    (ExportObject, Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
TMap<struct FName, class UCoreStatusEffectIcon*> UCoreStatusEffectWidget::GetStatusEffectMap()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreStatusEffectWidget.GetStatusEffectMap");

	UCoreStatusEffectWidget_GetStatusEffectMap_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDUIViewsCore.CoreTutorialObjectiveItem.SetObjectiveCompleted
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           removeAfterCompletion          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreTutorialObjectiveItem::SetObjectiveCompleted(bool removeAfterCompletion)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreTutorialObjectiveItem.SetObjectiveCompleted");

	UCoreTutorialObjectiveItem_SetObjectiveCompleted_Params params;
	params.removeAfterCompletion = removeAfterCompletion;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreTutorialObjectiveItem.InitObjective
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 description                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreTutorialObjectiveItem::InitObjective(const struct FString& description)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreTutorialObjectiveItem.InitObjective");

	UCoreTutorialObjectiveItem_InitObjective_Params params;
	params.description = description;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreTutorialObjectivesContainer.OnTutorialObjectiveCompleted
// (Final, Native, Private)
// Parameters:
// class UCoreTutorialObjectiveItem* Item                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreTutorialObjectivesContainer::OnTutorialObjectiveCompleted(class UCoreTutorialObjectiveItem* Item)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreTutorialObjectivesContainer.OnTutorialObjectiveCompleted");

	UCoreTutorialObjectivesContainer_OnTutorialObjectiveCompleted_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.DBDImage.SetBrushFromTextureWithDefault
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTexture2D*              texture                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           matchSize                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDBDImage::SetBrushFromTextureWithDefault(class UTexture2D* texture, bool matchSize)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.DBDImage.SetBrushFromTextureWithDefault");

	UDBDImage_SetBrushFromTextureWithDefault_Params params;
	params.texture = texture;
	params.matchSize = matchSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.DBDTextBlock.SetUndockedProperties
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FDBDTextDockingProperties undockedProperties             (Parm, NativeAccessSpecifierPublic)
void UDBDTextBlock::SetUndockedProperties(const struct FDBDTextDockingProperties& undockedProperties)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.DBDTextBlock.SetUndockedProperties");

	UDBDTextBlock_SetUndockedProperties_Params params;
	params.undockedProperties = undockedProperties;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.DBDTextBlock.SetIsUpperCase
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           isUpperCase                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDBDTextBlock::SetIsUpperCase(bool isUpperCase)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.DBDTextBlock.SetIsUpperCase");

	UDBDTextBlock_SetIsUpperCase_Params params;
	params.isUpperCase = isUpperCase;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.DBDTextBlock.SetHasUndocking
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           hasUndocking                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDBDTextBlock::SetHasUndocking(bool hasUndocking)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.DBDTextBlock.SetHasUndocking");

	UDBDTextBlock_SetHasUndocking_Params params;
	params.hasUndocking = hasUndocking;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.DBDTextBlock.OnSwitchDockStateChanged
// (Final, Native, Protected)
// Parameters:
// bool                           isDocked                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDBDTextBlock::OnSwitchDockStateChanged(bool isDocked)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.DBDTextBlock.OnSwitchDockStateChanged");

	UDBDTextBlock_OnSwitchDockStateChanged_Params params;
	params.isDocked = isDocked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.DBDTextBlock.GetUndockedProperties
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FDBDTextDockingProperties ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FDBDTextDockingProperties UDBDTextBlock::GetUndockedProperties()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.DBDTextBlock.GetUndockedProperties");

	UDBDTextBlock_GetUndockedProperties_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDUIViewsCore.DBDTextBlock.GetIsUpperCase
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UDBDTextBlock::GetIsUpperCase()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.DBDTextBlock.GetIsUpperCase");

	UDBDTextBlock_GetIsUpperCase_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDUIViewsCore.DBDTextBlock.GetHasUndocking
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UDBDTextBlock::GetHasUndocking()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.DBDTextBlock.GetHasUndocking");

	UDBDTextBlock_GetHasUndocking_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDUIViewsCore.DBDWrapBox.SetInnerSlotPadding
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               InPadding                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDBDWrapBox::SetInnerSlotPadding(const struct FVector2D& InPadding)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.DBDWrapBox.SetInnerSlotPadding");

	UDBDWrapBox_SetInnerSlotPadding_Params params;
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.DBDWrapBox.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDBDWrapBox::SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.DBDWrapBox.SetHorizontalAlignment");

	UDBDWrapBox_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.DBDWrapBox.AddChildToWrapBox
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                 content                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDBDWrapBoxSlot*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UDBDWrapBoxSlot* UDBDWrapBox::AddChildToWrapBox(class UWidget* content)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.DBDWrapBox.AddChildToWrapBox");

	UDBDWrapBox_AddChildToWrapBox_Params params;
	params.content = content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDUIViewsCore.DBDWrapBoxSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDBDWrapBoxSlot::SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.DBDWrapBoxSlot.SetVerticalAlignment");

	UDBDWrapBoxSlot_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.DBDWrapBoxSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                 InPadding                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UDBDWrapBoxSlot::SetPadding(const struct FMargin& InPadding)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.DBDWrapBoxSlot.SetPadding");

	UDBDWrapBoxSlot_SetPadding_Params params;
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.DBDWrapBoxSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDBDWrapBoxSlot::SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.DBDWrapBoxSlot.SetHorizontalAlignment");

	UDBDWrapBoxSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.DBDWrapBoxSlot.SetFillSpanWhenLessThan
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InFillSpanWhenLessThan         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDBDWrapBoxSlot::SetFillSpanWhenLessThan(float InFillSpanWhenLessThan)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.DBDWrapBoxSlot.SetFillSpanWhenLessThan");

	UDBDWrapBoxSlot_SetFillSpanWhenLessThan_Params params;
	params.InFillSpanWhenLessThan = InFillSpanWhenLessThan;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.DBDWrapBoxSlot.SetFillEmptySpace
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           InbFillEmptySpace              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDBDWrapBoxSlot::SetFillEmptySpace(bool InbFillEmptySpace)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.DBDWrapBoxSlot.SetFillEmptySpace");

	UDBDWrapBoxSlot_SetFillEmptySpace_Params params;
	params.InbFillEmptySpace = InbFillEmptySpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.TestWidget.SetShowWorkbench
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ShowWorkbench                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTestWidget::SetShowWorkbench(bool ShowWorkbench)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.TestWidget.SetShowWorkbench");

	UTestWidget_SetShowWorkbench_Params params;
	params.ShowWorkbench = ShowWorkbench;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreButtonPromptWidget.SetText
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FText                   text                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UCoreButtonPromptWidget::SetText(const struct FText& text)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreButtonPromptWidget.SetText");

	UCoreButtonPromptWidget_SetText_Params params;
	params.text = text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreButtonPromptWidget.SetInputKey
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct Fkey                    key                            (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreButtonPromptWidget::SetInputKey(const struct Fkey& key)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreButtonPromptWidget.SetInputKey");

	UCoreButtonPromptWidget_SetInputKey_Params params;
	params.key = key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreButtonPromptWidget.SetAction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// DBDInput_EUIActionType         ActionType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreButtonPromptWidget::SetAction(DBDInput_EUIActionType ActionType)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreButtonPromptWidget.SetAction");

	UCoreButtonPromptWidget_SetAction_Params params;
	params.ActionType = ActionType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreButtonPromptWidget.EnablePrompts
// (Event, Public, BlueprintCallable, BlueprintEvent)
void UCoreButtonPromptWidget::EnablePrompts()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreButtonPromptWidget.EnablePrompts");

	UCoreButtonPromptWidget_EnablePrompts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreButtonPromptWidget.DisablePrompts
// (Event, Public, BlueprintCallable, BlueprintEvent)
void UCoreButtonPromptWidget::DisablePrompts()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreButtonPromptWidget.DisablePrompts");

	UCoreButtonPromptWidget_DisablePrompts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreEndGameCollapseBarWidget.UpdateBarProgression
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                          progress                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreEndGameCollapseBarWidget::UpdateBarProgression(float progress)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreEndGameCollapseBarWidget.UpdateBarProgression");

	UCoreEndGameCollapseBarWidget_UpdateBarProgression_Params params;
	params.progress = progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreEndGameCollapseBarWidget.PlayToZeroAnimation
// (Event, Protected, BlueprintEvent)
void UCoreEndGameCollapseBarWidget::PlayToZeroAnimation()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreEndGameCollapseBarWidget.PlayToZeroAnimation");

	UCoreEndGameCollapseBarWidget_PlayToZeroAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreExternalEffectsWidget.HideExternalPerk
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FName                   perkID                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreExternalEffectsWidget::HideExternalPerk(const struct FName& perkID)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreExternalEffectsWidget.HideExternalPerk");

	UCoreExternalEffectsWidget_HideExternalPerk_Params params;
	params.perkID = perkID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreExternalEffectsWidget.HideExternalAddon
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FName                   addonID                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreExternalEffectsWidget::HideExternalAddon(const struct FName& addonID)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreExternalEffectsWidget.HideExternalAddon");

	UCoreExternalEffectsWidget_HideExternalAddon_Params params;
	params.addonID = addonID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreHudAlertWidget.PopAlert
// (Final, Native, Private)
void UCoreHudAlertWidget::PopAlert()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreHudAlertWidget.PopAlert");

	UCoreHudAlertWidget_PopAlert_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreHudAlertWidget.OnPopAlertComplete
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FUITweenInstance        tween                          (Parm, OutParm, NativeAccessSpecifierPublic)
void UCoreHudAlertWidget::OnPopAlertComplete(struct FUITweenInstance* tween)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreHudAlertWidget.OnPopAlertComplete");

	UCoreHudAlertWidget_OnPopAlertComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (tween != nullptr)
		*tween = params.tween;

}


// Function DBDUIViewsCore.CoreHudAlertWidget.OnClearAlertsComplete
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FUITweenInstance        tween                          (Parm, OutParm, NativeAccessSpecifierPublic)
void UCoreHudAlertWidget::OnClearAlertsComplete(struct FUITweenInstance* tween)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreHudAlertWidget.OnClearAlertsComplete");

	UCoreHudAlertWidget_OnClearAlertsComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (tween != nullptr)
		*tween = params.tween;

}


// Function DBDUIViewsCore.CoreHudAlertWidget.GetRemainingTime
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UCoreHudAlertWidget::GetRemainingTime()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreHudAlertWidget.GetRemainingTime");

	UCoreHudAlertWidget_GetRemainingTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDUIViewsCore.CoreHudAlertWidget.GetPendingAlerts
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UCoreBaseUserWidget*> ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<class UCoreBaseUserWidget*> UCoreHudAlertWidget::GetPendingAlerts()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreHudAlertWidget.GetPendingAlerts");

	UCoreHudAlertWidget_GetPendingAlerts_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDUIViewsCore.CoreHudAlertWidget.GetAlerts
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UCoreBaseUserWidget*> ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<class UCoreBaseUserWidget*> UCoreHudAlertWidget::GetAlerts()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreHudAlertWidget.GetAlerts");

	UCoreHudAlertWidget_GetAlerts_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDUIViewsCore.CoreHudAlertWidget.ClearAlerts
// (Final, Native, Private)
void UCoreHudAlertWidget::ClearAlerts()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreHudAlertWidget.ClearAlerts");

	UCoreHudAlertWidget_ClearAlerts_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreHudScoreAlertItem.SetData
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScoreAlertViewData     data                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UCoreHudScoreAlertItem::SetData(const struct FScoreAlertViewData& data)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreHudScoreAlertItem.SetData");

	UCoreHudScoreAlertItem_SetData_Params params;
	params.data = data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreHudStatusEffectAlertItem.SetData
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStatusEffectAlertViewData data                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UCoreHudStatusEffectAlertItem::SetData(const struct FStatusEffectAlertViewData& data)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreHudStatusEffectAlertItem.SetData");

	UCoreHudStatusEffectAlertItem_SetData_Params params;
	params.data = data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreInputPromptTextWidget.SetText
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FText                   text                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UCoreInputPromptTextWidget::SetText(const struct FText& text)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreInputPromptTextWidget.SetText");

	UCoreInputPromptTextWidget_SetText_Params params;
	params.text = text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreInputPromptTextWidget.SetInputKey
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct Fkey                    inputKey                       (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreInputPromptTextWidget::SetInputKey(const struct Fkey& inputKey)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreInputPromptTextWidget.SetInputKey");

	UCoreInputPromptTextWidget_SetInputKey_Params params;
	params.inputKey = inputKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreInputPromptWidget.SetInputKey
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct Fkey                    inputKey                       (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreInputPromptWidget::SetInputKey(const struct Fkey& inputKey)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreInputPromptWidget.SetInputKey");

	UCoreInputPromptWidget_SetInputKey_Params params;
	params.inputKey = inputKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreInputPromptWidget.PromptNotFound
// (Final, Native, Protected, BlueprintCallable)
void UCoreInputPromptWidget::PromptNotFound()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreInputPromptWidget.PromptNotFound");

	UCoreInputPromptWidget_PromptNotFound_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreInputPromptWidget.GetInputShortDisplayName
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UCoreInputPromptWidget::GetInputShortDisplayName()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreInputPromptWidget.GetInputShortDisplayName");

	UCoreInputPromptWidget_GetInputShortDisplayName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDUIViewsCore.CoreInputPromptWidget.DisplayPrompt
// (Event, Protected, BlueprintEvent)
void UCoreInputPromptWidget::DisplayPrompt()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreInputPromptWidget.DisplayPrompt");

	UCoreInputPromptWidget_DisplayPrompt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreInteractionPromptActionWidget.StopIdleAnimation
// (Final, Native, Public, BlueprintCallable)
void UCoreInteractionPromptActionWidget::StopIdleAnimation()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreInteractionPromptActionWidget.StopIdleAnimation");

	UCoreInteractionPromptActionWidget_StopIdleAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreInteractionPromptActionWidget.SetInputKey2
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct Fkey                    inputKey2                      (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreInteractionPromptActionWidget::SetInputKey2(const struct Fkey& inputKey2)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreInteractionPromptActionWidget.SetInputKey2");

	UCoreInteractionPromptActionWidget_SetInputKey2_Params params;
	params.inputKey2 = inputKey2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreInteractionPromptActionWidget.PlayIdleAnimation
// (Final, Native, Public, BlueprintCallable)
void UCoreInteractionPromptActionWidget::PlayIdleAnimation()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreInteractionPromptActionWidget.PlayIdleAnimation");

	UCoreInteractionPromptActionWidget_PlayIdleAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreInteractionPromptActionWidget.HasSecondPrompt
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UCoreInteractionPromptActionWidget::HasSecondPrompt()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreInteractionPromptActionWidget.HasSecondPrompt");

	UCoreInteractionPromptActionWidget_HasSecondPrompt_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDUIViewsCore.CoreInteractionPromptWidget.SetData
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInteractionPromptViewData data                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UCoreInteractionPromptWidget::SetData(const struct FInteractionPromptViewData& data)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreInteractionPromptWidget.SetData");

	UCoreInteractionPromptWidget_SetData_Params params;
	params.data = data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreInteractionPromptWidget.ClearData
// (Event, Public, BlueprintCallable, BlueprintEvent)
void UCoreInteractionPromptWidget::ClearData()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreInteractionPromptWidget.ClearData");

	UCoreInteractionPromptWidget_ClearData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewsCore.CoreOffScreenIndicatorItem.SetData
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScreenIndicatorViewData data                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UCoreOffScreenIndicatorItem::SetData(const struct FScreenIndicatorViewData& data)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreOffScreenIndicatorItem.SetData");

	UCoreOffScreenIndicatorItem_SetData_Params params;
	params.data = data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
