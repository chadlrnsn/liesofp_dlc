#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIW_ProfileItem_Weight

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "ProjectPContentInfo_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UIW_ProfileItem_Weight.UIW_ProfileItem_Weight_C
// 0x0058 (0x02C0 - 0x0268)
class UUIW_ProfileItem_Weight_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0268(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UUIBP_ButtonWithTooltip_C*              Btn;                                               // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIW_Stat_Diff_C*                       Diff;                                              // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIW_Fx_Btn_Hover_C*                    Fx_Hover;                                          // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               Group_Warning;                                     // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_ChaUpPreview;                                  // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_Value;                                        // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_Value_Ratio;                                  // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_Warning;                                      // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULStatComponent*                        LStatComponent;                                    // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUIW_CharacterUpgrade_C*                ChaUpWidget;                                       // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UIW_ProfileItem_Weight(int32 EntryPoint);
	void BndEvt__UIW_ProfileItem_Weight_Btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__UIW_ProfileItem_Weight_Btn_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void Destruct();
	void Construct();
	void RefreshData(ELSecondStat InStat);
	void OnChangeEquipItem(ELEquipSlotType EquipSlot, class ULItem* OldItem, class ULItem* NewItem);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UIW_ProfileItem_Weight_C">();
	}
	static class UUIW_ProfileItem_Weight_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUIW_ProfileItem_Weight_C>();
	}
};
static_assert(alignof(UUIW_ProfileItem_Weight_C) == 0x000008, "Wrong alignment on UUIW_ProfileItem_Weight_C");
static_assert(sizeof(UUIW_ProfileItem_Weight_C) == 0x0002C0, "Wrong size on UUIW_ProfileItem_Weight_C");
static_assert(offsetof(UUIW_ProfileItem_Weight_C, UberGraphFrame) == 0x000268, "Member 'UUIW_ProfileItem_Weight_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUIW_ProfileItem_Weight_C, Btn) == 0x000270, "Member 'UUIW_ProfileItem_Weight_C::Btn' has a wrong offset!");
static_assert(offsetof(UUIW_ProfileItem_Weight_C, Diff) == 0x000278, "Member 'UUIW_ProfileItem_Weight_C::Diff' has a wrong offset!");
static_assert(offsetof(UUIW_ProfileItem_Weight_C, Fx_Hover) == 0x000280, "Member 'UUIW_ProfileItem_Weight_C::Fx_Hover' has a wrong offset!");
static_assert(offsetof(UUIW_ProfileItem_Weight_C, Group_Warning) == 0x000288, "Member 'UUIW_ProfileItem_Weight_C::Group_Warning' has a wrong offset!");
static_assert(offsetof(UUIW_ProfileItem_Weight_C, Img_ChaUpPreview) == 0x000290, "Member 'UUIW_ProfileItem_Weight_C::Img_ChaUpPreview' has a wrong offset!");
static_assert(offsetof(UUIW_ProfileItem_Weight_C, Text_Value) == 0x000298, "Member 'UUIW_ProfileItem_Weight_C::Text_Value' has a wrong offset!");
static_assert(offsetof(UUIW_ProfileItem_Weight_C, Text_Value_Ratio) == 0x0002A0, "Member 'UUIW_ProfileItem_Weight_C::Text_Value_Ratio' has a wrong offset!");
static_assert(offsetof(UUIW_ProfileItem_Weight_C, Text_Warning) == 0x0002A8, "Member 'UUIW_ProfileItem_Weight_C::Text_Warning' has a wrong offset!");
static_assert(offsetof(UUIW_ProfileItem_Weight_C, LStatComponent) == 0x0002B0, "Member 'UUIW_ProfileItem_Weight_C::LStatComponent' has a wrong offset!");
static_assert(offsetof(UUIW_ProfileItem_Weight_C, ChaUpWidget) == 0x0002B8, "Member 'UUIW_ProfileItem_Weight_C::ChaUpWidget' has a wrong offset!");

}
