#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BDeco_CheckNPCInfo

#include "Basic.hpp"

#include "ProjectPContentInfo_structs.hpp"


namespace SDK::Params
{

// Function BDeco_CheckNPCInfo.BDeco_CheckNPCInfo_C.PerformConditionCheckAI
// 0x0070 (0x0070 - 0x0000)
struct BDeco_CheckNPCInfo_C_PerformConditionCheckAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ALNPCCharacter*                         K2Node_DynamicCast_AsLNPCCharacter;                // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_GetNPCInfoActionGroupCodeName_ReturnValue; // 0x0024(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2D[0x3];                                       // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_35[0x3];                                       // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FNPCInfoPtr                            CallFunc_GetNpcInfo_ReturnValue;                   // 0x0038(0x0008)(NoDestructor)
	class FName                                   CallFunc_GetNpcAssetTableCodeName_ReturnValue;     // 0x0040(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Find_ReturnValue_1;                 // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FNPCInfoPtr                            CallFunc_GetNpcInfo_ReturnValue_1;                 // 0x0050(0x0008)(NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_1;        // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59[0x3];                                       // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_GetCodeName_ReturnValue;                  // 0x005C(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Find_ReturnValue_2;                 // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_2;        // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BDeco_CheckNPCInfo_C_PerformConditionCheckAI) == 0x000008, "Wrong alignment on BDeco_CheckNPCInfo_C_PerformConditionCheckAI");
static_assert(sizeof(BDeco_CheckNPCInfo_C_PerformConditionCheckAI) == 0x000070, "Wrong size on BDeco_CheckNPCInfo_C_PerformConditionCheckAI");
static_assert(offsetof(BDeco_CheckNPCInfo_C_PerformConditionCheckAI, OwnerController) == 0x000000, "Member 'BDeco_CheckNPCInfo_C_PerformConditionCheckAI::OwnerController' has a wrong offset!");
static_assert(offsetof(BDeco_CheckNPCInfo_C_PerformConditionCheckAI, ControlledPawn) == 0x000008, "Member 'BDeco_CheckNPCInfo_C_PerformConditionCheckAI::ControlledPawn' has a wrong offset!");
static_assert(offsetof(BDeco_CheckNPCInfo_C_PerformConditionCheckAI, ReturnValue) == 0x000010, "Member 'BDeco_CheckNPCInfo_C_PerformConditionCheckAI::ReturnValue' has a wrong offset!");
static_assert(offsetof(BDeco_CheckNPCInfo_C_PerformConditionCheckAI, K2Node_DynamicCast_AsLNPCCharacter) == 0x000018, "Member 'BDeco_CheckNPCInfo_C_PerformConditionCheckAI::K2Node_DynamicCast_AsLNPCCharacter' has a wrong offset!");
static_assert(offsetof(BDeco_CheckNPCInfo_C_PerformConditionCheckAI, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BDeco_CheckNPCInfo_C_PerformConditionCheckAI::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BDeco_CheckNPCInfo_C_PerformConditionCheckAI, CallFunc_GetNPCInfoActionGroupCodeName_ReturnValue) == 0x000024, "Member 'BDeco_CheckNPCInfo_C_PerformConditionCheckAI::CallFunc_GetNPCInfoActionGroupCodeName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BDeco_CheckNPCInfo_C_PerformConditionCheckAI, CallFunc_NotEqual_NameName_ReturnValue) == 0x00002C, "Member 'BDeco_CheckNPCInfo_C_PerformConditionCheckAI::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BDeco_CheckNPCInfo_C_PerformConditionCheckAI, CallFunc_Array_Find_ReturnValue) == 0x000030, "Member 'BDeco_CheckNPCInfo_C_PerformConditionCheckAI::CallFunc_Array_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(BDeco_CheckNPCInfo_C_PerformConditionCheckAI, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000034, "Member 'BDeco_CheckNPCInfo_C_PerformConditionCheckAI::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BDeco_CheckNPCInfo_C_PerformConditionCheckAI, CallFunc_GetNpcInfo_ReturnValue) == 0x000038, "Member 'BDeco_CheckNPCInfo_C_PerformConditionCheckAI::CallFunc_GetNpcInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(BDeco_CheckNPCInfo_C_PerformConditionCheckAI, CallFunc_GetNpcAssetTableCodeName_ReturnValue) == 0x000040, "Member 'BDeco_CheckNPCInfo_C_PerformConditionCheckAI::CallFunc_GetNpcAssetTableCodeName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BDeco_CheckNPCInfo_C_PerformConditionCheckAI, CallFunc_Array_Find_ReturnValue_1) == 0x000048, "Member 'BDeco_CheckNPCInfo_C_PerformConditionCheckAI::CallFunc_Array_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BDeco_CheckNPCInfo_C_PerformConditionCheckAI, CallFunc_GetNpcInfo_ReturnValue_1) == 0x000050, "Member 'BDeco_CheckNPCInfo_C_PerformConditionCheckAI::CallFunc_GetNpcInfo_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BDeco_CheckNPCInfo_C_PerformConditionCheckAI, CallFunc_GreaterEqual_IntInt_ReturnValue_1) == 0x000058, "Member 'BDeco_CheckNPCInfo_C_PerformConditionCheckAI::CallFunc_GreaterEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BDeco_CheckNPCInfo_C_PerformConditionCheckAI, CallFunc_GetCodeName_ReturnValue) == 0x00005C, "Member 'BDeco_CheckNPCInfo_C_PerformConditionCheckAI::CallFunc_GetCodeName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BDeco_CheckNPCInfo_C_PerformConditionCheckAI, CallFunc_Array_Find_ReturnValue_2) == 0x000064, "Member 'BDeco_CheckNPCInfo_C_PerformConditionCheckAI::CallFunc_Array_Find_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BDeco_CheckNPCInfo_C_PerformConditionCheckAI, CallFunc_GreaterEqual_IntInt_ReturnValue_2) == 0x000068, "Member 'BDeco_CheckNPCInfo_C_PerformConditionCheckAI::CallFunc_GreaterEqual_IntInt_ReturnValue_2' has a wrong offset!");

}
