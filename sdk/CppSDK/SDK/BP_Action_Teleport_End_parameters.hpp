#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Action_Teleport_End

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_Action_Teleport_End.BP_Action_Teleport_End_C.ExecuteUbergraph_BP_Action_Teleport_End
// 0x00B8 (0x00B8 - 0x0000)
struct BP_Action_Teleport_End_C_ExecuteUbergraph_BP_Action_Teleport_End final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_ActionState_PushingReposition_Disable_ReturnValue; // 0x0004(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_ActionState_Stance_Stance_BareHand_ReturnValue; // 0x000C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTime;                            // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           K2Node_Event_Montage;                              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bInterrupted;                         // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Event_MontageInstanceID;                    // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Stop_ReturnValue;                         // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_ActionState_Peace_ReturnValue;            // 0x002C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindActionState_ReturnValue;              // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_36[0x2];                                       // 0x0036(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_ActionState_Invincible_ReturnValue;       // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ALPCCharacter*                          K2Node_DynamicCast_AsLPCCharacter;                 // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51[0x3];                                       // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PlayTargetAnim_ReturnValue;               // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_AddActionState_ReturnValue;               // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A[0x2];                                       // 0x005A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_ActionState_TryLockInput_Rotation_ReturnValue; // 0x005C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_ActionState_TryLockInput_Movement_ReturnValue; // 0x0064(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D[0x3];                                       // 0x006D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ULActPayload_Teleport*                  K2Node_DynamicCast_AsLAct_Payload_Teleport;        // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79[0x7];                                       // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ULActBase*                              K2Node_Event_ReasonAction;                         // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Event_Reason;                               // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULUISystem*                             CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0099(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A[0x6];                                       // 0x009A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ALPCCharacter*                          K2Node_DynamicCast_AsLPCCharacter_1;               // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A9[0x3];                                       // 0x00A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_ActionState_ExitReposition_Disable_ReturnValue; // 0x00AC(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_Teleport_End_C_ExecuteUbergraph_BP_Action_Teleport_End) == 0x000008, "Wrong alignment on BP_Action_Teleport_End_C_ExecuteUbergraph_BP_Action_Teleport_End");
static_assert(sizeof(BP_Action_Teleport_End_C_ExecuteUbergraph_BP_Action_Teleport_End) == 0x0000B8, "Wrong size on BP_Action_Teleport_End_C_ExecuteUbergraph_BP_Action_Teleport_End");
static_assert(offsetof(BP_Action_Teleport_End_C_ExecuteUbergraph_BP_Action_Teleport_End, EntryPoint) == 0x000000, "Member 'BP_Action_Teleport_End_C_ExecuteUbergraph_BP_Action_Teleport_End::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Action_Teleport_End_C_ExecuteUbergraph_BP_Action_Teleport_End, CallFunc_ActionState_PushingReposition_Disable_ReturnValue) == 0x000004, "Member 'BP_Action_Teleport_End_C_ExecuteUbergraph_BP_Action_Teleport_End::CallFunc_ActionState_PushingReposition_Disable_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Teleport_End_C_ExecuteUbergraph_BP_Action_Teleport_End, CallFunc_ActionState_Stance_Stance_BareHand_ReturnValue) == 0x00000C, "Member 'BP_Action_Teleport_End_C_ExecuteUbergraph_BP_Action_Teleport_End::CallFunc_ActionState_Stance_Stance_BareHand_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Teleport_End_C_ExecuteUbergraph_BP_Action_Teleport_End, K2Node_Event_DeltaTime) == 0x000014, "Member 'BP_Action_Teleport_End_C_ExecuteUbergraph_BP_Action_Teleport_End::K2Node_Event_DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_Action_Teleport_End_C_ExecuteUbergraph_BP_Action_Teleport_End, K2Node_Event_Montage) == 0x000018, "Member 'BP_Action_Teleport_End_C_ExecuteUbergraph_BP_Action_Teleport_End::K2Node_Event_Montage' has a wrong offset!");
static_assert(offsetof(BP_Action_Teleport_End_C_ExecuteUbergraph_BP_Action_Teleport_End, K2Node_Event_bInterrupted) == 0x000020, "Member 'BP_Action_Teleport_End_C_ExecuteUbergraph_BP_Action_Teleport_End::K2Node_Event_bInterrupted' has a wrong offset!");
static_assert(offsetof(BP_Action_Teleport_End_C_ExecuteUbergraph_BP_Action_Teleport_End, K2Node_Event_MontageInstanceID) == 0x000024, "Member 'BP_Action_Teleport_End_C_ExecuteUbergraph_BP_Action_Teleport_End::K2Node_Event_MontageInstanceID' has a wrong offset!");
static_assert(offsetof(BP_Action_Teleport_End_C_ExecuteUbergraph_BP_Action_Teleport_End, CallFunc_Stop_ReturnValue) == 0x000028, "Member 'BP_Action_Teleport_End_C_ExecuteUbergraph_BP_Action_Teleport_End::CallFunc_Stop_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Teleport_End_C_ExecuteUbergraph_BP_Action_Teleport_End, CallFunc_ActionState_Peace_ReturnValue) == 0x00002C, "Member 'BP_Action_Teleport_End_C_ExecuteUbergraph_BP_Action_Teleport_End::CallFunc_ActionState_Peace_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Teleport_End_C_ExecuteUbergraph_BP_Action_Teleport_End, CallFunc_Less_IntInt_ReturnValue) == 0x000034, "Member 'BP_Action_Teleport_End_C_ExecuteUbergraph_BP_Action_Teleport_End::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Teleport_End_C_ExecuteUbergraph_BP_Action_Teleport_End, CallFunc_FindActionState_ReturnValue) == 0x000035, "Member 'BP_Action_Teleport_End_C_ExecuteUbergraph_BP_Action_Teleport_End::CallFunc_FindActionState_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Teleport_End_C_ExecuteUbergraph_BP_Action_Teleport_End, CallFunc_ActionState_Invincible_ReturnValue) == 0x000038, "Member 'BP_Action_Teleport_End_C_ExecuteUbergraph_BP_Action_Teleport_End::CallFunc_ActionState_Invincible_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Teleport_End_C_ExecuteUbergraph_BP_Action_Teleport_End, CallFunc_IsValid_ReturnValue) == 0x000040, "Member 'BP_Action_Teleport_End_C_ExecuteUbergraph_BP_Action_Teleport_End::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Teleport_End_C_ExecuteUbergraph_BP_Action_Teleport_End, K2Node_DynamicCast_AsLPCCharacter) == 0x000048, "Member 'BP_Action_Teleport_End_C_ExecuteUbergraph_BP_Action_Teleport_End::K2Node_DynamicCast_AsLPCCharacter' has a wrong offset!");
static_assert(offsetof(BP_Action_Teleport_End_C_ExecuteUbergraph_BP_Action_Teleport_End, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'BP_Action_Teleport_End_C_ExecuteUbergraph_BP_Action_Teleport_End::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_Action_Teleport_End_C_ExecuteUbergraph_BP_Action_Teleport_End, CallFunc_PlayTargetAnim_ReturnValue) == 0x000054, "Member 'BP_Action_Teleport_End_C_ExecuteUbergraph_BP_Action_Teleport_End::CallFunc_PlayTargetAnim_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Teleport_End_C_ExecuteUbergraph_BP_Action_Teleport_End, CallFunc_IsValid_ReturnValue_1) == 0x000058, "Member 'BP_Action_Teleport_End_C_ExecuteUbergraph_BP_Action_Teleport_End::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Teleport_End_C_ExecuteUbergraph_BP_Action_Teleport_End, CallFunc_AddActionState_ReturnValue) == 0x000059, "Member 'BP_Action_Teleport_End_C_ExecuteUbergraph_BP_Action_Teleport_End::CallFunc_AddActionState_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Teleport_End_C_ExecuteUbergraph_BP_Action_Teleport_End, CallFunc_ActionState_TryLockInput_Rotation_ReturnValue) == 0x00005C, "Member 'BP_Action_Teleport_End_C_ExecuteUbergraph_BP_Action_Teleport_End::CallFunc_ActionState_TryLockInput_Rotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Teleport_End_C_ExecuteUbergraph_BP_Action_Teleport_End, CallFunc_ActionState_TryLockInput_Movement_ReturnValue) == 0x000064, "Member 'BP_Action_Teleport_End_C_ExecuteUbergraph_BP_Action_Teleport_End::CallFunc_ActionState_TryLockInput_Movement_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Teleport_End_C_ExecuteUbergraph_BP_Action_Teleport_End, CallFunc_IsValid_ReturnValue_2) == 0x00006C, "Member 'BP_Action_Teleport_End_C_ExecuteUbergraph_BP_Action_Teleport_End::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Action_Teleport_End_C_ExecuteUbergraph_BP_Action_Teleport_End, K2Node_DynamicCast_AsLAct_Payload_Teleport) == 0x000070, "Member 'BP_Action_Teleport_End_C_ExecuteUbergraph_BP_Action_Teleport_End::K2Node_DynamicCast_AsLAct_Payload_Teleport' has a wrong offset!");
static_assert(offsetof(BP_Action_Teleport_End_C_ExecuteUbergraph_BP_Action_Teleport_End, K2Node_DynamicCast_bSuccess_1) == 0x000078, "Member 'BP_Action_Teleport_End_C_ExecuteUbergraph_BP_Action_Teleport_End::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Teleport_End_C_ExecuteUbergraph_BP_Action_Teleport_End, K2Node_Event_ReasonAction) == 0x000080, "Member 'BP_Action_Teleport_End_C_ExecuteUbergraph_BP_Action_Teleport_End::K2Node_Event_ReasonAction' has a wrong offset!");
static_assert(offsetof(BP_Action_Teleport_End_C_ExecuteUbergraph_BP_Action_Teleport_End, K2Node_Event_Reason) == 0x000088, "Member 'BP_Action_Teleport_End_C_ExecuteUbergraph_BP_Action_Teleport_End::K2Node_Event_Reason' has a wrong offset!");
static_assert(offsetof(BP_Action_Teleport_End_C_ExecuteUbergraph_BP_Action_Teleport_End, CallFunc_GetGameInstanceSubsystem_ReturnValue) == 0x000090, "Member 'BP_Action_Teleport_End_C_ExecuteUbergraph_BP_Action_Teleport_End::CallFunc_GetGameInstanceSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Teleport_End_C_ExecuteUbergraph_BP_Action_Teleport_End, CallFunc_IsValid_ReturnValue_3) == 0x000098, "Member 'BP_Action_Teleport_End_C_ExecuteUbergraph_BP_Action_Teleport_End::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_Action_Teleport_End_C_ExecuteUbergraph_BP_Action_Teleport_End, CallFunc_IsValid_ReturnValue_4) == 0x000099, "Member 'BP_Action_Teleport_End_C_ExecuteUbergraph_BP_Action_Teleport_End::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_Action_Teleport_End_C_ExecuteUbergraph_BP_Action_Teleport_End, K2Node_DynamicCast_AsLPCCharacter_1) == 0x0000A0, "Member 'BP_Action_Teleport_End_C_ExecuteUbergraph_BP_Action_Teleport_End::K2Node_DynamicCast_AsLPCCharacter_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Teleport_End_C_ExecuteUbergraph_BP_Action_Teleport_End, K2Node_DynamicCast_bSuccess_2) == 0x0000A8, "Member 'BP_Action_Teleport_End_C_ExecuteUbergraph_BP_Action_Teleport_End::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_Action_Teleport_End_C_ExecuteUbergraph_BP_Action_Teleport_End, CallFunc_ActionState_ExitReposition_Disable_ReturnValue) == 0x0000AC, "Member 'BP_Action_Teleport_End_C_ExecuteUbergraph_BP_Action_Teleport_End::CallFunc_ActionState_ExitReposition_Disable_ReturnValue' has a wrong offset!");

// Function BP_Action_Teleport_End.BP_Action_Teleport_End_C.OnStop
// 0x0010 (0x0010 - 0x0000)
struct BP_Action_Teleport_End_C_OnStop final
{
public:
	class ULActBase*                              ReasonAction;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Reason;                                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_Teleport_End_C_OnStop) == 0x000008, "Wrong alignment on BP_Action_Teleport_End_C_OnStop");
