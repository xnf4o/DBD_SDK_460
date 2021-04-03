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

// Class AssetTags.AssetTagsSubsystem
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class UAssetTagsSubsystem : public UEngineSubsystem
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AssetTags.AssetTagsSubsystem");
		return ptr;
	}



	TArray<struct FName> GetCollectionsContainingAssetPtr(class UObject* AssetPtr);
	TArray<struct FName> GetCollectionsContainingAssetData(const struct FAssetData& AssetData);
	TArray<struct FName> GetCollectionsContainingAsset(const struct FName& AssetPathName);
	TArray<struct FName> GetCollections();
	TArray<struct FAssetData> GetAssetsInCollection(const struct FName& name);
	bool CollectionExists(const struct FName& name);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
