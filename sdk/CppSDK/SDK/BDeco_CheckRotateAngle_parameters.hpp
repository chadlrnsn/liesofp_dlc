#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BDeco_CheckRotateAngle

#include "Basic.hpp"

#include "ProjectPContentInfo_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BDeco_CheckRotateAngle.BDeco_CheckRotateAngle_C.PerformConditionCheckAI
// 0x0078 (0x0078 - 0x0000)
struct BDeco_CheckRotateAngle_C_PerformConditionCheckAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FNPCInfoPtr                            CallFunc_GetNpcInfo_ReturnValue;                   // 0x0018(0x0008)(NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetRotateAngle_ReturnValue;               // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_GetSelectedSkillCodeName_ReturnValue;     // 0x002C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_35[0x3];                                       // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSkillInfoPtr                          CallFunc_FindSkillInfoByNameBP_ReturnValue;        // 0x0038(0x0008)(NoDestructor)
	int32                                         CallFunc_GetSkillRotateAngle_ReturnValue;          // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45[0x3];                                       // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_1;                           // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_GetSelectedSkillCodeName_ReturnValue_1;   // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetSkillTargetLocation_Location;          // 0x0058(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetSkillTargetLocation_ReturnValue;       // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65[0x3];                                       // 0x0065(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSkillInfoPtr                          CallFunc_FindSkillInfoByNameBP_ReturnValue_1;      // 0x0068(0x0008)(NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckTargetAngleDeviation_ReturnValue;    // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckTargetAngleDeviation_ReturnValue_1;  // 0x0072(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BDeco_CheckRotateAngle_C_PerformConditionCheckAI) == 0x000008, "Wrong alignment on BDeco_CheckRotateAngle_C_PerformConditionCheckAI");
static_assert(sizeof(BDeco_CheckRotateAngle_C_PerformConditionCheckAI) == 0x000078, "Wrong size on BDeco_CheckRotateAngle_C_PerformConditionCheckAI");
static_assert(offsetof(BDeco_CheckRotateAngle_C_PerformConditionCheckAI, OwnerController) == 0x000000, "Member 'BDeco_CheckRotateAngle_C_PerformConditionCheckAI::OwnerController' has a wrong offset!");
static_assert(offsetof(BDeco_CheckRotateAngle_C_PerformConditionCheckAI, ControlledPawn) == 0x000008, "Member 'BDeco_CheckRotateAngle_C_PerformConditionCheckAI::ControlledPawn' has a wrong offset!");
static_assert(offsetof(BDeco_CheckRotateAngle_C_PerformConditionCheckAI, ReturnValue) == 0x000010, "Member 'BDeco_CheckRotateAngle_C_PerformConditionCheckAI::ReturnValue' has a wrong offset!");
static_assert(offsetof(BDeco_CheckRotateAngle_C_PerformConditionCheckAI, CallFunc_GetNpcInfo_ReturnValue) == 0x000018, "Member 'BDeco_CheckRotateAngle_C_PerformConditionCheckAI::CallFunc_GetNpcInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(BDeco_CheckRotateAngle_C_PerformConditionCheckAI, CallFunc_Greater_IntInt_ReturnValue) == 0x000020, "Member 'BDeco_CheckRotateAngle_C_PerformConditionCheckAI::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BDeco_CheckRotateAngle_C_PerformConditionCheckAI, CallFunc_GetRotateAngle_ReturnValue) == 0x000024, "Member 'BDeco_CheckRotateAngle_C_PerformConditionCheckAI::CallFunc_GetRotateAngle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BDeco_CheckRotateAngle_C_PerformConditionCheckAI, Temp_bool_Variable) == 0x000028, "Member 'BDeco_CheckRotateAngle_C_PerformConditionCheckAI::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BDeco_CheckRotateAngle_C_PerformConditionCheckAI, CallFunc_GetSelectedSkillCodeName_ReturnValue) == 0x00002C, "Member 'BDeco_CheckRotateAngle_C_PerformConditionCheckAI::CallFunc_GetSelectedSkillCodeName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BDeco_CheckRotateAngle_C_PerformConditionCheckAI, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000034, "Member 'BDeco_CheckRotateAngle_C_PerformConditionCheckAI::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BDeco_CheckRotateAngle_C_PerformConditionCheckAI, CallFunc_FindSkillInfoByNameBP_ReturnValue) == 0x000038, "Member 'BDeco_CheckRotateAngle_C_PerformConditionCheckAI::CallFunc_FindSkillInfoByNameBP_ReturnValue' has a wrong offset!");
static_assert(offsetof(BDeco_CheckRotateAngle_C_PerformConditionCheckAI, CallFunc_GetSkillRotateAngle_ReturnValue) == 0x000040, "Member 'BDeco_CheckRotateAngle_C_PerformConditionCheckAI::CallFunc_GetSkillRotateAngle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BDeco_CheckRotateAngle_C_PerformConditionCheckAI, Temp_bool_Variable_1) == 0x000044, "Member 'BDeco_CheckRotateAngle_C_PerformConditionCheckAI::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BDeco_CheckRotateAngle_C_PerformConditionCheckAI, K2Node_Select_Default) == 0x000048, "Member 'BDeco_CheckRotateAngle_C_PerformConditionCheckAI::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BDeco_CheckRotateAngle_C_PerformConditionCheckAI, K2Node_Select_Default_1) == 0x00004C, "Member 'BDeco_CheckRotateAngle_C_PerformConditionCheckAI::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(BDeco_CheckRotateAngle_C_PerformConditionCheckAI, CallFunc_GetSelectedSkillCodeName_ReturnValue_1) == 0x000050, "Member 'BDeco_CheckRotateAngle_C_PerformConditionCheckAI::CallFunc_GetSelectedSkillCodeName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BDeco_CheckRotateAngle_C_PerformConditionCheckAI, CallFunc_GetSkillTargetLocation_Location) == 0x000058, "Member 'BDeco_CheckRotateAngle_C_PerformConditionCheckAI::CallFunc_GetSkillTargetLocation_Location' has a wrong offset!");
static_assert(offsetof(BDeco_CheckRotateAngle_C_PerformConditionCheckAI, CallFunc_GetSkillTargetLocation_ReturnValue) == 0x000064, "Member 'BDeco_CheckRotateAngle_C_PerformConditionCheckAI::CallFunc_GetSkillTargetLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BDeco_CheckRotateAngle_C_PerformConditionCheckAI, CallFunc_FindSkillInfoByNameBP_ReturnValue_1) == 0x000068, "Member 'BDeco_CheckRotateAngle_C_PerformConditionCheckAI::CallFunc_FindSkillInfoByNameBP_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BDeco_CheckRotateAngle_C_PerformConditionCheckAI, CallFunc_IsValid_ReturnValue) == 0x000070, "Member 'BDeco_CheckRotateAngle_C_PerformConditionCheckAI::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BDeco_CheckRotateAngle_C_PerformConditionCheckAI, CallFunc_CheckTargetAngleDeviation_ReturnValue) == 0x000071, "Member 'BDeco_CheckRotateAngle_C_PerformConditionCheckAI::CallFunc_CheckTargetAngleDeviation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BDeco_CheckRotateAngle_C_PerformConditionCheckAI, CallFunc_CheckTargetAngleDeviation_ReturnValue_1) == 0x000072, "Member 'BDeco_CheckRotateAngle_C_PerformConditionCheckAI::CallFunc_CheckTargetAngleDeviation_ReturnValue_1' has a wrong offset!");

}

