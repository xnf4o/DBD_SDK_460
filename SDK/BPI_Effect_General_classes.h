﻿#pragma once

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
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPI_Effect_General.BPI_Effect_General_C
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UBPI_Effect_General_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass BPI_Effect_General.BPI_Effect_General_C");
		return ptr;
	}



	void K23_HideKnifeLT();
	void K23_HideKnifeRT();
	void K23_HideBat();
	void K23_ShowBat();
	void K23_ShowKnifeRT();
	void K23_ShowKnifeLT();
	void K22_IsAttachedLocker(bool IsAttachedLocker);
	void K23_CamperHitByKnife(bool isLocallyObserved, float LacerationPercent, bool IsDangerous);
	void K22_HighlightMissJump_Stop();
	void K22_BrotherDissolveLocker();
	void Camper_AntidoteBoostVignette_End();
	void Camper_AntidoteBoostVignette_Start();
	void Killer_LungeAttack_End();
	void Killer_LungeAttack_Start();
	void K22_QuickDissolveBrother();
	void K12_Killer_PlaceVignette();
	void K12_Killer_RemoveVignette();
	void K12_Killer_BombSmokeColor();
	void K12_Killer_AntidoteBegin();
	void K12_Killer_AntidoteEnd();
	void K12_GetAntidoteVignette();
	void K12_GetToxinVignette(TheClown_EBombType Bomb_Type);
	void K22_WrongLandingVignette(bool WrongLanding);
	void K22_DetachedFromSurvivor_VFX();
	void K22_AttachedToSurvivor_VFX();
	void K22_WrongLanding(bool Wrong_Landing);
	void K04_TelekinesisOff();
	void K04_TelekinesisOn();
	void K04_InvisibleOff();
	void K04_InvisibleOn();
	void K07_TreatmentStart();
	void K05_BloodDrops();
	void K05_TrapImpactOff();
	void K05_TrapImpact();
	void K05_SetTrap();
	void On_Execution();
	void K22_Jump_Inactive();
	void K22_Jump_Active();
	void K22_BabyRespawn();
	void K22_BabyBloodDissolve();
	void K22_MembraneDelete();
	void K22_MembraneRecovery();
	void K22_ReleaseBrother();
	void K22_JumpTrail_Deactivate();
	void K22_JumpTrail_Activate();
	void K22_DormantAttachedSlasher();
	void K22_HighlightMissJump();
	void K22_HighlightDormant(bool IsDormant_);
	void K22_HighlightDormantMain(bool IsDormantMain_);
	void K22_SpawnWipeVFX();
	void HideSyringeOnStun();
	void ActivateVignetteOnWallCollision();
	void AnimateLiquidSyringe();
	void HideSyringe();
	void ShowSyringe();
	void ActivateAttemptEscapeVFX();
	void StartDeathBedRelocateVignette();
	void SpawnFullScreenBlood();
	void ActivateKnockoutVFX();
	void DeactivateKnockoutVFX();
	void StartDeathBedDissolve();
	void ActivateSacrificeCamBlood();
	void SpawnFakeBullet();
	void HideGunBullet();
	void ShowGunBullet();
	void Hide_Oni_Katana_TPV();
	void ReturnToDemonMode();
	void DisableDemonMode();
	void HideDemonCosmetic();
	void ShowDemonCosmetic();
	void Switch_Oni_Weapons_To_Normal();
	void Destroy_Blood_Orb();
	void Show_Oni_Katana();
	void Hide_Oni_Katana();
	void Switch_Kanobo_to_Normal_Mode();
	void Switch_Kanobo_To_Demon_Mode();
	void ActivatePounceStateVFX();
	void Stop_Travelling_PP();
	void Stop_Saliva_VFX();
	void Start_Saliva_VFX();
	void Stop_Pounce_VFX();
	void Start_Pounce_VFX();
	void Stop_Travelling_Dissolve();
	void Start_Travelling_Dissolve();
	void Start_Travelling_PP();
	void ActivatePlayerGlitchVFX(class UMaterialInstanceDynamic* GlitchFX, bool Face);
	void ActivatePlayerLightningVFX(class UMaterialInstanceDynamic* LightningFX, bool Intense);
	void SetHighlightedVFX();
	void SetPlayerExposedVFX();
	void ActivateLocalPlayerExposedVFX();
	void ActivatePlayerExposedVFX();
	void ActivateEndGameVignette(bool isActive);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
