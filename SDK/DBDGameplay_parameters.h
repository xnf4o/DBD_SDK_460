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

// Function DBDGameplay.AimableComponent.SetProcessors
struct UAimableComponent_SetProcessors_Params
{
	TArray<class UAimPointProcessor*>                  processors;                                                // (Parm, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDGameplay.AimableComponent.SetOcclusionIgnoredActors
struct UAimableComponent_SetOcclusionIgnoredActors_Params
{
	TArray<class Uactor*>                              ignoredActors;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDGameplay.AimableComponent.SetMaxAimDistance
struct UAimableComponent_SetMaxAimDistance_Params
{
	float                                              maxAimDistance;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDGameplay.AimPointPerlinNoise.SetNoiseFrequencyMultiplier
struct UAimPointPerlinNoise_SetNoiseFrequencyMultiplier_Params
{
	float                                              multiplier;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDGameplay.AimPointPerlinNoise.SetNoiseAmplitudeMultiplier
struct UAimPointPerlinNoise_SetNoiseAmplitudeMultiplier_Params
{
	float                                              multiplier;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDGameplay.AimPointPerlinNoise.SetBaseInaccuracyNoisePersistence
struct UAimPointPerlinNoise_SetBaseInaccuracyNoisePersistence_Params
{
	float                                              noisePersistence;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDGameplay.AimPointPerlinNoise.SetBaseInaccuracyNoiseOctaveCount
struct UAimPointPerlinNoise_SetBaseInaccuracyNoiseOctaveCount_Params
{
	int                                                octaveCount;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDGameplay.AimPointPerlinNoise.SetBaseInaccuracyNoiseFrequency
struct UAimPointPerlinNoise_SetBaseInaccuracyNoiseFrequency_Params
{
	float                                              frequency;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDGameplay.AimPointPerlinNoise.SetBaseInaccuracyNoiseAmplitude
struct UAimPointPerlinNoise_SetBaseInaccuracyNoiseAmplitude_Params
{
	float                                              amplitude;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDGameplay.FlashlightTargetFXComponent.OnIsLitChanged
struct UFlashlightTargetFXComponent_OnIsLitChanged_Params
{
	bool                                               isLit;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDGameplay.CollectableComponentUtilities.GetCollector
struct UCollectableComponentUtilities_GetCollector_Params
{
	class UactorComponent*                             component;                                                 // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UdbdPlayer*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDGameplay.DebugIndicator.SetVisible
struct UDebugIndicator_SetVisible_Params
{
	bool                                               Visible;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDGameplay.DebugIndicator.SetColor
struct UDebugIndicator_SetColor_Params
{
	struct FLinearColor                                color;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDGameplay.EtherealComponent.Server_SetIsEthereal
struct UEtherealComponent_Server_SetIsEthereal_Params
{
	float                                              timestamp;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ethereal;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDGameplay.EtherealComponent.OnRep_OnIsEtherealChanged
struct UEtherealComponent_OnRep_OnIsEtherealChanged_Params
{
};

// Function DBDGameplay.RangeToActorsTrackerStrategy.OnInRangeToTrackedActorsChanged
struct URangeToActorsTrackerStrategy_OnInRangeToTrackedActorsChanged_Params
{
	bool                                               inRange;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDGameplay.FadeComponent.GetFadePercent
struct UFadeComponent_GetFadePercent_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction DBDGameplay.FlashLightableComponent.OnFlashlightLitChangedEvent__DelegateSignature
struct UFlashLightableComponent_OnFlashlightLitChangedEvent__DelegateSignature_Params
{
	bool                                               isLit;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction DBDGameplay.FlashLightableComponent.OnFlashlightAddedRemovedEvent__DelegateSignature
struct UFlashLightableComponent_OnFlashlightAddedRemovedEvent__DelegateSignature_Params
{
	class UFlashlightComponent*                        FlashLight;                                                // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDGameplay.FlashLightableComponent.isLit
struct UFlashLightableComponent_isLit_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDGameplay.FlashlightComponent.TurnOn
struct UFlashlightComponent_TurnOn_Params
{
};

// Function DBDGameplay.FlashlightComponent.TurnOff
struct UFlashlightComponent_TurnOff_Params
{
};

// Function DBDGameplay.FlashlightComponent.Server_SetAndUpdateAutonomousLitFlashlightables
struct UFlashlightComponent_Server_SetAndUpdateAutonomousLitFlashlightables_Params
{
	TArray<class UFlashLightableComponent*>            newLitFlashlightables;                                     // (ConstParm, Parm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDGameplay.FlashlightComponent.OnRep_ReplicatedLitFlashlightables
struct UFlashlightComponent_OnRep_ReplicatedLitFlashlightables_Params
{
};

// Function DBDGameplay.FlashlightComponent.OnRep_IsOwnerLagging
struct UFlashlightComponent_OnRep_IsOwnerLagging_Params
{
};

// DelegateFunction DBDGameplay.FlashlightComponent.OnFlashlightEvent__DelegateSignature
struct UFlashlightComponent_OnFlashlightEvent__DelegateSignature_Params
{
};

// Function DBDGameplay.FlashlightComponent.IsOn
struct UFlashlightComponent_IsOn_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDGameplay.FlashlightComponent.GetEffectiveTimeToBlindModifier
struct UFlashlightComponent_GetEffectiveTimeToBlindModifier_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDGameplay.FlashlightComponent.GetEffectiveBlindnessDuration
struct UFlashlightComponent_GetEffectiveBlindnessDuration_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDGameplay.FlashlightConeComponent.GetOcclusionDistance
struct UFlashlightConeComponent_GetOcclusionDistance_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDGameplay.FlashlightConeComponent.GetEffectiveConeLength
struct UFlashlightConeComponent_GetEffectiveConeLength_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDGameplay.FlashlightConeComponent.GetEffectiveConeHalfAngle
struct UFlashlightConeComponent_GetEffectiveConeHalfAngle_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDGameplay.FlashlightFXComponent.UpdateFXTargets
struct UFlashlightFXComponent_UpdateFXTargets_Params
{
};

// Function DBDGameplay.FlashlightFXComponent.UpdateConeEvent
struct UFlashlightFXComponent_UpdateConeEvent_Params
{
	float                                              length;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              halfAngle;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDGameplay.FlashlightFXComponent.PostUpdateEvent
struct UFlashlightFXComponent_PostUpdateEvent_Params
{
};

// Function DBDGameplay.FlashlightFXComponent.OnTurnedOn
struct UFlashlightFXComponent_OnTurnedOn_Params
{
};

// Function DBDGameplay.FlashlightFXComponent.OnTurnedOff
struct UFlashlightFXComponent_OnTurnedOff_Params
{
};

// Function DBDGameplay.FlashlightFXComponent.OnStopEvent
struct UFlashlightFXComponent_OnStopEvent_Params
{
};

// Function DBDGameplay.FlashlightFXComponent.OnStartEvent
struct UFlashlightFXComponent_OnStartEvent_Params
{
};

// DelegateFunction DBDGameplay.FlashlightFXComponent.OnFlashEvent__DelegateSignature
struct UFlashlightFXComponent_OnFlashEvent__DelegateSignature_Params
{
};

// Function DBDGameplay.FlashlightFXComponent.OnDroppedEvent
struct UFlashlightFXComponent_OnDroppedEvent_Params
{
};

// Function DBDGameplay.FlashlightFXComponent.OnCollectorLocallyObservedChangedEvent
struct UFlashlightFXComponent_OnCollectorLocallyObservedChangedEvent_Params
{
	bool                                               isLocallyObserved;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDGameplay.FlashlightFXComponent.OnCollectedEvent
struct UFlashlightFXComponent_OnCollectedEvent_Params
{
	class UdbdPlayer*                                  collector;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDGameplay.FlashlightFXComponent.GetBlindingSuccessRatio
struct UFlashlightFXComponent_GetBlindingSuccessRatio_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDGameplay.InteractionStarterComponent.OnRep_ShouldStartInteraction
struct UInteractionStarterComponent_OnRep_ShouldStartInteraction_Params
{
};

// Function DBDGameplay.InteractionStarterComponent.OnInteractionStarted
struct UInteractionStarterComponent_OnInteractionStarted_Params
{
};

// Function DBDGameplay.Medkit.UseCharge
struct UMedkit_UseCharge_Params
{
	float                                              seconds;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDGameplay.Medkit.OnMedkitHealedCamper
struct UMedkit_OnMedkitHealedCamper_Params
{
	class UdbdPlayer*                                  healedPlayer;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDGameplay.Medkit.HasCharge
struct UMedkit_HasCharge_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDGameplay.Medkit.GetChargeMultiplier
struct UMedkit_GetChargeMultiplier_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDGameplay.Medkit.Authority_OnChargeStateChange
struct UMedkit_Authority_OnChargeStateChange_Params
{
	bool                                               empty;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDGameplay.Medkit.Authority_OnAnyOngoingInteractionChanged
struct UMedkit_Authority_OnAnyOngoingInteractionChanged_Params
{
	bool                                               isInteracting;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDGameplay.Medkit.Authority_ConsumeIfNotInteracting
struct UMedkit_Authority_ConsumeIfNotInteracting_Params
{
};

// Function DBDGameplay.LightBurnable.OnRep_IsBurning
struct ULightBurnable_OnRep_IsBurning_Params
{
};

// Function DBDGameplay.LightBurnable.OnChargeableCompleteEvent
struct ULightBurnable_OnChargeableCompleteEvent_Params
{
	bool                                               Completed;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class Uactor*>                              instigatorsForCompletion;                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDGameplay.LightBurnable.OnBurnChargeEmpty
struct ULightBurnable_OnBurnChargeEmpty_Params
{
};

// DelegateFunction DBDGameplay.LightBurnable.OnBurnChargeCompleteEvent__DelegateSignature
struct ULightBurnable_OnBurnChargeCompleteEvent__DelegateSignature_Params
{
	TArray<class Uactor*>                              instigatorsForCompletion;                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDGameplay.LightBurnable.Authority_OnFlashlightAddedRemoved
struct ULightBurnable_Authority_OnFlashlightAddedRemoved_Params
{
	class UFlashlightComponent*                        FlashLight;                                                // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDGameplay.LightBurnable.Authority_OnFirecrackerInRangeBegin
struct ULightBurnable_Authority_OnFirecrackerInRangeBegin_Params
{
	struct FFirecrackerEffectData                      effectData;                                                // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function DBDGameplay.PlayerMovementUtilities.Local_SetGamepadYawCurve
struct UPlayerMovementUtilities_Local_SetGamepadYawCurve_Params
{
	class UdbdPlayer*                                  player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                                 curve;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDGameplay.PlayerMovementUtilities.Local_SetGamepadPitchCurve
struct UPlayerMovementUtilities_Local_SetGamepadPitchCurve_Params
{
	class UdbdPlayer*                                  player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                                 curve;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDGameplay.PlayerMovementUtilities.Local_ResetRotationScale
struct UPlayerMovementUtilities_Local_ResetRotationScale_Params
{
	class UdbdPlayer*                                  player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              adjustmentTime;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDGameplay.PlayerMovementUtilities.Local_ResetGamepadLookCurves
struct UPlayerMovementUtilities_Local_ResetGamepadLookCurves_Params
{
	class UdbdPlayer*                                  player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDGameplay.PlayerMovementUtilities.Local_ApplyYawScaleMultiplier
struct UPlayerMovementUtilities_Local_ApplyYawScaleMultiplier_Params
{
	class UdbdPlayer*                                  player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              multiplier;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              adjustmentTime;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDGameplay.PlayerMovementUtilities.Local_ApplyRotationScaleMultiplier
struct UPlayerMovementUtilities_Local_ApplyRotationScaleMultiplier_Params
{
	class UdbdPlayer*                                  player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              multiplier;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              adjustmentTime;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDGameplay.PlayerMovementUtilities.Local_ApplyPitchScaleMultiplier
struct UPlayerMovementUtilities_Local_ApplyPitchScaleMultiplier_Params
{
	class UdbdPlayer*                                  player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              multiplier;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              adjustmentTime;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDGameplay.PlayerMovementUtilities.Local_ApplyMouseYawScaleMultiplier
struct UPlayerMovementUtilities_Local_ApplyMouseYawScaleMultiplier_Params
{
	class UdbdPlayer*                                  player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              multiplier;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              adjustmentTime;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDGameplay.PlayerMovementUtilities.Local_ApplyMousePitchScaleMultiplier
struct UPlayerMovementUtilities_Local_ApplyMousePitchScaleMultiplier_Params
{
	class UdbdPlayer*                                  player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              multiplier;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              adjustmentTime;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDGameplay.PlayerMovementUtilities.Local_ApplyGamepadYawScaleMultiplier
struct UPlayerMovementUtilities_Local_ApplyGamepadYawScaleMultiplier_Params
{
	class UdbdPlayer*                                  player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              multiplier;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              adjustmentTime;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDGameplay.PlayerMovementUtilities.Local_ApplyGamepadPitchScaleMultiplier
struct UPlayerMovementUtilities_Local_ApplyGamepadPitchScaleMultiplier_Params
{
	class UdbdPlayer*                                  player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              multiplier;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              adjustmentTime;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDGameplay.PowerChargeComponent.OnRep_CurrentCharge
struct UPowerChargeComponent_OnRep_CurrentCharge_Params
{
};

// Function DBDGameplay.PowerChargeComponent.OnCurrentChargeChanged
struct UPowerChargeComponent_OnCurrentChargeChanged_Params
{
	float                                              Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDGameplay.PowerChargeComponent.Debug_Server_SetForceFullCharge
struct UPowerChargeComponent_Debug_Server_SetForceFullCharge_Params
{
	bool                                               forceFullCharge;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDGameplay.PowerToggleComponent.OnRep_IsInPower
struct UPowerToggleComponent_OnRep_IsInPower_Params
{
};

// Function DBDGameplay.RangeToActorsTrackerComponent.OnLevelReadyToPlay
struct URangeToActorsTrackerComponent_OnLevelReadyToPlay_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
