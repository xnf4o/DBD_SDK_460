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

// Function TheDemogorgon.DemogorgonPounceInteraction.TriggerHuntingAudioEvent
struct UDemogorgonPounceInteraction_TriggerHuntingAudioEvent_Params
{
	bool                                               IsHunting;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheDemogorgon.DemogorgonPounceInteraction.TriggerChargeCancelAudioEvent
struct UDemogorgonPounceInteraction_TriggerChargeCancelAudioEvent_Params
{
};

// Function TheDemogorgon.DemogorgonPounceInteraction.OnChargedAttackReadyChanged
struct UDemogorgonPounceInteraction_OnChargedAttackReadyChanged_Params
{
	bool                                               ready;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheDemogorgon.DemogorgonPounceInteraction.OnCancelCooldownComplete
struct UDemogorgonPounceInteraction_OnCancelCooldownComplete_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
