#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIW_Security

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UIW_Window_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UIW_Security.UIW_Security_C
// 0x0040 (0x0390 - 0x0350)
class UUIW_Security_C final : public UUIW_Window_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_UIW_Security_C;                     // 0x0350(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCheckBox*                              Btn_Checkbox;                                      // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULButton*                               Btn_Confirm;                                       // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Img_Selected;                                      // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                       Text_Password;                                     // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                       Text_Username;                                     // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnLogin;                                           // 0x0380(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnLogin__DelegateSignature();
	void ExecuteUbergraph_UIW_Security(int32 EntryPoint);
	void Destruct();
	void Construct();
	void BndEvt__UIW_Security_Btn_Confirm_K2Node_ComponentBoundEvent_3_Delegate_OnFocusEvent__DelegateSignature(const struct FFocusEvent& InFocusEvent);
	void BndEvt__UIW_Security_Btn_Confirm_K2Node_ComponentBoundEvent_2_Delegate_OnFocusEvent__DelegateSignature(const struct FFocusEvent& InFocusEvent);
	void BndEvt__UIW_Security_Btn_Confirm_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature();
	struct FEventReply FocusManage(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnReady();
	struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void OnNeowizAuth(bool Result);
	void Send();
	void OnPWCommitted(const class FText& Text, ETextCommit CommitMethod);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UIW_Security_C">();
	}
	static class UUIW_Security_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUIW_Security_C>();
	}
};
static_assert(alignof(UUIW_Security_C) == 0x000008, "Wrong alignment on UUIW_Security_C");
static_assert(sizeof(UUIW_Security_C) == 0x000390, "Wrong size on UUIW_Security_C");
static_assert(offsetof(UUIW_Security_C, UberGraphFrame_UIW_Security_C) == 0x000350, "Member 'UUIW_Security_C::UberGraphFrame_UIW_Security_C' has a wrong offset!");
static_assert(offsetof(UUIW_Security_C, Btn_Checkbox) == 0x000358, "Member 'UUIW_Security_C::Btn_Checkbox' has a wrong offset!");
static_assert(offsetof(UUIW_Security_C, Btn_Confirm) == 0x000360, "Member 'UUIW_Security_C::Btn_Confirm' has a wrong offset!");
static_assert(offsetof(UUIW_Security_C, Img_Selected) == 0x000368, "Member 'UUIW_Security_C::Img_Selected' has a wrong offset!");
static_assert(offsetof(UUIW_Security_C, Text_Password) == 0x000370, "Member 'UUIW_Security_C::Text_Password' has a wrong offset!");
static_assert(offsetof(UUIW_Security_C, Text_Username) == 0x000378, "Member 'UUIW_Security_C::Text_Username' has a wrong offset!");
static_assert(offsetof(UUIW_Security_C, OnLogin) == 0x000380, "Member 'UUIW_Security_C::OnLogin' has a wrong offset!");

}

