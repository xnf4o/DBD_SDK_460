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

// Class TheNightmare.DreamSnare
// 0x0000 (FullSize[0x0230] - InheritedSize[0x0230])
class UDreamSnare : public Uactor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheNightmare.DreamSnare");
		return ptr;
	}



};

// Class TheNightmare.GeneratorTeleportInteraction
// 0x00C8 (FullSize[0x06F0] - InheritedSize[0x0628])
class UGeneratorTeleportInteraction : public UChargeableInteractionDefinition
{
public:
	unsigned char                                      UnknownData_BLUH[0x8];                                     // 0x0628(0x0008) Fix Super Size
	class UTimerObject*                                _teleportCooldownTimer;                                    // 0x0630(0x0008) (ExportObject, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_PG4J[0x40];                                    // 0x0638(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class Ugenerator*                                  _selectedGenerator;                                        // 0x0678(0x0008) (BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class Ugenerator*                                  _locallySelectedGenerator;                                 // 0x0680(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_0HBM[0x8];                                     // 0x0688(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  _selectedTeleportLocation;                                 // 0x0690(0x0030) (BlueprintVisible, Net, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	bool                                               _isInteractionOngoing;                                     // 0x06C0(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _teleportFailed;                                           // 0x06C1(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_QXXS[0x2];                                     // 0x06C2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _bloodSpurtInterval;                                       // 0x06C4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _collisionCheckCapsuleHalfHeight;                          // 0x06C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _collisionCheckCapsuleRadius;                              // 0x06CC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct Fvector                                     _collisionCheckLocationOffset;                             // 0x06D0(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _capsuleTraceAngleIncrement;                               // 0x06DC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _generatorTeleportMaxAngle;                                // 0x06E0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _downRaycastLength;                                        // 0x06E4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_NI0Q[0x8];                                     // 0x06E8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheNightmare.GeneratorTeleportInteraction");
		return ptr;
	}



	bool TeleportPlayerToLocation(class UdbdPlayer* teleportingPlayer, const struct Fvector& location, const struct FRotator& rotation);
	void StopBloodSpurts();
	void StartBloodSpurts();
	void ShowBloodSpurtsVFX();
	void Server_SetSelectedGenerator(class Ugenerator* generator);
	void OnTeleportReady();
	void OnTeleportLocationChosen(class Ugenerator* generator, const struct FTransform& location);
	void OnTeleported(const struct FTransform& transformBeforeTeleport);
	void OnSelectedGeneratorSet(class Ugenerator* selectedGenerator);
	void OnRep_TeleportCooldownTimer();
	void OnRep_SelectedGenerator();
	void OnLocallySelectedGeneratorSet(class Ugenerator* selectedGenerator);
	void OnIntroCompleted();
	void OnBloodSpurts();
	void Multicast_TeleportPlayer(const struct Fvector& location, const struct FRotator& rotation);
	void Multicast_OnTeleportLocationChosen(class Ugenerator* generator, const struct FTransform& location);
	bool IsTeleportAvailable();
	void InitializeTunableValues(class UslasherPlayer* Killer);
	class UdbdPlayer* GetOwningPlayer();
	class Ugenerator* GetInlineGenerator(class UdbdPlayer* player);
	bool CanTeleportAtGenerator(class Ugenerator* generator);
	bool Authority_TeleportPlayerToGenerator(class UdbdPlayer* playerToTeleport, class Ugenerator* generator);
	void Authority_StartTeleportCooldown(bool teleported);
};

// Class TheNightmare.InDreamSurvivorSubAnimInstance
// 0x0020 (FullSize[0x0510] - InheritedSize[0x04F0])
class UInDreamSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance
{
public:
	bool                                               _shouldLookSleepy;                                         // 0x04F0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_S1K7[0x1F];                                    // 0x04F1(0x001F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheNightmare.InDreamSurvivorSubAnimInstance");
		return ptr;
	}



};

// Class TheNightmare.NightmareAnimInstance
// 0x0008 (FullSize[0x05B0] - InheritedSize[0x05A8])
class UNightmareAnimInstance : public UKillerAnimInstance
{
public:
	unsigned char                                      UnknownData_OWKJ[0x8];                                     // 0x05A8(0x0008) Fix Super Size


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheNightmare.NightmareAnimInstance");
		return ptr;
	}



};

// Class TheNightmare.PlaceDreamPalletInteraction
// 0x0020 (FullSize[0x0520] - InheritedSize[0x0500])
class UPlaceDreamPalletInteraction : public UinteractionDefinition
{
public:
	TArray<class UPalletTracker*>                      _palletTrackers;                                           // 0x0500(0x0010) (BlueprintVisible, Net, ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_83C8[0x8];                                     // 0x0510(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPalletTracker*                              _closestTracker;                                           // 0x0518(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheNightmare.PlaceDreamPalletInteraction");
		return ptr;
	}



	void SpawnDreamPallet(class UPalletTracker* trackerAtLocation);
	void InitializeTunableValues(class UslasherPlayer* Killer);
	class UPalletTracker* GetTargetedPallet();
	bool CanSpawnDreamPalletAtTracker(class UPalletTracker* tracker);
};

// Class TheNightmare.PresentationGeneratorTeleportProgressComponent
// 0x0010 (FullSize[0x00C8] - InheritedSize[0x00B8])
class UPresentationGeneratorTeleportProgressComponent : public UPresentationItemProgressComponent
{
public:
	unsigned char                                      UnknownData_L8SW[0x10];                                    // 0x00B8(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheNightmare.PresentationGeneratorTeleportProgressComponent");
		return ptr;
	}



};

// Class TheNightmare.SetDreamSnareInteraction
// 0x0018 (FullSize[0x0640] - InheritedSize[0x0628])
class USetDreamSnareInteraction : public UChargeableInteractionDefinition
{
public:
	unsigned char                                      UnknownData_X0YT[0x4];                                     // 0x0628(0x0004) Fix Super Size
	float                                              MinPlacementDistance;                                      // 0x062C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              MaxPlacementDistance;                                      // 0x0630(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_6RLL[0xC];                                     // 0x0634(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheNightmare.SetDreamSnareInteraction");
		return ptr;
	}



	bool HasCancelledDreamSnare();
	float GetTrapDistanceFromControlRotation();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
