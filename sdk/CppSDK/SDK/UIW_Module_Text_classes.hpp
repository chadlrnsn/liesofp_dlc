#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIW_Module_Text

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UIW_Module_Text.UIW_Module_Text_C
// 0x0040 (0x02A8 - 0x0268)
class UUIW_Module_Text_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0268(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Select;                                            // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_Name;                                         // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             FocusDispatcher;                                   // 0x0280(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FString                                 DataStr;                                           // 0x0290(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          IsEnableSelect;                                    // 0x02A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void FocusDispatcher__DelegateSignature(class UUIW_Module_Text_C* SelfObj, bool IsFocused);
	void ExecuteUbergraph_UIW_Module_Text(int32 EntryPoint);
	void OnFocusLost(const struct FFocusEvent& InFocusEvent);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UIW_Module_Text_C">();
	}
	static class UUIW_Module_Text_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUIW_Module_Text_C>();
	}
};
static_assert(alignof(UUIW_Module_Text_C) == 0x000008, "Wrong alignment on UUIW_Module_Text_C");
static_assert(sizeof(UUIW_Module_Text_C) == 0x0002A8, "Wrong size on UUIW_Module_Text_C");
static_assert(offsetof(UUIW_Module_Text_C, UberGraphFrame) == 0x000268, "Member 'UUIW_Module_Text_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUIW_Module_Text_C, Select) == 0x000270, "Member 'UUIW_Module_Text_C::Select' has a wrong offset!");
static_assert(offsetof(UUIW_Module_Text_C, Text_Name) == 0x000278, "Member 'UUIW_Module_Text_C::Text_Name' has a wrong offset!");
static_assert(offsetof(UUIW_Module_Text_C, FocusDispatcher) == 0x000280, "Member 'UUIW_Module_Text_C::FocusDispatcher' has a wrong offset!");
static_assert(offsetof(UUIW_Module_Text_C, DataStr) == 0x000290, "Member 'UUIW_Module_Text_C::DataStr' has a wrong offset!");
static_assert(offsetof(UUIW_Module_Text_C, IsEnableSelect) == 0x0002A0, "Member 'UUIW_Module_Text_C::IsEnableSelect' has a wrong offset!");

}
