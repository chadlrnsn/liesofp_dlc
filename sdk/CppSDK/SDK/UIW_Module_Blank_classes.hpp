#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIW_Module_Blank

#include "Basic.hpp"

#include "UIW_Popup_Module_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UIW_Module_Blank.UIW_Module_Blank_C
// 0x0008 (0x02B8 - 0x02B0)
class UUIW_Module_Blank_C final : public UUIW_Popup_Module_C
{
public:
	class USizeBox*                               SizeBlank;                                         // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetModule(class UUIW_Popup_C* PopupWindow_0, const class FString& Data);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UIW_Module_Blank_C">();
	}
	static class UUIW_Module_Blank_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUIW_Module_Blank_C>();
	}
};
static_assert(alignof(UUIW_Module_Blank_C) == 0x000008, "Wrong alignment on UUIW_Module_Blank_C");
static_assert(sizeof(UUIW_Module_Blank_C) == 0x0002B8, "Wrong size on UUIW_Module_Blank_C");
static_assert(offsetof(UUIW_Module_Blank_C, SizeBlank) == 0x0002B0, "Member 'UUIW_Module_Blank_C::SizeBlank' has a wrong offset!");

}

