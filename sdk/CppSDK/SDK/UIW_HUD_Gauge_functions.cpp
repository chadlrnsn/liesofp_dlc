#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIW_HUD_Gauge

#include "Basic.hpp"

#include "UIW_HUD_Gauge_classes.hpp"
#include "UIW_HUD_Gauge_parameters.hpp"


namespace SDK
{

// Function UIW_HUD_Gauge.UIW_HUD_Gauge_C.ExecuteUbergraph_UIW_HUD_Gauge
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIW_HUD_Gauge_C::ExecuteUbergraph_UIW_HUD_Gauge(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HUD_Gauge_C", "ExecuteUbergraph_UIW_HUD_Gauge");

	Params::UIW_HUD_Gauge_C_ExecuteUbergraph_UIW_HUD_Gauge Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_HUD_Gauge.UIW_HUD_Gauge_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUIW_HUD_Gauge_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HUD_Gauge_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UIW_HUD_Gauge.UIW_HUD_Gauge_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUIW_HUD_Gauge_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HUD_Gauge_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UIW_HUD_Gauge.UIW_HUD_Gauge_C.InitGauge
// (Public, BlueprintCallable, BlueprintEvent)

void UUIW_HUD_Gauge_C::InitGauge()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HUD_Gauge_C", "InitGauge");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UIW_HUD_Gauge.UIW_HUD_Gauge_C.SetGaugeColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     HPColor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     FXGradationColor                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIW_HUD_Gauge_C::SetGaugeColor(const struct FLinearColor& HPColor, const struct FLinearColor& FXGradationColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HUD_Gauge_C", "SetGaugeColor");

	Params::UIW_HUD_Gauge_C_SetGaugeColor Parms{};

	Parms.HPColor = std::move(HPColor);
	Parms.FXGradationColor = std::move(FXGradationColor);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_HUD_Gauge.UIW_HUD_Gauge_C.SetParalyze
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ALNPCCharacter*                   NPC                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsAbleParalyze                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUIW_HUD_Gauge_C::SetParalyze(class ALNPCCharacter* NPC, bool IsAbleParalyze)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HUD_Gauge_C", "SetParalyze");

	Params::UIW_HUD_Gauge_C_SetParalyze Parms{};

	Parms.NPC = NPC;
	Parms.IsAbleParalyze = IsAbleParalyze;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_HUD_Gauge.UIW_HUD_Gauge_C.SetGroggy
// (Public, BlueprintCallable, BlueprintEvent)

void UUIW_HUD_Gauge_C::SetGroggy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HUD_Gauge_C", "SetGroggy");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UIW_HUD_Gauge.UIW_HUD_Gauge_C.ResetParalyze
// (Public, BlueprintCallable, BlueprintEvent)

void UUIW_HUD_Gauge_C::ResetParalyze()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HUD_Gauge_C", "ResetParalyze");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UIW_HUD_Gauge.UIW_HUD_Gauge_C.RefreshGauge
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   CurrentPercent                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    NeedTween                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUIW_HUD_Gauge_C::RefreshGauge(float CurrentPercent, bool NeedTween)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HUD_Gauge_C", "RefreshGauge");

	Params::UIW_HUD_Gauge_C_RefreshGauge Parms{};

	Parms.CurrentPercent = CurrentPercent;
	Parms.NeedTween = NeedTween;

	UObject::ProcessEvent(Func, &Parms);
}

}
