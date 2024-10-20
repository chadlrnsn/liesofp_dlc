#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIW_MOV_Subtitle

#include "Basic.hpp"

#include "UIW_MOV_Subtitle_classes.hpp"
#include "UIW_MOV_Subtitle_parameters.hpp"


namespace SDK
{

// Function UIW_MOV_Subtitle.UIW_MOV_Subtitle_C.ExecuteUbergraph_UIW_MOV_Subtitle
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIW_MOV_Subtitle_C::ExecuteUbergraph_UIW_MOV_Subtitle(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_MOV_Subtitle_C", "ExecuteUbergraph_UIW_MOV_Subtitle");

	Params::UIW_MOV_Subtitle_C_ExecuteUbergraph_UIW_MOV_Subtitle Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_MOV_Subtitle.UIW_MOV_Subtitle_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUIW_MOV_Subtitle_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_MOV_Subtitle_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UIW_MOV_Subtitle.UIW_MOV_Subtitle_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUIW_MOV_Subtitle_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_MOV_Subtitle_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UIW_MOV_Subtitle.UIW_MOV_Subtitle_C.OnShowSubtitle
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             CodeName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Duration                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIW_MOV_Subtitle_C::OnShowSubtitle(class FName CodeName, float Duration)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_MOV_Subtitle_C", "OnShowSubtitle");

	Params::UIW_MOV_Subtitle_C_OnShowSubtitle Parms{};

	Parms.CodeName = CodeName;
	Parms.Duration = Duration;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_MOV_Subtitle.UIW_MOV_Subtitle_C.Hide
// (Private, BlueprintCallable, BlueprintEvent)

void UUIW_MOV_Subtitle_C::Hide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_MOV_Subtitle_C", "Hide");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UIW_MOV_Subtitle.UIW_MOV_Subtitle_C.CompleteTween
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             CategoryName                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIW_MOV_Subtitle_C::CompleteTween(class FName CategoryName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_MOV_Subtitle_C", "CompleteTween");

	Params::UIW_MOV_Subtitle_C_CompleteTween Parms{};

	Parms.CategoryName = CategoryName;

	UObject::ProcessEvent(Func, &Parms);
}

}

