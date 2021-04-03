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

// Function DBDMetaGameplay.DBDEmblem_SurvivorUnbroken.OnIntroCompleted
struct UDBDEmblem_SurvivorUnbroken_OnIntroCompleted_Params
{
};

// Function DBDMetaGameplay.DBDEmblem_KillerMalicious.OnLevelReadyToPlay
struct UDBDEmblem_KillerMalicious_OnLevelReadyToPlay_Params
{
};

// Function DBDMetaGameplay.DBDEmblem_SurvivorEvader.OnChaseStartEvent
struct UDBDEmblem_SurvivorEvader_OnChaseStartEvent_Params
{
	class UdbdPlayer*                                  chasedPlayer;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDMetaGameplay.DBDEmblem_KillerChaser.OnChaseStart
struct UDBDEmblem_KillerChaser_OnChaseStart_Params
{
	class UdbdPlayer*                                  chasedPlayer;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDMetaGameplay.DBDEmblem_KillerDevout.OnLevelReadyToPlay
struct UDBDEmblem_KillerDevout_OnLevelReadyToPlay_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
