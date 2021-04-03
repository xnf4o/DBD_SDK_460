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
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct EngineMessages.EngineServiceNotification
// 0x0018
struct FEngineServiceNotification
{
	struct FString                                     text;                                                      // 0x0000(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                             TimeSeconds;                                               // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EngineMessages.EngineServiceTerminate
// 0x0010
struct FEngineServiceTerminate
{
	struct FString                                     UserName;                                                  // 0x0000(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EngineMessages.EngineServiceExecuteCommand
// 0x0020
struct FEngineServiceExecuteCommand
{
	struct FString                                     Command;                                                   // 0x0000(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     UserName;                                                  // 0x0010(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EngineMessages.EngineServicePong
// 0x0050
struct FEngineServicePong
{
	struct FString                                     CurrentLevel;                                              // 0x0000(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EngineVersion;                                             // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               HasBegunPlay;                                              // 0x0014(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0DBL[0x3];                                     // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct Fguid                                       InstanceId;                                                // 0x0018(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     InstanceType;                                              // 0x0028(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fguid                                       SessionId;                                                 // 0x0038(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WorldTimeSeconds;                                          // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OK6H[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct EngineMessages.EngineServiceAuthDeny
// 0x0020
struct FEngineServiceAuthDeny
{
	struct FString                                     UserName;                                                  // 0x0000(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     UserToDeny;                                                // 0x0010(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EngineMessages.EngineServicePing
// 0x0001
struct FEngineServicePing
{
	unsigned char                                      UnknownData_VYX0[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct EngineMessages.EngineServiceAuthGrant
// 0x0020
struct FEngineServiceAuthGrant
{
	struct FString                                     UserName;                                                  // 0x0000(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     UserToGrant;                                               // 0x0010(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
