#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIW_Locker

#include "Basic.hpp"

#include "ProjectP_structs.hpp"
#include "Engine_structs.hpp"
#include "UIW_Window_classes.hpp"
#include "SlateCore_structs.hpp"
#include "ProjectPContentInfo_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UIW_Locker.UIW_Locker_C
// 0x00C0 (0x0410 - 0x0350)
class UUIW_Locker_C final : public UUIW_Window_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_UIW_Locker_C;                       // 0x0350(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Ani_Move;                                          // 0x0358(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UUIW_BG_Tab_C*                          BG_Tab;                                            // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIW_Btn_Key_C*                         Btn_Back;                                          // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIW_Btn_Key_C*                         Btn_ItemInfo;                                      // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIW_Btn_Key_C*                         Btn_PutIn;                                         // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIW_Btn_Key_C*                         Btn_Scroll;                                        // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIW_Btn_Key_C*                         Btn_Tab_LeftKey;                                   // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIW_Btn_Key_C*                         Btn_Tab_RightKey;                                  // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIW_Btn_Key_C*                         Btn_TakeOut;                                       // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Group_Arrow;                                       // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIW_HasItem_Counter_C*                 HasItem_Counter;                                   // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIW_Locker_Slot_C*                     Inventory;                                         // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIW_ItemInfo_C*                        ItemInfo;                                          // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULListView*                             List_Tab;                                          // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIW_Locker_Slot_C*                     Locker;                                            // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIW_SecondTitle_Icon_C*                Title_Inventory;                                   // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIW_SecondTitle_Icon_C*                Title_Locker;                                      // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULItem*                                 SelectedItem;                                      // 0x03E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SelectedInvenIndex;                                // 0x03E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SelectedLockerIndex;                               // 0x03EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         WeaponRowCount;                                    // 0x03F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ItemRowCount;                                      // 0x03F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InvenPrevListSelectedIndex;                        // 0x03F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LockerPrevListSelectedIndex;                       // 0x03FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTileView*                              SelectedList;                                      // 0x0400(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           ListPendingTimer;                                  // 0x0408(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UIW_Locker(int32 EntryPoint);
	void BndEvt__UIW_Locker_Btn_TakeOut_K2Node_ComponentBoundEvent_2_OnActive__DelegateSignature(class UUIW_Btn_Key_C* BtnKey);
	void BndEvt__UIW_Locker_Btn_Back_K2Node_ComponentBoundEvent_1_OnActive__DelegateSignature(class UUIW_Btn_Key_C* BtnKey);
	void BndEvt__UIW_Locker_Btn_Select_K2Node_ComponentBoundEvent_0_OnActive__DelegateSignature(class UUIW_Btn_Key_C* BtnKey);
	void Construct();
	void OnReady();
	void MoveLeftTab(class UUIW_Btn_Key_C* BtnKey);
	void MoveRightTab(class UUIW_Btn_Key_C* BtnKey);
	void ChangeTab(class UObject* Item, bool bIsSelected);
	void RefreshTab();
	class UWidget* FocusedInventory(EUINavigation Navigation_0);
	class UWidget* FocusedLocker(EUINavigation Navigation_0);
	void SelectedInven(class UObject* Item, bool bIsSelected);
	void SelectedLocker(class UObject* Item, bool bIsSelected);
	void ClickInven(class UObject* Item);
	void ClickLocker(class UObject* Item);
	struct FEventReply FocusManage(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void PutIn(class UObject* Item);
	void TakeOut(class UObject* Item);
	void MoveItemToLocker(int32 Value);
	void MoveItemToInven(int32 Value);
	void PlayItemSound();
	class UWidget* NavToInvenStart(EUINavigation Navigation_0);
	class UWidget* NavToInvenEnd(EUINavigation Navigation_0);
	class UWidget* NavToLockerStart(EUINavigation Navigation_0);
	class UWidget* NavToLockerEnd(EUINavigation Navigation_0);
	void ListPendingCheck();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UIW_Locker_C">();
	}
	static class UUIW_Locker_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUIW_Locker_C>();
	}
};
static_assert(alignof(UUIW_Locker_C) == 0x000008, "Wrong alignment on UUIW_Locker_C");
static_assert(sizeof(UUIW_Locker_C) == 0x000410, "Wrong size on UUIW_Locker_C");
static_assert(offsetof(UUIW_Locker_C, UberGraphFrame_UIW_Locker_C) == 0x000350, "Member 'UUIW_Locker_C::UberGraphFrame_UIW_Locker_C' has a wrong offset!");
static_assert(offsetof(UUIW_Locker_C, Ani_Move) == 0x000358, "Member 'UUIW_Locker_C::Ani_Move' has a wrong offset!");
static_assert(offsetof(UUIW_Locker_C, BG_Tab) == 0x000360, "Member 'UUIW_Locker_C::BG_Tab' has a wrong offset!");
static_assert(offsetof(UUIW_Locker_C, Btn_Back) == 0x000368, "Member 'UUIW_Locker_C::Btn_Back' has a wrong offset!");
static_assert(offsetof(UUIW_Locker_C, Btn_ItemInfo) == 0x000370, "Member 'UUIW_Locker_C::Btn_ItemInfo' has a wrong offset!");
static_assert(offsetof(UUIW_Locker_C, Btn_PutIn) == 0x000378, "Member 'UUIW_Locker_C::Btn_PutIn' has a wrong offset!");
static_assert(offsetof(UUIW_Locker_C, Btn_Scroll) == 0x000380, "Member 'UUIW_Locker_C::Btn_Scroll' has a wrong offset!");
static_assert(offsetof(UUIW_Locker_C, Btn_Tab_LeftKey) == 0x000388, "Member 'UUIW_Locker_C::Btn_Tab_LeftKey' has a wrong offset!");
static_assert(offsetof(UUIW_Locker_C, Btn_Tab_RightKey) == 0x000390, "Member 'UUIW_Locker_C::Btn_Tab_RightKey' has a wrong offset!");
static_assert(offsetof(UUIW_Locker_C, Btn_TakeOut) == 0x000398, "Member 'UUIW_Locker_C::Btn_TakeOut' has a wrong offset!");
static_assert(offsetof(UUIW_Locker_C, Group_Arrow) == 0x0003A0, "Member 'UUIW_Locker_C::Group_Arrow' has a wrong offset!");
static_assert(offsetof(UUIW_Locker_C, HasItem_Counter) == 0x0003A8, "Member 'UUIW_Locker_C::HasItem_Counter' has a wrong offset!");
static_assert(offsetof(UUIW_Locker_C, Inventory) == 0x0003B0, "Member 'UUIW_Locker_C::Inventory' has a wrong offset!");
static_assert(offsetof(UUIW_Locker_C, ItemInfo) == 0x0003B8, "Member 'UUIW_Locker_C::ItemInfo' has a wrong offset!");
static_assert(offsetof(UUIW_Locker_C, List_Tab) == 0x0003C0, "Member 'UUIW_Locker_C::List_Tab' has a wrong offset!");
static_assert(offsetof(UUIW_Locker_C, Locker) == 0x0003C8, "Member 'UUIW_Locker_C::Locker' has a wrong offset!");
static_assert(offsetof(UUIW_Locker_C, Title_Inventory) == 0x0003D0, "Member 'UUIW_Locker_C::Title_Inventory' has a wrong offset!");
static_assert(offsetof(UUIW_Locker_C, Title_Locker) == 0x0003D8, "Member 'UUIW_Locker_C::Title_Locker' has a wrong offset!");
static_assert(offsetof(UUIW_Locker_C, SelectedItem) == 0x0003E0, "Member 'UUIW_Locker_C::SelectedItem' has a wrong offset!");
static_assert(offsetof(UUIW_Locker_C, SelectedInvenIndex) == 0x0003E8, "Member 'UUIW_Locker_C::SelectedInvenIndex' has a wrong offset!");
static_assert(offsetof(UUIW_Locker_C, SelectedLockerIndex) == 0x0003EC, "Member 'UUIW_Locker_C::SelectedLockerIndex' has a wrong offset!");
static_assert(offsetof(UUIW_Locker_C, WeaponRowCount) == 0x0003F0, "Member 'UUIW_Locker_C::WeaponRowCount' has a wrong offset!");
static_assert(offsetof(UUIW_Locker_C, ItemRowCount) == 0x0003F4, "Member 'UUIW_Locker_C::ItemRowCount' has a wrong offset!");
static_assert(offsetof(UUIW_Locker_C, InvenPrevListSelectedIndex) == 0x0003F8, "Member 'UUIW_Locker_C::InvenPrevListSelectedIndex' has a wrong offset!");
static_assert(offsetof(UUIW_Locker_C, LockerPrevListSelectedIndex) == 0x0003FC, "Member 'UUIW_Locker_C::LockerPrevListSelectedIndex' has a wrong offset!");
static_assert(offsetof(UUIW_Locker_C, SelectedList) == 0x000400, "Member 'UUIW_Locker_C::SelectedList' has a wrong offset!");
static_assert(offsetof(UUIW_Locker_C, ListPendingTimer) == 0x000408, "Member 'UUIW_Locker_C::ListPendingTimer' has a wrong offset!");

}

