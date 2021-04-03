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

// ScriptStruct WebBrowser.WebJSCallbackBase
// 0x0020
struct FWebJSCallbackBase
{
	unsigned char                                      UnknownData_BOA8[0x20];                                    // 0x0000(0x0020) MISSED OFFSET (PADDING)

};

// ScriptStruct WebBrowser.WebJSFunction
// 0x0000 (0x0020 - 0x0020)
struct FWebJSFunction : public FWebJSCallbackBase
{

};

// ScriptStruct WebBrowser.WebJSResponse
// 0x0000 (0x0020 - 0x0020)
struct FWebJSResponse : public FWebJSCallbackBase
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
