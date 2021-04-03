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

// Function TheDemogorgon.DemogorgonPounceInteraction.TriggerHuntingAudioEvent
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// bool                           IsHunting                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDemogorgonPounceInteraction::TriggerHuntingAudioEvent(bool IsHunting)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheDemogorgon.DemogorgonPounceInteraction.TriggerHuntingAudioEvent");

	UDemogorgonPounceInteraction_TriggerHuntingAudioEvent_Params params;
	params.IsHunting = IsHunting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheDemogorgon.DemogorgonPounceInteraction.TriggerChargeCancelAudioEvent
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void UDemogorgonPounceInteraction::TriggerChargeCancelAudioEvent()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheDemogorgon.DemogorgonPounceInteraction.TriggerChargeCancelAudioEvent");

	UDemogorgonPounceInteraction_TriggerChargeCancelAudioEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheDemogorgon.DemogorgonPounceInteraction.OnChargedAttackReadyChanged
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// bool                           ready                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDemogorgonPounceInteraction::OnChargedAttackReadyChanged(bool ready)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheDemogorgon.DemogorgonPounceInteraction.OnChargedAttackReadyChanged");

	UDemogorgonPounceInteraction_OnChargedAttackReadyChanged_Params params;
	params.ready = ready;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheDemogorgon.DemogorgonPounceInteraction.OnCancelCooldownComplete
// (Native, Event, Protected, BlueprintEvent)
void UDemogorgonPounceInteraction::OnCancelCooldownComplete()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TheDemogorgon.DemogorgonPounceInteraction.OnCancelCooldownComplete");

	UDemogorgonPounceInteraction_OnCancelCooldownComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
