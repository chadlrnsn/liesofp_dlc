#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActPayload_FatalAttack

#include "Basic.hpp"

#include "ProjectP_structs.hpp"


namespace SDK::Params
{

// Function BP_ActPayload_FatalAttack.BP_ActPayload_FatalAttack_C.ExecuteUbergraph_BP_ActPayload_FatalAttack
// 0x0060 (0x0060 - 0x0000)
struct BP_ActPayload_FatalAttack_C_ExecuteUbergraph_BP_ActPayload_FatalAttack final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLFatalAttackInfo                      K2Node_MakeStruct_LFatalAttackInfo;                // 0x0004(0x0054)(NoDestructor)
	class FName                                   CallFunc_LName_None_ReturnValue;                   // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActPayload_FatalAttack_C_ExecuteUbergraph_BP_ActPayload_FatalAttack) == 0x000004, "Wrong alignment on BP_ActPayload_FatalAttack_C_ExecuteUbergraph_BP_ActPayload_FatalAttack");
static_assert(sizeof(BP_ActPayload_FatalAttack_C_ExecuteUbergraph_BP_ActPayload_FatalAttack) == 0x000060, "Wrong size on BP_ActPayload_FatalAttack_C_ExecuteUbergraph_BP_ActPayload_FatalAttack");
static_assert(offsetof(BP_ActPayload_FatalAttack_C_ExecuteUbergraph_BP_ActPayload_FatalAttack, EntryPoint) == 0x000000, "Member 'BP_ActPayload_FatalAttack_C_ExecuteUbergraph_BP_ActPayload_FatalAttack::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ActPayload_FatalAttack_C_ExecuteUbergraph_BP_ActPayload_FatalAttack, K2Node_MakeStruct_LFatalAttackInfo) == 0x000004, "Member 'BP_ActPayload_FatalAttack_C_ExecuteUbergraph_BP_ActPayload_FatalAttack::K2Node_MakeStruct_LFatalAttackInfo' has a wrong offset!");
static_assert(offsetof(BP_ActPayload_FatalAttack_C_ExecuteUbergraph_BP_ActPayload_FatalAttack, CallFunc_LName_None_ReturnValue) == 0x000058, "Member 'BP_ActPayload_FatalAttack_C_ExecuteUbergraph_BP_ActPayload_FatalAttack::CallFunc_LName_None_ReturnValue' has a wrong offset!");

}
