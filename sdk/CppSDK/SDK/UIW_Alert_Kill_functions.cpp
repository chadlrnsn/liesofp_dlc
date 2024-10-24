#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIW_Alert_Kill

#include "Basic.hpp"

#include "UIW_Alert_Kill_classes.hpp"
#include "UIW_Alert_Kill_parameters.hpp"


namespace SDK
{

// Function UIW_Alert_Kill.UIW_Alert_Kill_C.ExecuteUbergraph_UIW_Alert_Kill
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIW_Alert_Kill_C::ExecuteUbergraph_UIW_Alert_Kill(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_Alert_Kill_C", "ExecuteUbergraph_UIW_Alert_Kill");

	Params::UIW_Alert_Kill_C_ExecuteUbergraph_UIW_Alert_Kill Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_Alert_Kill.UIW_Alert_Kill_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUIW_Alert_Kill_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_Alert_Kill_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UIW_Alert_Kill.UIW_Alert_Kill_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUIW_Alert_Kill_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_Alert_Kill_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UIW_Alert_Kill.UIW_Alert_Kill_C.Show
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Delay                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsGameEnd                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUIW_Alert_Kill_C::Show(float Delay, bool IsGameEnd)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_Alert_Kill_C", "Show");

	Params::UIW_Alert_Kill_C_Show Parms{};

	Parms.Delay = Delay;
	Parms.IsGameEnd = IsGameEnd;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_Alert_Kill.UIW_Alert_Kill_C.Finished_123DF7754B5BD5638AACBAA9BC586AAB
// (BlueprintCallable, BlueprintEvent)

void UUIW_Alert_Kill_C::Finished_123DF7754B5BD5638AACBAA9BC586AAB()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_Alert_Kill_C", "Finished_123DF7754B5BD5638AACBAA9BC586AAB");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UIW_Alert_Kill.UIW_Alert_Kill_C.SetAlertKill
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             CodeName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIW_Alert_Kill_C::SetAlertKill(class FName CodeName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_Alert_Kill_C", "SetAlertKill");

	Params::UIW_Alert_Kill_C_SetAlertKill Parms{};

	Parms.CodeName = CodeName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_Alert_Kill.UIW_Alert_Kill_C.OnAniFinished
// (Public, BlueprintCallable, BlueprintEvent)

void UUIW_Alert_Kill_C::OnAniFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_Alert_Kill_C", "OnAniFinished");

	UObject::ProcessEvent(Func, nullptr);
}

}

