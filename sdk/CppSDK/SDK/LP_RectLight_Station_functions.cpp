#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LP_RectLight_Station

#include "Basic.hpp"

#include "LP_RectLight_Station_classes.hpp"
#include "LP_RectLight_Station_parameters.hpp"


namespace SDK
{

// Function LP_RectLight_Station.LP_RectLight_Station_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ALP_RectLight_Station_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LP_RectLight_Station_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LP_RectLight_Station.LP_RectLight_Station_C.BPF Lect Light Movable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URectLightComponent*              Light                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALP_RectLight_Station_C::BPF_Lect_Light_Movable(class URectLightComponent* Light)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LP_RectLight_Station_C", "BPF Lect Light Movable");

	Params::LP_RectLight_Station_C_BPF_Lect_Light_Movable Parms{};

	Parms.Light = Light;

	UObject::ProcessEvent(Func, &Parms);
}

}

