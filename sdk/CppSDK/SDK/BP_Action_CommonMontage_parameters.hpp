#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Action_CommonMontage

#include "Basic.hpp"

#include "ProjectP_structs.hpp"


namespace SDK::Params
{

// Function BP_Action_CommonMontage.BP_Action_CommonMontage_C.ExecuteUbergraph_BP_Action_CommonMontage
// 0x0028 (0x0028 - 0x0000)
struct BP_Action_CommonMontage_C_ExecuteUbergraph_BP_Action_CommonMontage final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_ActionStopReason_PlayAnimFailed_ReturnValue; // 0x0004(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Stop_ReturnValue;                         // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PlayCommomAnimBP_MontageInstanceID;       // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimMontage*                           CallFunc_PlayCommomAnimBP_Montage;                 // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EExecutePin                                   CallFunc_PlayCommomAnimBP_Branches;                // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Action_CommonMontage_C_ExecuteUbergraph_BP_Action_CommonMontage) == 0x000008, "Wrong alignment on BP_Action_CommonMontage_C_ExecuteUbergraph_BP_Action_CommonMontage");
static_assert(sizeof(BP_Action_CommonMontage_C_ExecuteUbergraph_BP_Action_CommonMontage) == 0x000028, "Wrong size on BP_Action_CommonMontage_C_ExecuteUbergraph_BP_Action_CommonMontage");
static_assert(offsetof(BP_Action_CommonMontage_C_ExecuteUbergraph_BP_Action_CommonMontage, EntryPoint) == 0x000000, "Member 'BP_Action_CommonMontage_C_ExecuteUbergraph_BP_Action_CommonMontage::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Action_CommonMontage_C_ExecuteUbergraph_BP_Action_CommonMontage, CallFunc_ActionStopReason_PlayAnimFailed_ReturnValue) == 0x000004, "Member 'BP_Action_CommonMontage_C_ExecuteUbergraph_BP_Action_CommonMontage::CallFunc_ActionStopReason_PlayAnimFailed_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_CommonMontage_C_ExecuteUbergraph_BP_Action_CommonMontage, CallFunc_Stop_ReturnValue) == 0x00000C, "Member 'BP_Action_CommonMontage_C_ExecuteUbergraph_BP_Action_CommonMontage::CallFunc_Stop_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_CommonMontage_C_ExecuteUbergraph_BP_Action_CommonMontage, CallFunc_PlayCommomAnimBP_MontageInstanceID) == 0x000010, "Member 'BP_Action_CommonMontage_C_ExecuteUbergraph_BP_Action_CommonMontage::CallFunc_PlayCommomAnimBP_MontageInstanceID' has a wrong offset!");
static_assert(offsetof(BP_Action_CommonMontage_C_ExecuteUbergraph_BP_Action_CommonMontage, CallFunc_PlayCommomAnimBP_Montage) == 0x000018, "Member 'BP_Action_CommonMontage_C_ExecuteUbergraph_BP_Action_CommonMontage::CallFunc_PlayCommomAnimBP_Montage' has a wrong offset!");
static_assert(offsetof(BP_Action_CommonMontage_C_ExecuteUbergraph_BP_Action_CommonMontage, CallFunc_PlayCommomAnimBP_Branches) == 0x000020, "Member 'BP_Action_CommonMontage_C_ExecuteUbergraph_BP_Action_CommonMontage::CallFunc_PlayCommomAnimBP_Branches' has a wrong offset!");
static_assert(offsetof(BP_Action_CommonMontage_C_ExecuteUbergraph_BP_Action_CommonMontage, K2Node_SwitchEnum_CmpSuccess) == 0x000021, "Member 'BP_Action_CommonMontage_C_ExecuteUbergraph_BP_Action_CommonMontage::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

}
