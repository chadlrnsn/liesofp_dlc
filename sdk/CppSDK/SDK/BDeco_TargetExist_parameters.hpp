#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BDeco_TargetExist

#include "Basic.hpp"


namespace SDK::Params
{

// Function BDeco_TargetExist.BDeco_TargetExist_C.PerformConditionCheckAI
// 0x0028 (0x0028 - 0x0000)
struct BDeco_TargetExist_C_PerformConditionCheckAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ALNPCController*                        K2Node_DynamicCast_AsLNPCController;               // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsTargetExist_ReturnValue;                // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BDeco_TargetExist_C_PerformConditionCheckAI) == 0x000008, "Wrong alignment on BDeco_TargetExist_C_PerformConditionCheckAI");
static_assert(sizeof(BDeco_TargetExist_C_PerformConditionCheckAI) == 0x000028, "Wrong size on BDeco_TargetExist_C_PerformConditionCheckAI");
static_assert(offsetof(BDeco_TargetExist_C_PerformConditionCheckAI, OwnerController) == 0x000000, "Member 'BDeco_TargetExist_C_PerformConditionCheckAI::OwnerController' has a wrong offset!");
static_assert(offsetof(BDeco_TargetExist_C_PerformConditionCheckAI, ControlledPawn) == 0x000008, "Member 'BDeco_TargetExist_C_PerformConditionCheckAI::ControlledPawn' has a wrong offset!");
static_assert(offsetof(BDeco_TargetExist_C_PerformConditionCheckAI, ReturnValue) == 0x000010, "Member 'BDeco_TargetExist_C_PerformConditionCheckAI::ReturnValue' has a wrong offset!");
static_assert(offsetof(BDeco_TargetExist_C_PerformConditionCheckAI, K2Node_DynamicCast_AsLNPCController) == 0x000018, "Member 'BDeco_TargetExist_C_PerformConditionCheckAI::K2Node_DynamicCast_AsLNPCController' has a wrong offset!");
static_assert(offsetof(BDeco_TargetExist_C_PerformConditionCheckAI, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BDeco_TargetExist_C_PerformConditionCheckAI::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BDeco_TargetExist_C_PerformConditionCheckAI, CallFunc_IsTargetExist_ReturnValue) == 0x000021, "Member 'BDeco_TargetExist_C_PerformConditionCheckAI::CallFunc_IsTargetExist_ReturnValue' has a wrong offset!");

}
