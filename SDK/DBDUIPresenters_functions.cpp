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

// Function DBDUIPresenters.BaseHudPresenter.OnPawnUnpossessed
// (Final, Native, Private)
// Parameters:
// class Upawn*                   pawn                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBaseHudPresenter::OnPawnUnpossessed(class Upawn* pawn)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIPresenters.BaseHudPresenter.OnPawnUnpossessed");

	UBaseHudPresenter_OnPawnUnpossessed_Params params;
	params.pawn = pawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIPresenters.BaseHudPresenter.OnPawnPossessed
// (Final, Native, Private)
// Parameters:
// class Upawn*                   pawn                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBaseHudPresenter::OnPawnPossessed(class Upawn* pawn)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIPresenters.BaseHudPresenter.OnPawnPossessed");

	UBaseHudPresenter_OnPawnPossessed_Params params;
	params.pawn = pawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIPresenters.UIConsoleCommands.DBD_ToggleTestWidget
// (Final, Exec, Native, Public)
void UUIConsoleCommands::DBD_ToggleTestWidget()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIPresenters.UIConsoleCommands.DBD_ToggleTestWidget");

	UUIConsoleCommands_DBD_ToggleTestWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIPresenters.UIConsoleCommands.DBD_ToggleDPICurve
// (Final, Exec, Native, Public)
void UUIConsoleCommands::DBD_ToggleDPICurve()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIPresenters.UIConsoleCommands.DBD_ToggleDPICurve");

	UUIConsoleCommands_DBD_ToggleDPICurve_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIPresenters.UIConsoleCommands.DBD_SetHudVisible
// (Final, Exec, Native, Public)
// Parameters:
// bool                           isVisible                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUIConsoleCommands::DBD_SetHudVisible(bool isVisible)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIPresenters.UIConsoleCommands.DBD_SetHudVisible");

	UUIConsoleCommands_DBD_SetHudVisible_Params params;
	params.isVisible = isVisible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIPresenters.UIConsoleCommands.DBD_SetHudScaleFactor
// (Final, Exec, Native, Public)
// Parameters:
// float                          scaleFactor                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUIConsoleCommands::DBD_SetHudScaleFactor(float scaleFactor)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIPresenters.UIConsoleCommands.DBD_SetHudScaleFactor");

	UUIConsoleCommands_DBD_SetHudScaleFactor_Params params;
	params.scaleFactor = scaleFactor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIPresenters.UIConsoleCommands.DBD_SetApplicationScale
// (Final, Exec, Native, Public)
// Parameters:
// float                          applicationScale               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUIConsoleCommands::DBD_SetApplicationScale(float applicationScale)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIPresenters.UIConsoleCommands.DBD_SetApplicationScale");

	UUIConsoleCommands_DBD_SetApplicationScale_Params params;
	params.applicationScale = applicationScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDUIPresenters.ExamplePresenter.OnButtonClick
// (Final, Native, Private)
void UExamplePresenter::OnButtonClick()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDUIPresenters.ExamplePresenter.OnButtonClick");

	UExamplePresenter_OnButtonClick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
