#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIW_HUD_Menu

#include "Basic.hpp"

#include "ProjectP_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "ProjectPContentInfo_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UIW_HUD_Menu.UIW_HUD_Menu_C
// 0x01A8 (0x0410 - 0x0268)
class UUIW_HUD_Menu_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0268(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Ani_Visible;                                       // 0x0270(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UUIW_HUD_Menu_BeltSlot_C*               Belt1_0;                                           // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIW_HUD_Menu_BeltSlot_C*               Belt1_1;                                           // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIW_HUD_Menu_BeltSlot_C*               Belt1_2;                                           // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIW_HUD_Menu_BeltSlot_C*               Belt1_3;                                           // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIW_HUD_Menu_BeltSlot_C*               Belt1_4;                                           // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIW_HUD_Menu_BeltSlot_C*               Belt2_0;                                           // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIW_HUD_Menu_BeltSlot_C*               Belt2_1;                                           // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIW_HUD_Menu_BeltSlot_C*               Belt2_2;                                           // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIW_HUD_Menu_BeltSlot_C*               Belt2_3;                                           // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIW_HUD_Menu_BeltSlot_C*               Belt2_4;                                           // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIW_Btn_Key_C*                         Btn_Change;                                        // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIW_HUD_Menu_Btn_C*                    Btn_Equipment;                                     // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIW_HUD_Menu_Btn_C*                    Btn_Info;                                          // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIW_HUD_Menu_Btn_C*                    Btn_Inventory;                                     // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIW_Btn_Key_C*                         Btn_Select;                                        // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIW_HUD_Menu_Btn_C*                    Btn_Setting;                                       // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIW_Btn_Key_C*                         Btn_Unequip;                                       // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Equip_Info;                                        // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Key_Down;                                      // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Key_Left;                                      // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Key_Right;                                     // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Key_Up;                                        // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Item_Info;                                         // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIW_HUD_Menu_PouchSlot_C*              Pouch_Down;                                        // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIW_HUD_Menu_PouchSlot_C*              Pouch_Left;                                        // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIW_HUD_Menu_PouchSlot_C*              Pouch_Right;                                       // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIW_HUD_Menu_PouchSlot_C*              Pouch_Up;                                          // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIW_SecondTitle_Icon_C*                SubTitle_Belt_1;                                   // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIW_SecondTitle_Icon_C*                SubTitle_Belt_2;                                   // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIW_SecondTitle_Icon_C*                SubTitle_Menu;                                     // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIW_SecondTitle_Icon_C*                SubTitle_Pouch;                                    // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_Desc;                                         // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_ItemName;                                     // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_Title;                                        // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsOpendMenu;                                       // 0x0388(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_389[0x3];                                      // 0x0389(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   FocusedType;                                       // 0x038C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_394[0x4];                                      // 0x0394(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUIW_HUD_Menu_Btn_C*                    FocusedMenu;                                       // 0x0398(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUIW_HUD_Menu_BeltSlot_C*               FocusedBeltSlot;                                   // 0x03A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUIW_HUD_Menu_PouchSlot_C*              FocusedPouchSlot;                                  // 0x03A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UUIW_HUD_Menu_Btn_C*>            MenuList;                                          // 0x03B0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UUIW_HUD_Menu_BeltSlot_C*>       BeltList;                                          // 0x03C0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UUIW_HUD_Menu_BeltSlot_C*>       BeltList_1;                                        // 0x03D0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UUIW_HUD_Menu_BeltSlot_C*>       BeltList_2;                                        // 0x03E0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UUIW_HUD_Menu_PouchSlot_C*>      PouchList;                                         // 0x03F0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UUIW_SecondTitle_Icon_C*>        SecondTitleList;                                   // 0x0400(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

public:
	void ExecuteUbergraph_UIW_HUD_Menu(int32 EntryPoint);
	void BndEvt__UIW_HUD_Menu_Btn_Use_K2Node_ComponentBoundEvent_3_OnActive__DelegateSignature(class UUIW_Btn_Key_C* BtnKey);
	void BndEvt__UIW_HUD_Menu_Btn_Change_K2Node_ComponentBoundEvent_2_OnActive__DelegateSignature(class UUIW_Btn_Key_C* BtnKey);
	void BndEvt__UIW_HUD_Menu_Btn_Select_K2Node_ComponentBoundEvent_0_OnActive__DelegateSignature(class UUIW_Btn_Key_C* BtnKey);
	void Destruct();
	void Construct();
	void Hide(bool DoSave);
	void Show(bool NeedCenterMouse);
	void Finished_63C44360470EEA9B9C7E6EBD14C0657A();
	void OpenWidget(class FName WidgetName);
	void OnPressedMenuBtn();
	void OnSelecedMenuBtn(class UUIW_HUD_Menu_Btn_C* MenuBtn);
	void OnPressedBeltSlot(class UUIW_HUD_Menu_BeltSlot_C* BeltSlot);
	void OnSelectedBeltSlot(class UUIW_HUD_Menu_BeltSlot_C* BeltSlot);
	void OnPressedPouchSlot(class UUIW_HUD_Menu_PouchSlot_C* PouchSlot);
	void OnSelectedPouchSlot(class UUIW_HUD_Menu_PouchSlot_C* PouchSlot);
	void OnPressedKeyUp();
	void OnPressedKeyDown();
	void OnPressedKeyLeft();
	void OnPressedKeyRight();
	void RefreshSubTitle(class UUIW_SecondTitle_Icon_C* SecondTitle);
	void RefreshBelt();
	void RefreshPouch();
	void SetPouchKeyIcon(bool bGamePad);
	void OnSavedOptions(bool SyncStart);
	void FindBeltSlot(bool IsFirstLine, int32 SlotIndex, class UUIW_HUD_Menu_BeltSlot_C** SlotBelt);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UIW_HUD_Menu_C">();
	}
	static class UUIW_HUD_Menu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUIW_HUD_Menu_C>();
	}
};
static_assert(alignof(UUIW_HUD_Menu_C) == 0x000008, "Wrong alignment on UUIW_HUD_Menu_C");
static_assert(sizeof(UUIW_HUD_Menu_C) == 0x000410, "Wrong size on UUIW_HUD_Menu_C");
static_assert(offsetof(UUIW_HUD_Menu_C, UberGraphFrame) == 0x000268, "Member 'UUIW_HUD_Menu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUIW_HUD_Menu_C, Ani_Visible) == 0x000270, "Member 'UUIW_HUD_Menu_C::Ani_Visible' has a wrong offset!");
static_assert(offsetof(UUIW_HUD_Menu_C, Belt1_0) == 0x000278, "Member 'UUIW_HUD_Menu_C::Belt1_0' has a wrong offset!");
static_assert(offsetof(UUIW_HUD_Menu_C, Belt1_1) == 0x000280, "Member 'UUIW_HUD_Menu_C::Belt1_1' has a wrong offset!");
static_assert(offsetof(UUIW_HUD_Menu_C, Belt1_2) == 0x000288, "Member 'UUIW_HUD_Menu_C::Belt1_2' has a wrong offset!");
static_assert(offsetof(UUIW_HUD_Menu_C, Belt1_3) == 0x000290, "Member 'UUIW_HUD_Menu_C::Belt1_3' has a wrong offset!");
static_assert(offsetof(UUIW_HUD_Menu_C, Belt1_4) == 0x000298, "Member 'UUIW_HUD_Menu_C::Belt1_4' has a wrong offset!");
static_assert(offsetof(UUIW_HUD_Menu_C, Belt2_0) == 0x0002A0, "Member 'UUIW_HUD_Menu_C::Belt2_0' has a wrong offset!");
static_assert(offsetof(UUIW_HUD_Menu_C, Belt2_1) == 0x0002A8, "Member 'UUIW_HUD_Menu_C::Belt2_1' has a wrong offset!");
static_assert(offsetof(UUIW_HUD_Menu_C, Belt2_2) == 0x0002B0, "Member 'UUIW_HUD_Menu_C::Belt2_2' has a wrong offset!");
static_assert(offsetof(UUIW_HUD_Menu_C, Belt2_3) == 0x0002B8, "Member 'UUIW_HUD_Menu_C::Belt2_3' has a wrong offset!");
static_assert(offsetof(UUIW_HUD_Menu_C, Belt2_4) == 0x0002C0, "Member 'UUIW_HUD_Menu_C::Belt2_4' has a wrong offset!");
static_assert(offsetof(UUIW_HUD_Menu_C, Btn_Change) == 0x0002C8, "Member 'UUIW_HUD_Menu_C::Btn_Change' has a wrong offset!");
static_assert(offsetof(UUIW_HUD_Menu_C, Btn_Equipment) == 0x0002D0, "Member 'UUIW_HUD_Menu_C::Btn_Equipment' has a wrong offset!");
static_assert(offsetof(UUIW_HUD_Menu_C, Btn_Info) == 0x0002D8, "Member 'UUIW_HUD_Menu_C::Btn_Info' has a wrong offset!");
static_assert(offsetof(UUIW_HUD_Menu_C, Btn_Inventory) == 0x0002E0, "Member 'UUIW_HUD_Menu_C::Btn_Inventory' has a wrong offset!");
static_assert(offsetof(UUIW_HUD_Menu_C, Btn_Select) == 0x0002E8, "Member 'UUIW_HUD_Menu_C::Btn_Select' has a wrong offset!");
static_assert(offsetof(UUIW_HUD_Menu_C, Btn_Setting) == 0x0002F0, "Member 'UUIW_HUD_Menu_C::Btn_Setting' has a wrong offset!");
static_assert(offsetof(UUIW_HUD_Menu_C, Btn_Unequip) == 0x0002F8, "Member 'UUIW_HUD_Menu_C::Btn_Unequip' has a wrong offset!");
static_assert(offsetof(UUIW_HUD_Menu_C, Equip_Info) == 0x000300, "Member 'UUIW_HUD_Menu_C::Equip_Info' has a wrong offset!");
static_assert(offsetof(UUIW_HUD_Menu_C, Img_Key_Down) == 0x000308, "Member 'UUIW_HUD_Menu_C::Img_Key_Down' has a wrong offset!");
static_assert(offsetof(UUIW_HUD_Menu_C, Img_Key_Left) == 0x000310, "Member 'UUIW_HUD_Menu_C::Img_Key_Left' has a wrong offset!");
static_assert(offsetof(UUIW_HUD_Menu_C, Img_Key_Right) == 0x000318, "Member 'UUIW_HUD_Menu_C::Img_Key_Right' has a wrong offset!");
static_assert(offsetof(UUIW_HUD_Menu_C, Img_Key_Up) == 0x000320, "Member 'UUIW_HUD_Menu_C::Img_Key_Up' has a wrong offset!");
static_assert(offsetof(UUIW_HUD_Menu_C, Item_Info) == 0x000328, "Member 'UUIW_HUD_Menu_C::Item_Info' has a wrong offset!");
static_assert(offsetof(UUIW_HUD_Menu_C, Pouch_Down) == 0x000330, "Member 'UUIW_HUD_Menu_C::Pouch_Down' has a wrong offset!");
static_assert(offsetof(UUIW_HUD_Menu_C, Pouch_Left) == 0x000338, "Member 'UUIW_HUD_Menu_C::Pouch_Left' has a wrong offset!");
static_assert(offsetof(UUIW_HUD_Menu_C, Pouch_Right) == 0x000340, "Member 'UUIW_HUD_Menu_C::Pouch_Right' has a wrong offset!");
static_assert(offsetof(UUIW_HUD_Menu_C, Pouch_Up) == 0x000348, "Member 'UUIW_HUD_Menu_C::Pouch_Up' has a wrong offset!");
static_assert(offsetof(UUIW_HUD_Menu_C, SubTitle_Belt_1) == 0x000350, "Member 'UUIW_HUD_Menu_C::SubTitle_Belt_1' has a wrong offset!");
static_assert(offsetof(UUIW_HUD_Menu_C, SubTitle_Belt_2) == 0x000358, "Member 'UUIW_HUD_Menu_C::SubTitle_Belt_2' has a wrong offset!");
static_assert(offsetof(UUIW_HUD_Menu_C, SubTitle_Menu) == 0x000360, "Member 'UUIW_HUD_Menu_C::SubTitle_Menu' has a wrong offset!");
static_assert(offsetof(UUIW_HUD_Menu_C, SubTitle_Pouch) == 0x000368, "Member 'UUIW_HUD_Menu_C::SubTitle_Pouch' has a wrong offset!");
static_assert(offsetof(UUIW_HUD_Menu_C, Text_Desc) == 0x000370, "Member 'UUIW_HUD_Menu_C::Text_Desc' has a wrong offset!");
static_assert(offsetof(UUIW_HUD_Menu_C, Text_ItemName) == 0x000378, "Member 'UUIW_HUD_Menu_C::Text_ItemName' has a wrong offset!");
static_assert(offsetof(UUIW_HUD_Menu_C, Text_Title) == 0x000380, "Member 'UUIW_HUD_Menu_C::Text_Title' has a wrong offset!");
static_assert(offsetof(UUIW_HUD_Menu_C, IsOpendMenu) == 0x000388, "Member 'UUIW_HUD_Menu_C::IsOpendMenu' has a wrong offset!");
static_assert(offsetof(UUIW_HUD_Menu_C, FocusedType) == 0x00038C, "Member 'UUIW_HUD_Menu_C::FocusedType' has a wrong offset!");
static_assert(offsetof(UUIW_HUD_Menu_C, FocusedMenu) == 0x000398, "Member 'UUIW_HUD_Menu_C::FocusedMenu' has a wrong offset!");
static_assert(offsetof(UUIW_HUD_Menu_C, FocusedBeltSlot) == 0x0003A0, "Member 'UUIW_HUD_Menu_C::FocusedBeltSlot' has a wrong offset!");
static_assert(offsetof(UUIW_HUD_Menu_C, FocusedPouchSlot) == 0x0003A8, "Member 'UUIW_HUD_Menu_C::FocusedPouchSlot' has a wrong offset!");
static_assert(offsetof(UUIW_HUD_Menu_C, MenuList) == 0x0003B0, "Member 'UUIW_HUD_Menu_C::MenuList' has a wrong offset!");
static_assert(offsetof(UUIW_HUD_Menu_C, BeltList) == 0x0003C0, "Member 'UUIW_HUD_Menu_C::BeltList' has a wrong offset!");
static_assert(offsetof(UUIW_HUD_Menu_C, BeltList_1) == 0x0003D0, "Member 'UUIW_HUD_Menu_C::BeltList_1' has a wrong offset!");
static_assert(offsetof(UUIW_HUD_Menu_C, BeltList_2) == 0x0003E0, "Member 'UUIW_HUD_Menu_C::BeltList_2' has a wrong offset!");
static_assert(offsetof(UUIW_HUD_Menu_C, PouchList) == 0x0003F0, "Member 'UUIW_HUD_Menu_C::PouchList' has a wrong offset!");
static_assert(offsetof(UUIW_HUD_Menu_C, SecondTitleList) == 0x000400, "Member 'UUIW_HUD_Menu_C::SecondTitleList' has a wrong offset!");

}
