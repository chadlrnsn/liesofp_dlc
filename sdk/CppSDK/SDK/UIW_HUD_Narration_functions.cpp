#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIW_HUD_Narration

#include "Basic.hpp"

#include "UIW_HUD_Narration_classes.hpp"
#include "UIW_HUD_Narration_parameters.hpp"


namespace SDK
{

// Function UIW_HUD_Narration.UIW_HUD_Narration_C.ExecuteUbergraph_UIW_HUD_Narration
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIW_HUD_Narration_C::ExecuteUbergraph_UIW_HUD_Narration(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HUD_Narration_C", "ExecuteUbergraph_UIW_HUD_Narration");

	Params::UIW_HUD_Narration_C_ExecuteUbergraph_UIW_HUD_Narration Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_HUD_Narration.UIW_HUD_Narration_C.WidgetAnimationEvt_Ani_End_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)

void UUIW_HUD_Narration_C::WidgetAnimationEvt_Ani_End_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HUD_Narration_C", "WidgetAnimationEvt_Ani_End_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UIW_HUD_Narration.UIW_HUD_Narration_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUIW_HUD_Narration_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HUD_Narration_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UIW_HUD_Narration.UIW_HUD_Narration_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUIW_HUD_Narration_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HUD_Narration_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UIW_HUD_Narration.UIW_HUD_Narration_C.Show
// (Private, BlueprintCallable, BlueprintEvent)

void UUIW_HUD_Narration_C::Show()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HUD_Narration_C", "Show");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UIW_HUD_Narration.UIW_HUD_Narration_C.Hide
// (Private, BlueprintCallable, BlueprintEvent)

void UUIW_HUD_Narration_C::Hide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HUD_Narration_C", "Hide");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UIW_HUD_Narration.UIW_HUD_Narration_C.OnVisibleGuide
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsValid                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                             MsgText                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UUIW_HUD_Narration_C::OnVisibleGuide(bool IsValid, const class FText& MsgText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HUD_Narration_C", "OnVisibleGuide");

	Params::UIW_HUD_Narration_C_OnVisibleGuide Parms{};

	Parms.IsValid = IsValid;
	Parms.MsgText = std::move(MsgText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_HUD_Narration.UIW_HUD_Narration_C.OnTimerGuide
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   VisibleTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             MsgText                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UUIW_HUD_Narration_C::OnTimerGuide(float VisibleTime, const class FText& MsgText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HUD_Narration_C", "OnTimerGuide");

	Params::UIW_HUD_Narration_C_OnTimerGuide Parms{};

	Parms.VisibleTime = VisibleTime;
	Parms.MsgText = std::move(MsgText);

	UObject::ProcessEvent(Func, &Parms);
}

}

