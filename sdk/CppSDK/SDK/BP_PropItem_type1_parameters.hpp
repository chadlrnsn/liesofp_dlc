#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PropItem_type1

#include "Basic.hpp"

#include "ProjectP_structs.hpp"


namespace SDK::Params
{

// Function BP_PropItem_type1.BP_PropItem_type1_C.OnChangeState
// 0x0004 (0x0004 - 0x0000)
struct BP_PropItem_type1_C_OnChangeState final
{
public:
	int32                                         TargetState;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PropItem_type1_C_OnChangeState) == 0x000004, "Wrong alignment on BP_PropItem_type1_C_OnChangeState");
static_assert(sizeof(BP_PropItem_type1_C_OnChangeState) == 0x000004, "Wrong size on BP_PropItem_type1_C_OnChangeState");
static_assert(offsetof(BP_PropItem_type1_C_OnChangeState, TargetState) == 0x000000, "Member 'BP_PropItem_type1_C_OnChangeState::TargetState' has a wrong offset!");

// Function BP_PropItem_type1.BP_PropItem_type1_C.ExecuteUbergraph_BP_PropItem_type1
// 0x0010 (0x0010 - 0x0000)
struct BP_PropItem_type1_C_ExecuteUbergraph_BP_PropItem_type1 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Event_TargetState;                          // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EExecutePin                                   CallFunc_ChangePropStateBP_Branches;               // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x000F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PropItem_type1_C_ExecuteUbergraph_BP_PropItem_type1) == 0x000004, "Wrong alignment on BP_PropItem_type1_C_ExecuteUbergraph_BP_PropItem_type1");
static_assert(sizeof(BP_PropItem_type1_C_ExecuteUbergraph_BP_PropItem_type1) == 0x000010, "Wrong size on BP_PropItem_type1_C_ExecuteUbergraph_BP_PropItem_type1");
static_assert(offsetof(BP_PropItem_type1_C_ExecuteUbergraph_BP_PropItem_type1, EntryPoint) == 0x000000, "Member 'BP_PropItem_type1_C_ExecuteUbergraph_BP_PropItem_type1::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PropItem_type1_C_ExecuteUbergraph_BP_PropItem_type1, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000004, "Member 'BP_PropItem_type1_C_ExecuteUbergraph_BP_PropItem_type1::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PropItem_type1_C_ExecuteUbergraph_BP_PropItem_type1, K2Node_Event_TargetState) == 0x000008, "Member 'BP_PropItem_type1_C_ExecuteUbergraph_BP_PropItem_type1::K2Node_Event_TargetState' has a wrong offset!");
static_assert(offsetof(BP_PropItem_type1_C_ExecuteUbergraph_BP_PropItem_type1, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x00000C, "Member 'BP_PropItem_type1_C_ExecuteUbergraph_BP_PropItem_type1::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PropItem_type1_C_ExecuteUbergraph_BP_PropItem_type1, CallFunc_ChangePropStateBP_Branches) == 0x00000D, "Member 'BP_PropItem_type1_C_ExecuteUbergraph_BP_PropItem_type1::CallFunc_ChangePropStateBP_Branches' has a wrong offset!");
static_assert(offsetof(BP_PropItem_type1_C_ExecuteUbergraph_BP_PropItem_type1, K2Node_SwitchEnum_CmpSuccess) == 0x00000E, "Member 'BP_PropItem_type1_C_ExecuteUbergraph_BP_PropItem_type1::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_PropItem_type1_C_ExecuteUbergraph_BP_PropItem_type1, CallFunc_EqualEqual_IntInt_ReturnValue_2) == 0x00000F, "Member 'BP_PropItem_type1_C_ExecuteUbergraph_BP_PropItem_type1::CallFunc_EqualEqual_IntInt_ReturnValue_2' has a wrong offset!");

}
