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

// Class Halloween2020.BlightedSerumAddon
// 0x0058 (FullSize[0x0270] - InheritedSize[0x0218])
class UBlightedSerumAddon : public UItemAddon
{
public:
	class UClass*                                      _blightedSerumCollectable;                                 // 0x0218(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBlightedSerumDashInteraction*               _dashInteraction;                                          // 0x0220(0x0008) (ExportObject, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                _theBlightExtraTokens;                                     // 0x0228(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                _numberOfDashesPerEvent;                                   // 0x022C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_F9AV[0x40];                                    // 0x0230(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Halloween2020.BlightedSerumAddon");
		return ptr;
	}



	void OnRep_DashInteraction();
	void OnBlightedDashEnabledVfxSfx();
};

// Class Halloween2020.BlightedSerumCollisionInteraction
// 0x0020 (FullSize[0x0520] - InheritedSize[0x0500])
class UBlightedSerumCollisionInteraction : public UinteractionDefinition
{
public:
	class UBlightedSerumCooldownInteraction*           _cooldownInteraction;                                      // 0x0500(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _bounceTime;                                               // 0x0508(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_MLAV[0x14];                                    // 0x050C(0x0014) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Halloween2020.BlightedSerumCollisionInteraction");
		return ptr;
	}



	void SetCooldownInteraction(class UBlightedSerumCooldownInteraction* cooldownInteraction);
};

// Class Halloween2020.BlightedSerumCooldownInteraction
// 0x0010 (FullSize[0x0510] - InheritedSize[0x0500])
class UBlightedSerumCooldownInteraction : public UinteractionDefinition
{
public:
	float                                              _cooldownTime;                                             // 0x0500(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _cameraPitchRecenterTime;                                  // 0x0504(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_JMIY[0x8];                                     // 0x0508(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Halloween2020.BlightedSerumCooldownInteraction");
		return ptr;
	}



};

// Class Halloween2020.BlightedSerumDashInteraction
// 0x00A0 (FullSize[0x05A0] - InheritedSize[0x0500])
class UBlightedSerumDashInteraction : public UinteractionDefinition
{
public:
	class UBlightedSerumCooldownInteraction*           _cooldownInteraction;                                      // 0x0500(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBlightedSerumCollisionInteraction*          _collisionInteraction;                                     // 0x0508(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCurveFloat*                                 _dashSpeedCurve;                                           // 0x0510(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCurveFloat*                                 _lookAngleToTurnRateCurveController;                       // 0x0518(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCurveFloat*                                 _lookAngleToTurnRateCurveMouse;                            // 0x0520(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _dashDuration;                                             // 0x0528(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _vectorInterpToSpeed;                                      // 0x052C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _wallDashAccelerationMultiplier;                           // 0x0530(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _cameraPitchRecenterTime;                                  // 0x0534(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _lookAngleTurnRateModifier;                                // 0x0538(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _wallDashCollisionRadius;                                  // 0x053C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _wallDashCollisionHeight;                                  // 0x0540(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _wallDashCollisionRange;                                   // 0x0544(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_ZGYI[0x58];                                    // 0x0548(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Halloween2020.BlightedSerumDashInteraction");
		return ptr;
	}



	void SetCooldownInteraction(class UBlightedSerumCooldownInteraction* cooldownInteraction);
	void SetCollisionInteraction(class UBlightedSerumCollisionInteraction* collisionInteraction);
};

// Class Halloween2020.ToxinPlantInteractable
// 0x0008 (FullSize[0x02E8] - InheritedSize[0x02E0])
class UToxinPlantInteractable : public USpecialBehaviourInteractable
{
public:
	unsigned char                                      UnknownData_13OS[0x8];                                     // 0x02E0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Halloween2020.ToxinPlantInteractable");
		return ptr;
	}



	void SetToxinPlantComplete(bool isComplete);
	void OnToxinPlantComplete();
	void OnSalvageInteractionStart();
	void OnSalvageInteractionFinished();
	bool IsToxinPlantComplete();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
