#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIW_Lie_Progress_Low

#include "Basic.hpp"

#include "UIW_Lie_Progress_Low_classes.hpp"
#include "UIW_Lie_Progress_Low_parameters.hpp"


namespace SDK
{

// Function UIW_Lie_Progress_Low.UIW_Lie_Progress_Low_C.SetProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Current                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIW_Lie_Progress_Low_C::SetProgress(float Current)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_Lie_Progress_Low_C", "SetProgress");

	Params::UIW_Lie_Progress_Low_C_SetProgress Parms{};

	Parms.Current = Current;

	UObject::ProcessEvent(Func, &Parms);
}

}
