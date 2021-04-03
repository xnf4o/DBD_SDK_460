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

// Function Anniversary2020.Anniversary2020EventComponent.Debug_Server_ShowCrownPillarPositionSwitchTimer
struct UAnniversary2020EventComponent_Debug_Server_ShowCrownPillarPositionSwitchTimer_Params
{
	bool                                               Value;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Anniversary2020.Anniversary2020EventComponent.Debug_Server_EnableAllCrownPillarsAndKeepEnabled
struct UAnniversary2020EventComponent_Debug_Server_EnableAllCrownPillarsAndKeepEnabled_Params
{
	bool                                               Value;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Anniversary2020.Anniversary2020EventComponent.DBD_UnequipAnniversaryCrown
struct UAnniversary2020EventComponent_DBD_UnequipAnniversaryCrown_Params
{
};

// Function Anniversary2020.Anniversary2020EventComponent.DBD_ShowCrownPillarTeleportTimer
struct UAnniversary2020EventComponent_DBD_ShowCrownPillarTeleportTimer_Params
{
	bool                                               Value;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Anniversary2020.Anniversary2020EventComponent.DBD_ShowAllCrownPillarPositions
struct UAnniversary2020EventComponent_DBD_ShowAllCrownPillarPositions_Params
{
	bool                                               Value;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Anniversary2020.Anniversary2020EventComponent.DBD_EnableAllCrownPillars
struct UAnniversary2020EventComponent_DBD_EnableAllCrownPillars_Params
{
	bool                                               Value;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Anniversary2020.CrownPillarInteractable.OnRep_IsHidden
struct UCrownPillarInteractable_OnRep_IsHidden_Params
{
};

// Function Anniversary2020.CrownPillarInteractable.OnCrownPillarInteractionStartedCosmetic
struct UCrownPillarInteractable_OnCrownPillarInteractionStartedCosmetic_Params
{
	bool                                               isCamperInteracting;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UdbdPlayer*                                  interactingPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Anniversary2020.CrownPillarInteractable.OnCrownPillarInteractionEndedCosmetic
struct UCrownPillarInteractable_OnCrownPillarInteractionEndedCosmetic_Params
{
	bool                                               isCamperInteracting;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UdbdPlayer*                                  interactingPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               isInteractionComplete;                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Anniversary2020.CrownPillarInteractable.OnCrownPillarEnabled
struct UCrownPillarInteractable_OnCrownPillarEnabled_Params
{
};

// Function Anniversary2020.CrownPillarInteractable.OnCrownPillarDisabled
struct UCrownPillarInteractable_OnCrownPillarDisabled_Params
{
};

// Function Anniversary2020.CrownPillarInteractable.IsLocallyObservedPlayerEquippedWithAnniversaryOffering
struct UCrownPillarInteractable_IsLocallyObservedPlayerEquippedWithAnniversaryOffering_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Anniversary2020.CrownPillarInteractable.GetSurvivorCrownPickupInteraction
struct UCrownPillarInteractable_GetSurvivorCrownPickupInteraction_Params
{
	class UCrownPickupInteraction*                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Anniversary2020.CrownPillarInteractable.GetSurvivorChargeDuration
struct UCrownPillarInteractable_GetSurvivorChargeDuration_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Anniversary2020.CrownPillarInteractable.GetSlasherCrownPickupInteraction
struct UCrownPillarInteractable_GetSlasherCrownPickupInteraction_Params
{
	class UCrownPickupInteraction*                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Anniversary2020.CrownPillarInteractable.GetSlasherChargeDuration
struct UCrownPillarInteractable_GetSlasherChargeDuration_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Anniversary2020.CrownPillarPositioner.Authority_OnLevelReadyToPlay
struct UCrownPillarPositioner_Authority_OnLevelReadyToPlay_Params
{
};

// Function Anniversary2020.CrownPillarPositioner.Authority_GetCrownPillars
struct UCrownPillarPositioner_Authority_GetCrownPillars_Params
{
	TArray<class UCrownPillarInteractable*>            ReturnValue;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
