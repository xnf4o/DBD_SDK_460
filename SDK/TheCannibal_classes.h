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

// Class TheCannibal.CannibalAnalyticsComponent
// 0x0020 (FullSize[0x0120] - InheritedSize[0x0100])
class UCannibalAnalyticsComponent : public UChainsawAnalyticsBaseComponent
{
public:
	unsigned char                                      UnknownData_769Q[0x20];                                    // 0x0100(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheCannibal.CannibalAnalyticsComponent");
		return ptr;
	}



};

// Class TheCannibal.CannibalChainsawAttack
// 0x0060 (FullSize[0x03B0] - InheritedSize[0x0350])
class UCannibalChainsawAttack : public UHillbillyChainsawAttack
{
public:
	unsigned char                                      UnknownData_YVEM[0x8];                                     // 0x0350(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTagStateBool                               _isInTantrum;                                              // 0x0358(0x0030) (Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_CM7R[0x28];                                    // 0x0388(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheCannibal.CannibalChainsawAttack");
		return ptr;
	}



};

// Class TheCannibal.CannibalChainsawAttackOpenSubstate
// 0x0018 (FullSize[0x0140] - InheritedSize[0x0128])
class UCannibalChainsawAttackOpenSubstate : public UHillbillyChainsawAttackOpenSubstate
{
public:
	unsigned char                                      UnknownData_VUBI[0x18];                                    // 0x0128(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheCannibal.CannibalChainsawAttackOpenSubstate");
		return ptr;
	}



};

// Class TheCannibal.CannibalChainsawAttackHittingSubstate
// 0x0000 (FullSize[0x0120] - InheritedSize[0x0120])
class UCannibalChainsawAttackHittingSubstate : public UHillbillyChainsawAttackHittingSubstate
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheCannibal.CannibalChainsawAttackHittingSubstate");
		return ptr;
	}



};

// Class TheCannibal.CannibalChainsawAttackSuccessSubstate
// 0x0000 (FullSize[0x00D8] - InheritedSize[0x00D8])
class UCannibalChainsawAttackSuccessSubstate : public UHillbillyChainsawAttackSuccessSubstate
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheCannibal.CannibalChainsawAttackSuccessSubstate");
		return ptr;
	}



};

// Class TheCannibal.CannibalChainsawAttackMissSubstate
// 0x0010 (FullSize[0x00F0] - InheritedSize[0x00E0])
class UCannibalChainsawAttackMissSubstate : public UHillbillyChainsawAttackMissSubstate
{
public:
	unsigned char                                      UnknownData_WJM5[0x10];                                    // 0x00E0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheCannibal.CannibalChainsawAttackMissSubstate");
		return ptr;
	}



};

// Class TheCannibal.CannibalChainsawAttackObstructSubstate
// 0x0058 (FullSize[0x0140] - InheritedSize[0x00E8])
class UCannibalChainsawAttackObstructSubstate : public UHillbillyChainsawAttackObstructSubstate
{
public:
	struct FTagStateBool                               _isInTantrum;                                              // 0x00E8(0x0030) (Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_2J1V[0x28];                                    // 0x0118(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheCannibal.CannibalChainsawAttackObstructSubstate");
		return ptr;
	}



};

// Class TheCannibal.CannibalChainsawHitEventAddon
// 0x0000 (FullSize[0x0228] - InheritedSize[0x0228])
class UCannibalChainsawHitEventAddon : public UOnEventBaseAddon
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheCannibal.CannibalChainsawHitEventAddon");
		return ptr;
	}



};

