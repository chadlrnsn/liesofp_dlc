#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTask_MoveToRoam

#include "Basic.hpp"

#include "BTask_MoveToRoam_classes.hpp"
#include "BTask_MoveToRoam_parameters.hpp"


namespace SDK
{

// Function BTask_MoveToRoam.BTask_MoveToRoam_C.ExecuteUbergraph_BTask_MoveToRoam
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTask_MoveToRoam_C::ExecuteUbergraph_BTask_MoveToRoam(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTask_MoveToRoam_C", "ExecuteUbergraph_BTask_MoveToRoam");

	Params::BTask_MoveToRoam_C_ExecuteUbergraph_BTask_MoveToRoam Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BTask_MoveToRoam.BTask_MoveToRoam_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*                    OwnerController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTask_MoveToRoam_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTask_MoveToRoam_C", "ReceiveExecuteAI");

	Params::BTask_MoveToRoam_C_ReceiveExecuteAI Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}

}
