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

// Function BP_BaseItemVfx.BP_BaseItemVfx_C.ClearParticleSystems
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_BaseItemVfx_C::ClearParticleSystems()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_BaseItemVfx.BP_BaseItemVfx_C.ClearParticleSystems");

	UBP_BaseItemVfx_C_ClearParticleSystems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseItemVfx.BP_BaseItemVfx_C.SpawnEmitter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UparticleSystem*         EmitterTemplate                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UskeletalMeshComponent*  AttachToComponent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   AttachPointName                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct Fvector                 location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct Fvector                 scale                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Absolute_Rotation              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystemComponent* Particle_System                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BaseItemVfx_C::SpawnEmitter(class UparticleSystem* EmitterTemplate, class UskeletalMeshComponent* AttachToComponent, const struct FName& AttachPointName, const struct Fvector& location, const struct FRotator& rotation, const struct Fvector& scale, bool Absolute_Rotation, class UParticleSystemComponent** Particle_System)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_BaseItemVfx.BP_BaseItemVfx_C.SpawnEmitter");

	UBP_BaseItemVfx_C_SpawnEmitter_Params params;
	params.EmitterTemplate = EmitterTemplate;
	params.AttachToComponent = AttachToComponent;
	params.AttachPointName = AttachPointName;
	params.location = location;
	params.rotation = rotation;
	params.scale = scale;
	params.Absolute_Rotation = Absolute_Rotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Particle_System != nullptr)
		*Particle_System = params.Particle_System;

}


// Function BP_BaseItemVfx.BP_BaseItemVfx_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void UBP_BaseItemVfx_C::ReceiveBeginPlay()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_BaseItemVfx.BP_BaseItemVfx_C.ReceiveBeginPlay");

	UBP_BaseItemVfx_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseItemVfx.BP_BaseItemVfx_C.OnDestroyed_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Uactor*                  destroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BaseItemVfx_C::OnDestroyed_Event(class Uactor* destroyedActor)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_BaseItemVfx.BP_BaseItemVfx_C.OnDestroyed_Event");

	UBP_BaseItemVfx_C_OnDestroyed_Event_Params params;
	params.destroyedActor = destroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseItemVfx.BP_BaseItemVfx_C.SetEmittersVisibility
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_BaseItemVfx_C::SetEmittersVisibility(bool Visible)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_BaseItemVfx.BP_BaseItemVfx_C.SetEmittersVisibility");

	UBP_BaseItemVfx_C_SetEmittersVisibility_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseItemVfx.BP_BaseItemVfx_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
void UBP_BaseItemVfx_C::ReceiveDestroyed()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_BaseItemVfx.BP_BaseItemVfx_C.ReceiveDestroyed");

	UBP_BaseItemVfx_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseItemVfx.BP_BaseItemVfx_C.SetEmittersActive
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_BaseItemVfx_C::SetEmittersActive(bool active)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_BaseItemVfx.BP_BaseItemVfx_C.SetEmittersActive");

	UBP_BaseItemVfx_C_SetEmittersActive_Params params;
	params.active = active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseItemVfx.BP_BaseItemVfx_C.ExecuteUbergraph_BP_BaseItemVfx
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BaseItemVfx_C::ExecuteUbergraph_BP_BaseItemVfx(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_BaseItemVfx.BP_BaseItemVfx_C.ExecuteUbergraph_BP_BaseItemVfx");

	UBP_BaseItemVfx_C_ExecuteUbergraph_BP_BaseItemVfx_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
