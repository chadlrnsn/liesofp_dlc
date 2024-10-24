#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIW_MonadBuff

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ProjectPContentInfo_structs.hpp"
#include "UIW_Window_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UIW_MonadBuff.UIW_MonadBuff_C
// 0x00C8 (0x0418 - 0x0350)
class UUIW_MonadBuff_C final : public UUIW_Window_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_UIW_MonadBuff_C;                    // 0x0350(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Ani_Swap;                                          // 0x0358(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UUIW_Btn_Key_C*                         Btn_Back;                                          // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIW_Btn_Key_C*                         Btn_Equip;                                         // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIW_Btn_Key_C*                         Btn_ItemInfo;                                      // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIW_Btn_Key_C*                         Btn_Scroll;                                        // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Item_1;                                        // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_UnitIcon;                                      // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULTileView*                             List_Item;                                         // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIW_SubTitle_C*                        Subtitle;                                          // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_ItemName;                                     // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_ItemType;                                     // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_Tooltip_1;                                    // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_Tooltip_2;                                    // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_UnitInfo;                                     // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_UnitTitle;                                    // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIW_BG_Title_C*                        UIW_BG_Title;                                      // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIW_Fx_Slot_Bg_C*                      UIW_Fx_Slot_Bg;                                    // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIW_HasItem_Counter_C*                 UIW_HasItem_Counter;                               // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIW_ItemInfo_C*                        UIW_ItemInfo;                                      // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIW_NoContents_C*                      UIW_NoContents;                                    // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULItem*                                 SelectedUnitItem;                                  // 0x03F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ELItemSecondCategory                          SecondCategory;                                    // 0x0400(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_401[0x7];                                      // 0x0401(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ULItem*                                 MonadBuffItem;                                     // 0x0408(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PrevListSelectedIndex;                             // 0x0410(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ColumnCount;                                       // 0x0414(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UIW_MonadBuff(int32 EntryPoint);
	void BndEvt__UIW_MonadBuff_List_Item_K2Node_ComponentBoundEvent_2_OnListItemSelectionChangedDynamic__DelegateSignature(class UObject* Item, bool bIsSelected);
	void BndEvt__UIW_Transition_Btn_Equip_K2Node_ComponentBoundEvent_1_OnActive__DelegateSignature(class UUIW_Btn_Key_C* BtnKey);
	void BndEvt__UIW_Transition_Btn_Back_K2Node_ComponentBoundEvent_0_OnActive__DelegateSignature(class UUIW_Btn_Key_C* BtnKey);
	void Construct();
	void OnReady();
	void OnSelectedChanged(class UObject* Item, bool bIsSelected);
	void OnDoubleClicked(class UObject* Item);
	void SetItem();
	void RefreshInvenItem();
	void AddEventBinding();
	void ClearEventBinding();
	struct FEventReply FocusManage(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void CallbackContextMenu(class FName EventName);
	class UWidget* NavToTop(EUINavigation Navigation_0);
	class UWidget* NavToBottom(EUINavigation Navigation_0);
	class UWidget* NavToLRLoop(EUINavigation Navigation_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UIW_MonadBuff_C">();
	}
	static class UUIW_MonadBuff_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUIW_MonadBuff_C>();
	}
};
static_assert(alignof(UUIW_MonadBuff_C) == 0x000008, "Wrong alignment on UUIW_MonadBuff_C");
static_assert(sizeof(UUIW_MonadBuff_C) == 0x000418, "Wrong size on UUIW_MonadBuff_C");
static_assert(offsetof(UUIW_MonadBuff_C, UberGraphFrame_UIW_MonadBuff_C) == 0x000350, "Member 'UUIW_MonadBuff_C::UberGraphFrame_UIW_MonadBuff_C' has a wrong offset!");
static_assert(offsetof(UUIW_MonadBuff_C, Ani_Swap) == 0x000358, "Member 'UUIW_MonadBuff_C::Ani_Swap' has a wrong offset!");
static_assert(offsetof(UUIW_MonadBuff_C, Btn_Back) == 0x000360, "Member 'UUIW_MonadBuff_C::Btn_Back' has a wrong offset!");
static_assert(offsetof(UUIW_MonadBuff_C, Btn_Equip) == 0x000368, "Member 'UUIW_MonadBuff_C::Btn_Equip' has a wrong offset!");
static_assert(offsetof(UUIW_MonadBuff_C, Btn_ItemInfo) == 0x000370, "Member 'UUIW_MonadBuff_C::Btn_ItemInfo' has a wrong offset!");
static_assert(offsetof(UUIW_MonadBuff_C, Btn_Scroll) == 0x000378, "Member 'UUIW_MonadBuff_C::Btn_Scroll' has a wrong offset!");
static_assert(offsetof(UUIW_MonadBuff_C, Img_Item_1) == 0x000380, "Member 'UUIW_MonadBuff_C::Img_Item_1' has a wrong offset!");
static_assert(offsetof(UUIW_MonadBuff_C, Img_UnitIcon) == 0x000388, "Member 'UUIW_MonadBuff_C::Img_UnitIcon' has a wrong offset!");
static_assert(offsetof(UUIW_MonadBuff_C, List_Item) == 0x000390, "Member 'UUIW_MonadBuff_C::List_Item' has a wrong offset!");
static_assert(offsetof(UUIW_MonadBuff_C, Subtitle) == 0x000398, "Member 'UUIW_MonadBuff_C::Subtitle' has a wrong offset!");
static_assert(offsetof(UUIW_MonadBuff_C, Text_ItemName) == 0x0003A0, "Member 'UUIW_MonadBuff_C::Text_ItemName' has a wrong offset!");
static_assert(offsetof(UUIW_MonadBuff_C, Text_ItemType) == 0x0003A8, "Member 'UUIW_MonadBuff_C::Text_ItemType' has a wrong offset!");
static_assert(offsetof(UUIW_MonadBuff_C, Text_Tooltip_1) == 0x0003B0, "Member 'UUIW_MonadBuff_C::Text_Tooltip_1' has a wrong offset!");
static_assert(offsetof(UUIW_MonadBuff_C, Text_Tooltip_2) == 0x0003B8, "Member 'UUIW_MonadBuff_C::Text_Tooltip_2' has a wrong offset!");
static_assert(offsetof(UUIW_MonadBuff_C, Text_UnitInfo) == 0x0003C0, "Member 'UUIW_MonadBuff_C::Text_UnitInfo' has a wrong offset!");
static_assert(offsetof(UUIW_MonadBuff_C, Text_UnitTitle) == 0x0003C8, "Member 'UUIW_MonadBuff_C::Text_UnitTitle' has a wrong offset!");
static_assert(offsetof(UUIW_MonadBuff_C, UIW_BG_Title) == 0x0003D0, "Member 'UUIW_MonadBuff_C::UIW_BG_Title' has a wrong offset!");
static_assert(offsetof(UUIW_MonadBuff_C, UIW_Fx_Slot_Bg) == 0x0003D8, "Member 'UUIW_MonadBuff_C::UIW_Fx_Slot_Bg' has a wrong offset!");
static_assert(offsetof(UUIW_MonadBuff_C, UIW_HasItem_Counter) == 0x0003E0, "Member 'UUIW_MonadBuff_C::UIW_HasItem_Counter' has a wrong offset!");
static_assert(offsetof(UUIW_MonadBuff_C, UIW_ItemInfo) == 0x0003E8, "Member 'UUIW_MonadBuff_C::UIW_ItemInfo' has a wrong offset!");
static_assert(offsetof(UUIW_MonadBuff_C, UIW_NoContents) == 0x0003F0, "Member 'UUIW_MonadBuff_C::UIW_NoContents' has a wrong offset!");
static_assert(offsetof(UUIW_MonadBuff_C, SelectedUnitItem) == 0x0003F8, "Member 'UUIW_MonadBuff_C::SelectedUnitItem' has a wrong offset!");
static_assert(offsetof(UUIW_MonadBuff_C, SecondCategory) == 0x000400, "Member 'UUIW_MonadBuff_C::SecondCategory' has a wrong offset!");
static_assert(offsetof(UUIW_MonadBuff_C, MonadBuffItem) == 0x000408, "Member 'UUIW_MonadBuff_C::MonadBuffItem' has a wrong offset!");
static_assert(offsetof(UUIW_MonadBuff_C, PrevListSelectedIndex) == 0x000410, "Member 'UUIW_MonadBuff_C::PrevListSelectedIndex' has a wrong offset!");
static_assert(offsetof(UUIW_MonadBuff_C, ColumnCount) == 0x000414, "Member 'UUIW_MonadBuff_C::ColumnCount' has a wrong offset!");

}

