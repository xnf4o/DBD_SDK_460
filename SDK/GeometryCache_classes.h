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

// Class GeometryCache.GeometryCache
// 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
class UGeometryCache : public UObject
{
public:
	unsigned char                                      UnknownData_NCG0[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UmaterialInterface*>                  Materials;                                                 // 0x0038(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UGeometryCacheTrack*>                 Tracks;                                                    // 0x0048(0x0010) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_STWY[0x10];                                    // 0x0058(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                StartFrame;                                                // 0x0068(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                EndFrame;                                                  // 0x006C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GeometryCache.GeometryCache");
		return ptr;
	}



};

// Class GeometryCache.GeometryCacheActor
// 0x0008 (FullSize[0x0238] - InheritedSize[0x0230])
class UGeometryCacheActor : public Uactor
{
public:
	class UGeometryCacheComponent*                     GeometryCacheComponent;                                    // 0x0230(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GeometryCache.GeometryCacheActor");
		return ptr;
	}



	class UGeometryCacheComponent* GetGeometryCacheComponent();
};

// Class GeometryCache.GeometryCacheCodecBase
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UGeometryCacheCodecBase : public UObject
{
public:
	TArray<int>                                        TopologyRanges;                                            // 0x0030(0x0010) (Edit, ZeroConstructor, EditConst, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GeometryCache.GeometryCacheCodecBase");
		return ptr;
	}



};

// Class GeometryCache.GeometryCacheCodecRaw
// 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
class UGeometryCacheCodecRaw : public UGeometryCacheCodecBase
{
public:
	int                                                DummyProperty;                                             // 0x0040(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_GUYJ[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GeometryCache.GeometryCacheCodecRaw");
		return ptr;
	}



};

// Class GeometryCache.GeometryCacheCodecV1
// 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
class UGeometryCacheCodecV1 : public UGeometryCacheCodecBase
{
public:
	unsigned char                                      UnknownData_7L0D[0x8];                                     // 0x0040(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GeometryCache.GeometryCacheCodecV1");
		return ptr;
	}



};

// Class GeometryCache.GeometryCacheComponent
// 0x0058 (FullSize[0x04D0] - InheritedSize[0x0478])
class UGeometryCacheComponent : public UMeshComponent
{
public:
	class UGeometryCache*                              GeometryCache;                                             // 0x0478(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRunning;                                                  // 0x0480(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bLooping;                                                  // 0x0481(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_FVJ4[0x2];                                     // 0x0482(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              StartTimeOffset;                                           // 0x0484(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              PlaybackSpeed;                                             // 0x0488(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                NumTracks;                                                 // 0x048C(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              ElapsedTime;                                               // 0x0490(0x0004) (Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_FX88[0x30];                                    // 0x0494(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              duration;                                                  // 0x04C4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bManualTick;                                               // 0x04C8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_JFBI[0x7];                                     // 0x04C9(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GeometryCache.GeometryCacheComponent");
		return ptr;
	}



	void TickAtThisTime(float time, bool bInIsRunning, bool bInBackwards, bool bInIsLooping);
	void stop();
	void SetStartTimeOffset(float NewStartTimeOffset);
	void SetPlaybackSpeed(float NewPlaybackSpeed);
	void SetLooping(bool bNewLooping);
	bool SetGeometryCache(class UGeometryCache* NewGeomCache);
	void PlayReversedFromEnd();
	void PlayReversed();
	void PlayFromStart();
	void Play();
	void Pause();
	bool IsPlayingReversed();
	bool IsPlaying();
	bool IsLooping();
	float GetStartTimeOffset();
	float GetPlaybackSpeed();
	float GetPlaybackDirection();
	int GetNumberOfFrames();
	float GetDuration();
	float GetAnimationTime();
};

// Class GeometryCache.GeometryCacheTrack
// 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
class UGeometryCacheTrack : public UObject
{
public:
	float                                              duration;                                                  // 0x0030(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_2ASQ[0x2C];                                    // 0x0034(0x002C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GeometryCache.GeometryCacheTrack");
		return ptr;
	}



};

// Class GeometryCache.GeometryCacheTrack_FlipbookAnimation
// 0x0028 (FullSize[0x0088] - InheritedSize[0x0060])
class UGeometryCacheTrack_FlipbookAnimation : public UGeometryCacheTrack
{
public:
	uint32_t                                           NumMeshSamples;                                            // 0x0060(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_JOWE[0x24];                                    // 0x0064(0x0024) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GeometryCache.GeometryCacheTrack_FlipbookAnimation");
		return ptr;
	}



	void AddMeshSample(const struct FGeometryCacheMeshData& MeshData, float SampleTime);
};

// Class GeometryCache.GeometryCacheTrackStreamable
// 0x0078 (FullSize[0x00D8] - InheritedSize[0x0060])
class UGeometryCacheTrackStreamable : public UGeometryCacheTrack
{
public:
	class UGeometryCacheCodecBase*                     Codec;                                                     // 0x0060(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9FEL[0x68];                                    // 0x0068(0x0068) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              StartSampleTime;                                           // 0x00D0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_WYA8[0x4];                                     // 0x00D4(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GeometryCache.GeometryCacheTrackStreamable");
		return ptr;
	}



};

// Class GeometryCache.GeometryCacheTrack_TransformAnimation
// 0x00A8 (FullSize[0x0108] - InheritedSize[0x0060])
class UGeometryCacheTrack_TransformAnimation : public UGeometryCacheTrack
{
public:
	unsigned char                                      UnknownData_U4V5[0xA8];                                    // 0x0060(0x00A8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GeometryCache.GeometryCacheTrack_TransformAnimation");
		return ptr;
	}



	void SetMesh(const struct FGeometryCacheMeshData& NewMeshData);
};

// Class GeometryCache.GeometryCacheTrack_TransformGroupAnimation
// 0x00A8 (FullSize[0x0108] - InheritedSize[0x0060])
class UGeometryCacheTrack_TransformGroupAnimation : public UGeometryCacheTrack
{
public:
	unsigned char                                      UnknownData_6JXK[0xA8];                                    // 0x0060(0x00A8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class GeometryCache.GeometryCacheTrack_TransformGroupAnimation");
		return ptr;
	}



	void SetMesh(const struct FGeometryCacheMeshData& NewMeshData);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
