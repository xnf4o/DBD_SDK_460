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

// Function BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.SelectAudioStatusStartEvent
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsInMenu                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAkAudioEvent*           AudioEvent                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Audio_KLR_Base_C::SelectAudioStatusStartEvent(bool IsInMenu, class UAkAudioEvent** AudioEvent)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.SelectAudioStatusStartEvent");

	UBP_Audio_KLR_Base_C_SelectAudioStatusStartEvent_Params params;
	params.IsInMenu = IsInMenu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AudioEvent != nullptr)
		*AudioEvent = params.AudioEvent;

}


// Function BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.OnKillerSoundbankLoaded
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// AkAudio_EAkResult              result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Audio_KLR_Base_C::OnKillerSoundbankLoaded(AkAudio_EAkResult result)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.OnKillerSoundbankLoaded");

	UBP_Audio_KLR_Base_C_OnKillerSoundbankLoaded_Params params;
	params.result = result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.GetAudioCharacterName
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UDBDBasePlayer*          player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   AudioCharacterName             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Audio_KLR_Base_C::GetAudioCharacterName(class UDBDBasePlayer* player, struct FName* AudioCharacterName)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.GetAudioCharacterName");

	UBP_Audio_KLR_Base_C_GetAudioCharacterName_Params params;
	params.player = player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AudioCharacterName != nullptr)
		*AudioCharacterName = params.AudioCharacterName;

}


// Function BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.InititializeComponent
// (Protected, BlueprintCallable, BlueprintEvent)
void UBP_Audio_KLR_Base_C::InititializeComponent()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.InititializeComponent");

	UBP_Audio_KLR_Base_C_InititializeComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void UBP_Audio_KLR_Base_C::ReceiveBeginPlay()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.ReceiveBeginPlay");

	UBP_Audio_KLR_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> endPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Audio_KLR_Base_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> endPlayReason)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.ReceiveEndPlay");

	UBP_Audio_KLR_Base_C_ReceiveEndPlay_Params params;
	params.endPlayReason = endPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.Soundbank Killer Unloaded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// AkAudio_EAkResult              result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Audio_KLR_Base_C::Soundbank_Killer_Unloaded(AkAudio_EAkResult result)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.Soundbank Killer Unloaded");

	UBP_Audio_KLR_Base_C_Soundbank_Killer_Unloaded_Params params;
	params.result = result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.ExecuteUbergraph_BP_Audio_KLR_Base
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Audio_KLR_Base_C::ExecuteUbergraph_BP_Audio_KLR_Base(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.ExecuteUbergraph_BP_Audio_KLR_Base");

	UBP_Audio_KLR_Base_C_ExecuteUbergraph_BP_Audio_KLR_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
