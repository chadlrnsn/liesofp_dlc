#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_Weapon_UmbrellaSword

#include "Basic.hpp"

#include "ABP_Weapon_UmbrellaSword_classes.hpp"
#include "ABP_Weapon_UmbrellaSword_parameters.hpp"


namespace SDK
{

// Function ABP_Weapon_UmbrellaSword.ABP_Weapon_UmbrellaSword_C.ExecuteUbergraph_ABP_Weapon_UmbrellaSword
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Weapon_UmbrellaSword_C::ExecuteUbergraph_ABP_Weapon_UmbrellaSword(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Weapon_UmbrellaSword_C", "ExecuteUbergraph_ABP_Weapon_UmbrellaSword");

	Params::ABP_Weapon_UmbrellaSword_C_ExecuteUbergraph_ABP_Weapon_UmbrellaSword Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_Weapon_UmbrellaSword.ABP_Weapon_UmbrellaSword_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_UmbrellaSword_AnimGraphNode_TransitionResult_046C26A842EE6345AC48C8966902F4E1
// (BlueprintEvent)

void UABP_Weapon_UmbrellaSword_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_UmbrellaSword_AnimGraphNode_TransitionResult_046C26A842EE6345AC48C8966902F4E1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Weapon_UmbrellaSword_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_UmbrellaSword_AnimGraphNode_TransitionResult_046C26A842EE6345AC48C8966902F4E1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_Weapon_UmbrellaSword.ABP_Weapon_UmbrellaSword_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_UmbrellaSword_AnimGraphNode_TransitionResult_119CDE4142F01D3AF2063B80ADE1C92A
// (BlueprintEvent)

void UABP_Weapon_UmbrellaSword_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_UmbrellaSword_AnimGraphNode_TransitionResult_119CDE4142F01D3AF2063B80ADE1C92A()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Weapon_UmbrellaSword_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_UmbrellaSword_AnimGraphNode_TransitionResult_119CDE4142F01D3AF2063B80ADE1C92A");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_Weapon_UmbrellaSword.ABP_Weapon_UmbrellaSword_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_UmbrellaSword_AnimGraphNode_TransitionResult_450921AF49B8A9ACB1072489E6903E35
// (BlueprintEvent)

void UABP_Weapon_UmbrellaSword_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_UmbrellaSword_AnimGraphNode_TransitionResult_450921AF49B8A9ACB1072489E6903E35()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Weapon_UmbrellaSword_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_UmbrellaSword_AnimGraphNode_TransitionResult_450921AF49B8A9ACB1072489E6903E35");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_Weapon_UmbrellaSword.ABP_Weapon_UmbrellaSword_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_UmbrellaSword_AnimGraphNode_TransitionResult_679D9D34489403FFCD2085BAC8F0BB5A
// (BlueprintEvent)

void UABP_Weapon_UmbrellaSword_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_UmbrellaSword_AnimGraphNode_TransitionResult_679D9D34489403FFCD2085BAC8F0BB5A()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Weapon_UmbrellaSword_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_UmbrellaSword_AnimGraphNode_TransitionResult_679D9D34489403FFCD2085BAC8F0BB5A");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_Weapon_UmbrellaSword.ABP_Weapon_UmbrellaSword_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UABP_Weapon_UmbrellaSword_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Weapon_UmbrellaSword_C", "AnimGraph");

	Params::ABP_Weapon_UmbrellaSword_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}

}
