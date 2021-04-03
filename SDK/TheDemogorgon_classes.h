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
// Classes
//---------------------------------------------------------------------------

// Class TheDemogorgon.DemogorgonPounceAttack
// 0x0080 (FullSize[0x0360] - InheritedSize[0x02E0])
class UDemogorgonPounceAttack : public UPounceAttack
{
public:
	unsigned char                                      UnknownData_HD0H[0x80];                                    // 0x02E0(0x0080) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheDemogorgon.DemogorgonPounceAttack");
		return ptr;
	}



};

// Class TheDemogorgon.DemogorgonPounceAttackOpenSubstate
// 0x0000 (FullSize[0x00F0] - InheritedSize[0x00F0])
class UDemogorgonPounceAttackOpenSubstate : public UPounceAttackOpenSubstate
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheDemogorgon.DemogorgonPounceAttackOpenSubstate");
		return ptr;
	}



};

// Class TheDemogorgon.DemogorgonPounceAttackSuccessSubstate
// 0x0000 (FullSize[0x00D8] - InheritedSize[0x00D8])
class UDemogorgonPounceAttackSuccessSubstate : public UPounceAttackSuccessSubstate
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheDemogorgon.DemogorgonPounceAttackSuccessSubstate");
		return ptr;
	}



};

// Class TheDemogorgon.DemogorgonPounceAttackMissSubstate
// 0x0000 (FullSize[0x00E0] - InheritedSize[0x00E0])
class UDemogorgonPounceAttackMissSubstate : public UPounceAttackMissSubstate
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheDemogorgon.DemogorgonPounceAttackMissSubstate");
		return ptr;
	}



};

// Class TheDemogorgon.DemogorgonPounceAttackObstructSubstate
// 0x0000 (FullSize[0x00E8] - InheritedSize[0x00E8])
class UDemogorgonPounceAttackObstructSubstate : public UPounceAttackObstructSubstate
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheDemogorgon.DemogorgonPounceAttackObstructSubstate");
		return ptr;
	}



};

// Class TheDemogorgon.DemogorgonPounceInteraction
// 0x00B8 (FullSize[0x06E0] - InheritedSize[0x0628])
class UDemogorgonPounceInteraction : public UChargeableInteractionDefinition
{
public:
	unsigned char                                      UnknownData_I76U[0x8];                                     // 0x0628(0x0008) Fix Super Size
	unsigned char                                      UnknownData_PUDG[0x68];                                    // 0x0630(0x0068) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UChargedAttackStateComponent*                _chargedAttackState;                                       // 0x0698(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UslasherPlayer*                              _owningSlasher;                                            // 0x06A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_64LS[0x38];                                    // 0x06A8(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheDemogorgon.DemogorgonPounceInteraction");
		return ptr;
	}



	void TriggerHuntingAudioEvent(bool IsHunting);
	void TriggerChargeCancelAudioEvent();
	void OnChargedAttackReadyChanged(bool ready);
	void OnCancelCooldownComplete();
};

// Class TheDemogorgon.DemogorgonPowerItemProgressComponent
// 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
class UDemogorgonPowerItemProgressComponent : public UPresentationItemProgressComponent
{
public:
	class UPortalPlacerStateComponent*                 _portalPlacerState;                                        // 0x00B8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheDemogorgon.DemogorgonPowerItemProgressComponent");
		return ptr;
	}



};

// Class TheDemogorgon.PortalSurvivorSubAnimInstance
// 0x0050 (FullSize[0x0540] - InheritedSize[0x04F0])
class UPortalSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance
{
public:
	unsigned char                                      UnknownData_TH16[0x40];                                    // 0x04F0(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               _isDestroyingPortal;                                       // 0x0530(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isSpooked;                                                // 0x0531(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _hasSkillCheckFailed;                                      // 0x0532(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_PK7D[0xD];                                     // 0x0533(0x000D) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheDemogorgon.PortalSurvivorSubAnimInstance");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
