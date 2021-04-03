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

// Function BP_BaseItemVfx.BP_BaseItemVfx_C.ClearParticleSystems
struct UBP_BaseItemVfx_C_ClearParticleSystems_Params
{
};

// Function BP_BaseItemVfx.BP_BaseItemVfx_C.SpawnEmitter
struct UBP_BaseItemVfx_C_SpawnEmitter_Params
{
	class UparticleSystem*                             EmitterTemplate;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UskeletalMeshComponent*                      AttachToComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       AttachPointName;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct Fvector                                     location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    rotation;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct Fvector                                     scale;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Absolute_Rotation;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UParticleSystemComponent*                    Particle_System;                                           // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseItemVfx.BP_BaseItemVfx_C.ReceiveBeginPlay
struct UBP_BaseItemVfx_C_ReceiveBeginPlay_Params
{
};

// Function BP_BaseItemVfx.BP_BaseItemVfx_C.OnDestroyed_Event
struct UBP_BaseItemVfx_C_OnDestroyed_Event_Params
{
	class Uactor*                                      destroyedActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseItemVfx.BP_BaseItemVfx_C.SetEmittersVisibility
struct UBP_BaseItemVfx_C_SetEmittersVisibility_Params
{
	bool                                               Visible;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BaseItemVfx.BP_BaseItemVfx_C.ReceiveDestroyed
struct UBP_BaseItemVfx_C_ReceiveDestroyed_Params
{
};

// Function BP_BaseItemVfx.BP_BaseItemVfx_C.SetEmittersActive
struct UBP_BaseItemVfx_C_SetEmittersActive_Params
{
	bool                                               active;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BaseItemVfx.BP_BaseItemVfx_C.ExecuteUbergraph_BP_BaseItemVfx
struct UBP_BaseItemVfx_C_ExecuteUbergraph_BP_BaseItemVfx_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
