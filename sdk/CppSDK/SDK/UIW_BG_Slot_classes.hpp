#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIW_BG_Slot

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UIW_BG_Slot.UIW_BG_Slot_C
// 0x0008 (0x0270 - 0x0268)
class UUIW_BG_Slot_C final : public UUserWidget
{
public:
	class UImage*                                 WC2;                                               // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UIW_BG_Slot_C">();
	}
	static class UUIW_BG_Slot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUIW_BG_Slot_C>();
	}
};
static_assert(alignof(UUIW_BG_Slot_C) == 0x000008, "Wrong alignment on UUIW_BG_Slot_C");
static_assert(sizeof(UUIW_BG_Slot_C) == 0x000270, "Wrong size on UUIW_BG_Slot_C");
static_assert(offsetof(UUIW_BG_Slot_C, WC2) == 0x000268, "Member 'UUIW_BG_Slot_C::WC2' has a wrong offset!");

}

