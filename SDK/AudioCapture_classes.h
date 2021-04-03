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

// Class AudioCapture.AudioCaptureComponent
// 0x00C0 (FullSize[0x07B0] - InheritedSize[0x06F0])
class UAudioCaptureComponent : public USynthComponent
{
public:
	int                                                JitterLatencyFrames;                                       // 0x06F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_C296[0xBC];                                    // 0x06F4(0x00BC) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AudioCapture.AudioCaptureComponent");
		return ptr;
	}



};

// Class AudioCapture.AudioCapture
// 0x0008 (FullSize[0x00B8] - InheritedSize[0x00B0])
class UAudioCapture : public UAudioGenerator
{
public:
	unsigned char                                      UnknownData_5S8Q[0x8];                                     // 0x00B0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AudioCapture.AudioCapture");
		return ptr;
	}



	void StopCapturingAudio();
	void StartCapturingAudio();
	bool IsCapturingAudio();
	bool GetAudioCaptureDeviceInfo(struct FAudioCaptureDeviceInfo* OutInfo);
};

// Class AudioCapture.AudioCaptureFunctionLibrary
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UAudioCaptureFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AudioCapture.AudioCaptureFunctionLibrary");
		return ptr;
	}



	class UAudioCapture* STATIC_CreateAudioCapture();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
