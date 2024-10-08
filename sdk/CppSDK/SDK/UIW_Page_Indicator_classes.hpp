#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIW_Page_Indicator

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UIW_Page_Indicator.UIW_Page_Indicator_C
// 0x0008 (0x0270 - 0x0268)
class UUIW_Page_Indicator_C final : public UUserWidget
{
public:
	class UHorizontalBox*                         Group_Page;                                        // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetData(int32 Current, int32 Max);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UIW_Page_Indicator_C">();
	}
	static class UUIW_Page_Indicator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUIW_Page_Indicator_C>();
	}
};
static_assert(alignof(UUIW_Page_Indicator_C) == 0x000008, "Wrong alignment on UUIW_Page_Indicator_C");
static_assert(sizeof(UUIW_Page_Indicator_C) == 0x000270, "Wrong size on UUIW_Page_Indicator_C");
static_assert(offsetof(UUIW_Page_Indicator_C, Group_Page) == 0x000268, "Member 'UUIW_Page_Indicator_C::Group_Page' has a wrong offset!");

}

