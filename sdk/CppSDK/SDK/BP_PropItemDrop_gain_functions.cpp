#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PropItemDrop_gain

#include "Basic.hpp"

#include "BP_PropItemDrop_gain_classes.hpp"
#include "BP_PropItemDrop_gain_parameters.hpp"


namespace SDK
{

// Function BP_PropItemDrop_gain.BP_PropItemDrop_Gain_C.ExecuteUbergraph_BP_PropItemDrop_Gain
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PropItemDrop_Gain_C::ExecuteUbergraph_BP_PropItemDrop_Gain(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PropItemDrop_Gain_C", "ExecuteUbergraph_BP_PropItemDrop_Gain");

	Params::BP_PropItemDrop_Gain_C_ExecuteUbergraph_BP_PropItemDrop_Gain Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PropItemDrop_gain.BP_PropItemDrop_Gain_C.OnInteractionEnd
// (Event, Public, BlueprintEvent)

void ABP_PropItemDrop_Gain_C::OnInteractionEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PropItemDrop_Gain_C", "OnInteractionEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PropItemDrop_gain.BP_PropItemDrop_Gain_C.OnInteractionStart
// (Event, Public, BlueprintEvent)

void ABP_PropItemDrop_Gain_C::OnInteractionStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PropItemDrop_Gain_C", "OnInteractionStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PropItemDrop_gain.BP_PropItemDrop_Gain_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PropItemDrop_Gain_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PropItemDrop_Gain_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

