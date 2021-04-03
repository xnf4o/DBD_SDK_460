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

// Function DBDBots.DBDAIBTController.OnPawnBump
// (Final, Native, Private, HasOutParms, HasDefaults)
// Parameters:
// class Uactor*                  selfActor                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class Uactor*                  otherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 normalImpulse                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FhitResult              hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void UDBDAIBTController::OnPawnBump(class Uactor* selfActor, class Uactor* otherActor, const struct Fvector& normalImpulse, const struct FhitResult& hit)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDBots.DBDAIBTController.OnPawnBump");

	UDBDAIBTController_OnPawnBump_Params params;
	params.selfActor = selfActor;
	params.otherActor = otherActor;
	params.normalImpulse = normalImpulse;
	params.hit = hit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDBots.DBDAIBTController.Authority_FinishedPlaying
// (Final, Native, Private)
void UDBDAIBTController::Authority_FinishedPlaying()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDBots.DBDAIBTController.Authority_FinishedPlaying");

	UDBDAIBTController_Authority_FinishedPlaying_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDBots.DBDNavLinkCustomComponent.OnLevelReadyToPlay
// (Final, Native, Private)
void UDBDNavLinkCustomComponent::OnLevelReadyToPlay()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDBots.DBDNavLinkCustomComponent.OnLevelReadyToPlay");

	UDBDNavLinkCustomComponent_OnLevelReadyToPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDBots.NavLinkProxy_Base.OnSmartLinkReachedCallback
// (Final, Native, Private, HasOutParms, HasDefaults)
// Parameters:
// class Uactor*                  MovingActor                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct Fvector                 DestinationPoint               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNavLinkProxy_Base::OnSmartLinkReachedCallback(class Uactor* MovingActor, const struct Fvector& DestinationPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDBots.NavLinkProxy_Base.OnSmartLinkReachedCallback");

	UNavLinkProxy_Base_OnSmartLinkReachedCallback_Params params;
	params.MovingActor = MovingActor;
	params.DestinationPoint = DestinationPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDBots.NavLinkProxy_DirectMove.OnDisplayDebugInfo
// (Final, Native, Private)
void UNavLinkProxy_DirectMove::OnDisplayDebugInfo()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDBots.NavLinkProxy_DirectMove.OnDisplayDebugInfo");

	UNavLinkProxy_DirectMove_OnDisplayDebugInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
