#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIW_BG_Tab

#include "Basic.hpp"

#include "ProjectP_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UIW_BG_Tab.UIW_BG_Tab_C
// 0x0010 (0x02B8 - 0x02A8)
class UUIW_BG_Tab_C final : public ULWidget
{
public:
	class UHorizontalBox*                         BG_Slash_Long;                                     // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BG_Slash_Short;                                    // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UIW_BG_Tab_C">();
	}
	static class UUIW_BG_Tab_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUIW_BG_Tab_C>();
	}
};
static_assert(alignof(UUIW_BG_Tab_C) == 0x000008, "Wrong alignment on UUIW_BG_Tab_C");
static_assert(sizeof(UUIW_BG_Tab_C) == 0x0002B8, "Wrong size on UUIW_BG_Tab_C");
static_assert(offsetof(UUIW_BG_Tab_C, BG_Slash_Long) == 0x0002A8, "Member 'UUIW_BG_Tab_C::BG_Slash_Long' has a wrong offset!");
static_assert(offsetof(UUIW_BG_Tab_C, BG_Slash_Short) == 0x0002B0, "Member 'UUIW_BG_Tab_C::BG_Slash_Short' has a wrong offset!");

}
