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

// Class UnitTestUtilities.TestInterface
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UTestInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UnitTestUtilities.TestInterface");
		return ptr;
	}



};

// Class UnitTestUtilities.TestActor
// 0x0000 (FullSize[0x0230] - InheritedSize[0x0230])
class UTestActor : public Uactor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UnitTestUtilities.TestActor");
		return ptr;
	}



};

// Class UnitTestUtilities.TestActorComponent
// 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
class UTestActorComponent : public UactorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UnitTestUtilities.TestActorComponent");
		return ptr;
	}



};

// Class UnitTestUtilities.TestActorComponentImplementingTestInterface
// 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
class UTestActorComponentImplementingTestInterface : public UactorComponent
{
public:
	unsigned char                                      UnknownData_BSI6[0x8];                                     // 0x00B8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UnitTestUtilities.TestActorComponentImplementingTestInterface");
		return ptr;
	}



};

// Class UnitTestUtilities.TestActorImplementingTestInterface
// 0x0008 (FullSize[0x0238] - InheritedSize[0x0230])
class UTestActorImplementingTestInterface : public Uactor
{
public:
	unsigned char                                      UnknownData_T09H[0x8];                                     // 0x0230(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UnitTestUtilities.TestActorImplementingTestInterface");
		return ptr;
	}



};

// Class UnitTestUtilities.TestMovableActor
// 0x0008 (FullSize[0x0238] - InheritedSize[0x0230])
class UTestMovableActor : public Uactor
{
public:
	class UBoxComponent*                               BoxComponent;                                              // 0x0230(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class UnitTestUtilities.TestMovableActor");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
