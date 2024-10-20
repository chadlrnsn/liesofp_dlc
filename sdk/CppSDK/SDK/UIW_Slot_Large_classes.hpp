#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIW_Slot_Large

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UIW_ListItem_ItemLarge_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UIW_Slot_Large.UIW_Slot_Large_C
// 0x0028 (0x0338 - 0x0310)
class UUIW_Slot_Large_C final : public UUIW_ListItem_ItemLarge_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_UIW_Slot_Large_C;                   // 0x0310(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	FMulticastInlineDelegateProperty_             OnSelected;                                        // 0x0318(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnActive;                                          // 0x0328(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnSelected__DelegateSignature(class ULItem* LItem_0);
	void OnActive__DelegateSignature(class ULItem* LItem_0);
	void ExecuteUbergraph_UIW_Slot_Large(int32 EntryPoint);
	void Destruct();
	void OnFocusLost(const struct FFocusEvent& InFocusEvent);
	struct FEventReply OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, const struct FPointerEvent& InMouseEvent);
	void Set_Item(class UObject* ListItem);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void SetMoveFocusEffect();
	void SetEquiped();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UIW_Slot_Large_C">();
	}
	static class UUIW_Slot_Large_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUIW_Slot_Large_C>();
	}
};
static_assert(alignof(UUIW_Slot_Large_C) == 0x000008, "Wrong alignment on UUIW_Slot_Large_C");
static_assert(sizeof(UUIW_Slot_Large_C) == 0x000338, "Wrong size on UUIW_Slot_Large_C");
static_assert(offsetof(UUIW_Slot_Large_C, UberGraphFrame_UIW_Slot_Large_C) == 0x000310, "Member 'UUIW_Slot_Large_C::UberGraphFrame_UIW_Slot_Large_C' has a wrong offset!");
static_assert(offsetof(UUIW_Slot_Large_C, OnSelected) == 0x000318, "Member 'UUIW_Slot_Large_C::OnSelected' has a wrong offset!");
static_assert(offsetof(UUIW_Slot_Large_C, OnActive) == 0x000328, "Member 'UUIW_Slot_Large_C::OnActive' has a wrong offset!");

}

