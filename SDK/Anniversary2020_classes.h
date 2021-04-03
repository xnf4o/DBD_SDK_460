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

// Class Anniversary2020.Anniversary2020EventComponent
// 0x0070 (FullSize[0x0128] - InheritedSize[0x00B8])
class UAnniversary2020EventComponent : public UactorComponent
{
public:
	bool                                               _enableDebugCrownPillarPositionSwitchTimer;                // 0x00B8(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_KYRY[0x7];                                     // 0x00B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSpeedBasedNetSyncedValue                   _debugCrownPillarPositionSwitchTimeRemaining;              // 0x00C0(0x0038) (Net, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_NLST[0x30];                                    // 0x00F8(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Anniversary2020.Anniversary2020EventComponent");
		return ptr;
	}



	void Debug_Server_ShowCrownPillarPositionSwitchTimer(bool Value);
	void Debug_Server_EnableAllCrownPillarsAndKeepEnabled(bool Value);
	void DBD_UnequipAnniversaryCrown();
	void DBD_ShowCrownPillarTeleportTimer(bool Value);
	void DBD_ShowAllCrownPillarPositions(bool Value);
	void DBD_EnableAllCrownPillars(bool Value);
};

// Class Anniversary2020.CrownCollectable
// 0x0028 (FullSize[0x0448] - InheritedSize[0x0420])
class UCrownCollectable : public Ucollectable
{
public:
	unsigned char                                      UnknownData_LELC[0x28];                                    // 0x0420(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Anniversary2020.CrownCollectable");
		return ptr;
	}



};

// Class Anniversary2020.CrownPickupInteraction
// 0x0058 (FullSize[0x0680] - InheritedSize[0x0628])
class UCrownPickupInteraction : public UChargeableInteractionDefinition
{
public:
	unsigned char                                      UnknownData_CRKO[0x8];                                     // 0x0628(0x0008) Fix Super Size
	unsigned char                                      UnknownData_SPMG[0x28];                                    // 0x0630(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       _attachToSocketName;                                       // 0x0658(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_CH5I[0x4];                                     // 0x0664(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      _collectableClass;                                         // 0x0668(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCrownPillarPositioner*                      _crownPillarPositioner;                                    // 0x0670(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _isInteractionChargeComplete;                              // 0x0678(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_ICH0[0x7];                                     // 0x0679(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Anniversary2020.CrownPickupInteraction");
		return ptr;
	}



};

// Class Anniversary2020.CrownPillarInteractable
// 0x0058 (FullSize[0x0330] - InheritedSize[0x02D8])
class UCrownPillarInteractable : public Uinteractable
{
public:
	float                                              _survivorChargeDuration;                                   // 0x02D8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _slasherChargeDuration;                                    // 0x02DC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isHidden;                                                 // 0x02E0(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_N26Z[0x7];                                     // 0x02E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCrownPickupInteraction*                     _survivorCrownPickup;                                      // 0x02E8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCrownPickupInteraction*                     _slasherCrownPickup;                                       // 0x02F0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_5C9J[0x20];                                    // 0x02F8(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               _debugForcePillarStayEnabled;                              // 0x0318(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_VAZZ[0x7];                                     // 0x0319(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      _debugIndicatorBlueprintClass;                             // 0x0320(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDebugIndicator*                             _spawnedCrownPillarDebugIndicator;                         // 0x0328(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Anniversary2020.CrownPillarInteractable");
		return ptr;
	}



	void OnRep_IsHidden();
	void OnCrownPillarInteractionStartedCosmetic(bool isCamperInteracting, class UdbdPlayer* interactingPlayer);
	void OnCrownPillarInteractionEndedCosmetic(bool isCamperInteracting, class UdbdPlayer* interactingPlayer, bool isInteractionComplete);
	void OnCrownPillarEnabled();
	void OnCrownPillarDisabled();
	bool IsLocallyObservedPlayerEquippedWithAnniversaryOffering();
	class UCrownPickupInteraction* GetSurvivorCrownPickupInteraction();
	float GetSurvivorChargeDuration();
	class UCrownPickupInteraction* GetSlasherCrownPickupInteraction();
	float GetSlasherChargeDuration();
};

// Class Anniversary2020.CrownPillarPositioner
// 0x0050 (FullSize[0x0108] - InheritedSize[0x00B8])
class UCrownPillarPositioner : public UactorComponent
{
public:
	TArray<class UCrownPillarInteractable*>            _crownPillars;                                             // 0x00B8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_9ZYC[0x40];                                    // 0x00C8(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Anniversary2020.CrownPillarPositioner");
		return ptr;
	}



	void Authority_OnLevelReadyToPlay();
	TArray<class UCrownPillarInteractable*> Authority_GetCrownPillars();
};

// Class Anniversary2020.CrownPillarUtilities
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UCrownPillarUtilities : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Anniversary2020.CrownPillarUtilities");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
