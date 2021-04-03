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
// Enums
//---------------------------------------------------------------------------

// Enum NiagaraShader.FNiagaraCompileEventSeverity
enum class NiagaraShader_EFNiagaraCompileEventSeverity : uint8_t
{
	FNiagaraCompileEventSeverity__Log = 0,
	FNiagaraCompileEventSeverity__Warning = 1,
	FNiagaraCompileEventSeverity__Error = 2,
	FNiagaraCompileEventSeverity__FNiagaraCompileEventSeverity_MAX = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct NiagaraShader.NiagaraDataInterfaceGeneratedFunction
// 0x0030
struct FNiagaraDataInterfaceGeneratedFunction
{
	unsigned char                                      UnknownData_QSUQ[0x30];                                    // 0x0000(0x0030) MISSED OFFSET (PADDING)

};

// ScriptStruct NiagaraShader.NiagaraDataInterfaceGPUParamInfo
// 0x0030
struct FNiagaraDataInterfaceGPUParamInfo
{
	struct FString                                     DataInterfaceHLSLSymbol;                                   // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DIClassName;                                               // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraDataInterfaceGeneratedFunction> GeneratedFunctions;                                        // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct NiagaraShader.NiagaraCompileEvent
// 0x0048
struct FNiagaraCompileEvent
{
	NiagaraShader_EFNiagaraCompileEventSeverity        severity;                                                  // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_E5J0[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     message;                                                   // 0x0008(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fguid                                       NodeGuid;                                                  // 0x0018(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Fguid                                       PinGuid;                                                   // 0x0028(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct Fguid>                               StackGuids;                                                // 0x0038(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
