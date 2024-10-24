#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LNPCControllerBP

#include "Basic.hpp"

#include "LNPCControllerBP_classes.hpp"
#include "LNPCControllerBP_parameters.hpp"


namespace SDK
{

// Function LNPCControllerBP.LNPCControllerBP_C.ExecuteUbergraph_LNPCControllerBP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALNPCControllerBP_C::ExecuteUbergraph_LNPCControllerBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LNPCControllerBP_C", "ExecuteUbergraph_LNPCControllerBP");

	Params::LNPCControllerBP_C_ExecuteUbergraph_LNPCControllerBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LNPCControllerBP.LNPCControllerBP_C.RunInitBehaviorTree
// (Event, Public, BlueprintEvent)
// Parameters:
// class UBehaviorTree*                    CustomBehaviroTree                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALNPCControllerBP_C::RunInitBehaviorTree(class UBehaviorTree* CustomBehaviroTree)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LNPCControllerBP_C", "RunInitBehaviorTree");

	Params::LNPCControllerBP_C_RunInitBehaviorTree Parms{};

	Parms.CustomBehaviroTree = CustomBehaviroTree;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LNPCControllerBP.LNPCControllerBP_C.OnMovementNavigationQueryFilter
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UNavigationQueryFilter>FilterClass                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void ALNPCControllerBP_C::OnMovementNavigationQueryFilter(TSubclassOf<class UNavigationQueryFilter>* FilterClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LNPCControllerBP_C", "OnMovementNavigationQueryFilter");

	Params::LNPCControllerBP_C_OnMovementNavigationQueryFilter Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (FilterClass != nullptr)
		*FilterClass = Parms.FilterClass;
}

}