// Class TheCannibal.CannibalChainsawPowerComponent
// 0x03D8 (FullSize[0x0490] - InheritedSize[0x00B8])
class UCannibalChainsawPowerComponent : public UactorComponent
{
public:
	unsigned char                                      UnknownData_V7T2[0x8];                                     // 0x00B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPowerChargeComponent*                       _chainsawPowerCharge;                                      // 0x00C0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPowerChargeComponent*                       _chainsawPowerDischarge;                                   // 0x00C8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPowerChargeComponent*                       _tantrumPowerCharge;                                       // 0x00D0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_XIGY[0xC8];                                    // 0x00D8(0x00C8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTagStateBool                               _isInTantrum;                                              // 0x01A0(0x0030) (Net, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                _numPowerCharges;                                          // 0x01D0(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                _numPowerChargesConsumed;                                  // 0x01D4(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_ZHKX[0x8];                                     // 0x01D8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTunableStat                                _chainsawDashDuration;                                     // 0x01E0(0x0040) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTunableStat                                _chainsawPowerMaxCharge;                                   // 0x0220(0x0040) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTunableStat                                _chainsawChargeRate;                                       // 0x0260(0x0040) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTunableStat                                _chainsawMaxNumberOfCharges;                               // 0x02A0(0x0040) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _chainsawCooldownIncreaseRate;                             // 0x02E0(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTunableStat                                _chainsawCooldownDuration;                                 // 0x0308(0x0040) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _chainsawMaxCooldownDuration;                              // 0x0348(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _tantrumChargeRate;                                        // 0x0370(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _tantrumDischargeRate;                                     // 0x0398(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTunableStat                                _tantrumMaxCharge;                                         // 0x03C0(0x0040) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _tantrumDurationIncreaseRate;                              // 0x0400(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTunableStat                                _tantrumDuration;                                          // 0x0428(0x0040) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _tantrumMaxDuration;                                       // 0x0468(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheCannibal.CannibalChainsawPowerComponent");
		return ptr;
	}



	void Server_OnTantrumPowerChargeFull();
	void OnRep_NumPowerCharges(int previousNumPowerCharges);
	void OnLevelReadyToPlay();
	void Multicast_OnTantrumPowerChargeFull();
	void Local_OnTantrumPowerChargeFull();
	int GetNumberOfChainsawPowerCharges();
	void Authority_OnChainsawPowerChargeFull();
};

// Class TheCannibal.CannibalChainsawRevInteraction
// 0x0090 (FullSize[0x0720] - InheritedSize[0x0690])
class UCannibalChainsawRevInteraction : public UChainsawRevInteraction
{
public:
	unsigned char                                      UnknownData_QCEU[0x90];                                    // 0x0690(0x0090) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheCannibal.CannibalChainsawRevInteraction");
		return ptr;
	}



};

// Class TheCannibal.CannibalPowerPresentationItemProgressComponent
// 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
class UCannibalPowerPresentationItemProgressComponent : public UPresentationItemProgressComponent
{
public:
	class UCannibalChainsawPowerComponent*             _cannibalPowerChainsawComponent;                           // 0x00B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheCannibal.CannibalPowerPresentationItemProgressComponent");
		return ptr;
	}



	void SetCannibalChainsawPowerComponent(class UCannibalChainsawPowerComponent* cannibalPowerChainsawComponent);
};

// Class TheCannibal.CarburetorTuningGuideAddon
// 0x0010 (FullSize[0x0238] - InheritedSize[0x0228])
class UCarburetorTuningGuideAddon : public UOnEventBaseAddon
{
public:
	unsigned char                                      UnknownData_H44S[0x10];                                    // 0x0228(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheCannibal.CarburetorTuningGuideAddon");
		return ptr;
	}



};

// Class TheCannibal.IridescentLeatherAddon
// 0x0010 (FullSize[0x0238] - InheritedSize[0x0228])
class UIridescentLeatherAddon : public UCannibalChainsawHitEventAddon
{
public:
	unsigned char                                      UnknownData_6590[0x10];                                    // 0x0228(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheCannibal.IridescentLeatherAddon");
		return ptr;
	}



};

// Class TheCannibal.ShopLubricantAddon
// 0x0008 (FullSize[0x0230] - InheritedSize[0x0228])
class UShopLubricantAddon : public UOnEventBaseAddon
{
public:
	float                                              _auraBlockingDuration;                                     // 0x0228(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _auraVisibleDistance;                                      // 0x022C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheCannibal.ShopLubricantAddon");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
