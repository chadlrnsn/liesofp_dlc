#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LightProp_Lamp_03

#include "Basic.hpp"

#include "BP_LightProp_Lamp_03_classes.hpp"
#include "BP_LightProp_Lamp_03_parameters.hpp"


namespace SDK
{

// Function BP_LightProp_Lamp_03.BP_LightProp_Lamp_03_C.NewEventDispatcher_0__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_LightProp_Lamp_03_C::NewEventDispatcher_0__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LightProp_Lamp_03_C", "NewEventDispatcher_0__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LightProp_Lamp_03.BP_LightProp_Lamp_03_C.NewFunction_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    LightOn_0                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_LightProp_Lamp_03_C::NewFunction_0(bool LightOn_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LightProp_Lamp_03_C", "NewFunction_0");

	Params::BP_LightProp_Lamp_03_C_NewFunction_0 Parms{};

	Parms.LightOn_0 = LightOn_0;

	UObject::ProcessEvent(Func, &Parms);
}

}
