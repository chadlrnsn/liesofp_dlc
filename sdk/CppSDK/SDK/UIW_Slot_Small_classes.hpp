#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIW_Slot_Small

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UIW_ListItem_ItemSmall_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UIW_Slot_Small.UIW_Slot_Small_C
// 0x0028 (0x0370 - 0x0348)
class UUIW_Slot_Small_C final : public UUIW_ListItem_ItemSmall_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_UIW_Slot_Small_C;                   // 0x0348(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	FMulticastInlineDelegateProperty_             OnSelected;                                        // 0x0350(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnActive;                                          // 0x0360(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnSelected__DelegateSignature(class ULItem* LItem_0);
	void OnActive__DelegateSignature(class ULItem* LItem_0);
	void ExecuteUbergraph_UIW_Slot_Small(int32 EntryPoint);
	void Destruct();
	void OnFocusLost(const struct FFocusEvent& InFocusEvent);
	void Set_Item(class UObject* ListItem);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, const struct FPointerEvent& InMouseEvent);
	void SetMoveFocusEffect();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UIW_Slot_Small_C">();
	}
	static class UUIW_Slot_Small_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUIW_Slot_Small_C>();
	}
};
static_assert(alignof(UUIW_Slot_Small_C) == 0x000008, "Wrong alignment on UUIW_Slot_Small_C");
static_assert(sizeof(UUIW_Slot_Small_C) == 0x000370, "Wrong size on UUIW_Slot_Small_C");
static_assert(offsetof(UUIW_Slot_Small_C, UberGraphFrame_UIW_Slot_Small_C) == 0x000348, "Member 'UUIW_Slot_Small_C::UberGraphFrame_UIW_Slot_Small_C' has a wrong offset!");
static_assert(offsetof(UUIW_Slot_Small_C, OnSelected) == 0x000350, "Member 'UUIW_Slot_Small_C::OnSelected' has a wrong offset!");
static_assert(offsetof(UUIW_Slot_Small_C, OnActive) == 0x000360, "Member 'UUIW_Slot_Small_C::OnActive' has a wrong offset!");

}
