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

// Class AutomationUtils.AutomationUtilsBlueprintLibrary
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UAutomationUtilsBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class AutomationUtils.AutomationUtilsBlueprintLibrary");
		return ptr;
	}



	void STATIC_TakeGameplayAutomationScreenshot(const struct FString& ScreenshotName, float MaxGlobalError, float MaxLocalError, const struct FString& MapNameOverride);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
