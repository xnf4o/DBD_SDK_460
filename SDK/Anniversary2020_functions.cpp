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

// Function Anniversary2020.Anniversary2020EventComponent.Debug_Server_ShowCrownPillarPositionSwitchTimer
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// bool                           Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAnniversary2020EventComponent::Debug_Server_ShowCrownPillarPositionSwitchTimer(bool Value)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Anniversary2020.Anniversary2020EventComponent.Debug_Server_ShowCrownPillarPositionSwitchTimer");

	UAnniversary2020EventComponent_Debug_Server_ShowCrownPillarPositionSwitchTimer_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Anniversary2020.Anniversary2020EventComponent.Debug_Server_EnableAllCrownPillarsAndKeepEnabled
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// bool                           Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAnniversary2020EventComponent::Debug_Server_EnableAllCrownPillarsAndKeepEnabled(bool Value)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Anniversary2020.Anniversary2020EventComponent.Debug_Server_EnableAllCrownPillarsAndKeepEnabled");

	UAnniversary2020EventComponent_Debug_Server_EnableAllCrownPillarsAndKeepEnabled_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Anniversary2020.Anniversary2020EventComponent.DBD_UnequipAnniversaryCrown
// (Final, Exec, Native, Private, Const)
void UAnniversary2020EventComponent::DBD_UnequipAnniversaryCrown()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Anniversary2020.Anniversary2020EventComponent.DBD_UnequipAnniversaryCrown");

	UAnniversary2020EventComponent_DBD_UnequipAnniversaryCrown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Anniversary2020.Anniversary2020EventComponent.DBD_ShowCrownPillarTeleportTimer
// (Final, Exec, Native, Private)
// Parameters:
// bool                           Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAnniversary2020EventComponent::DBD_ShowCrownPillarTeleportTimer(bool Value)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Anniversary2020.Anniversary2020EventComponent.DBD_ShowCrownPillarTeleportTimer");

	UAnniversary2020EventComponent_DBD_ShowCrownPillarTeleportTimer_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Anniversary2020.Anniversary2020EventComponent.DBD_ShowAllCrownPillarPositions
// (Final, Exec, Native, Private)
// Parameters:
// bool                           Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAnniversary2020EventComponent::DBD_ShowAllCrownPillarPositions(bool Value)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Anniversary2020.Anniversary2020EventComponent.DBD_ShowAllCrownPillarPositions");

	UAnniversary2020EventComponent_DBD_ShowAllCrownPillarPositions_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Anniversary2020.Anniversary2020EventComponent.DBD_EnableAllCrownPillars
// (Final, Exec, Native, Private)
// Parameters:
// bool                           Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAnniversary2020EventComponent::DBD_EnableAllCrownPillars(bool Value)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Anniversary2020.Anniversary2020EventComponent.DBD_EnableAllCrownPillars");

	UAnniversary2020EventComponent_DBD_EnableAllCrownPillars_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Anniversary2020.CrownPillarInteractable.OnRep_IsHidden
