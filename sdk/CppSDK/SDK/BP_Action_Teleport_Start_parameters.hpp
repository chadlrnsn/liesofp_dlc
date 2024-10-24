#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Action_Teleport_Start

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_Action_Teleport_Start.BP_Action_Teleport_Start_C.ExecuteUbergraph_BP_Action_Teleport_Start
// 0x00E0 (0x00E0 - 0x0000)
struct BP_Action_Teleport_Start_C_ExecuteUbergraph_BP_Action_Teleport_Start final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ULEventDispatcherSystem*                CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTime;                            // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Stop_ReturnValue;                         // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0017(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_PlayTargetAnim_ReturnValue;               // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_ActionState_TryLockInput_Rotation_ReturnValue; // 0x001C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_ActionState_TryLockInput_Movement_ReturnValue; // 0x0024(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x002C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0040(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue_1;        // 0x0048(0x0008)(NoDestructor, HasGetValueTypeHash)
	class ULActBase*                              K2Node_Event_ReasonAction;                         // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Event_Reason;                               // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ALPCCharacter*                          K2Node_DynamicCast_AsLPCCharacter;                 // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Stop_ReturnValue_1;                       // 0x0072(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0073(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_75[0x3];                                       // 0x0075(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ULActPayload_Teleport*                  K2Node_DynamicCast_AsLAct_Payload_Teleport;        // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0082(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_83[0x1];                                       // 0x0083(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0084(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_94[0x4];                                       // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue_2;        // 0x0098(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue_3;        // 0x00A0(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_IsValidTimerHandle_ReturnValue;        // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_K2_IsValidTimerHandle_ReturnValue_1;      // 0x00AA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x00AB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FName                                   CallFunc_ActionState_ExitReposition_Disable_ReturnValue; // 0x00AC(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_ActionState_PushingReposition_Disable_ReturnValue; // 0x00B4(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x00BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_BD[0x3];                                       // 0x00BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ALCharacter*                            K2Node_DynamicCast_AsLCharacter;                   // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C9[0x7];                                       // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimSequenceBase*                      K2Node_Select_Default;                             // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_6;                    // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Action_Teleport_Start_C_ExecuteUbergraph_BP_Action_Teleport_Start) == 0x000008, "Wrong alignment on BP_Action_Teleport_Start_C_ExecuteUbergraph_BP_Action_Teleport_Start");
