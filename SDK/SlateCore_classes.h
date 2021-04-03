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

// Class SlateCore.FontBulkData
// 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
class UFontBulkData : public UObject
{
public:
	unsigned char                                      UnknownData_W4CT[0x50];                                    // 0x0030(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class SlateCore.FontBulkData");
		return ptr;
	}



};

// Class SlateCore.FontFaceInterface
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UFontFaceInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class SlateCore.FontFaceInterface");
		return ptr;
	}



};

// Class SlateCore.FontProviderInterface
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UFontProviderInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class SlateCore.FontProviderInterface");
		return ptr;
	}



};

// Class SlateCore.SlateTypes
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class USlateTypes : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class SlateCore.SlateTypes");
		return ptr;
	}



};

// Class SlateCore.SlateWidgetStyleAsset
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class USlateWidgetStyleAsset : public UObject
{
public:
	class USlateWidgetStyleContainerBase*              CustomStyle;                                               // 0x0030(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class SlateCore.SlateWidgetStyleAsset");
		return ptr;
	}



};

// Class SlateCore.SlateWidgetStyleContainerBase
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class USlateWidgetStyleContainerBase : public UObject
{
public:
	unsigned char                                      UnknownData_400O[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class SlateCore.SlateWidgetStyleContainerBase");
		return ptr;
	}



};

// Class SlateCore.SlateWidgetStyleContainerInterface
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class USlateWidgetStyleContainerInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class SlateCore.SlateWidgetStyleContainerInterface");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
