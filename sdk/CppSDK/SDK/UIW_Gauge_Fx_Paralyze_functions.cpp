#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIW_Gauge_Fx_Paralyze

#include "Basic.hpp"

#include "UIW_Gauge_Fx_Paralyze_classes.hpp"
#include "UIW_Gauge_Fx_Paralyze_parameters.hpp"


namespace SDK
{

// Function UIW_Gauge_Fx_Paralyze.UIW_Gauge_Fx_Paralyze_C.ExecuteUbergraph_UIW_Gauge_Fx_Paralyze
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIW_Gauge_Fx_Paralyze_C::ExecuteUbergraph_UIW_Gauge_Fx_Paralyze(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_Gauge_Fx_Paralyze_C", "ExecuteUbergraph_UIW_Gauge_Fx_Paralyze");

	Params::UIW_Gauge_Fx_Paralyze_C_ExecuteUbergraph_UIW_Gauge_Fx_Paralyze Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_Gauge_Fx_Paralyze.UIW_Gauge_Fx_Paralyze_C.WidgetAnimationEvt_Ani_Start_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)

void UUIW_Gauge_Fx_Paralyze_C::WidgetAnimationEvt_Ani_Start_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_Gauge_Fx_Paralyze_C", "WidgetAnimationEvt_Ani_Start_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UIW_Gauge_Fx_Paralyze.UIW_Gauge_Fx_Paralyze_C.AnimParalize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Phase                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIW_Gauge_Fx_Paralyze_C::AnimParalize(int32 Phase)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_Gauge_Fx_Paralyze_C", "AnimParalize");

	Params::UIW_Gauge_Fx_Paralyze_C_AnimParalize Parms{};

	Parms.Phase = Phase;

	UObject::ProcessEvent(Func, &Parms);
}

}
