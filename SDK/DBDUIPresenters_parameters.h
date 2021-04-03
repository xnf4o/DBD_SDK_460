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

// Function DBDUIPresenters.BaseHudPresenter.OnPawnUnpossessed
struct UBaseHudPresenter_OnPawnUnpossessed_Params
{
	class Upawn*                                       pawn;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIPresenters.BaseHudPresenter.OnPawnPossessed
struct UBaseHudPresenter_OnPawnPossessed_Params
{
	class Upawn*                                       pawn;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIPresenters.UIConsoleCommands.DBD_ToggleTestWidget
struct UUIConsoleCommands_DBD_ToggleTestWidget_Params
{
};

// Function DBDUIPresenters.UIConsoleCommands.DBD_ToggleDPICurve
struct UUIConsoleCommands_DBD_ToggleDPICurve_Params
{
};

// Function DBDUIPresenters.UIConsoleCommands.DBD_SetHudVisible
struct UUIConsoleCommands_DBD_SetHudVisible_Params
{
	bool                                               isVisible;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIPresenters.UIConsoleCommands.DBD_SetHudScaleFactor
struct UUIConsoleCommands_DBD_SetHudScaleFactor_Params
{
	float                                              scaleFactor;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIPresenters.UIConsoleCommands.DBD_SetApplicationScale
struct UUIConsoleCommands_DBD_SetApplicationScale_Params
{
	float                                              applicationScale;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIPresenters.ExamplePresenter.OnButtonClick
struct UExamplePresenter_OnButtonClick_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
