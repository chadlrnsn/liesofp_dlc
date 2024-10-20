#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIW_Page_Indicator

#include "Basic.hpp"

#include "UIW_Page_Indicator_classes.hpp"
#include "UIW_Page_Indicator_parameters.hpp"


namespace SDK
{

// Function UIW_Page_Indicator.UIW_Page_Indicator_C.SetData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Current                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Max                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIW_Page_Indicator_C::SetData(int32 Current, int32 Max)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_Page_Indicator_C", "SetData");

	Params::UIW_Page_Indicator_C_SetData Parms{};

	Parms.Current = Current;
	Parms.Max = Max;

	UObject::ProcessEvent(Func, &Parms);
}

}