static_assert(sizeof(BP_Action_Teleport_End_C_OnStop) == 0x000010, "Wrong size on BP_Action_Teleport_End_C_OnStop");
static_assert(offsetof(BP_Action_Teleport_End_C_OnStop, ReasonAction) == 0x000000, "Member 'BP_Action_Teleport_End_C_OnStop::ReasonAction' has a wrong offset!");
static_assert(offsetof(BP_Action_Teleport_End_C_OnStop, Reason) == 0x000008, "Member 'BP_Action_Teleport_End_C_OnStop::Reason' has a wrong offset!");

// Function BP_Action_Teleport_End.BP_Action_Teleport_End_C.OnCurrMontageEnded
// 0x0010 (0x0010 - 0x0000)
struct BP_Action_Teleport_End_C_OnCurrMontageEnded final
{
public:
	class UAnimMontage*                           Montage;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInterrupted;                                      // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         MontageInstanceID;                                 // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_Teleport_End_C_OnCurrMontageEnded) == 0x000008, "Wrong alignment on BP_Action_Teleport_End_C_OnCurrMontageEnded");
static_assert(sizeof(BP_Action_Teleport_End_C_OnCurrMontageEnded) == 0x000010, "Wrong size on BP_Action_Teleport_End_C_OnCurrMontageEnded");
static_assert(offsetof(BP_Action_Teleport_End_C_OnCurrMontageEnded, Montage) == 0x000000, "Member 'BP_Action_Teleport_End_C_OnCurrMontageEnded::Montage' has a wrong offset!");
static_assert(offsetof(BP_Action_Teleport_End_C_OnCurrMontageEnded, bInterrupted) == 0x000008, "Member 'BP_Action_Teleport_End_C_OnCurrMontageEnded::bInterrupted' has a wrong offset!");
static_assert(offsetof(BP_Action_Teleport_End_C_OnCurrMontageEnded, MontageInstanceID) == 0x00000C, "Member 'BP_Action_Teleport_End_C_OnCurrMontageEnded::MontageInstanceID' has a wrong offset!");

// Function BP_Action_Teleport_End.BP_Action_Teleport_End_C.OnTick
// 0x0004 (0x0004 - 0x0000)
struct BP_Action_Teleport_End_C_OnTick final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_Teleport_End_C_OnTick) == 0x000004, "Wrong alignment on BP_Action_Teleport_End_C_OnTick");
static_assert(sizeof(BP_Action_Teleport_End_C_OnTick) == 0x000004, "Wrong size on BP_Action_Teleport_End_C_OnTick");
static_assert(offsetof(BP_Action_Teleport_End_C_OnTick, DeltaTime) == 0x000000, "Member 'BP_Action_Teleport_End_C_OnTick::DeltaTime' has a wrong offset!");

}
