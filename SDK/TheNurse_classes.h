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

// Class TheNurse.BlinkAttack
// 0x0000 (FullSize[0x02E0] - InheritedSize[0x02E0])
class UBlinkAttack : public UPounceAttack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheNurse.BlinkAttack");
		return ptr;
	}



};

// Class TheNurse.NurseBurnable
// 0x0000 (FullSize[0x0100] - InheritedSize[0x0100])
class UNurseBurnable : public UPlayerLightBurnable
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheNurse.NurseBurnable");
		return ptr;
	}



};

// Class TheNurse.BlinkAttackSuccessSubstate
// 0x0000 (FullSize[0x00D8] - InheritedSize[0x00D8])
class UBlinkAttackSuccessSubstate : public UPounceAttackSuccessSubstate
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheNurse.BlinkAttackSuccessSubstate");
		return ptr;
	}



};

// Class TheNurse.NurseAnimInstance
// 0x0008 (FullSize[0x05B0] - InheritedSize[0x05A8])
class UNurseAnimInstance : public UKillerAnimInstance
{
public:
	unsigned char                                      UnknownData_U7IF[0x8];                                     // 0x05A8(0x0008) Fix Super Size


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class TheNurse.NurseAnimInstance");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
