#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIW_Alert_BGM

#include "Basic.hpp"

#include "UIW_Alert_BGM_classes.hpp"
#include "UIW_Alert_BGM_parameters.hpp"


namespace SDK
{

// Function UIW_Alert_BGM.UIW_Alert_BGM_C.ExecuteUbergraph_UIW_Alert_BGM
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIW_Alert_BGM_C::ExecuteUbergraph_UIW_Alert_BGM(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_Alert_BGM_C", "ExecuteUbergraph_UIW_Alert_BGM");

	Params::UIW_Alert_BGM_C_ExecuteUbergraph_UIW_Alert_BGM Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_Alert_BGM.UIW_Alert_BGM_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUIW_Alert_BGM_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_Alert_BGM_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UIW_Alert_BGM.UIW_Alert_BGM_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUIW_Alert_BGM_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_Alert_BGM_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UIW_Alert_BGM.UIW_Alert_BGM_C.ShowBGM
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             RowName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIW_Alert_BGM_C::ShowBGM(class FName RowName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_Alert_BGM_C", "ShowBGM");

	Params::UIW_Alert_BGM_C_ShowBGM Parms{};

	Parms.RowName = RowName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_Alert_BGM.UIW_Alert_BGM_C.HideBGM
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUIW_Alert_BGM_C::HideBGM()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_Alert_BGM_C", "HideBGM");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UIW_Alert_BGM.UIW_Alert_BGM_C.VisibleEffectShow
// (Private, BlueprintCallable, BlueprintEvent)

void UUIW_Alert_BGM_C::VisibleEffectShow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_Alert_BGM_C", "VisibleEffectShow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UIW_Alert_BGM.UIW_Alert_BGM_C.VisibleEffectHide
// (Private, BlueprintCallable, BlueprintEvent)

void UUIW_Alert_BGM_C::VisibleEffectHide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_Alert_BGM_C", "VisibleEffectHide");

	UObject::ProcessEvent(Func, nullptr);
}

}

