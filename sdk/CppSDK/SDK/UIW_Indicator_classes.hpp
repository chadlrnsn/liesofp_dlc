#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIW_Indicator

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UIW_Indicator.UIW_Indicator_C
// 0x0020 (0x0288 - 0x0268)
class UUIW_Indicator_C final : public UUserWidget
{
public:
	class UWidgetAnimation*                       Ani_Gear;                                          // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	bool                                          IsShow;                                            // 0x0270(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_271[0x7];                                      // 0x0271(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           TimerHandle;                                       // 0x0278(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         CurrentTime;                                       // 0x0280(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Show();
	void Hide();
	void CheckHide();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UIW_Indicator_C">();
	}
	static class UUIW_Indicator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUIW_Indicator_C>();
	}
};
static_assert(alignof(UUIW_Indicator_C) == 0x000008, "Wrong alignment on UUIW_Indicator_C");
static_assert(sizeof(UUIW_Indicator_C) == 0x000288, "Wrong size on UUIW_Indicator_C");
static_assert(offsetof(UUIW_Indicator_C, Ani_Gear) == 0x000268, "Member 'UUIW_Indicator_C::Ani_Gear' has a wrong offset!");
static_assert(offsetof(UUIW_Indicator_C, IsShow) == 0x000270, "Member 'UUIW_Indicator_C::IsShow' has a wrong offset!");
static_assert(offsetof(UUIW_Indicator_C, TimerHandle) == 0x000278, "Member 'UUIW_Indicator_C::TimerHandle' has a wrong offset!");
static_assert(offsetof(UUIW_Indicator_C, CurrentTime) == 0x000280, "Member 'UUIW_Indicator_C::CurrentTime' has a wrong offset!");

}