// (Final, Native, Private)
void UCrownPillarInteractable::OnRep_IsHidden()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Anniversary2020.CrownPillarInteractable.OnRep_IsHidden");

	UCrownPillarInteractable_OnRep_IsHidden_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Anniversary2020.CrownPillarInteractable.OnCrownPillarInteractionStartedCosmetic
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// bool                           isCamperInteracting            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UdbdPlayer*              interactingPlayer              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCrownPillarInteractable::OnCrownPillarInteractionStartedCosmetic(bool isCamperInteracting, class UdbdPlayer* interactingPlayer)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Anniversary2020.CrownPillarInteractable.OnCrownPillarInteractionStartedCosmetic");

	UCrownPillarInteractable_OnCrownPillarInteractionStartedCosmetic_Params params;
	params.isCamperInteracting = isCamperInteracting;
	params.interactingPlayer = interactingPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Anniversary2020.CrownPillarInteractable.OnCrownPillarInteractionEndedCosmetic
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// bool                           isCamperInteracting            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UdbdPlayer*              interactingPlayer              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           isInteractionComplete          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCrownPillarInteractable::OnCrownPillarInteractionEndedCosmetic(bool isCamperInteracting, class UdbdPlayer* interactingPlayer, bool isInteractionComplete)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Anniversary2020.CrownPillarInteractable.OnCrownPillarInteractionEndedCosmetic");

	UCrownPillarInteractable_OnCrownPillarInteractionEndedCosmetic_Params params;
	params.isCamperInteracting = isCamperInteracting;
	params.interactingPlayer = interactingPlayer;
	params.isInteractionComplete = isInteractionComplete;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Anniversary2020.CrownPillarInteractable.OnCrownPillarEnabled
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void UCrownPillarInteractable::OnCrownPillarEnabled()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Anniversary2020.CrownPillarInteractable.OnCrownPillarEnabled");

	UCrownPillarInteractable_OnCrownPillarEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Anniversary2020.CrownPillarInteractable.OnCrownPillarDisabled
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void UCrownPillarInteractable::OnCrownPillarDisabled()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Anniversary2020.CrownPillarInteractable.OnCrownPillarDisabled");

	UCrownPillarInteractable_OnCrownPillarDisabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Anniversary2020.CrownPillarInteractable.IsLocallyObservedPlayerEquippedWithAnniversaryOffering
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UCrownPillarInteractable::IsLocallyObservedPlayerEquippedWithAnniversaryOffering()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Anniversary2020.CrownPillarInteractable.IsLocallyObservedPlayerEquippedWithAnniversaryOffering");

	UCrownPillarInteractable_IsLocallyObservedPlayerEquippedWithAnniversaryOffering_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Anniversary2020.CrownPillarInteractable.GetSurvivorCrownPickupInteraction
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UCrownPickupInteraction* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCrownPickupInteraction* UCrownPillarInteractable::GetSurvivorCrownPickupInteraction()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Anniversary2020.CrownPillarInteractable.GetSurvivorCrownPickupInteraction");

	UCrownPillarInteractable_GetSurvivorCrownPickupInteraction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Anniversary2020.CrownPillarInteractable.GetSurvivorChargeDuration
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UCrownPillarInteractable::GetSurvivorChargeDuration()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Anniversary2020.CrownPillarInteractable.GetSurvivorChargeDuration");

	UCrownPillarInteractable_GetSurvivorChargeDuration_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Anniversary2020.CrownPillarInteractable.GetSlasherCrownPickupInteraction
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UCrownPickupInteraction* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCrownPickupInteraction* UCrownPillarInteractable::GetSlasherCrownPickupInteraction()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Anniversary2020.CrownPillarInteractable.GetSlasherCrownPickupInteraction");

	UCrownPillarInteractable_GetSlasherCrownPickupInteraction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Anniversary2020.CrownPillarInteractable.GetSlasherChargeDuration
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UCrownPillarInteractable::GetSlasherChargeDuration()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Anniversary2020.CrownPillarInteractable.GetSlasherChargeDuration");

	UCrownPillarInteractable_GetSlasherChargeDuration_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Anniversary2020.CrownPillarPositioner.Authority_OnLevelReadyToPlay
// (Final, Native, Private)
void UCrownPillarPositioner::Authority_OnLevelReadyToPlay()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Anniversary2020.CrownPillarPositioner.Authority_OnLevelReadyToPlay");

	UCrownPillarPositioner_Authority_OnLevelReadyToPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Anniversary2020.CrownPillarPositioner.Authority_GetCrownPillars
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UCrownPillarInteractable*> ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<class UCrownPillarInteractable*> UCrownPillarPositioner::Authority_GetCrownPillars()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Anniversary2020.CrownPillarPositioner.Authority_GetCrownPillars");

	UCrownPillarPositioner_Authority_GetCrownPillars_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
