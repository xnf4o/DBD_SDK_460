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

// Class StaticMeshDescription.StaticMeshDescription
// 0x0000 (FullSize[0x0398] - InheritedSize[0x0398])
class UStaticMeshDescription : public UMeshDescriptionBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class StaticMeshDescription.StaticMeshDescription");
		return ptr;
	}



	void SetVertexInstanceUV(const struct FVertexInstanceID& VertexInstanceID, const struct FVector2D& UV, int UVIndex);
	void SetPolygonGroupMaterialSlotName(const struct FPolygonGroupID& PolygonGroupID, const struct FName& SlotName);
	struct FVector2D GetVertexInstanceUV(const struct FVertexInstanceID& VertexInstanceID, int UVIndex);
	void CreateCube(const struct Fvector& center, const struct Fvector& HalfExtents, const struct FPolygonGroupID& PolygonGroup, struct FPolygonID* PolygonID_PlusX, struct FPolygonID* PolygonID_MinusX, struct FPolygonID* PolygonID_PlusY, struct FPolygonID* PolygonID_MinusY, struct FPolygonID* PolygonID_PlusZ, struct FPolygonID* PolygonID_MinusZ);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