static_assert(sizeof(BP_Action_Teleport_Start_C_ExecuteUbergraph_BP_Action_Teleport_Start) == 0x0000E0, "Wrong size on BP_Action_Teleport_Start_C_ExecuteUbergraph_BP_Action_Teleport_Start");
static_assert(offsetof(BP_Action_Teleport_Start_C_ExecuteUbergraph_BP_Action_Teleport_Start, EntryPoint) == 0x000000, "Member 'BP_Action_Teleport_Start_C_ExecuteUbergraph_BP_Action_Teleport_Start::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Action_Teleport_Start_C_ExecuteUbergraph_BP_Action_Teleport_Start, CallFunc_GetGameInstanceSubsystem_ReturnValue) == 0x000008, "Member 'BP_Action_Teleport_Start_C_ExecuteUbergraph_BP_Action_Teleport_Start::CallFunc_GetGameInstanceSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Teleport_Start_C_ExecuteUbergraph_BP_Action_Teleport_Start, K2Node_Event_DeltaTime) == 0x000010, "Member 'BP_Action_Teleport_Start_C_ExecuteUbergraph_BP_Action_Teleport_Start::K2Node_Event_DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_Action_Teleport_Start_C_ExecuteUbergraph_BP_Action_Teleport_Start, CallFunc_IsValid_ReturnValue) == 0x000014, "Member 'BP_Action_Teleport_Start_C_ExecuteUbergraph_BP_Action_Teleport_Start::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Teleport_Start_C_ExecuteUbergraph_BP_Action_Teleport_Start, CallFunc_IsValid_ReturnValue_1) == 0x000015, "Member 'BP_Action_Teleport_Start_C_ExecuteUbergraph_BP_Action_Teleport_Start::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Teleport_Start_C_ExecuteUbergraph_BP_Action_Teleport_Start, CallFunc_Stop_ReturnValue) == 0x000016, "Member 'BP_Action_Teleport_Start_C_ExecuteUbergraph_BP_Action_Teleport_Start::CallFunc_Stop_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Teleport_Start_C_ExecuteUbergraph_BP_Action_Teleport_Start, CallFunc_Less_IntInt_ReturnValue) == 0x000017, "Member 'BP_Action_Teleport_Start_C_ExecuteUbergraph_BP_Action_Teleport_Start::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Teleport_Start_C_ExecuteUbergraph_BP_Action_Teleport_Start, CallFunc_PlayTargetAnim_ReturnValue) == 0x000018, "Member 'BP_Action_Teleport_Start_C_ExecuteUbergraph_BP_Action_Teleport_Start::CallFunc_PlayTargetAnim_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Teleport_Start_C_ExecuteUbergraph_BP_Action_Teleport_Start, CallFunc_ActionState_TryLockInput_Rotation_ReturnValue) == 0x00001C, "Member 'BP_Action_Teleport_Start_C_ExecuteUbergraph_BP_Action_Teleport_Start::CallFunc_ActionState_TryLockInput_Rotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Teleport_Start_C_ExecuteUbergraph_BP_Action_Teleport_Start, CallFunc_ActionState_TryLockInput_Movement_ReturnValue) == 0x000024, "Member 'BP_Action_Teleport_Start_C_ExecuteUbergraph_BP_Action_Teleport_Start::CallFunc_ActionState_TryLockInput_Movement_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Teleport_Start_C_ExecuteUbergraph_BP_Action_Teleport_Start, K2Node_CreateDelegate_OutputDelegate) == 0x00002C, "Member 'BP_Action_Teleport_Start_C_ExecuteUbergraph_BP_Action_Teleport_Start::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_Action_Teleport_Start_C_ExecuteUbergraph_BP_Action_Teleport_Start, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000040, "Member 'BP_Action_Teleport_Start_C_ExecuteUbergraph_BP_Action_Teleport_Start::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Teleport_Start_C_ExecuteUbergraph_BP_Action_Teleport_Start, CallFunc_K2_SetTimerDelegate_ReturnValue_1) == 0x000048, "Member 'BP_Action_Teleport_Start_C_ExecuteUbergraph_BP_Action_Teleport_Start::CallFunc_K2_SetTimerDelegate_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Teleport_Start_C_ExecuteUbergraph_BP_Action_Teleport_Start, K2Node_Event_ReasonAction) == 0x000050, "Member 'BP_Action_Teleport_Start_C_ExecuteUbergraph_BP_Action_Teleport_Start::K2Node_Event_ReasonAction' has a wrong offset!");
static_assert(offsetof(BP_Action_Teleport_Start_C_ExecuteUbergraph_BP_Action_Teleport_Start, K2Node_Event_Reason) == 0x000058, "Member 'BP_Action_Teleport_Start_C_ExecuteUbergraph_BP_Action_Teleport_Start::K2Node_Event_Reason' has a wrong offset!");
static_assert(offsetof(BP_Action_Teleport_Start_C_ExecuteUbergraph_BP_Action_Teleport_Start, CallFunc_IsValid_ReturnValue_2) == 0x000060, "Member 'BP_Action_Teleport_Start_C_ExecuteUbergraph_BP_Action_Teleport_Start::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Action_Teleport_Start_C_ExecuteUbergraph_BP_Action_Teleport_Start, K2Node_DynamicCast_AsLPCCharacter) == 0x000068, "Member 'BP_Action_Teleport_Start_C_ExecuteUbergraph_BP_Action_Teleport_Start::K2Node_DynamicCast_AsLPCCharacter' has a wrong offset!");
static_assert(offsetof(BP_Action_Teleport_Start_C_ExecuteUbergraph_BP_Action_Teleport_Start, K2Node_DynamicCast_bSuccess) == 0x000070, "Member 'BP_Action_Teleport_Start_C_ExecuteUbergraph_BP_Action_Teleport_Start::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_Action_Teleport_Start_C_ExecuteUbergraph_BP_Action_Teleport_Start, CallFunc_IsValid_ReturnValue_3) == 0x000071, "Member 'BP_Action_Teleport_Start_C_ExecuteUbergraph_BP_Action_Teleport_Start::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_Action_Teleport_Start_C_ExecuteUbergraph_BP_Action_Teleport_Start, CallFunc_Stop_ReturnValue_1) == 0x000072, "Member 'BP_Action_Teleport_Start_C_ExecuteUbergraph_BP_Action_Teleport_Start::CallFunc_Stop_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Teleport_Start_C_ExecuteUbergraph_BP_Action_Teleport_Start, CallFunc_IsValid_ReturnValue_4) == 0x000073, "Member 'BP_Action_Teleport_Start_C_ExecuteUbergraph_BP_Action_Teleport_Start::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_Action_Teleport_Start_C_ExecuteUbergraph_BP_Action_Teleport_Start, CallFunc_IsValid_ReturnValue_5) == 0x000074, "Member 'BP_Action_Teleport_Start_C_ExecuteUbergraph_BP_Action_Teleport_Start::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_Action_Teleport_Start_C_ExecuteUbergraph_BP_Action_Teleport_Start, K2Node_DynamicCast_AsLAct_Payload_Teleport) == 0x000078, "Member 'BP_Action_Teleport_Start_C_ExecuteUbergraph_BP_Action_Teleport_Start::K2Node_DynamicCast_AsLAct_Payload_Teleport' has a wrong offset!");
static_assert(offsetof(BP_Action_Teleport_Start_C_ExecuteUbergraph_BP_Action_Teleport_Start, K2Node_DynamicCast_bSuccess_1) == 0x000080, "Member 'BP_Action_Teleport_Start_C_ExecuteUbergraph_BP_Action_Teleport_Start::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Teleport_Start_C_ExecuteUbergraph_BP_Action_Teleport_Start, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x000081, "Member 'BP_Action_Teleport_Start_C_ExecuteUbergraph_BP_Action_Teleport_Start::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Teleport_Start_C_ExecuteUbergraph_BP_Action_Teleport_Start, CallFunc_BooleanAND_ReturnValue) == 0x000082, "Member 'BP_Action_Teleport_Start_C_ExecuteUbergraph_BP_Action_Teleport_Start::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Teleport_Start_C_ExecuteUbergraph_BP_Action_Teleport_Start, K2Node_CreateDelegate_OutputDelegate_1) == 0x000084, "Member 'BP_Action_Teleport_Start_C_ExecuteUbergraph_BP_Action_Teleport_Start::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Teleport_Start_C_ExecuteUbergraph_BP_Action_Teleport_Start, CallFunc_K2_SetTimerDelegate_ReturnValue_2) == 0x000098, "Member 'BP_Action_Teleport_Start_C_ExecuteUbergraph_BP_Action_Teleport_Start::CallFunc_K2_SetTimerDelegate_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Action_Teleport_Start_C_ExecuteUbergraph_BP_Action_Teleport_Start, CallFunc_K2_SetTimerDelegate_ReturnValue_3) == 0x0000A0, "Member 'BP_Action_Teleport_Start_C_ExecuteUbergraph_BP_Action_Teleport_Start::CallFunc_K2_SetTimerDelegate_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_Action_Teleport_Start_C_ExecuteUbergraph_BP_Action_Teleport_Start, CallFunc_K2_IsValidTimerHandle_ReturnValue) == 0x0000A8, "Member 'BP_Action_Teleport_Start_C_ExecuteUbergraph_BP_Action_Teleport_Start::CallFunc_K2_IsValidTimerHandle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Teleport_Start_C_ExecuteUbergraph_BP_Action_Teleport_Start, CallFunc_Not_PreBool_ReturnValue) == 0x0000A9, "Member 'BP_Action_Teleport_Start_C_ExecuteUbergraph_BP_Action_Teleport_Start::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Teleport_Start_C_ExecuteUbergraph_BP_Action_Teleport_Start, CallFunc_K2_IsValidTimerHandle_ReturnValue_1) == 0x0000AA, "Member 'BP_Action_Teleport_Start_C_ExecuteUbergraph_BP_Action_Teleport_Start::CallFunc_K2_IsValidTimerHandle_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Teleport_Start_C_ExecuteUbergraph_BP_Action_Teleport_Start, CallFunc_Not_PreBool_ReturnValue_1) == 0x0000AB, "Member 'BP_Action_Teleport_Start_C_ExecuteUbergraph_BP_Action_Teleport_Start::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Teleport_Start_C_ExecuteUbergraph_BP_Action_Teleport_Start, CallFunc_ActionState_ExitReposition_Disable_ReturnValue) == 0x0000AC, "Member 'BP_Action_Teleport_Start_C_ExecuteUbergraph_BP_Action_Teleport_Start::CallFunc_ActionState_ExitReposition_Disable_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Teleport_Start_C_ExecuteUbergraph_BP_Action_Teleport_Start, CallFunc_ActionState_PushingReposition_Disable_ReturnValue) == 0x0000B4, "Member 'BP_Action_Teleport_Start_C_ExecuteUbergraph_BP_Action_Teleport_Start::CallFunc_ActionState_PushingReposition_Disable_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Teleport_Start_C_ExecuteUbergraph_BP_Action_Teleport_Start, Temp_bool_Variable) == 0x0000BC, "Member 'BP_Action_Teleport_Start_C_ExecuteUbergraph_BP_Action_Teleport_Start::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_Action_Teleport_Start_C_ExecuteUbergraph_BP_Action_Teleport_Start, K2Node_DynamicCast_AsLCharacter) == 0x0000C0, "Member 'BP_Action_Teleport_Start_C_ExecuteUbergraph_BP_Action_Teleport_Start::K2Node_DynamicCast_AsLCharacter' has a wrong offset!");
static_assert(offsetof(BP_Action_Teleport_Start_C_ExecuteUbergraph_BP_Action_Teleport_Start, K2Node_DynamicCast_bSuccess_2) == 0x0000C8, "Member 'BP_Action_Teleport_Start_C_ExecuteUbergraph_BP_Action_Teleport_Start::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_Action_Teleport_Start_C_ExecuteUbergraph_BP_Action_Teleport_Start, K2Node_Select_Default) == 0x0000D0, "Member 'BP_Action_Teleport_Start_C_ExecuteUbergraph_BP_Action_Teleport_Start::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_Action_Teleport_Start_C_ExecuteUbergraph_BP_Action_Teleport_Start, CallFunc_IsValid_ReturnValue_6) == 0x0000D8, "Member 'BP_Action_Teleport_Start_C_ExecuteUbergraph_BP_Action_Teleport_Start::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");

// Function BP_Action_Teleport_Start.BP_Action_Teleport_Start_C.OnStop
// 0x0010 (0x0010 - 0x0000)
struct BP_Action_Teleport_Start_C_OnStop final
{
public:
	class ULActBase*                              ReasonAction;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Reason;                                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_Teleport_Start_C_OnStop) == 0x000008, "Wrong alignment on BP_Action_Teleport_Start_C_OnStop");
