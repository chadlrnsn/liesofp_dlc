#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIW_Popup

#include "Basic.hpp"

#include "UIW_Window_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UIW_Popup.UIW_Popup_C
// 0x0050 (0x03A0 - 0x0350)
class UUIW_Popup_C final : public UUIW_Window_C
{
public:
	class UCanvasPanel*                           Canvas_BG;                                         // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           Contents_Group;                                    // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           Panel_Contents;                                    // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         Panel_Key;                                         // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                   PopupRowName;                                      // 0x0370(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnActiveKey;                                       // 0x0378(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class UUIW_Popup_Module_C*>            ModuleList;                                        // 0x0388(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UUIW_Popup_BG_C*                        CurrentBG;                                         // 0x0398(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnActiveKey__DelegateSignature(class UUIW_Popup_C* Popup, class UUIW_Btn_Key_C* BtnKey);
	void SetPopup(class FName PopupRowName_0);
	void ActiveKey(class UUIW_Btn_Key_C* BtnKey);
	void RepeatKey(class UUIW_Btn_Key_C* BtnKey);
	struct FEventReply FocusManage(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void SetText(const class FString& Title, const class FText& Desc);
	void SetKeyHoldTime(float Time);
	void SetResource(const class FString& Title, TArray<class UObject*>& ListItems);
	void SetCostGain(TArray<class UObject*>& CostList, TArray<class UObject*>& GainList);
	void GetResourceListView(class UListView** ListView);
	void RequestCloseWindow();
	void SetContentsSize();
	struct FEventReply OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void SetEnabledWindow(bool IsEnabled);
	void CheckFocus();
	void OnCompleteTweenEvent(class FName Name_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UIW_Popup_C">();
	}
	static class UUIW_Popup_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUIW_Popup_C>();
	}
};
static_assert(alignof(UUIW_Popup_C) == 0x000008, "Wrong alignment on UUIW_Popup_C");
static_assert(sizeof(UUIW_Popup_C) == 0x0003A0, "Wrong size on UUIW_Popup_C");
static_assert(offsetof(UUIW_Popup_C, Canvas_BG) == 0x000350, "Member 'UUIW_Popup_C::Canvas_BG' has a wrong offset!");
static_assert(offsetof(UUIW_Popup_C, Contents_Group) == 0x000358, "Member 'UUIW_Popup_C::Contents_Group' has a wrong offset!");
static_assert(offsetof(UUIW_Popup_C, Panel_Contents) == 0x000360, "Member 'UUIW_Popup_C::Panel_Contents' has a wrong offset!");
static_assert(offsetof(UUIW_Popup_C, Panel_Key) == 0x000368, "Member 'UUIW_Popup_C::Panel_Key' has a wrong offset!");
static_assert(offsetof(UUIW_Popup_C, PopupRowName) == 0x000370, "Member 'UUIW_Popup_C::PopupRowName' has a wrong offset!");
static_assert(offsetof(UUIW_Popup_C, OnActiveKey) == 0x000378, "Member 'UUIW_Popup_C::OnActiveKey' has a wrong offset!");
static_assert(offsetof(UUIW_Popup_C, ModuleList) == 0x000388, "Member 'UUIW_Popup_C::ModuleList' has a wrong offset!");
static_assert(offsetof(UUIW_Popup_C, CurrentBG) == 0x000398, "Member 'UUIW_Popup_C::CurrentBG' has a wrong offset!");

}
