#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIW_HUD_Gauge_HP

#include "Basic.hpp"

#include "UIW_HUD_Gauge_HP_classes.hpp"
#include "UIW_HUD_Gauge_HP_parameters.hpp"


namespace SDK
{

// Function UIW_HUD_Gauge_HP.UIW_HUD_Gauge_HP_C.ExecuteUbergraph_UIW_HUD_Gauge_HP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIW_HUD_Gauge_HP_C::ExecuteUbergraph_UIW_HUD_Gauge_HP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HUD_Gauge_HP_C", "ExecuteUbergraph_UIW_HUD_Gauge_HP");

	Params::UIW_HUD_Gauge_HP_C_ExecuteUbergraph_UIW_HUD_Gauge_HP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_HUD_Gauge_HP.UIW_HUD_Gauge_HP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUIW_HUD_Gauge_HP_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HUD_Gauge_HP_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UIW_HUD_Gauge_HP.UIW_HUD_Gauge_HP_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUIW_HUD_Gauge_HP_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HUD_Gauge_HP_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UIW_HUD_Gauge_HP.UIW_HUD_Gauge_HP_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUIW_HUD_Gauge_HP_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HUD_Gauge_HP_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UIW_HUD_Gauge_HP.UIW_HUD_Gauge_HP_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUIW_HUD_Gauge_HP_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HUD_Gauge_HP_C", "PreConstruct");

	Params::UIW_HUD_Gauge_HP_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_HUD_Gauge_HP.UIW_HUD_Gauge_HP_C.InitGauge
// (Public, BlueprintCallable, BlueprintEvent)

void UUIW_HUD_Gauge_HP_C::InitGauge()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HUD_Gauge_HP_C", "InitGauge");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UIW_HUD_Gauge_HP.UIW_HUD_Gauge_HP_C.SetGaugeColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     HPColor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     FXGradationColor                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIW_HUD_Gauge_HP_C::SetGaugeColor(const struct FLinearColor& HPColor, const struct FLinearColor& FXGradationColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HUD_Gauge_HP_C", "SetGaugeColor");

	Params::UIW_HUD_Gauge_HP_C_SetGaugeColor Parms{};

	Parms.HPColor = std::move(HPColor);
	Parms.FXGradationColor = std::move(FXGradationColor);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_HUD_Gauge_HP.UIW_HUD_Gauge_HP_C.SetParalyze
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ALNPCCharacter*                   NPC                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsAbleParalyze                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUIW_HUD_Gauge_HP_C::SetParalyze(class ALNPCCharacter* NPC, bool IsAbleParalyze)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HUD_Gauge_HP_C", "SetParalyze");

	Params::UIW_HUD_Gauge_HP_C_SetParalyze Parms{};

	Parms.NPC = NPC;
	Parms.IsAbleParalyze = IsAbleParalyze;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_HUD_Gauge_HP.UIW_HUD_Gauge_HP_C.SetGroggy
// (Public, BlueprintCallable, BlueprintEvent)

void UUIW_HUD_Gauge_HP_C::SetGroggy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HUD_Gauge_HP_C", "SetGroggy");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UIW_HUD_Gauge_HP.UIW_HUD_Gauge_HP_C.ResetParalyze
// (Public, BlueprintCallable, BlueprintEvent)

void UUIW_HUD_Gauge_HP_C::ResetParalyze()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HUD_Gauge_HP_C", "ResetParalyze");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UIW_HUD_Gauge_HP.UIW_HUD_Gauge_HP_C.RefreshGauge
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULStatComponent*                  StatComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    NeedFxUpdate                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    NeedEffectUpdate                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   CurrentPercent                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    NeedGaugeTween                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   GaugeSizeX                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIW_HUD_Gauge_HP_C::RefreshGauge(class ULStatComponent* StatComponent, bool NeedFxUpdate, bool NeedEffectUpdate, float CurrentPercent, bool NeedGaugeTween, float* GaugeSizeX)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HUD_Gauge_HP_C", "RefreshGauge");

	Params::UIW_HUD_Gauge_HP_C_RefreshGauge Parms{};

	Parms.StatComponent = StatComponent;
	Parms.NeedFxUpdate = NeedFxUpdate;
	Parms.NeedEffectUpdate = NeedEffectUpdate;
	Parms.CurrentPercent = CurrentPercent;
	Parms.NeedGaugeTween = NeedGaugeTween;

	UObject::ProcessEvent(Func, &Parms);

	if (GaugeSizeX != nullptr)
		*GaugeSizeX = Parms.GaugeSizeX;
}

}
