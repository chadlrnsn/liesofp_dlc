#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIW_HelpMate

#include "Basic.hpp"

#include "UIW_HelpMate_classes.hpp"
#include "UIW_HelpMate_parameters.hpp"


namespace SDK
{

// Function UIW_HelpMate.UIW_HelpMate_C.ExecuteUbergraph_UIW_HelpMate
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIW_HelpMate_C::ExecuteUbergraph_UIW_HelpMate(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HelpMate_C", "ExecuteUbergraph_UIW_HelpMate");

	Params::UIW_HelpMate_C_ExecuteUbergraph_UIW_HelpMate Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_HelpMate.UIW_HelpMate_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUIW_HelpMate_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HelpMate_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UIW_HelpMate.UIW_HelpMate_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUIW_HelpMate_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HelpMate_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UIW_HelpMate.UIW_HelpMate_C.ShowHelpmateHPBar
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ALNPCCharacter*                   NPCActor_0                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsVisible_0                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUIW_HelpMate_C::ShowHelpmateHPBar(class ALNPCCharacter* NPCActor_0, bool IsVisible_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HelpMate_C", "ShowHelpmateHPBar");

	Params::UIW_HelpMate_C_ShowHelpmateHPBar Parms{};

	Parms.NPCActor_0 = NPCActor_0;
	Parms.IsVisible_0 = IsVisible_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_HelpMate.UIW_HelpMate_C.OnTweenComplete
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             CategoryName                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIW_HelpMate_C::OnTweenComplete(class FName CategoryName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HelpMate_C", "OnTweenComplete");

	Params::UIW_HelpMate_C_OnTweenComplete Parms{};

	Parms.CategoryName = CategoryName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_HelpMate.UIW_HelpMate_C.RefreshHP
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUIW_HelpMate_C::RefreshHP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HelpMate_C", "RefreshHP");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UIW_HelpMate.UIW_HelpMate_C.SetHP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   HPPrecent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIW_HelpMate_C::SetHP(float HPPrecent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HelpMate_C", "SetHP");

	Params::UIW_HelpMate_C_SetHP Parms{};

	Parms.HPPrecent = HPPrecent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_HelpMate.UIW_HelpMate_C.OnHelpmateAbnormal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             AbnormalName                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                                   AbnormalUniqueId                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Visible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUIW_HelpMate_C::OnHelpmateAbnormal(class FName AbnormalName, int64 AbnormalUniqueId, bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HelpMate_C", "OnHelpmateAbnormal");

	Params::UIW_HelpMate_C_OnHelpmateAbnormal Parms{};

	Parms.AbnormalName = AbnormalName;
	Parms.AbnormalUniqueId = AbnormalUniqueId;
	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);
}

}

