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

// Class ThePig.PigAmbushAttack
// 0x0010 (FullSize[0x02F0] - InheritedSize[0x02E0])
class UPigAmbushAttack : public UPounceAttack
{
public:
	unsigned char                                      UnknownData_JXRX[0x10];                                    // 0x02E0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class ThePig.PigAmbushAttack");
		return ptr;
	}



};

// Class ThePig.PigAmbushAttackOpenSubstate
// 0x0008 (FullSize[0x00F8] - InheritedSize[0x00F0])
class UPigAmbushAttackOpenSubstate : public UPounceAttackOpenSubstate
{
public:
	unsigned char                                      UnknownData_GR1P[0x8];                                     // 0x00F0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class ThePig.PigAmbushAttackOpenSubstate");
		return ptr;
	}



};

// Class ThePig.PigAmbushAttackMissSubstate
// 0x0000 (FullSize[0x00E0] - InheritedSize[0x00E0])
class UPigAmbushAttackMissSubstate : public UPounceAttackMissSubstate
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class ThePig.PigAmbushAttackMissSubstate");
		return ptr;
	}



};

// Class ThePig.PigAmbushAttackObstructSubstate
// 0x0000 (FullSize[0x00E8] - InheritedSize[0x00E8])
class UPigAmbushAttackObstructSubstate : public UPounceAttackObstructSubstate
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class ThePig.PigAmbushAttackObstructSubstate");
		return ptr;
	}



};

// Class ThePig.PigAmbushAttackHittingSubstate
// 0x0000 (FullSize[0x0120] - InheritedSize[0x0120])
class UPigAmbushAttackHittingSubstate : public UPounceAttackHittingSubstate
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class ThePig.PigAmbushAttackHittingSubstate");
		return ptr;
	}



};

// Class ThePig.PigAmbushAttackSuccessSubstate
// 0x0000 (FullSize[0x00D8] - InheritedSize[0x00D8])
class UPigAmbushAttackSuccessSubstate : public UPounceAttackSuccessSubstate
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class ThePig.PigAmbushAttackSuccessSubstate");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
