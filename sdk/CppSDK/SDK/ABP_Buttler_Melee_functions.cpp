#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_Buttler_Melee

#include "Basic.hpp"

#include "ABP_Buttler_Melee_classes.hpp"
#include "ABP_Buttler_Melee_parameters.hpp"


namespace SDK
{

// Function ABP_Buttler_Melee.ABP_Buttler_Melee_C.AnimLayer_Additive
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        MainStateBasePose                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        AdditivePose                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        AnimLayer_Additive_0                                   (Parm, OutParm, NoDestructor)

void UABP_Buttler_Melee_C::AnimLayer_Additive(const struct FPoseLink& MainStateBasePose, const struct FPoseLink& AdditivePose, struct FPoseLink* AnimLayer_Additive_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Buttler_Melee_C", "AnimLayer_Additive");

	Params::ABP_Buttler_Melee_C_AnimLayer_Additive Parms{};

	Parms.MainStateBasePose = std::move(MainStateBasePose);
	Parms.AdditivePose = std::move(AdditivePose);

	UObject::ProcessEvent(Func, &Parms);

	if (AnimLayer_Additive_0 != nullptr)
		*AnimLayer_Additive_0 = std::move(Parms.AnimLayer_Additive_0);
}


// Function ABP_Buttler_Melee.ABP_Buttler_Melee_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UABP_Buttler_Melee_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Buttler_Melee_C", "AnimGraph");

	Params::ABP_Buttler_Melee_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}


// Function ABP_Buttler_Melee.ABP_Buttler_Melee_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Buttler_Melee_AnimGraphNode_ApplyMeshSpaceAdditive_A115228F4301C4B845662DA8FEF883A3
// (BlueprintEvent)

void UABP_Buttler_Melee_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Buttler_Melee_AnimGraphNode_ApplyMeshSpaceAdditive_A115228F4301C4B845662DA8FEF883A3()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Buttler_Melee_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Buttler_Melee_AnimGraphNode_ApplyMeshSpaceAdditive_A115228F4301C4B845662DA8FEF883A3");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_Buttler_Melee.ABP_Buttler_Melee_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Buttler_Melee_AnimGraphNode_ModifyBone_8B2DFB384250677A090946868E45E358
// (BlueprintEvent)

void UABP_Buttler_Melee_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Buttler_Melee_AnimGraphNode_ModifyBone_8B2DFB384250677A090946868E45E358()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Buttler_Melee_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Buttler_Melee_AnimGraphNode_ModifyBone_8B2DFB384250677A090946868E45E358");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_Buttler_Melee.ABP_Buttler_Melee_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Buttler_Melee_AnimGraphNode_ModifyBone_1941EF3D42565E60EA410CA5D1C9E4AA
// (BlueprintEvent)

void UABP_Buttler_Melee_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Buttler_Melee_AnimGraphNode_ModifyBone_1941EF3D42565E60EA410CA5D1C9E4AA()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Buttler_Melee_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Buttler_Melee_AnimGraphNode_ModifyBone_1941EF3D42565E60EA410CA5D1C9E4AA");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_Buttler_Melee.ABP_Buttler_Melee_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Buttler_Melee_AnimGraphNode_BlendListByBool_0D17E07B4CEDCC7BAB311794D70D9BEE
// (BlueprintEvent)

void UABP_Buttler_Melee_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Buttler_Melee_AnimGraphNode_BlendListByBool_0D17E07B4CEDCC7BAB311794D70D9BEE()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Buttler_Melee_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Buttler_Melee_AnimGraphNode_BlendListByBool_0D17E07B4CEDCC7BAB311794D70D9BEE");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_Buttler_Melee.ABP_Buttler_Melee_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Buttler_Melee_AnimGraphNode_TransitionResult_06462E564B6929FD284C87A6103B1883
// (BlueprintEvent)

void UABP_Buttler_Melee_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Buttler_Melee_AnimGraphNode_TransitionResult_06462E564B6929FD284C87A6103B1883()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Buttler_Melee_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Buttler_Melee_AnimGraphNode_TransitionResult_06462E564B6929FD284C87A6103B1883");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_Buttler_Melee.ABP_Buttler_Melee_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Buttler_Melee_AnimGraphNode_TransitionResult_CEE5B9B74A8D33FDC4198E9193BFF9F3
// (BlueprintEvent)

void UABP_Buttler_Melee_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Buttler_Melee_AnimGraphNode_TransitionResult_CEE5B9B74A8D33FDC4198E9193BFF9F3()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Buttler_Melee_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Buttler_Melee_AnimGraphNode_TransitionResult_CEE5B9B74A8D33FDC4198E9193BFF9F3");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_Buttler_Melee.ABP_Buttler_Melee_C.ExecuteUbergraph_ABP_Buttler_Melee
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Buttler_Melee_C::ExecuteUbergraph_ABP_Buttler_Melee(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Buttler_Melee_C", "ExecuteUbergraph_ABP_Buttler_Melee");

	Params::ABP_Buttler_Melee_C_ExecuteUbergraph_ABP_Buttler_Melee Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

