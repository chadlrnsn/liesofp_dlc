#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIW_Drag_CmdLines

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UIW_Drag_CmdLines.UIW_Drag_CmdLines_C
// 0x0010 (0x0278 - 0x0268)
class UUIW_Drag_CmdLines_C final : public UUserWidget
{
public:
	class UTextBlock*                             Label;                                             // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUserWidget*                            WidgetReference;                                   // 0x0270(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UIW_Drag_CmdLines_C">();
	}
	static class UUIW_Drag_CmdLines_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUIW_Drag_CmdLines_C>();
	}
};
static_assert(alignof(UUIW_Drag_CmdLines_C) == 0x000008, "Wrong alignment on UUIW_Drag_CmdLines_C");
static_assert(sizeof(UUIW_Drag_CmdLines_C) == 0x000278, "Wrong size on UUIW_Drag_CmdLines_C");
static_assert(offsetof(UUIW_Drag_CmdLines_C, Label) == 0x000268, "Member 'UUIW_Drag_CmdLines_C::Label' has a wrong offset!");
static_assert(offsetof(UUIW_Drag_CmdLines_C, WidgetReference) == 0x000270, "Member 'UUIW_Drag_CmdLines_C::WidgetReference' has a wrong offset!");

}

