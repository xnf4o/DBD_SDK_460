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

// Function DBDGameplay.AimableComponent.SetProcessors
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class UAimPointProcessor*> processors                     (Parm, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAimableComponent::SetProcessors(TArray<class UAimPointProcessor*> processors)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDGameplay.AimableComponent.SetProcessors");

	UAimableComponent_SetProcessors_Params params;
	params.processors = processors;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDGameplay.AimableComponent.SetOcclusionIgnoredActors
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<class Uactor*>          ignoredActors                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAimableComponent::SetOcclusionIgnoredActors(TArray<class Uactor*> ignoredActors)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDGameplay.AimableComponent.SetOcclusionIgnoredActors");

	UAimableComponent_SetOcclusionIgnoredActors_Params params;
	params.ignoredActors = ignoredActors;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDGameplay.AimableComponent.SetMaxAimDistance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          maxAimDistance                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAimableComponent::SetMaxAimDistance(float maxAimDistance)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDGameplay.AimableComponent.SetMaxAimDistance");

	UAimableComponent_SetMaxAimDistance_Params params;
	params.maxAimDistance = maxAimDistance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDGameplay.AimPointPerlinNoise.SetNoiseFrequencyMultiplier
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          multiplier                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAimPointPerlinNoise::SetNoiseFrequencyMultiplier(float multiplier)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDGameplay.AimPointPerlinNoise.SetNoiseFrequencyMultiplier");

	UAimPointPerlinNoise_SetNoiseFrequencyMultiplier_Params params;
	params.multiplier = multiplier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDGameplay.AimPointPerlinNoise.SetNoiseAmplitudeMultiplier
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          multiplier                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAimPointPerlinNoise::SetNoiseAmplitudeMultiplier(float multiplier)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDGameplay.AimPointPerlinNoise.SetNoiseAmplitudeMultiplier");

	UAimPointPerlinNoise_SetNoiseAmplitudeMultiplier_Params params;
	params.multiplier = multiplier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDGameplay.AimPointPerlinNoise.SetBaseInaccuracyNoisePersistence
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          noisePersistence               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAimPointPerlinNoise::SetBaseInaccuracyNoisePersistence(float noisePersistence)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDGameplay.AimPointPerlinNoise.SetBaseInaccuracyNoisePersistence");

	UAimPointPerlinNoise_SetBaseInaccuracyNoisePersistence_Params params;
	params.noisePersistence = noisePersistence;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDGameplay.AimPointPerlinNoise.SetBaseInaccuracyNoiseOctaveCount
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            octaveCount                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAimPointPerlinNoise::SetBaseInaccuracyNoiseOctaveCount(int octaveCount)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDGameplay.AimPointPerlinNoise.SetBaseInaccuracyNoiseOctaveCount");

	UAimPointPerlinNoise_SetBaseInaccuracyNoiseOctaveCount_Params params;
	params.octaveCount = octaveCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDGameplay.AimPointPerlinNoise.SetBaseInaccuracyNoiseFrequency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          frequency                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAimPointPerlinNoise::SetBaseInaccuracyNoiseFrequency(float frequency)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDGameplay.AimPointPerlinNoise.SetBaseInaccuracyNoiseFrequency");

	UAimPointPerlinNoise_SetBaseInaccuracyNoiseFrequency_Params params;
	params.frequency = frequency;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDGameplay.AimPointPerlinNoise.SetBaseInaccuracyNoiseAmplitude
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          amplitude                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAimPointPerlinNoise::SetBaseInaccuracyNoiseAmplitude(float amplitude)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDGameplay.AimPointPerlinNoise.SetBaseInaccuracyNoiseAmplitude");

	UAimPointPerlinNoise_SetBaseInaccuracyNoiseAmplitude_Params params;
	params.amplitude = amplitude;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDGameplay.FlashlightTargetFXComponent.OnIsLitChanged
// (Final, Native, Private)
// Parameters:
// bool                           isLit                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFlashlightTargetFXComponent::OnIsLitChanged(bool isLit)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDGameplay.FlashlightTargetFXComponent.OnIsLitChanged");

	UFlashlightTargetFXComponent_OnIsLitChanged_Params params;
	params.isLit = isLit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDGameplay.CollectableComponentUtilities.GetCollector
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UactorComponent*         component                      (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UdbdPlayer*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UdbdPlayer* UCollectableComponentUtilities::STATIC_GetCollector(class UactorComponent* component)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDGameplay.CollectableComponentUtilities.GetCollector");

	UCollectableComponentUtilities_GetCollector_Params params;
	params.component = component;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDGameplay.DebugIndicator.SetVisible
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           Visible                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDebugIndicator::SetVisible(bool Visible)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDGameplay.DebugIndicator.SetVisible");

	UDebugIndicator_SetVisible_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDGameplay.DebugIndicator.SetColor
// (Native, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            color                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDebugIndicator::SetColor(const struct FLinearColor& color)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDGameplay.DebugIndicator.SetColor");

	UDebugIndicator_SetColor_Params params;
	params.color = color;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDGameplay.EtherealComponent.Server_SetIsEthereal
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// float                          timestamp                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ethereal                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEtherealComponent::Server_SetIsEthereal(float timestamp, bool ethereal)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDGameplay.EtherealComponent.Server_SetIsEthereal");

	UEtherealComponent_Server_SetIsEthereal_Params params;
	params.timestamp = timestamp;
	params.ethereal = ethereal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDGameplay.EtherealComponent.OnRep_OnIsEtherealChanged
// (Final, Native, Private)
void UEtherealComponent::OnRep_OnIsEtherealChanged()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDGameplay.EtherealComponent.OnRep_OnIsEtherealChanged");

	UEtherealComponent_OnRep_OnIsEtherealChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDGameplay.RangeToActorsTrackerStrategy.OnInRangeToTrackedActorsChanged
// (Final, Native, Private)
// Parameters:
// bool                           inRange                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URangeToActorsTrackerStrategy::OnInRangeToTrackedActorsChanged(bool inRange)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDGameplay.RangeToActorsTrackerStrategy.OnInRangeToTrackedActorsChanged");

	URangeToActorsTrackerStrategy_OnInRangeToTrackedActorsChanged_Params params;
	params.inRange = inRange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDGameplay.FadeComponent.GetFadePercent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UFadeComponent::GetFadePercent()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDGameplay.FadeComponent.GetFadePercent");

	UFadeComponent_GetFadePercent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// DelegateFunction DBDGameplay.FlashLightableComponent.OnFlashlightLitChangedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                           isLit                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFlashLightableComponent::OnFlashlightLitChangedEvent__DelegateSignature(bool isLit)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("DelegateFunction DBDGameplay.FlashLightableComponent.OnFlashlightLitChangedEvent__DelegateSignature");

	UFlashLightableComponent_OnFlashlightLitChangedEvent__DelegateSignature_Params params;
	params.isLit = isLit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction DBDGameplay.FlashLightableComponent.OnFlashlightAddedRemovedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UFlashlightComponent*    FlashLight                     (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFlashLightableComponent::OnFlashlightAddedRemovedEvent__DelegateSignature(class UFlashlightComponent* FlashLight)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("DelegateFunction DBDGameplay.FlashLightableComponent.OnFlashlightAddedRemovedEvent__DelegateSignature");

	UFlashLightableComponent_OnFlashlightAddedRemovedEvent__DelegateSignature_Params params;
	params.FlashLight = FlashLight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDGameplay.FlashLightableComponent.isLit
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UFlashLightableComponent::isLit()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDGameplay.FlashLightableComponent.isLit");

	UFlashLightableComponent_isLit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDGameplay.FlashlightComponent.TurnOn
// (Final, Native, Public, BlueprintCallable)
void UFlashlightComponent::TurnOn()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDGameplay.FlashlightComponent.TurnOn");

	UFlashlightComponent_TurnOn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDGameplay.FlashlightComponent.TurnOff
// (Final, Native, Public, BlueprintCallable)
void UFlashlightComponent::TurnOff()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDGameplay.FlashlightComponent.TurnOff");

	UFlashlightComponent_TurnOff_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDGameplay.FlashlightComponent.Server_SetAndUpdateAutonomousLitFlashlightables
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// TArray<class UFlashLightableComponent*> newLitFlashlightables          (ConstParm, Parm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFlashlightComponent::Server_SetAndUpdateAutonomousLitFlashlightables(TArray<class UFlashLightableComponent*> newLitFlashlightables)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDGameplay.FlashlightComponent.Server_SetAndUpdateAutonomousLitFlashlightables");

	UFlashlightComponent_Server_SetAndUpdateAutonomousLitFlashlightables_Params params;
	params.newLitFlashlightables = newLitFlashlightables;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDGameplay.FlashlightComponent.OnRep_ReplicatedLitFlashlightables
// (Final, Native, Private)
void UFlashlightComponent::OnRep_ReplicatedLitFlashlightables()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDGameplay.FlashlightComponent.OnRep_ReplicatedLitFlashlightables");

	UFlashlightComponent_OnRep_ReplicatedLitFlashlightables_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDGameplay.FlashlightComponent.OnRep_IsOwnerLagging
// (Final, Native, Private)
void UFlashlightComponent::OnRep_IsOwnerLagging()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDGameplay.FlashlightComponent.OnRep_IsOwnerLagging");

	UFlashlightComponent_OnRep_IsOwnerLagging_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction DBDGameplay.FlashlightComponent.OnFlashlightEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate)
void UFlashlightComponent::OnFlashlightEvent__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("DelegateFunction DBDGameplay.FlashlightComponent.OnFlashlightEvent__DelegateSignature");

	UFlashlightComponent_OnFlashlightEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDGameplay.FlashlightComponent.IsOn
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UFlashlightComponent::IsOn()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDGameplay.FlashlightComponent.IsOn");

	UFlashlightComponent_IsOn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDGameplay.FlashlightComponent.GetEffectiveTimeToBlindModifier
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UFlashlightComponent::GetEffectiveTimeToBlindModifier()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDGameplay.FlashlightComponent.GetEffectiveTimeToBlindModifier");

	UFlashlightComponent_GetEffectiveTimeToBlindModifier_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDGameplay.FlashlightComponent.GetEffectiveBlindnessDuration
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UFlashlightComponent::GetEffectiveBlindnessDuration()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDGameplay.FlashlightComponent.GetEffectiveBlindnessDuration");

	UFlashlightComponent_GetEffectiveBlindnessDuration_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDGameplay.FlashlightConeComponent.GetOcclusionDistance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UFlashlightConeComponent::GetOcclusionDistance()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDGameplay.FlashlightConeComponent.GetOcclusionDistance");

	UFlashlightConeComponent_GetOcclusionDistance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDGameplay.FlashlightConeComponent.GetEffectiveConeLength
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UFlashlightConeComponent::GetEffectiveConeLength()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDGameplay.FlashlightConeComponent.GetEffectiveConeLength");

	UFlashlightConeComponent_GetEffectiveConeLength_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDGameplay.FlashlightConeComponent.GetEffectiveConeHalfAngle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UFlashlightConeComponent::GetEffectiveConeHalfAngle()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDGameplay.FlashlightConeComponent.GetEffectiveConeHalfAngle");

	UFlashlightConeComponent_GetEffectiveConeHalfAngle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDGameplay.FlashlightFXComponent.UpdateFXTargets
// (Final, Native, Private)
void UFlashlightFXComponent::UpdateFXTargets()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDGameplay.FlashlightFXComponent.UpdateFXTargets");

	UFlashlightFXComponent_UpdateFXTargets_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDGameplay.FlashlightFXComponent.UpdateConeEvent
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                          length                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          halfAngle                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFlashlightFXComponent::UpdateConeEvent(float length, float halfAngle)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDGameplay.FlashlightFXComponent.UpdateConeEvent");

	UFlashlightFXComponent_UpdateConeEvent_Params params;
	params.length = length;
	params.halfAngle = halfAngle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDGameplay.FlashlightFXComponent.PostUpdateEvent
// (Event, Protected, BlueprintEvent)
void UFlashlightFXComponent::PostUpdateEvent()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDGameplay.FlashlightFXComponent.PostUpdateEvent");

	UFlashlightFXComponent_PostUpdateEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDGameplay.FlashlightFXComponent.OnTurnedOn
// (Final, Native, Private)
void UFlashlightFXComponent::OnTurnedOn()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDGameplay.FlashlightFXComponent.OnTurnedOn");

	UFlashlightFXComponent_OnTurnedOn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDGameplay.FlashlightFXComponent.OnTurnedOff
// (Final, Native, Private)
void UFlashlightFXComponent::OnTurnedOff()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDGameplay.FlashlightFXComponent.OnTurnedOff");

	UFlashlightFXComponent_OnTurnedOff_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDGameplay.FlashlightFXComponent.OnStopEvent
// (Event, Protected, BlueprintEvent)
void UFlashlightFXComponent::OnStopEvent()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDGameplay.FlashlightFXComponent.OnStopEvent");

	UFlashlightFXComponent_OnStopEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDGameplay.FlashlightFXComponent.OnStartEvent
// (Event, Protected, BlueprintEvent)
void UFlashlightFXComponent::OnStartEvent()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDGameplay.FlashlightFXComponent.OnStartEvent");

	UFlashlightFXComponent_OnStartEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction DBDGameplay.FlashlightFXComponent.OnFlashEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate)
void UFlashlightFXComponent::OnFlashEvent__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("DelegateFunction DBDGameplay.FlashlightFXComponent.OnFlashEvent__DelegateSignature");

	UFlashlightFXComponent_OnFlashEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDGameplay.FlashlightFXComponent.OnDroppedEvent
// (Event, Protected, BlueprintEvent)
void UFlashlightFXComponent::OnDroppedEvent()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDGameplay.FlashlightFXComponent.OnDroppedEvent");

	UFlashlightFXComponent_OnDroppedEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDGameplay.FlashlightFXComponent.OnCollectorLocallyObservedChangedEvent
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           isLocallyObserved              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFlashlightFXComponent::OnCollectorLocallyObservedChangedEvent(bool isLocallyObserved)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDGameplay.FlashlightFXComponent.OnCollectorLocallyObservedChangedEvent");

	UFlashlightFXComponent_OnCollectorLocallyObservedChangedEvent_Params params;
	params.isLocallyObserved = isLocallyObserved;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDGameplay.FlashlightFXComponent.OnCollectedEvent
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UdbdPlayer*              collector                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFlashlightFXComponent::OnCollectedEvent(class UdbdPlayer* collector)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDGameplay.FlashlightFXComponent.OnCollectedEvent");

	UFlashlightFXComponent_OnCollectedEvent_Params params;
	params.collector = collector;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDGameplay.FlashlightFXComponent.GetBlindingSuccessRatio
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UFlashlightFXComponent::GetBlindingSuccessRatio()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDGameplay.FlashlightFXComponent.GetBlindingSuccessRatio");

	UFlashlightFXComponent_GetBlindingSuccessRatio_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDGameplay.InteractionStarterComponent.OnRep_ShouldStartInteraction
// (Final, Native, Private)
void UInteractionStarterComponent::OnRep_ShouldStartInteraction()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDGameplay.InteractionStarterComponent.OnRep_ShouldStartInteraction");

	UInteractionStarterComponent_OnRep_ShouldStartInteraction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDGameplay.InteractionStarterComponent.OnInteractionStarted
// (Final, Native, Private)
void UInteractionStarterComponent::OnInteractionStarted()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDGameplay.InteractionStarterComponent.OnInteractionStarted");

	UInteractionStarterComponent_OnInteractionStarted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDGameplay.Medkit.UseCharge
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          seconds                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMedkit::UseCharge(float seconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDGameplay.Medkit.UseCharge");

	UMedkit_UseCharge_Params params;
	params.seconds = seconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDGameplay.Medkit.OnMedkitHealedCamper
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UdbdPlayer*              healedPlayer                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMedkit::OnMedkitHealedCamper(class UdbdPlayer* healedPlayer)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDGameplay.Medkit.OnMedkitHealedCamper");

	UMedkit_OnMedkitHealedCamper_Params params;
	params.healedPlayer = healedPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDGameplay.Medkit.HasCharge
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMedkit::HasCharge()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDGameplay.Medkit.HasCharge");

	UMedkit_HasCharge_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDGameplay.Medkit.GetChargeMultiplier
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UMedkit::GetChargeMultiplier()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDGameplay.Medkit.GetChargeMultiplier");

	UMedkit_GetChargeMultiplier_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DBDGameplay.Medkit.Authority_OnChargeStateChange
// (Final, Native, Protected)
// Parameters:
// bool                           empty                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMedkit::Authority_OnChargeStateChange(bool empty)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDGameplay.Medkit.Authority_OnChargeStateChange");

	UMedkit_Authority_OnChargeStateChange_Params params;
	params.empty = empty;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDGameplay.Medkit.Authority_OnAnyOngoingInteractionChanged
// (Final, Native, Protected)
// Parameters:
// bool                           isInteracting                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMedkit::Authority_OnAnyOngoingInteractionChanged(bool isInteracting)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDGameplay.Medkit.Authority_OnAnyOngoingInteractionChanged");

	UMedkit_Authority_OnAnyOngoingInteractionChanged_Params params;
	params.isInteracting = isInteracting;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDGameplay.Medkit.Authority_ConsumeIfNotInteracting
// (Final, Native, Protected)
void UMedkit::Authority_ConsumeIfNotInteracting()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDGameplay.Medkit.Authority_ConsumeIfNotInteracting");

	UMedkit_Authority_ConsumeIfNotInteracting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDGameplay.LightBurnable.OnRep_IsBurning
// (Final, Native, Private)
void ULightBurnable::OnRep_IsBurning()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDGameplay.LightBurnable.OnRep_IsBurning");

	ULightBurnable_OnRep_IsBurning_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDGameplay.LightBurnable.OnChargeableCompleteEvent
// (Final, Native, Protected, HasOutParms)
// Parameters:
// bool                           Completed                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class Uactor*>          instigatorsForCompletion       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULightBurnable::OnChargeableCompleteEvent(bool Completed, TArray<class Uactor*> instigatorsForCompletion)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDGameplay.LightBurnable.OnChargeableCompleteEvent");

	ULightBurnable_OnChargeableCompleteEvent_Params params;
	params.Completed = Completed;
	params.instigatorsForCompletion = instigatorsForCompletion;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDGameplay.LightBurnable.OnBurnChargeEmpty
// (Native, Protected)
void ULightBurnable::OnBurnChargeEmpty()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDGameplay.LightBurnable.OnBurnChargeEmpty");

	ULightBurnable_OnBurnChargeEmpty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction DBDGameplay.LightBurnable.OnBurnChargeCompleteEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParms)
// Parameters:
// TArray<class Uactor*>          instigatorsForCompletion       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULightBurnable::OnBurnChargeCompleteEvent__DelegateSignature(TArray<class Uactor*> instigatorsForCompletion)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("DelegateFunction DBDGameplay.LightBurnable.OnBurnChargeCompleteEvent__DelegateSignature");

	ULightBurnable_OnBurnChargeCompleteEvent__DelegateSignature_Params params;
	params.instigatorsForCompletion = instigatorsForCompletion;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDGameplay.LightBurnable.Authority_OnFlashlightAddedRemoved
// (Final, Native, Protected)
// Parameters:
// class UFlashlightComponent*    FlashLight                     (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULightBurnable::Authority_OnFlashlightAddedRemoved(class UFlashlightComponent* FlashLight)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDGameplay.LightBurnable.Authority_OnFlashlightAddedRemoved");

	ULightBurnable_Authority_OnFlashlightAddedRemoved_Params params;
	params.FlashLight = FlashLight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDGameplay.LightBurnable.Authority_OnFirecrackerInRangeBegin
// (Native, Protected, HasOutParms)
// Parameters:
// struct FFirecrackerEffectData  effectData                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void ULightBurnable::Authority_OnFirecrackerInRangeBegin(const struct FFirecrackerEffectData& effectData)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDGameplay.LightBurnable.Authority_OnFirecrackerInRangeBegin");

	ULightBurnable_Authority_OnFirecrackerInRangeBegin_Params params;
	params.effectData = effectData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDGameplay.PlayerMovementUtilities.Local_SetGamepadYawCurve
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UdbdPlayer*              player                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCurveFloat*             curve                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPlayerMovementUtilities::STATIC_Local_SetGamepadYawCurve(class UdbdPlayer* player, class UCurveFloat* curve)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDGameplay.PlayerMovementUtilities.Local_SetGamepadYawCurve");

	UPlayerMovementUtilities_Local_SetGamepadYawCurve_Params params;
	params.player = player;
	params.curve = curve;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDGameplay.PlayerMovementUtilities.Local_SetGamepadPitchCurve
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UdbdPlayer*              player                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCurveFloat*             curve                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPlayerMovementUtilities::STATIC_Local_SetGamepadPitchCurve(class UdbdPlayer* player, class UCurveFloat* curve)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDGameplay.PlayerMovementUtilities.Local_SetGamepadPitchCurve");

	UPlayerMovementUtilities_Local_SetGamepadPitchCurve_Params params;
	params.player = player;
	params.curve = curve;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDGameplay.PlayerMovementUtilities.Local_ResetRotationScale
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UdbdPlayer*              player                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          adjustmentTime                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPlayerMovementUtilities::STATIC_Local_ResetRotationScale(class UdbdPlayer* player, float adjustmentTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDGameplay.PlayerMovementUtilities.Local_ResetRotationScale");

	UPlayerMovementUtilities_Local_ResetRotationScale_Params params;
	params.player = player;
	params.adjustmentTime = adjustmentTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDGameplay.PlayerMovementUtilities.Local_ResetGamepadLookCurves
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UdbdPlayer*              player                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPlayerMovementUtilities::STATIC_Local_ResetGamepadLookCurves(class UdbdPlayer* player)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDGameplay.PlayerMovementUtilities.Local_ResetGamepadLookCurves");

	UPlayerMovementUtilities_Local_ResetGamepadLookCurves_Params params;
	params.player = player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDGameplay.PlayerMovementUtilities.Local_ApplyYawScaleMultiplier
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UdbdPlayer*              player                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          multiplier                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          adjustmentTime                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPlayerMovementUtilities::STATIC_Local_ApplyYawScaleMultiplier(class UdbdPlayer* player, float multiplier, float adjustmentTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDGameplay.PlayerMovementUtilities.Local_ApplyYawScaleMultiplier");

	UPlayerMovementUtilities_Local_ApplyYawScaleMultiplier_Params params;
	params.player = player;
	params.multiplier = multiplier;
	params.adjustmentTime = adjustmentTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDGameplay.PlayerMovementUtilities.Local_ApplyRotationScaleMultiplier
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UdbdPlayer*              player                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          multiplier                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          adjustmentTime                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPlayerMovementUtilities::STATIC_Local_ApplyRotationScaleMultiplier(class UdbdPlayer* player, float multiplier, float adjustmentTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDGameplay.PlayerMovementUtilities.Local_ApplyRotationScaleMultiplier");

	UPlayerMovementUtilities_Local_ApplyRotationScaleMultiplier_Params params;
	params.player = player;
	params.multiplier = multiplier;
	params.adjustmentTime = adjustmentTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDGameplay.PlayerMovementUtilities.Local_ApplyPitchScaleMultiplier
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UdbdPlayer*              player                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          multiplier                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          adjustmentTime                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPlayerMovementUtilities::STATIC_Local_ApplyPitchScaleMultiplier(class UdbdPlayer* player, float multiplier, float adjustmentTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDGameplay.PlayerMovementUtilities.Local_ApplyPitchScaleMultiplier");

	UPlayerMovementUtilities_Local_ApplyPitchScaleMultiplier_Params params;
	params.player = player;
	params.multiplier = multiplier;
	params.adjustmentTime = adjustmentTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDGameplay.PlayerMovementUtilities.Local_ApplyMouseYawScaleMultiplier
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UdbdPlayer*              player                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          multiplier                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          adjustmentTime                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPlayerMovementUtilities::STATIC_Local_ApplyMouseYawScaleMultiplier(class UdbdPlayer* player, float multiplier, float adjustmentTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDGameplay.PlayerMovementUtilities.Local_ApplyMouseYawScaleMultiplier");

	UPlayerMovementUtilities_Local_ApplyMouseYawScaleMultiplier_Params params;
	params.player = player;
	params.multiplier = multiplier;
	params.adjustmentTime = adjustmentTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDGameplay.PlayerMovementUtilities.Local_ApplyMousePitchScaleMultiplier
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UdbdPlayer*              player                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          multiplier                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          adjustmentTime                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPlayerMovementUtilities::STATIC_Local_ApplyMousePitchScaleMultiplier(class UdbdPlayer* player, float multiplier, float adjustmentTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDGameplay.PlayerMovementUtilities.Local_ApplyMousePitchScaleMultiplier");

	UPlayerMovementUtilities_Local_ApplyMousePitchScaleMultiplier_Params params;
	params.player = player;
	params.multiplier = multiplier;
	params.adjustmentTime = adjustmentTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDGameplay.PlayerMovementUtilities.Local_ApplyGamepadYawScaleMultiplier
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UdbdPlayer*              player                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          multiplier                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          adjustmentTime                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPlayerMovementUtilities::STATIC_Local_ApplyGamepadYawScaleMultiplier(class UdbdPlayer* player, float multiplier, float adjustmentTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDGameplay.PlayerMovementUtilities.Local_ApplyGamepadYawScaleMultiplier");

	UPlayerMovementUtilities_Local_ApplyGamepadYawScaleMultiplier_Params params;
	params.player = player;
	params.multiplier = multiplier;
	params.adjustmentTime = adjustmentTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDGameplay.PlayerMovementUtilities.Local_ApplyGamepadPitchScaleMultiplier
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UdbdPlayer*              player                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          multiplier                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          adjustmentTime                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPlayerMovementUtilities::STATIC_Local_ApplyGamepadPitchScaleMultiplier(class UdbdPlayer* player, float multiplier, float adjustmentTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDGameplay.PlayerMovementUtilities.Local_ApplyGamepadPitchScaleMultiplier");

	UPlayerMovementUtilities_Local_ApplyGamepadPitchScaleMultiplier_Params params;
	params.player = player;
	params.multiplier = multiplier;
	params.adjustmentTime = adjustmentTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDGameplay.PowerChargeComponent.OnRep_CurrentCharge
// (Final, Native, Private)
void UPowerChargeComponent::OnRep_CurrentCharge()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDGameplay.PowerChargeComponent.OnRep_CurrentCharge");

	UPowerChargeComponent_OnRep_CurrentCharge_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDGameplay.PowerChargeComponent.OnCurrentChargeChanged
// (Final, Native, Private)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPowerChargeComponent::OnCurrentChargeChanged(float Value)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDGameplay.PowerChargeComponent.OnCurrentChargeChanged");

	UPowerChargeComponent_OnCurrentChargeChanged_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDGameplay.PowerChargeComponent.Debug_Server_SetForceFullCharge
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// bool                           forceFullCharge                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPowerChargeComponent::Debug_Server_SetForceFullCharge(bool forceFullCharge)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDGameplay.PowerChargeComponent.Debug_Server_SetForceFullCharge");

	UPowerChargeComponent_Debug_Server_SetForceFullCharge_Params params;
	params.forceFullCharge = forceFullCharge;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDGameplay.PowerToggleComponent.OnRep_IsInPower
// (Final, Native, Private, Const)
void UPowerToggleComponent::OnRep_IsInPower()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDGameplay.PowerToggleComponent.OnRep_IsInPower");

	UPowerToggleComponent_OnRep_IsInPower_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DBDGameplay.RangeToActorsTrackerComponent.OnLevelReadyToPlay
// (Final, Native, Private)
void URangeToActorsTrackerComponent::OnLevelReadyToPlay()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DBDGameplay.RangeToActorsTrackerComponent.OnLevelReadyToPlay");

	URangeToActorsTrackerComponent_OnLevelReadyToPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
