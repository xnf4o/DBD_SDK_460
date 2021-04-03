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

// Function BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.SelectAudioStatusStartEvent
struct UBP_Audio_KLR_Base_C_SelectAudioStatusStartEvent_Params
{
	bool                                               IsInMenu;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UAkAudioEvent*                               AudioEvent;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.OnKillerSoundbankLoaded
struct UBP_Audio_KLR_Base_C_OnKillerSoundbankLoaded_Params
{
	AkAudio_EAkResult                                  result;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.GetAudioCharacterName
struct UBP_Audio_KLR_Base_C_GetAudioCharacterName_Params
{
	class UDBDBasePlayer*                              player;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       AudioCharacterName;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.InititializeComponent
struct UBP_Audio_KLR_Base_C_InititializeComponent_Params
{
};

// Function BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.ReceiveBeginPlay
struct UBP_Audio_KLR_Base_C_ReceiveBeginPlay_Params
{
};

// Function BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.ReceiveEndPlay
struct UBP_Audio_KLR_Base_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 endPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.Soundbank Killer Unloaded
struct UBP_Audio_KLR_Base_C_Soundbank_Killer_Unloaded_Params
{
	AkAudio_EAkResult                                  result;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.ExecuteUbergraph_BP_Audio_KLR_Base
struct UBP_Audio_KLR_Base_C_ExecuteUbergraph_BP_Audio_KLR_Base_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
