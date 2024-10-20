#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIW_SelectQuantity

#include "Basic.hpp"

#include "ProjectP_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UIW_SelectQuantity.UIW_SelectQuantity_C
// 0x0090 (0x0338 - 0x02A8)
class UUIW_SelectQuantity_C final : public ULWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UUIW_Btn_Key_C*                         Btn_Cancel;                                        // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIW_Btn_Key_C*                         Btn_Confirm;                                       // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIW_Btn_Key_C*                         Btn_Down;                                          // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIW_Btn_Key_C*                         Btn_Up;                                            // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         ErgoGroup;                                         // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           Group_Bg;                                          // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Group_GetErgo;                                     // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Label;                                             // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_Ergo;                                         // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_Info;                                         // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_Title;                                        // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIW_Spinner_C*                         UIW_Spinner;                                       // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         InitValue;                                         // 0x0310(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MinValue;                                          // 0x0314(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxValue;                                          // 0x0318(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31C[0x4];                                      // 0x031C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnSelectedValue;                                   // 0x0320(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         ErgoValue;                                         // 0x0330(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnSelectedValue__DelegateSignature(int32 Value);
	void ExecuteUbergraph_UIW_SelectQuantity(int32 EntryPoint);
	void BndEvt__Btn_Down_K2Node_ComponentBoundEvent_5_OnActive__DelegateSignature(class UUIW_Btn_Key_C* BtnKey);
	void BndEvt__Btn_Up_K2Node_ComponentBoundEvent_4_OnActive__DelegateSignature(class UUIW_Btn_Key_C* BtnKey);
	void BndEvt__UIW_Spinner_K2Node_ComponentBoundEvent_3_OnReleaseDown__DelegateSignature(class UUIW_Spinner_C* Spinner);
	void BndEvt__UIW_Spinner_K2Node_ComponentBoundEvent_2_OnReleaseUp__DelegateSignature(class UUIW_Spinner_C* Spinner);
	void BndEvt__Btn_Cancel_K2Node_ComponentBoundEvent_1_OnActive__DelegateSignature(class UUIW_Btn_Key_C* BtnKey);
	void BndEvt__Btn_ConfIrm_K2Node_ComponentBoundEvent_0_OnActive__DelegateSignature(class UUIW_Btn_Key_C* BtnKey);
	void Construct();
	void SetData(const class FText& Title, int32 MinValue_0, int32 MaxValue_0, int32 InitValue_0);
	struct FEventReply OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void SetErgoType(int32 Value);
	void RefreshErgo(int32 Count);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UIW_SelectQuantity_C">();
	}
	static class UUIW_SelectQuantity_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUIW_SelectQuantity_C>();
	}
};
static_assert(alignof(UUIW_SelectQuantity_C) == 0x000008, "Wrong alignment on UUIW_SelectQuantity_C");
static_assert(sizeof(UUIW_SelectQuantity_C) == 0x000338, "Wrong size on UUIW_SelectQuantity_C");
static_assert(offsetof(UUIW_SelectQuantity_C, UberGraphFrame) == 0x0002A8, "Member 'UUIW_SelectQuantity_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUIW_SelectQuantity_C, Btn_Cancel) == 0x0002B0, "Member 'UUIW_SelectQuantity_C::Btn_Cancel' has a wrong offset!");
static_assert(offsetof(UUIW_SelectQuantity_C, Btn_Confirm) == 0x0002B8, "Member 'UUIW_SelectQuantity_C::Btn_Confirm' has a wrong offset!");
static_assert(offsetof(UUIW_SelectQuantity_C, Btn_Down) == 0x0002C0, "Member 'UUIW_SelectQuantity_C::Btn_Down' has a wrong offset!");
static_assert(offsetof(UUIW_SelectQuantity_C, Btn_Up) == 0x0002C8, "Member 'UUIW_SelectQuantity_C::Btn_Up' has a wrong offset!");
static_assert(offsetof(UUIW_SelectQuantity_C, ErgoGroup) == 0x0002D0, "Member 'UUIW_SelectQuantity_C::ErgoGroup' has a wrong offset!");
static_assert(offsetof(UUIW_SelectQuantity_C, Group_Bg) == 0x0002D8, "Member 'UUIW_SelectQuantity_C::Group_Bg' has a wrong offset!");
static_assert(offsetof(UUIW_SelectQuantity_C, Group_GetErgo) == 0x0002E0, "Member 'UUIW_SelectQuantity_C::Group_GetErgo' has a wrong offset!");
static_assert(offsetof(UUIW_SelectQuantity_C, Label) == 0x0002E8, "Member 'UUIW_SelectQuantity_C::Label' has a wrong offset!");
static_assert(offsetof(UUIW_SelectQuantity_C, Text_Ergo) == 0x0002F0, "Member 'UUIW_SelectQuantity_C::Text_Ergo' has a wrong offset!");
static_assert(offsetof(UUIW_SelectQuantity_C, Text_Info) == 0x0002F8, "Member 'UUIW_SelectQuantity_C::Text_Info' has a wrong offset!");
static_assert(offsetof(UUIW_SelectQuantity_C, Text_Title) == 0x000300, "Member 'UUIW_SelectQuantity_C::Text_Title' has a wrong offset!");
static_assert(offsetof(UUIW_SelectQuantity_C, UIW_Spinner) == 0x000308, "Member 'UUIW_SelectQuantity_C::UIW_Spinner' has a wrong offset!");
static_assert(offsetof(UUIW_SelectQuantity_C, InitValue) == 0x000310, "Member 'UUIW_SelectQuantity_C::InitValue' has a wrong offset!");
static_assert(offsetof(UUIW_SelectQuantity_C, MinValue) == 0x000314, "Member 'UUIW_SelectQuantity_C::MinValue' has a wrong offset!");
static_assert(offsetof(UUIW_SelectQuantity_C, MaxValue) == 0x000318, "Member 'UUIW_SelectQuantity_C::MaxValue' has a wrong offset!");
static_assert(offsetof(UUIW_SelectQuantity_C, OnSelectedValue) == 0x000320, "Member 'UUIW_SelectQuantity_C::OnSelectedValue' has a wrong offset!");
static_assert(offsetof(UUIW_SelectQuantity_C, ErgoValue) == 0x000330, "Member 'UUIW_SelectQuantity_C::ErgoValue' has a wrong offset!");

}

