#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIW_ContextMenu

#include "Basic.hpp"

#include "ProjectP_classes.hpp"
#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UIW_ContextMenu.UIW_ContextMenu_C
// 0x0048 (0x02F0 - 0x02A8)
class UUIW_ContextMenu_C final : public ULWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           BG;                                                // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Btn_BG;                                            // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           ListBox;                                           // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Menu;                                              // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIW_Window_C*                          Window;                                            // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   EventName;                                         // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           Timer;                                             // 0x02E0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          IsOpenStart;                                       // 0x02E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_UIW_ContextMenu(int32 EntryPoint);
	void Destruct();
	void Construct();
	void BndEvt__Button_126_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature();
	void Set_Context_Menu(class UUIW_Window_C* Window_0, const TMap<class FName, class FText>& MenuList, const struct FVector2D& Position);
	void ReleasedButton(class FName EventName_0);
	struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void SelectedButton(class FName EventName_0);
	void OnSelect();
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void FirstFocus();
	void Close();
	struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UIW_ContextMenu_C">();
	}
	static class UUIW_ContextMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUIW_ContextMenu_C>();
	}
};
static_assert(alignof(UUIW_ContextMenu_C) == 0x000008, "Wrong alignment on UUIW_ContextMenu_C");
static_assert(sizeof(UUIW_ContextMenu_C) == 0x0002F0, "Wrong size on UUIW_ContextMenu_C");
static_assert(offsetof(UUIW_ContextMenu_C, UberGraphFrame) == 0x0002A8, "Member 'UUIW_ContextMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUIW_ContextMenu_C, BG) == 0x0002B0, "Member 'UUIW_ContextMenu_C::BG' has a wrong offset!");
static_assert(offsetof(UUIW_ContextMenu_C, Btn_BG) == 0x0002B8, "Member 'UUIW_ContextMenu_C::Btn_BG' has a wrong offset!");
static_assert(offsetof(UUIW_ContextMenu_C, ListBox) == 0x0002C0, "Member 'UUIW_ContextMenu_C::ListBox' has a wrong offset!");
static_assert(offsetof(UUIW_ContextMenu_C, Menu) == 0x0002C8, "Member 'UUIW_ContextMenu_C::Menu' has a wrong offset!");
static_assert(offsetof(UUIW_ContextMenu_C, Window) == 0x0002D0, "Member 'UUIW_ContextMenu_C::Window' has a wrong offset!");
static_assert(offsetof(UUIW_ContextMenu_C, EventName) == 0x0002D8, "Member 'UUIW_ContextMenu_C::EventName' has a wrong offset!");
static_assert(offsetof(UUIW_ContextMenu_C, Timer) == 0x0002E0, "Member 'UUIW_ContextMenu_C::Timer' has a wrong offset!");
static_assert(offsetof(UUIW_ContextMenu_C, IsOpenStart) == 0x0002E8, "Member 'UUIW_ContextMenu_C::IsOpenStart' has a wrong offset!");

}
