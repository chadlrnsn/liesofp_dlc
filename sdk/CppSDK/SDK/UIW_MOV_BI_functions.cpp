#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIW_MOV_BI

#include "Basic.hpp"

#include "UIW_MOV_BI_classes.hpp"
#include "UIW_MOV_BI_parameters.hpp"


namespace SDK
{

// Function UIW_MOV_BI.UIW_MOV_BI_C.ExecuteUbergraph_UIW_MOV_BI
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIW_MOV_BI_C::ExecuteUbergraph_UIW_MOV_BI(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_MOV_BI_C", "ExecuteUbergraph_UIW_MOV_BI");

	Params::UIW_MOV_BI_C_ExecuteUbergraph_UIW_MOV_BI Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_MOV_BI.UIW_MOV_BI_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUIW_MOV_BI_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_MOV_BI_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

