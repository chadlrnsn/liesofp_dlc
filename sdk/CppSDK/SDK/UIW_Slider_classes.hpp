#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIW_Slider

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UIW_Slider.UIW_Slider_C
// 0x0060 (0x02C8 - 0x0268)
class UUIW_Slider_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0268(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UUIW_Btn_Arrow_C*                       Btn_Left;                                          // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIW_Btn_Arrow_C*                       Btn_Right;                                         // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USlider*                                Slider;                                            // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_Max;                                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_Min;                                          // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_Value;                                        // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         MinValue;                                          // 0x02A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         MaxValue;                                          // 0x02A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         StepSize;                                          // 0x02A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_2AC[0x4];                                      // 0x02AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnValueChanged;                                    // 0x02B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                         Value;                                             // 0x02C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsInit;                                            // 0x02C4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnValueChanged__DelegateSignature(float Value_0);
	void ExecuteUbergraph_UIW_Slider(int32 EntryPoint);
	void BndEvt__Slider_K2Node_ComponentBoundEvent_5_OnFloatValueChangedEvent__DelegateSignature(float Value_0);
	void Construct();
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	void GetValue(float* Value_0);
	void SetValue(float Value_0);
	void SetStepPrev();
	void SetStepNext();
	void ReturnValue(float Value_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UIW_Slider_C">();
	}
	static class UUIW_Slider_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUIW_Slider_C>();
	}
};
static_assert(alignof(UUIW_Slider_C) == 0x000008, "Wrong alignment on UUIW_Slider_C");
static_assert(sizeof(UUIW_Slider_C) == 0x0002C8, "Wrong size on UUIW_Slider_C");
static_assert(offsetof(UUIW_Slider_C, UberGraphFrame) == 0x000268, "Member 'UUIW_Slider_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUIW_Slider_C, Btn_Left) == 0x000270, "Member 'UUIW_Slider_C::Btn_Left' has a wrong offset!");
static_assert(offsetof(UUIW_Slider_C, Btn_Right) == 0x000278, "Member 'UUIW_Slider_C::Btn_Right' has a wrong offset!");
static_assert(offsetof(UUIW_Slider_C, Slider) == 0x000280, "Member 'UUIW_Slider_C::Slider' has a wrong offset!");
static_assert(offsetof(UUIW_Slider_C, Text_Max) == 0x000288, "Member 'UUIW_Slider_C::Text_Max' has a wrong offset!");
static_assert(offsetof(UUIW_Slider_C, Text_Min) == 0x000290, "Member 'UUIW_Slider_C::Text_Min' has a wrong offset!");
static_assert(offsetof(UUIW_Slider_C, Text_Value) == 0x000298, "Member 'UUIW_Slider_C::Text_Value' has a wrong offset!");
static_assert(offsetof(UUIW_Slider_C, MinValue) == 0x0002A0, "Member 'UUIW_Slider_C::MinValue' has a wrong offset!");
static_assert(offsetof(UUIW_Slider_C, MaxValue) == 0x0002A4, "Member 'UUIW_Slider_C::MaxValue' has a wrong offset!");
static_assert(offsetof(UUIW_Slider_C, StepSize) == 0x0002A8, "Member 'UUIW_Slider_C::StepSize' has a wrong offset!");
static_assert(offsetof(UUIW_Slider_C, OnValueChanged) == 0x0002B0, "Member 'UUIW_Slider_C::OnValueChanged' has a wrong offset!");
static_assert(offsetof(UUIW_Slider_C, Value) == 0x0002C0, "Member 'UUIW_Slider_C::Value' has a wrong offset!");
static_assert(offsetof(UUIW_Slider_C, IsInit) == 0x0002C4, "Member 'UUIW_Slider_C::IsInit' has a wrong offset!");

}

