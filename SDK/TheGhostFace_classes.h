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

// Class TheGhostFace.GhostfaceCrouchAttack
// 0x0000 (FullSize[0x02E0] - InheritedSize[0x02E0])
class UGhostfaceCrouchAttack : public UPounceAttack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheGhostFace.GhostfaceCrouchAttack");
		return ptr;
	}



};

// Class TheGhostFace.GhostKillerAnalyticsComponent
// 0x0110 (FullSize[0x01C8] - InheritedSize[0x00B8])
class UGhostKillerAnalyticsComponent : public UactorComponent
{
public:
	unsigned char                                      UnknownData_9WDA[0x38];                                    // 0x00B8(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGhostKillerAnalytics                       _ghostKillerAnalytics;                                     // 0x00F0(0x00B0) (Net, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_H7M8[0x28];                                    // 0x01A0(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheGhostFace.GhostKillerAnalyticsComponent");
		return ptr;
	}



	void Local_OnStalkModeChanged(bool isInStalkMode);
	void Local_OnLeanStateChanged(DBDSharedTypes_ELeanState leanState);
	void Local_OnIsStealthChanged(bool isStealth);
	void Authority_OnStalkChargePercentChanged(class UchargeableComponent* chargeableComponent, float percentCompletionChange, float totalPercentComplete);
	void Authority_OnPreAttackSuccess(const struct FgameplayTag& gameplayTag, const struct FgameEventData& gameEventData);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
