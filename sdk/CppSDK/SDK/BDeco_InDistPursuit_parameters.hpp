#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BDeco_InDistPursuit

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BDeco_InDistPursuit.BDeco_InDistPursuit_C.PerformConditionCheckAI
// 0x0050 (0x0050 - 0x0000)
struct BDeco_InDistPursuit_C_PerformConditionCheckAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0014(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ALNPCController*                        K2Node_DynamicCast_AsLNPCController;               // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetPrimaryTarget_ReturnValue;             // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39[0x3];                                       // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetPursuitDistance_ReturnValue;           // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0040(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CheckInsideDistance_ReturnValue;          // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BDeco_InDistPursuit_C_PerformConditionCheckAI) == 0x000008, "Wrong alignment on BDeco_InDistPursuit_C_PerformConditionCheckAI");
static_assert(sizeof(BDeco_InDistPursuit_C_PerformConditionCheckAI) == 0x000050, "Wrong size on BDeco_InDistPursuit_C_PerformConditionCheckAI");
static_assert(offsetof(BDeco_InDistPursuit_C_PerformConditionCheckAI, OwnerController) == 0x000000, "Member 'BDeco_InDistPursuit_C_PerformConditionCheckAI::OwnerController' has a wrong offset!");
static_assert(offsetof(BDeco_InDistPursuit_C_PerformConditionCheckAI, ControlledPawn) == 0x000008, "Member 'BDeco_InDistPursuit_C_PerformConditionCheckAI::ControlledPawn' has a wrong offset!");
static_assert(offsetof(BDeco_InDistPursuit_C_PerformConditionCheckAI, ReturnValue) == 0x000010, "Member 'BDeco_InDistPursuit_C_PerformConditionCheckAI::ReturnValue' has a wrong offset!");
static_assert(offsetof(BDeco_InDistPursuit_C_PerformConditionCheckAI, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000014, "Member 'BDeco_InDistPursuit_C_PerformConditionCheckAI::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BDeco_InDistPursuit_C_PerformConditionCheckAI, K2Node_DynamicCast_AsLNPCController) == 0x000020, "Member 'BDeco_InDistPursuit_C_PerformConditionCheckAI::K2Node_DynamicCast_AsLNPCController' has a wrong offset!");
static_assert(offsetof(BDeco_InDistPursuit_C_PerformConditionCheckAI, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'BDeco_InDistPursuit_C_PerformConditionCheckAI::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BDeco_InDistPursuit_C_PerformConditionCheckAI, CallFunc_GetPrimaryTarget_ReturnValue) == 0x000030, "Member 'BDeco_InDistPursuit_C_PerformConditionCheckAI::CallFunc_GetPrimaryTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(BDeco_InDistPursuit_C_PerformConditionCheckAI, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'BDeco_InDistPursuit_C_PerformConditionCheckAI::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BDeco_InDistPursuit_C_PerformConditionCheckAI, CallFunc_GetPursuitDistance_ReturnValue) == 0x00003C, "Member 'BDeco_InDistPursuit_C_PerformConditionCheckAI::CallFunc_GetPursuitDistance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BDeco_InDistPursuit_C_PerformConditionCheckAI, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000040, "Member 'BDeco_InDistPursuit_C_PerformConditionCheckAI::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BDeco_InDistPursuit_C_PerformConditionCheckAI, CallFunc_CheckInsideDistance_ReturnValue) == 0x00004C, "Member 'BDeco_InDistPursuit_C_PerformConditionCheckAI::CallFunc_CheckInsideDistance_ReturnValue' has a wrong offset!");

}
