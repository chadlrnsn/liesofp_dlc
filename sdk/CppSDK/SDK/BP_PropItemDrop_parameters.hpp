#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PropItemDrop

#include "Basic.hpp"

#include "ProjectP_structs.hpp"


namespace SDK::Params
{

// Function BP_PropItemDrop.BP_PropItemDrop_C.ExecuteUbergraph_BP_PropItemDrop
// 0x0014 (0x0014 - 0x0000)
struct BP_PropItemDrop_C_ExecuteUbergraph_BP_PropItemDrop final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsActive_ReturnValue;                     // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EExecutePin                                   CallFunc_ChangePropStateBP_Branches;               // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Event_TargetState;                          // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PropItemDrop_C_ExecuteUbergraph_BP_PropItemDrop) == 0x000004, "Wrong alignment on BP_PropItemDrop_C_ExecuteUbergraph_BP_PropItemDrop");
static_assert(sizeof(BP_PropItemDrop_C_ExecuteUbergraph_BP_PropItemDrop) == 0x000014, "Wrong size on BP_PropItemDrop_C_ExecuteUbergraph_BP_PropItemDrop");
static_assert(offsetof(BP_PropItemDrop_C_ExecuteUbergraph_BP_PropItemDrop, EntryPoint) == 0x000000, "Member 'BP_PropItemDrop_C_ExecuteUbergraph_BP_PropItemDrop::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PropItemDrop_C_ExecuteUbergraph_BP_PropItemDrop, CallFunc_IsActive_ReturnValue) == 0x000004, "Member 'BP_PropItemDrop_C_ExecuteUbergraph_BP_PropItemDrop::CallFunc_IsActive_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PropItemDrop_C_ExecuteUbergraph_BP_PropItemDrop, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000005, "Member 'BP_PropItemDrop_C_ExecuteUbergraph_BP_PropItemDrop::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PropItemDrop_C_ExecuteUbergraph_BP_PropItemDrop, CallFunc_ChangePropStateBP_Branches) == 0x000006, "Member 'BP_PropItemDrop_C_ExecuteUbergraph_BP_PropItemDrop::CallFunc_ChangePropStateBP_Branches' has a wrong offset!");
static_assert(offsetof(BP_PropItemDrop_C_ExecuteUbergraph_BP_PropItemDrop, K2Node_SwitchEnum_CmpSuccess) == 0x000007, "Member 'BP_PropItemDrop_C_ExecuteUbergraph_BP_PropItemDrop::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_PropItemDrop_C_ExecuteUbergraph_BP_PropItemDrop, K2Node_SwitchInteger_CmpSuccess) == 0x000008, "Member 'BP_PropItemDrop_C_ExecuteUbergraph_BP_PropItemDrop::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_PropItemDrop_C_ExecuteUbergraph_BP_PropItemDrop, K2Node_Event_TargetState) == 0x00000C, "Member 'BP_PropItemDrop_C_ExecuteUbergraph_BP_PropItemDrop::K2Node_Event_TargetState' has a wrong offset!");
static_assert(offsetof(BP_PropItemDrop_C_ExecuteUbergraph_BP_PropItemDrop, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000010, "Member 'BP_PropItemDrop_C_ExecuteUbergraph_BP_PropItemDrop::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");

// Function BP_PropItemDrop.BP_PropItemDrop_C.OnChangeState
// 0x0004 (0x0004 - 0x0000)
struct BP_PropItemDrop_C_OnChangeState final
{
public:
	int32                                         TargetState;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PropItemDrop_C_OnChangeState) == 0x000004, "Wrong alignment on BP_PropItemDrop_C_OnChangeState");
static_assert(sizeof(BP_PropItemDrop_C_OnChangeState) == 0x000004, "Wrong size on BP_PropItemDrop_C_OnChangeState");
static_assert(offsetof(BP_PropItemDrop_C_OnChangeState, TargetState) == 0x000000, "Member 'BP_PropItemDrop_C_OnChangeState::TargetState' has a wrong offset!");

}