static_assert(sizeof(BP_Action_Teleport_Start_C_OnStop) == 0x000010, "Wrong size on BP_Action_Teleport_Start_C_OnStop");
static_assert(offsetof(BP_Action_Teleport_Start_C_OnStop, ReasonAction) == 0x000000, "Member 'BP_Action_Teleport_Start_C_OnStop::ReasonAction' has a wrong offset!");
static_assert(offsetof(BP_Action_Teleport_Start_C_OnStop, Reason) == 0x000008, "Member 'BP_Action_Teleport_Start_C_OnStop::Reason' has a wrong offset!");

// Function BP_Action_Teleport_Start.BP_Action_Teleport_Start_C.OnTick
// 0x0004 (0x0004 - 0x0000)
struct BP_Action_Teleport_Start_C_OnTick final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_Teleport_Start_C_OnTick) == 0x000004, "Wrong alignment on BP_Action_Teleport_Start_C_OnTick");
static_assert(sizeof(BP_Action_Teleport_Start_C_OnTick) == 0x000004, "Wrong size on BP_Action_Teleport_Start_C_OnTick");
static_assert(offsetof(BP_Action_Teleport_Start_C_OnTick, DeltaTime) == 0x000000, "Member 'BP_Action_Teleport_Start_C_OnTick::DeltaTime' has a wrong offset!");

}

