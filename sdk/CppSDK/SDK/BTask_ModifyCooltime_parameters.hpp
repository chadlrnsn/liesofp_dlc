#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTask_ModifyCooltime

#include "Basic.hpp"


namespace SDK::Params
{

// Function BTask_ModifyCooltime.BTask_ModifyCooltime_C.ExecuteUbergraph_BTask_ModifyCooltime
// 0x0028 (0x0028 - 0x0000)
struct BTask_ModifyCooltime_C_ExecuteUbergraph_BTask_ModifyCooltime final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AAIController*                          K2Node_Event_OwnerController;                      // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ALNPCControllerBP_C*                    K2Node_DynamicCast_AsLNPCController_BP;            // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTask_ModifyCooltime_C_ExecuteUbergraph_BTask_ModifyCooltime) == 0x000008, "Wrong alignment on BTask_ModifyCooltime_C_ExecuteUbergraph_BTask_ModifyCooltime");
static_assert(sizeof(BTask_ModifyCooltime_C_ExecuteUbergraph_BTask_ModifyCooltime) == 0x000028, "Wrong size on BTask_ModifyCooltime_C_ExecuteUbergraph_BTask_ModifyCooltime");
static_assert(offsetof(BTask_ModifyCooltime_C_ExecuteUbergraph_BTask_ModifyCooltime, EntryPoint) == 0x000000, "Member 'BTask_ModifyCooltime_C_ExecuteUbergraph_BTask_ModifyCooltime::EntryPoint' has a wrong offset!");
static_assert(offsetof(BTask_ModifyCooltime_C_ExecuteUbergraph_BTask_ModifyCooltime, K2Node_Event_OwnerController) == 0x000008, "Member 'BTask_ModifyCooltime_C_ExecuteUbergraph_BTask_ModifyCooltime::K2Node_Event_OwnerController' has a wrong offset!");
static_assert(offsetof(BTask_ModifyCooltime_C_ExecuteUbergraph_BTask_ModifyCooltime, K2Node_Event_ControlledPawn) == 0x000010, "Member 'BTask_ModifyCooltime_C_ExecuteUbergraph_BTask_ModifyCooltime::K2Node_Event_ControlledPawn' has a wrong offset!");
static_assert(offsetof(BTask_ModifyCooltime_C_ExecuteUbergraph_BTask_ModifyCooltime, K2Node_DynamicCast_AsLNPCController_BP) == 0x000018, "Member 'BTask_ModifyCooltime_C_ExecuteUbergraph_BTask_ModifyCooltime::K2Node_DynamicCast_AsLNPCController_BP' has a wrong offset!");
static_assert(offsetof(BTask_ModifyCooltime_C_ExecuteUbergraph_BTask_ModifyCooltime, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BTask_ModifyCooltime_C_ExecuteUbergraph_BTask_ModifyCooltime::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BTask_ModifyCooltime_C_ExecuteUbergraph_BTask_ModifyCooltime, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000024, "Member 'BTask_ModifyCooltime_C_ExecuteUbergraph_BTask_ModifyCooltime::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");

// Function BTask_ModifyCooltime.BTask_ModifyCooltime_C.ReceiveExecuteAI
// 0x0010 (0x0010 - 0x0000)
struct BTask_ModifyCooltime_C_ReceiveExecuteAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTask_ModifyCooltime_C_ReceiveExecuteAI) == 0x000008, "Wrong alignment on BTask_ModifyCooltime_C_ReceiveExecuteAI");
static_assert(sizeof(BTask_ModifyCooltime_C_ReceiveExecuteAI) == 0x000010, "Wrong size on BTask_ModifyCooltime_C_ReceiveExecuteAI");
static_assert(offsetof(BTask_ModifyCooltime_C_ReceiveExecuteAI, OwnerController) == 0x000000, "Member 'BTask_ModifyCooltime_C_ReceiveExecuteAI::OwnerController' has a wrong offset!");
static_assert(offsetof(BTask_ModifyCooltime_C_ReceiveExecuteAI, ControlledPawn) == 0x000008, "Member 'BTask_ModifyCooltime_C_ReceiveExecuteAI::ControlledPawn' has a wrong offset!");

}
