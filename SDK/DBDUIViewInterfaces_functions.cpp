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

// Function DBDUIViewInterfaces.AddonViewInterface.SetData
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FaddonViewData          baseLoadoutPartViewData        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UAddonViewInterface::SetData(const struct FaddonViewData& baseLoadoutPartViewData)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.AddonViewInterface.SetData");

	UAddonViewInterface_SetData_Params params;
	params.baseLoadoutPartViewData = baseLoadoutPartViewData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewInterfaces.AddonViewInterface.ClearData
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
void UAddonViewInterface::ClearData()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.AddonViewInterface.ClearData");

	UAddonViewInterface_ClearData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewInterfaces.EndGameCollapseBarViewInterface.StartEndGameScenario
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
void UEndGameCollapseBarViewInterface::StartEndGameScenario()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.EndGameCollapseBarViewInterface.StartEndGameScenario");

	UEndGameCollapseBarViewInterface_StartEndGameScenario_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewInterfaces.EndGameCollapseBarViewInterface.SetEndGameScenarioProgressionValue
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Amount                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEndGameCollapseBarViewInterface::SetEndGameScenarioProgressionValue(float Amount)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.EndGameCollapseBarViewInterface.SetEndGameScenarioProgressionValue");

	UEndGameCollapseBarViewInterface_SetEndGameScenarioProgressionValue_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewInterfaces.EndGameCollapseBarViewInterface.SetEndGameScenarioProgressionMode
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isSlowMode                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEndGameCollapseBarViewInterface::SetEndGameScenarioProgressionMode(bool isSlowMode)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.EndGameCollapseBarViewInterface.SetEndGameScenarioProgressionMode");

	UEndGameCollapseBarViewInterface_SetEndGameScenarioProgressionMode_Params params;
	params.isSlowMode = isSlowMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewInterfaces.EndGameCollapseBarViewInterface.InitEndGameScenario
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
void UEndGameCollapseBarViewInterface::InitEndGameScenario()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.EndGameCollapseBarViewInterface.InitEndGameScenario");

	UEndGameCollapseBarViewInterface_InitEndGameScenario_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewInterfaces.EquippedItemViewInterface.SetData
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FitemBundleViewData     itemBundleData                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UEquippedItemViewInterface::SetData(const struct FitemBundleViewData& itemBundleData)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.EquippedItemViewInterface.SetData");

	UEquippedItemViewInterface_SetData_Params params;
	params.itemBundleData = itemBundleData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewInterfaces.EquippedItemViewInterface.SetActiveState
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isActive                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEquippedItemViewInterface::SetActiveState(bool isActive)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.EquippedItemViewInterface.SetActiveState");

	UEquippedItemViewInterface_SetActiveState_Params params;
	params.isActive = isActive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewInterfaces.EquippedItemViewInterface.ClearData
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
void UEquippedItemViewInterface::ClearData()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.EquippedItemViewInterface.ClearData");

	UEquippedItemViewInterface_ClearData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewInterfaces.EquippedPowerViewInterface.SetData
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FpowerBundleViewData    powerBundleData                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UEquippedPowerViewInterface::SetData(const struct FpowerBundleViewData& powerBundleData)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.EquippedPowerViewInterface.SetData");

	UEquippedPowerViewInterface_SetData_Params params;
	params.powerBundleData = powerBundleData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewInterfaces.EquippedPowerViewInterface.SetCarryingMode
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isCarrying                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEquippedPowerViewInterface::SetCarryingMode(bool isCarrying)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.EquippedPowerViewInterface.SetCarryingMode");

	UEquippedPowerViewInterface_SetCarryingMode_Params params;
	params.isCarrying = isCarrying;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewInterfaces.EquippedPowerViewInterface.SetActiveState
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isActive                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEquippedPowerViewInterface::SetActiveState(bool isActive)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.EquippedPowerViewInterface.SetActiveState");

	UEquippedPowerViewInterface_SetActiveState_Params params;
	params.isActive = isActive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewInterfaces.EquippedPowerViewInterface.ClearData
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
void UEquippedPowerViewInterface::ClearData()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.EquippedPowerViewInterface.ClearData");

	UEquippedPowerViewInterface_ClearData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewInterfaces.ExampleViewInterface.SetExampleText
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 text                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UExampleViewInterface::SetExampleText(const struct FString& text)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.ExampleViewInterface.SetExampleText");

	UExampleViewInterface_SetExampleText_Params params;
	params.text = text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewInterfaces.ExampleViewInterface.SetExampleProgressRatio
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ratio                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UExampleViewInterface::SetExampleProgressRatio(float ratio)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.ExampleViewInterface.SetExampleProgressRatio");

	UExampleViewInterface_SetExampleProgressRatio_Params params;
	params.ratio = ratio;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewInterfaces.ExternalEffectsViewInterface.ShowExternalPerk
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FperkViewData           perkViewData                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UExternalEffectsViewInterface::ShowExternalPerk(const struct FperkViewData& perkViewData)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.ExternalEffectsViewInterface.ShowExternalPerk");

	UExternalEffectsViewInterface_ShowExternalPerk_Params params;
	params.perkViewData = perkViewData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewInterfaces.ExternalEffectsViewInterface.ShowExternalAddon
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FaddonViewData          addonViewData                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UExternalEffectsViewInterface::ShowExternalAddon(const struct FaddonViewData& addonViewData)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.ExternalEffectsViewInterface.ShowExternalAddon");

	UExternalEffectsViewInterface_ShowExternalAddon_Params params;
	params.addonViewData = addonViewData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewInterfaces.HookCountViewInterface.SetData
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            currentHookCount               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            maxHookCount                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            initialMaxHookCount            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHookCountViewInterface::SetData(int currentHookCount, int maxHookCount, int initialMaxHookCount)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.HookCountViewInterface.SetData");

	UHookCountViewInterface_SetData_Params params;
	params.currentHookCount = currentHookCount;
	params.maxHookCount = maxHookCount;
	params.initialMaxHookCount = initialMaxHookCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewInterfaces.HookCountViewInterface.InitWidget
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
void UHookCountViewInterface::InitWidget()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.HookCountViewInterface.InitWidget");

	UHookCountViewInterface_InitWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewInterfaces.HookCountViewInterface.ClearData
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
void UHookCountViewInterface::ClearData()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.HookCountViewInterface.ClearData");

	UHookCountViewInterface_ClearData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewInterfaces.HudAlertViewInterface.ShowStatusEffectAlert
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStatusEffectAlertViewData data                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UHudAlertViewInterface::ShowStatusEffectAlert(const struct FStatusEffectAlertViewData& data)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.HudAlertViewInterface.ShowStatusEffectAlert");

	UHudAlertViewInterface_ShowStatusEffectAlert_Params params;
	params.data = data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewInterfaces.HudAlertViewInterface.ShowScoreAlert
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScoreAlertViewData     data                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UHudAlertViewInterface::ShowScoreAlert(const struct FScoreAlertViewData& data)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.HudAlertViewInterface.ShowScoreAlert");

	UHudAlertViewInterface_ShowScoreAlert_Params params;
	params.data = data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewInterfaces.HudAlertViewInterface.FadeOut
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          delay                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHudAlertViewInterface::FadeOut(float delay)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.HudAlertViewInterface.FadeOut");

	UHudAlertViewInterface_FadeOut_Params params;
	params.delay = delay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewInterfaces.HudAlertViewInterface.FadeIn
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
void UHudAlertViewInterface::FadeIn()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.HudAlertViewInterface.FadeIn");

	UHudAlertViewInterface_FadeIn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewInterfaces.HudObjectiveViewInterface.SetHudObjectivePosition
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isHookCountDisplayed           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHudObjectiveViewInterface::SetHudObjectivePosition(bool isHookCountDisplayed)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.HudObjectiveViewInterface.SetHudObjectivePosition");

	UHudObjectiveViewInterface_SetHudObjectivePosition_Params params;
	params.isHookCountDisplayed = isHookCountDisplayed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewInterfaces.HudObjectiveViewInterface.SetHudObjectiveData
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FhudObjectiveViewData   hudObjectiveViewData           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UHudObjectiveViewInterface::SetHudObjectiveData(const struct FhudObjectiveViewData& hudObjectiveViewData)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.HudObjectiveViewInterface.SetHudObjectiveData");

	UHudObjectiveViewInterface_SetHudObjectiveData_Params params;
	params.hudObjectiveViewData = hudObjectiveViewData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewInterfaces.HudObjectiveViewInterface.SetCurrentHudObjectiveHighlight
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           highlight                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHudObjectiveViewInterface::SetCurrentHudObjectiveHighlight(bool highlight)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.HudObjectiveViewInterface.SetCurrentHudObjectiveHighlight");

	UHudObjectiveViewInterface_SetCurrentHudObjectiveHighlight_Params params;
	params.highlight = highlight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewInterfaces.HudObjectiveViewInterface.ClearData
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
void UHudObjectiveViewInterface::ClearData()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.HudObjectiveViewInterface.ClearData");

	UHudObjectiveViewInterface_ClearData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewInterfaces.InteractionProgressViewInterface.UpdateInputProgress
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          progress                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          itemCharge                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UInteractionProgressViewInterface::UpdateInputProgress(float progress, float itemCharge)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.InteractionProgressViewInterface.UpdateInputProgress");

	UInteractionProgressViewInterface_UpdateInputProgress_Params params;
	params.progress = progress;
	params.itemCharge = itemCharge;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewInterfaces.InteractionProgressViewInterface.SetInputProgressPrompt
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInteractionProgressViewData data                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UInteractionProgressViewInterface::SetInputProgressPrompt(const struct FInteractionProgressViewData& data)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.InteractionProgressViewInterface.SetInputProgressPrompt");

	UInteractionProgressViewInterface_SetInputProgressPrompt_Params params;
	params.data = data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewInterfaces.InteractionProgressViewInterface.HideInputProgressPrompt
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
void UInteractionProgressViewInterface::HideInputProgressPrompt()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.InteractionProgressViewInterface.HideInputProgressPrompt");

	UInteractionProgressViewInterface_HideInputProgressPrompt_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewInterfaces.InteractionPromptsContainerViewInterface.RemovePrompt
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Id                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UInteractionPromptsContainerViewInterface::RemovePrompt(const struct FName& Id)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.InteractionPromptsContainerViewInterface.RemovePrompt");

	UInteractionPromptsContainerViewInterface_RemovePrompt_Params params;
	params.Id = Id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewInterfaces.InteractionPromptsContainerViewInterface.RemoveAllPrompts
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
void UInteractionPromptsContainerViewInterface::RemoveAllPrompts()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.InteractionPromptsContainerViewInterface.RemoveAllPrompts");

	UInteractionPromptsContainerViewInterface_RemoveAllPrompts_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewInterfaces.InteractionPromptsContainerViewInterface.AddPrompt
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInteractionPromptViewData data                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UInteractionPromptsContainerViewInterface::AddPrompt(const struct FInteractionPromptViewData& data)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.InteractionPromptsContainerViewInterface.AddPrompt");

	UInteractionPromptsContainerViewInterface_AddPrompt_Params params;
	params.data = data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewInterfaces.ItemBundleViewInterface.SetData
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FitemBundleViewData     itemBundleViewData             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UItemBundleViewInterface::SetData(const struct FitemBundleViewData& itemBundleViewData)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.ItemBundleViewInterface.SetData");

	UItemBundleViewInterface_SetData_Params params;
	params.itemBundleViewData = itemBundleViewData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewInterfaces.ItemBundleViewInterface.ClearData
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
void UItemBundleViewInterface::ClearData()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.ItemBundleViewInterface.ClearData");

	UItemBundleViewInterface_ClearData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewInterfaces.ItemInteractionViewInterface.SetData
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FitemBundleViewData     itemBundleData                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UItemInteractionViewInterface::SetData(const struct FitemBundleViewData& itemBundleData)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.ItemInteractionViewInterface.SetData");

	UItemInteractionViewInterface_SetData_Params params;
	params.itemBundleData = itemBundleData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewInterfaces.ItemInteractionViewInterface.ClearData
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
void UItemInteractionViewInterface::ClearData()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.ItemInteractionViewInterface.ClearData");

	UItemInteractionViewInterface_ClearData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewInterfaces.ItemViewInterface.SetData
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FitemViewData           itemViewData                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UItemViewInterface::SetData(const struct FitemViewData& itemViewData)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.ItemViewInterface.SetData");

	UItemViewInterface_SetData_Params params;
	params.itemViewData = itemViewData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewInterfaces.ItemViewInterface.ClearData
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
void UItemViewInterface::ClearData()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.ItemViewInterface.ClearData");

	UItemViewInterface_ClearData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewInterfaces.LeaningArrowsViewInterface.SetData
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// DBDSharedTypes_ELeanState      leanState                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULeaningArrowsViewInterface::SetData(DBDSharedTypes_ELeanState leanState)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.LeaningArrowsViewInterface.SetData");

	ULeaningArrowsViewInterface_SetData_Params params;
	params.leanState = leanState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewInterfaces.MatchResultViewInterface.UpdateWidget
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMatchResultViewData    data                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UMatchResultViewInterface::UpdateWidget(const struct FMatchResultViewData& data)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.MatchResultViewInterface.UpdateWidget");

	UMatchResultViewInterface_UpdateWidget_Params params;
	params.data = data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewInterfaces.MatchResultViewInterface.PlayAnimationSequence
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
void UMatchResultViewInterface::PlayAnimationSequence()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.MatchResultViewInterface.PlayAnimationSequence");

	UMatchResultViewInterface_PlayAnimationSequence_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewInterfaces.OfferingInteractionViewInterface.SetData
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FofferingViewData       OfferingData                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UOfferingInteractionViewInterface::SetData(const struct FofferingViewData& OfferingData)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.OfferingInteractionViewInterface.SetData");

	UOfferingInteractionViewInterface_SetData_Params params;
	params.OfferingData = OfferingData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewInterfaces.OfferingInteractionViewInterface.ClearData
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
void UOfferingInteractionViewInterface::ClearData()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.OfferingInteractionViewInterface.ClearData");

	UOfferingInteractionViewInterface_ClearData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewInterfaces.OfferingViewInterface.SetData
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FofferingViewData       offeringViewData               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UOfferingViewInterface::SetData(const struct FofferingViewData& offeringViewData)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.OfferingViewInterface.SetData");

	UOfferingViewInterface_SetData_Params params;
	params.offeringViewData = offeringViewData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewInterfaces.OfferingViewInterface.ClearData
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
void UOfferingViewInterface::ClearData()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.OfferingViewInterface.ClearData");

	UOfferingViewInterface_ClearData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewInterfaces.PerksContainerViewInterface.GetPerkInterface
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TScriptInterface<class UPerkViewInterface> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
TScriptInterface<class UPerkViewInterface> UPerksContainerViewInterface::GetPerkInterface(int index)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.PerksContainerViewInterface.GetPerkInterface");

	UPerksContainerViewInterface_GetPerkInterface_Params params;
	params.index = index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDUIViewInterfaces.PerkViewInterface.UpdatePerkCooldown
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          cooldownValue                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPerkViewInterface::UpdatePerkCooldown(float cooldownValue)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.PerkViewInterface.UpdatePerkCooldown");

	UPerkViewInterface_UpdatePerkCooldown_Params params;
	params.cooldownValue = cooldownValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewInterfaces.PerkViewInterface.SetData
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FperkViewData           perkViewData                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UPerkViewInterface::SetData(const struct FperkViewData& perkViewData)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.PerkViewInterface.SetData");

	UPerkViewInterface_SetData_Params params;
	params.perkViewData = perkViewData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewInterfaces.PerkViewInterface.ClearData
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
void UPerkViewInterface::ClearData()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.PerkViewInterface.ClearData");

	UPerkViewInterface_ClearData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewInterfaces.PingStatusViewInterface.SetData
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// DBDSharedTypes_EPingQuality    pingQuality                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPingStatusViewInterface::SetData(DBDSharedTypes_EPingQuality pingQuality)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.PingStatusViewInterface.SetData");

	UPingStatusViewInterface_SetData_Params params;
	params.pingQuality = pingQuality;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewInterfaces.PlayerStatusesContainerViewInterface.GetPlayerStatusInterface
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TScriptInterface<class UPlayerStatusViewInterface> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
TScriptInterface<class UPlayerStatusViewInterface> UPlayerStatusesContainerViewInterface::GetPlayerStatusInterface(int index)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.PlayerStatusesContainerViewInterface.GetPlayerStatusInterface");

	UPlayerStatusesContainerViewInterface_GetPlayerStatusInterface_Params params;
	params.index = index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDUIViewInterfaces.PlayerStatusViewInterface.TriggerAfflictionHit
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
void UPlayerStatusViewInterface::TriggerAfflictionHit()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.PlayerStatusViewInterface.TriggerAfflictionHit");

	UPlayerStatusViewInterface_TriggerAfflictionHit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewInterfaces.PlayerStatusViewInterface.SetTimerProgress
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           isDeepWound                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPlayerStatusViewInterface::SetTimerProgress(float Value, bool isDeepWound)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.PlayerStatusViewInterface.SetTimerProgress");

	UPlayerStatusViewInterface_SetTimerProgress_Params params;
	params.Value = Value;
	params.isDeepWound = isDeepWound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewInterfaces.PlayerStatusViewInterface.SetData
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerStatusViewData   data                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UPlayerStatusViewInterface::SetData(const struct FPlayerStatusViewData& data)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.PlayerStatusViewInterface.SetData");

	UPlayerStatusViewInterface_SetData_Params params;
	params.data = data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewInterfaces.PlayerStatusViewInterface.PlayTimerAnimation
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
void UPlayerStatusViewInterface::PlayTimerAnimation()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.PlayerStatusViewInterface.PlayTimerAnimation");

	UPlayerStatusViewInterface_PlayTimerAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewInterfaces.PlayerStatusViewInterface.PlayHookEscapeFailedAnimation
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
void UPlayerStatusViewInterface::PlayHookEscapeFailedAnimation()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.PlayerStatusViewInterface.PlayHookEscapeFailedAnimation");

	UPlayerStatusViewInterface_PlayHookEscapeFailedAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewInterfaces.PlayerStatusViewInterface.ClearData
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
void UPlayerStatusViewInterface::ClearData()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.PlayerStatusViewInterface.ClearData");

	UPlayerStatusViewInterface_ClearData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewInterfaces.PowerBundleViewInterface.SetData
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FpowerBundleViewData    powerBundleViewData            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UPowerBundleViewInterface::SetData(const struct FpowerBundleViewData& powerBundleViewData)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.PowerBundleViewInterface.SetData");

	UPowerBundleViewInterface_SetData_Params params;
	params.powerBundleViewData = powerBundleViewData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewInterfaces.PowerBundleViewInterface.ClearData
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
void UPowerBundleViewInterface::ClearData()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.PowerBundleViewInterface.ClearData");

	UPowerBundleViewInterface_ClearData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewInterfaces.PowerViewInterface.SetData
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FpowerViewData          powerViewData                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UPowerViewInterface::SetData(const struct FpowerViewData& powerViewData)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.PowerViewInterface.SetData");

	UPowerViewInterface_SetData_Params params;
	params.powerViewData = powerViewData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewInterfaces.PowerViewInterface.ClearData
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
void UPowerViewInterface::ClearData()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.PowerViewInterface.ClearData");

	UPowerViewInterface_ClearData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewInterfaces.ScreenIndicatorViewInterface.ShowDirectionIndicator
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScreenIndicatorViewData data                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UScreenIndicatorViewInterface::ShowDirectionIndicator(const struct FScreenIndicatorViewData& data)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.ScreenIndicatorViewInterface.ShowDirectionIndicator");

	UScreenIndicatorViewInterface_ShowDirectionIndicator_Params params;
	params.data = data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewInterfaces.ScreenIndicatorViewInterface.RemoveDirectionIndicator
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Id                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScreenIndicatorViewInterface::RemoveDirectionIndicator(const struct FString& Id)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.ScreenIndicatorViewInterface.RemoveDirectionIndicator");

	UScreenIndicatorViewInterface_RemoveDirectionIndicator_Params params;
	params.Id = Id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewInterfaces.SkillCheckViewInterface.UpdateProgress
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USkillCheckViewInterface::UpdateProgress(float Value)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.SkillCheckViewInterface.UpdateProgress");

	USkillCheckViewInterface_UpdateProgress_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewInterfaces.SkillCheckViewInterface.UpdatePositionOffset
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            x                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            y                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USkillCheckViewInterface::UpdatePositionOffset(int x, int y)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.SkillCheckViewInterface.UpdatePositionOffset");

	USkillCheckViewInterface_UpdatePositionOffset_Params params;
	params.x = x;
	params.y = y;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewInterfaces.SkillCheckViewInterface.ShowSkillCheck
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSkillCheckViewData     skillCheckData                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void USkillCheckViewInterface::ShowSkillCheck(const struct FSkillCheckViewData& skillCheckData)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.SkillCheckViewInterface.ShowSkillCheck");

	USkillCheckViewInterface_ShowSkillCheck_Params params;
	params.skillCheckData = skillCheckData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewInterfaces.SkillCheckViewInterface.HideSkillCheck
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
void USkillCheckViewInterface::HideSkillCheck()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.SkillCheckViewInterface.HideSkillCheck");

	USkillCheckViewInterface_HideSkillCheck_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewInterfaces.SkillCheckViewInterface.ApplyScaleFactor
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          scale                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USkillCheckViewInterface::ApplyScaleFactor(float scale)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.SkillCheckViewInterface.ApplyScaleFactor");

	USkillCheckViewInterface_ApplyScaleFactor_Params params;
	params.scale = scale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewInterfaces.SpectateBarViewInterface.SetSpectatedName
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 playerName                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USpectateBarViewInterface::SetSpectatedName(const struct FString& playerName)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.SpectateBarViewInterface.SetSpectatedName");

	USpectateBarViewInterface_SetSpectatedName_Params params;
	params.playerName = playerName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewInterfaces.SpectateBarViewInterface.SetSpectateBarVisibility
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isVisible                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USpectateBarViewInterface::SetSpectateBarVisibility(bool isVisible)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.SpectateBarViewInterface.SetSpectateBarVisibility");

	USpectateBarViewInterface_SetSpectateBarVisibility_Params params;
	params.isVisible = isVisible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewInterfaces.SpectateBarViewInterface.SetArrowsVisibility
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isVisible                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USpectateBarViewInterface::SetArrowsVisibility(bool isVisible)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.SpectateBarViewInterface.SetArrowsVisibility");

	USpectateBarViewInterface_SetArrowsVisibility_Params params;
	params.isVisible = isVisible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewInterfaces.StartSequenceViewInterface.ShowStartSequence
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStartSequenceViewData  data                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UStartSequenceViewInterface::ShowStartSequence(const struct FStartSequenceViewData& data)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.StartSequenceViewInterface.ShowStartSequence");

	UStartSequenceViewInterface_ShowStartSequence_Params params;
	params.data = data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewInterfaces.StartSequenceViewInterface.HideStartSequence
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
void UStartSequenceViewInterface::HideStartSequence()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.StartSequenceViewInterface.HideStartSequence");

	UStartSequenceViewInterface_HideStartSequence_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewInterfaces.StartSequenceViewInterface.GetIsStartSequenceVisible
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UStartSequenceViewInterface::GetIsStartSequenceVisible()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.StartSequenceViewInterface.GetIsStartSequenceVisible");

	UStartSequenceViewInterface_GetIsStartSequenceVisible_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDUIViewInterfaces.StatusEffectViewInterface.ShowActiveStatusEffect
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStatusEffectViewData   StatusEffectData               (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UStatusEffectViewInterface::ShowActiveStatusEffect(const struct FStatusEffectViewData& StatusEffectData)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.StatusEffectViewInterface.ShowActiveStatusEffect");

	UStatusEffectViewInterface_ShowActiveStatusEffect_Params params;
	params.StatusEffectData = StatusEffectData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewInterfaces.StatusEffectViewInterface.RemoveExistingStatusEffect
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   statusEffectID                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UStatusEffectViewInterface::RemoveExistingStatusEffect(const struct FName& statusEffectID)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.StatusEffectViewInterface.RemoveExistingStatusEffect");

	UStatusEffectViewInterface_RemoveExistingStatusEffect_Params params;
	params.statusEffectID = statusEffectID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewInterfaces.TemplateViewInterface.TemplateExampleFunction
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTemplateViewData       templateData                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UTemplateViewInterface::TemplateExampleFunction(const struct FTemplateViewData& templateData)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.TemplateViewInterface.TemplateExampleFunction");

	UTemplateViewInterface_TemplateExampleFunction_Params params;
	params.templateData = templateData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewInterfaces.TestBuildFlagViewInterface.UpdateWidget
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// DBDSharedTypes_ETestBuildType  testBuildType                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTestBuildFlagViewInterface::UpdateWidget(DBDSharedTypes_ETestBuildType testBuildType)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.TestBuildFlagViewInterface.UpdateWidget");

	UTestBuildFlagViewInterface_UpdateWidget_Params params;
	params.testBuildType = testBuildType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewInterfaces.TutorialHighlightViewInterface.SetTutorialHighlight
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           show                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// DBDSharedTypes_EHudComponent   componentId                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTutorialHighlightViewInterface::SetTutorialHighlight(bool show, DBDSharedTypes_EHudComponent componentId)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.TutorialHighlightViewInterface.SetTutorialHighlight");

	UTutorialHighlightViewInterface_SetTutorialHighlight_Params params;
	params.show = show;
	params.componentId = componentId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewInterfaces.TutorialMysteryNoteViewInterface.ShowMysteryNote
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FNotifTutorialPopupViewData notifData                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UTutorialMysteryNoteViewInterface::ShowMysteryNote(const struct FNotifTutorialPopupViewData& notifData)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.TutorialMysteryNoteViewInterface.ShowMysteryNote");

	UTutorialMysteryNoteViewInterface_ShowMysteryNote_Params params;
	params.notifData = notifData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewInterfaces.TutorialMysteryNoteViewInterface.HideMysteryNote
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
void UTutorialMysteryNoteViewInterface::HideMysteryNote()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.TutorialMysteryNoteViewInterface.HideMysteryNote");

	UTutorialMysteryNoteViewInterface_HideMysteryNote_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewInterfaces.TutorialObjectivesViewInterface.RemoveTutorialObjective
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Id                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTutorialObjectivesViewInterface::RemoveTutorialObjective(const struct FName& Id)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.TutorialObjectivesViewInterface.RemoveTutorialObjective");

	UTutorialObjectivesViewInterface_RemoveTutorialObjective_Params params;
	params.Id = Id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewInterfaces.TutorialObjectivesViewInterface.RemoveAllTutorialObjectives
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
void UTutorialObjectivesViewInterface::RemoveAllTutorialObjectives()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.TutorialObjectivesViewInterface.RemoveAllTutorialObjectives");

	UTutorialObjectivesViewInterface_RemoveAllTutorialObjectives_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewInterfaces.TutorialObjectivesViewInterface.CompleteTutorialObjective
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Id                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           removeAfterCompletion          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTutorialObjectivesViewInterface::CompleteTutorialObjective(const struct FName& Id, bool removeAfterCompletion)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.TutorialObjectivesViewInterface.CompleteTutorialObjective");

	UTutorialObjectivesViewInterface_CompleteTutorialObjective_Params params;
	params.Id = Id;
	params.removeAfterCompletion = removeAfterCompletion;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewInterfaces.TutorialObjectivesViewInterface.AddTutorialObjective
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Id                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 description                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTutorialObjectivesViewInterface::AddTutorialObjective(const struct FName& Id, const struct FString& description)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.TutorialObjectivesViewInterface.AddTutorialObjective");

	UTutorialObjectivesViewInterface_AddTutorialObjective_Params params;
	params.Id = Id;
	params.description = description;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewInterfaces.TutorialPopupViewInterface.ShowTallyTutorialPopup
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTallyTutorialPopupViewData tallyTutoData                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UTutorialPopupViewInterface::ShowTallyTutorialPopup(const struct FTallyTutorialPopupViewData& tallyTutoData)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.TutorialPopupViewInterface.ShowTallyTutorialPopup");

	UTutorialPopupViewInterface_ShowTallyTutorialPopup_Params params;
	params.tallyTutoData = tallyTutoData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewInterfaces.TutorialPopupViewInterface.ShowNotifTutorialPopup
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FNotifTutorialPopupViewData notifTutoData                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UTutorialPopupViewInterface::ShowNotifTutorialPopup(const struct FNotifTutorialPopupViewData& notifTutoData)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.TutorialPopupViewInterface.ShowNotifTutorialPopup");

	UTutorialPopupViewInterface_ShowNotifTutorialPopup_Params params;
	params.notifTutoData = notifTutoData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIViewInterfaces.TutorialPopupViewInterface.HideTutorialPopup
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
void UTutorialPopupViewInterface::HideTutorialPopup()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIViewInterfaces.TutorialPopupViewInterface.HideTutorialPopup");

	UTutorialPopupViewInterface_HideTutorialPopup_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
