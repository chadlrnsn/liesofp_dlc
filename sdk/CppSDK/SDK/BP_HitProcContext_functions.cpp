#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_HitProcContext

#include "Basic.hpp"

#include "BP_HitProcContext_classes.hpp"
#include "BP_HitProcContext_parameters.hpp"


namespace SDK
{

// Function BP_HitProcContext.BP_HitProcContext_C.OnPrepareBP
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_HitProcContext_C::OnPrepareBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HitProcContext_C", "OnPrepareBP");

	Params::BP_HitProcContext_C_OnPrepareBP Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_HitProcContext.BP_HitProcContext_C.OnResetBP
// (Event, Public, BlueprintEvent)

void UBP_HitProcContext_C::OnResetBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HitProcContext_C", "OnResetBP");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_HitProcContext.BP_HitProcContext_C.ExecuteUbergraph_BP_HitProcContext
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HitProcContext_C::ExecuteUbergraph_BP_HitProcContext(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HitProcContext_C", "ExecuteUbergraph_BP_HitProcContext");

	Params::BP_HitProcContext_C_ExecuteUbergraph_BP_HitProcContext Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
