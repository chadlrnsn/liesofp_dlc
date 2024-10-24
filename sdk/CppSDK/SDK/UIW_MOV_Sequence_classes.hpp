#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIW_MOV_Sequence

#include "Basic.hpp"

#include "ProjectP_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UIW_MOV_Sequence.UIW_MOV_Sequence_C
// 0x0020 (0x02C8 - 0x02A8)
class UUIW_MOV_Sequence_C final : public ULWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Ani_Button_Hide;                                   // 0x02B0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Ani_Button_Show;                                   // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UUIW_Btn_Key_C*                         UIW_Btn_Key;                                       // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UIW_MOV_Sequence(int32 EntryPoint);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteStopSkipUI();
	void BndEvt__UIW_Btn_Key_K2Node_ComponentBoundEvent_2_OnCancelHold__DelegateSignature();
	void BndEvt__UIW_Btn_Key_K2Node_ComponentBoundEvent_1_OnStartHold__DelegateSignature();
	void BndEvt__UIW_Btn_Key_K2Node_ComponentBoundEvent_0_OnActive__DelegateSignature(class UUIW_Btn_Key_C* BtnKey);
	void Destruct();
	void Construct();
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UIW_MOV_Sequence_C">();
	}
	static class UUIW_MOV_Sequence_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUIW_MOV_Sequence_C>();
	}
};
static_assert(alignof(UUIW_MOV_Sequence_C) == 0x000008, "Wrong alignment on UUIW_MOV_Sequence_C");
static_assert(sizeof(UUIW_MOV_Sequence_C) == 0x0002C8, "Wrong size on UUIW_MOV_Sequence_C");
static_assert(offsetof(UUIW_MOV_Sequence_C, UberGraphFrame) == 0x0002A8, "Member 'UUIW_MOV_Sequence_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUIW_MOV_Sequence_C, Ani_Button_Hide) == 0x0002B0, "Member 'UUIW_MOV_Sequence_C::Ani_Button_Hide' has a wrong offset!");
static_assert(offsetof(UUIW_MOV_Sequence_C, Ani_Button_Show) == 0x0002B8, "Member 'UUIW_MOV_Sequence_C::Ani_Button_Show' has a wrong offset!");
static_assert(offsetof(UUIW_MOV_Sequence_C, UIW_Btn_Key) == 0x0002C0, "Member 'UUIW_MOV_Sequence_C::UIW_Btn_Key' has a wrong offset!");

}

