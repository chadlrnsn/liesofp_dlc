#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Action_SlaveArm_FlameThrower

#include "Basic.hpp"

#include "ProjectPContentInfo_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "ProjectP_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_Action_SlaveArm_FlameThrower.BP_Action_SlaveArm_FlameThrower_C.ExecuteUbergraph_BP_Action_SlaveArm_FlameThrower
// 0x0130 (0x0130 - 0x0000)
struct BP_Action_SlaveArm_FlameThrower_C_ExecuteUbergraph_BP_Action_SlaveArm_FlameThrower final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_ActionState_AllowInput_Movement_Forced_ReturnValue; // 0x0004(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ULLockOnSystem*                         CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsLockOnMode_ReturnValue;                 // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ULActBase*                              K2Node_Event_ReasonAction;                         // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Event_Reason;                               // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0040(0x0008)(NoDestructor, HasGetValueTypeHash)
	class ULActMgrComponent*                      K2Node_CustomEvent_ActMgrComponent;                // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_CustomEvent_TargetActor;                    // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_Command;                        // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_CustomEvent_Lever;                          // 0x0060(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_SkipCommandPrerequisitiesCheck; // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchName_CmpSuccess;                      // 0x006D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindActionState_ReturnValue;              // 0x006E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6F[0x1];                                       // 0x006F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class ULActMgrComponent* ActMgrComponent, class AActor* TargetActor, class FName Command, const struct FVector& Lever, bool SkipCommandPrerequisitiesCheck)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0070(0x0010)(ZeroConstructor, NoDestructor)
	TArray<class FName>                           K2Node_MakeArray_Array;                            // 0x0080(0x0010)(ReferenceParm)
	EExecutePin                                   CallFunc_GetActiveSlaveArmSkillCodeNameBP_Branches; // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_91[0x3];                                       // 0x0091(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_GetActiveSlaveArmSkillCodeNameBP_ReturnValue; // 0x0094(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_CheckCurrectSection_CurrentSectionName;   // 0x009C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CheckCurrectSection_IsPlayingSectionInList; // 0x00A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x00A5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x00A6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Stop_ReturnValue;                         // 0x00A7(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FName                                   CallFunc_InputCommand_SlaveArmPress_ReturnValue;   // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsCommandPressed_ReturnValue;             // 0x00B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B2[0x2];                                       // 0x00B2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_InputCommand_SlaveArmPress_ReturnValue_1; // 0x00B4(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BC[0x4];                                       // 0x00BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           K2Node_MakeArray_Array_1;                          // 0x00C0(0x0010)(ReferenceParm)
	float                                         K2Node_Event_DeltaTime;                            // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_CheckCurrectSection_CurrentSectionName_1; // 0x00D4(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CheckCurrectSection_IsPlayingSectionInList_1; // 0x00DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_DD[0x3];                                       // 0x00DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           K2Node_MakeArray_Array_2;                          // 0x00E0(0x0010)(ReferenceParm)
	class FName                                   CallFunc_CheckCurrectSection_CurrentSectionName_2; // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CheckCurrectSection_IsPlayingSectionInList_2; // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsCommandPressed_ReturnValue_1;           // 0x00F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_FA[0x2];                                       // 0x00FA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_ActionState_AllowInput_Rotation_Forced_ReturnValue; // 0x00FC(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindActionState_ReturnValue_1;            // 0x0104(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_105[0x3];                                      // 0x0105(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           K2Node_MakeArray_Array_3;                          // 0x0108(0x0010)(ReferenceParm)
	bool                                          CallFunc_FindActionState_ReturnValue_2;            // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_119[0x3];                                      // 0x0119(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_CheckCurrectSection_CurrentSectionName_3; // 0x011C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CheckCurrectSection_IsPlayingSectionInList_3; // 0x0124(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0125(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0126(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_127[0x1];                                      // 0x0127(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLGameObjectHandle                     CallFunc_AddActionState_AutoRemove_ReturnValue;    // 0x0128(0x0004)(NoDestructor)
};
static_assert(alignof(BP_Action_SlaveArm_FlameThrower_C_ExecuteUbergraph_BP_Action_SlaveArm_FlameThrower) == 0x000008, "Wrong alignment on BP_Action_SlaveArm_FlameThrower_C_ExecuteUbergraph_BP_Action_SlaveArm_FlameThrower");
static_assert(sizeof(BP_Action_SlaveArm_FlameThrower_C_ExecuteUbergraph_BP_Action_SlaveArm_FlameThrower) == 0x000130, "Wrong size on BP_Action_SlaveArm_FlameThrower_C_ExecuteUbergraph_BP_Action_SlaveArm_FlameThrower");
static_assert(offsetof(BP_Action_SlaveArm_FlameThrower_C_ExecuteUbergraph_BP_Action_SlaveArm_FlameThrower, EntryPoint) == 0x000000, "Member 'BP_Action_SlaveArm_FlameThrower_C_ExecuteUbergraph_BP_Action_SlaveArm_FlameThrower::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Action_SlaveArm_FlameThrower_C_ExecuteUbergraph_BP_Action_SlaveArm_FlameThrower, CallFunc_ActionState_AllowInput_Movement_Forced_ReturnValue) == 0x000004, "Member 'BP_Action_SlaveArm_FlameThrower_C_ExecuteUbergraph_BP_Action_SlaveArm_FlameThrower::CallFunc_ActionState_AllowInput_Movement_Forced_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_SlaveArm_FlameThrower_C_ExecuteUbergraph_BP_Action_SlaveArm_FlameThrower, CallFunc_GetGameInstanceSubsystem_ReturnValue) == 0x000010, "Member 'BP_Action_SlaveArm_FlameThrower_C_ExecuteUbergraph_BP_Action_SlaveArm_FlameThrower::CallFunc_GetGameInstanceSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_SlaveArm_FlameThrower_C_ExecuteUbergraph_BP_Action_SlaveArm_FlameThrower, K2Node_CreateDelegate_OutputDelegate) == 0x000018, "Member 'BP_Action_SlaveArm_FlameThrower_C_ExecuteUbergraph_BP_Action_SlaveArm_FlameThrower::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_Action_SlaveArm_FlameThrower_C_ExecuteUbergraph_BP_Action_SlaveArm_FlameThrower, CallFunc_IsLockOnMode_ReturnValue) == 0x000028, "Member 'BP_Action_SlaveArm_FlameThrower_C_ExecuteUbergraph_BP_Action_SlaveArm_FlameThrower::CallFunc_IsLockOnMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_SlaveArm_FlameThrower_C_ExecuteUbergraph_BP_Action_SlaveArm_FlameThrower, K2Node_Event_ReasonAction) == 0x000030, "Member 'BP_Action_SlaveArm_FlameThrower_C_ExecuteUbergraph_BP_Action_SlaveArm_FlameThrower::K2Node_Event_ReasonAction' has a wrong offset!");
static_assert(offsetof(BP_Action_SlaveArm_FlameThrower_C_ExecuteUbergraph_BP_Action_SlaveArm_FlameThrower, K2Node_Event_Reason) == 0x000038, "Member 'BP_Action_SlaveArm_FlameThrower_C_ExecuteUbergraph_BP_Action_SlaveArm_FlameThrower::K2Node_Event_Reason' has a wrong offset!");
static_assert(offsetof(BP_Action_SlaveArm_FlameThrower_C_ExecuteUbergraph_BP_Action_SlaveArm_FlameThrower, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000040, "Member 'BP_Action_SlaveArm_FlameThrower_C_ExecuteUbergraph_BP_Action_SlaveArm_FlameThrower::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_SlaveArm_FlameThrower_C_ExecuteUbergraph_BP_Action_SlaveArm_FlameThrower, K2Node_CustomEvent_ActMgrComponent) == 0x000048, "Member 'BP_Action_SlaveArm_FlameThrower_C_ExecuteUbergraph_BP_Action_SlaveArm_FlameThrower::K2Node_CustomEvent_ActMgrComponent' has a wrong offset!");
static_assert(offsetof(BP_Action_SlaveArm_FlameThrower_C_ExecuteUbergraph_BP_Action_SlaveArm_FlameThrower, K2Node_CustomEvent_TargetActor) == 0x000050, "Member 'BP_Action_SlaveArm_FlameThrower_C_ExecuteUbergraph_BP_Action_SlaveArm_FlameThrower::K2Node_CustomEvent_TargetActor' has a wrong offset!");
static_assert(offsetof(BP_Action_SlaveArm_FlameThrower_C_ExecuteUbergraph_BP_Action_SlaveArm_FlameThrower, K2Node_CustomEvent_Command) == 0x000058, "Member 'BP_Action_SlaveArm_FlameThrower_C_ExecuteUbergraph_BP_Action_SlaveArm_FlameThrower::K2Node_CustomEvent_Command' has a wrong offset!");
static_assert(offsetof(BP_Action_SlaveArm_FlameThrower_C_ExecuteUbergraph_BP_Action_SlaveArm_FlameThrower, K2Node_CustomEvent_Lever) == 0x000060, "Member 'BP_Action_SlaveArm_FlameThrower_C_ExecuteUbergraph_BP_Action_SlaveArm_FlameThrower::K2Node_CustomEvent_Lever' has a wrong offset!");
static_assert(offsetof(BP_Action_SlaveArm_FlameThrower_C_ExecuteUbergraph_BP_Action_SlaveArm_FlameThrower, K2Node_CustomEvent_SkipCommandPrerequisitiesCheck) == 0x00006C, "Member 'BP_Action_SlaveArm_FlameThrower_C_ExecuteUbergraph_BP_Action_SlaveArm_FlameThrower::K2Node_CustomEvent_SkipCommandPrerequisitiesCheck' has a wrong offset!");
static_assert(offsetof(BP_Action_SlaveArm_FlameThrower_C_ExecuteUbergraph_BP_Action_SlaveArm_FlameThrower, K2Node_SwitchName_CmpSuccess) == 0x00006D, "Member 'BP_Action_SlaveArm_FlameThrower_C_ExecuteUbergraph_BP_Action_SlaveArm_FlameThrower::K2Node_SwitchName_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_Action_SlaveArm_FlameThrower_C_ExecuteUbergraph_BP_Action_SlaveArm_FlameThrower, CallFunc_FindActionState_ReturnValue) == 0x00006E, "Member 'BP_Action_SlaveArm_FlameThrower_C_ExecuteUbergraph_BP_Action_SlaveArm_FlameThrower::CallFunc_FindActionState_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_SlaveArm_FlameThrower_C_ExecuteUbergraph_BP_Action_SlaveArm_FlameThrower, K2Node_CreateDelegate_OutputDelegate_1) == 0x000070, "Member 'BP_Action_SlaveArm_FlameThrower_C_ExecuteUbergraph_BP_Action_SlaveArm_FlameThrower::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_Action_SlaveArm_FlameThrower_C_ExecuteUbergraph_BP_Action_SlaveArm_FlameThrower, K2Node_MakeArray_Array) == 0x000080, "Member 'BP_Action_SlaveArm_FlameThrower_C_ExecuteUbergraph_BP_Action_SlaveArm_FlameThrower::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_Action_SlaveArm_FlameThrower_C_ExecuteUbergraph_BP_Action_SlaveArm_FlameThrower, CallFunc_GetActiveSlaveArmSkillCodeNameBP_Branches) == 0x000090, "Member 'BP_Action_SlaveArm_FlameThrower_C_ExecuteUbergraph_BP_Action_SlaveArm_FlameThrower::CallFunc_GetActiveSlaveArmSkillCodeNameBP_Branches' has a wrong offset!");
static_assert(offsetof(BP_Action_SlaveArm_FlameThrower_C_ExecuteUbergraph_BP_Action_SlaveArm_FlameThrower, CallFunc_GetActiveSlaveArmSkillCodeNameBP_ReturnValue) == 0x000094, "Member 'BP_Action_SlaveArm_FlameThrower_C_ExecuteUbergraph_BP_Action_SlaveArm_FlameThrower::CallFunc_GetActiveSlaveArmSkillCodeNameBP_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_SlaveArm_FlameThrower_C_ExecuteUbergraph_BP_Action_SlaveArm_FlameThrower, CallFunc_CheckCurrectSection_CurrentSectionName) == 0x00009C, "Member 'BP_Action_SlaveArm_FlameThrower_C_ExecuteUbergraph_BP_Action_SlaveArm_FlameThrower::CallFunc_CheckCurrectSection_CurrentSectionName' has a wrong offset!");
static_assert(offsetof(BP_Action_SlaveArm_FlameThrower_C_ExecuteUbergraph_BP_Action_SlaveArm_FlameThrower, CallFunc_CheckCurrectSection_IsPlayingSectionInList) == 0x0000A4, "Member 'BP_Action_SlaveArm_FlameThrower_C_ExecuteUbergraph_BP_Action_SlaveArm_FlameThrower::CallFunc_CheckCurrectSection_IsPlayingSectionInList' has a wrong offset!");
static_assert(offsetof(BP_Action_SlaveArm_FlameThrower_C_ExecuteUbergraph_BP_Action_SlaveArm_FlameThrower, K2Node_SwitchEnum_CmpSuccess) == 0x0000A5, "Member 'BP_Action_SlaveArm_FlameThrower_C_ExecuteUbergraph_BP_Action_SlaveArm_FlameThrower::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_Action_SlaveArm_FlameThrower_C_ExecuteUbergraph_BP_Action_SlaveArm_FlameThrower, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x0000A6, "Member 'BP_Action_SlaveArm_FlameThrower_C_ExecuteUbergraph_BP_Action_SlaveArm_FlameThrower::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_SlaveArm_FlameThrower_C_ExecuteUbergraph_BP_Action_SlaveArm_FlameThrower, CallFunc_Stop_ReturnValue) == 0x0000A7, "Member 'BP_Action_SlaveArm_FlameThrower_C_ExecuteUbergraph_BP_Action_SlaveArm_FlameThrower::CallFunc_Stop_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_SlaveArm_FlameThrower_C_ExecuteUbergraph_BP_Action_SlaveArm_FlameThrower, CallFunc_InputCommand_SlaveArmPress_ReturnValue) == 0x0000A8, "Member 'BP_Action_SlaveArm_FlameThrower_C_ExecuteUbergraph_BP_Action_SlaveArm_FlameThrower::CallFunc_InputCommand_SlaveArmPress_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_SlaveArm_FlameThrower_C_ExecuteUbergraph_BP_Action_SlaveArm_FlameThrower, CallFunc_IsValid_ReturnValue) == 0x0000B0, "Member 'BP_Action_SlaveArm_FlameThrower_C_ExecuteUbergraph_BP_Action_SlaveArm_FlameThrower::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_SlaveArm_FlameThrower_C_ExecuteUbergraph_BP_Action_SlaveArm_FlameThrower, CallFunc_IsCommandPressed_ReturnValue) == 0x0000B1, "Member 'BP_Action_SlaveArm_FlameThrower_C_ExecuteUbergraph_BP_Action_SlaveArm_FlameThrower::CallFunc_IsCommandPressed_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_SlaveArm_FlameThrower_C_ExecuteUbergraph_BP_Action_SlaveArm_FlameThrower, CallFunc_InputCommand_SlaveArmPress_ReturnValue_1) == 0x0000B4, "Member 'BP_Action_SlaveArm_FlameThrower_C_ExecuteUbergraph_BP_Action_SlaveArm_FlameThrower::CallFunc_InputCommand_SlaveArmPress_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_SlaveArm_FlameThrower_C_ExecuteUbergraph_BP_Action_SlaveArm_FlameThrower, K2Node_MakeArray_Array_1) == 0x0000C0, "Member 'BP_Action_SlaveArm_FlameThrower_C_ExecuteUbergraph_BP_Action_SlaveArm_FlameThrower::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(BP_Action_SlaveArm_FlameThrower_C_ExecuteUbergraph_BP_Action_SlaveArm_FlameThrower, K2Node_Event_DeltaTime) == 0x0000D0, "Member 'BP_Action_SlaveArm_FlameThrower_C_ExecuteUbergraph_BP_Action_SlaveArm_FlameThrower::K2Node_Event_DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_Action_SlaveArm_FlameThrower_C_ExecuteUbergraph_BP_Action_SlaveArm_FlameThrower, CallFunc_CheckCurrectSection_CurrentSectionName_1) == 0x0000D4, "Member 'BP_Action_SlaveArm_FlameThrower_C_ExecuteUbergraph_BP_Action_SlaveArm_FlameThrower::CallFunc_CheckCurrectSection_CurrentSectionName_1' has a wrong offset!");
static_assert(offsetof(BP_Action_SlaveArm_FlameThrower_C_ExecuteUbergraph_BP_Action_SlaveArm_FlameThrower, CallFunc_CheckCurrectSection_IsPlayingSectionInList_1) == 0x0000DC, "Member 'BP_Action_SlaveArm_FlameThrower_C_ExecuteUbergraph_BP_Action_SlaveArm_FlameThrower::CallFunc_CheckCurrectSection_IsPlayingSectionInList_1' has a wrong offset!");
static_assert(offsetof(BP_Action_SlaveArm_FlameThrower_C_ExecuteUbergraph_BP_Action_SlaveArm_FlameThrower, K2Node_MakeArray_Array_2) == 0x0000E0, "Member 'BP_Action_SlaveArm_FlameThrower_C_ExecuteUbergraph_BP_Action_SlaveArm_FlameThrower::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(BP_Action_SlaveArm_FlameThrower_C_ExecuteUbergraph_BP_Action_SlaveArm_FlameThrower, CallFunc_CheckCurrectSection_CurrentSectionName_2) == 0x0000F0, "Member 'BP_Action_SlaveArm_FlameThrower_C_ExecuteUbergraph_BP_Action_SlaveArm_FlameThrower::CallFunc_CheckCurrectSection_CurrentSectionName_2' has a wrong offset!");
static_assert(offsetof(BP_Action_SlaveArm_FlameThrower_C_ExecuteUbergraph_BP_Action_SlaveArm_FlameThrower, CallFunc_CheckCurrectSection_IsPlayingSectionInList_2) == 0x0000F8, "Member 'BP_Action_SlaveArm_FlameThrower_C_ExecuteUbergraph_BP_Action_SlaveArm_FlameThrower::CallFunc_CheckCurrectSection_IsPlayingSectionInList_2' has a wrong offset!");
static_assert(offsetof(BP_Action_SlaveArm_FlameThrower_C_ExecuteUbergraph_BP_Action_SlaveArm_FlameThrower, CallFunc_IsCommandPressed_ReturnValue_1) == 0x0000F9, "Member 'BP_Action_SlaveArm_FlameThrower_C_ExecuteUbergraph_BP_Action_SlaveArm_FlameThrower::CallFunc_IsCommandPressed_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_SlaveArm_FlameThrower_C_ExecuteUbergraph_BP_Action_SlaveArm_FlameThrower, CallFunc_ActionState_AllowInput_Rotation_Forced_ReturnValue) == 0x0000FC, "Member 'BP_Action_SlaveArm_FlameThrower_C_ExecuteUbergraph_BP_Action_SlaveArm_FlameThrower::CallFunc_ActionState_AllowInput_Rotation_Forced_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_SlaveArm_FlameThrower_C_ExecuteUbergraph_BP_Action_SlaveArm_FlameThrower, CallFunc_FindActionState_ReturnValue_1) == 0x000104, "Member 'BP_Action_SlaveArm_FlameThrower_C_ExecuteUbergraph_BP_Action_SlaveArm_FlameThrower::CallFunc_FindActionState_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_SlaveArm_FlameThrower_C_ExecuteUbergraph_BP_Action_SlaveArm_FlameThrower, K2Node_MakeArray_Array_3) == 0x000108, "Member 'BP_Action_SlaveArm_FlameThrower_C_ExecuteUbergraph_BP_Action_SlaveArm_FlameThrower::K2Node_MakeArray_Array_3' has a wrong offset!");
static_assert(offsetof(BP_Action_SlaveArm_FlameThrower_C_ExecuteUbergraph_BP_Action_SlaveArm_FlameThrower, CallFunc_FindActionState_ReturnValue_2) == 0x000118, "Member 'BP_Action_SlaveArm_FlameThrower_C_ExecuteUbergraph_BP_Action_SlaveArm_FlameThrower::CallFunc_FindActionState_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Action_SlaveArm_FlameThrower_C_ExecuteUbergraph_BP_Action_SlaveArm_FlameThrower, CallFunc_CheckCurrectSection_CurrentSectionName_3) == 0x00011C, "Member 'BP_Action_SlaveArm_FlameThrower_C_ExecuteUbergraph_BP_Action_SlaveArm_FlameThrower::CallFunc_CheckCurrectSection_CurrentSectionName_3' has a wrong offset!");
static_assert(offsetof(BP_Action_SlaveArm_FlameThrower_C_ExecuteUbergraph_BP_Action_SlaveArm_FlameThrower, CallFunc_CheckCurrectSection_IsPlayingSectionInList_3) == 0x000124, "Member 'BP_Action_SlaveArm_FlameThrower_C_ExecuteUbergraph_BP_Action_SlaveArm_FlameThrower::CallFunc_CheckCurrectSection_IsPlayingSectionInList_3' has a wrong offset!");
static_assert(offsetof(BP_Action_SlaveArm_FlameThrower_C_ExecuteUbergraph_BP_Action_SlaveArm_FlameThrower, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000125, "Member 'BP_Action_SlaveArm_FlameThrower_C_ExecuteUbergraph_BP_Action_SlaveArm_FlameThrower::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_SlaveArm_FlameThrower_C_ExecuteUbergraph_BP_Action_SlaveArm_FlameThrower, CallFunc_IsValid_ReturnValue_1) == 0x000126, "Member 'BP_Action_SlaveArm_FlameThrower_C_ExecuteUbergraph_BP_Action_SlaveArm_FlameThrower::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_SlaveArm_FlameThrower_C_ExecuteUbergraph_BP_Action_SlaveArm_FlameThrower, CallFunc_AddActionState_AutoRemove_ReturnValue) == 0x000128, "Member 'BP_Action_SlaveArm_FlameThrower_C_ExecuteUbergraph_BP_Action_SlaveArm_FlameThrower::CallFunc_AddActionState_AutoRemove_ReturnValue' has a wrong offset!");

// Function BP_Action_SlaveArm_FlameThrower.BP_Action_SlaveArm_FlameThrower_C.OnTick
// 0x0004 (0x0004 - 0x0000)
struct BP_Action_SlaveArm_FlameThrower_C_OnTick final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_SlaveArm_FlameThrower_C_OnTick) == 0x000004, "Wrong alignment on BP_Action_SlaveArm_FlameThrower_C_OnTick");
static_assert(sizeof(BP_Action_SlaveArm_FlameThrower_C_OnTick) == 0x000004, "Wrong size on BP_Action_SlaveArm_FlameThrower_C_OnTick");
static_assert(offsetof(BP_Action_SlaveArm_FlameThrower_C_OnTick, DeltaTime) == 0x000000, "Member 'BP_Action_SlaveArm_FlameThrower_C_OnTick::DeltaTime' has a wrong offset!");

// Function BP_Action_SlaveArm_FlameThrower.BP_Action_SlaveArm_FlameThrower_C.OnCommandOccurred_Event
// 0x0028 (0x0028 - 0x0000)
struct BP_Action_SlaveArm_FlameThrower_C_OnCommandOccurred_Event final
{
public:
	class ULActMgrComponent*                      ActMgrComponent;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 TargetActor;                                       // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Command;                                           // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Lever;                                             // 0x0018(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SkipCommandPrerequisitiesCheck;                    // 0x0024(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Action_SlaveArm_FlameThrower_C_OnCommandOccurred_Event) == 0x000008, "Wrong alignment on BP_Action_SlaveArm_FlameThrower_C_OnCommandOccurred_Event");
static_assert(sizeof(BP_Action_SlaveArm_FlameThrower_C_OnCommandOccurred_Event) == 0x000028, "Wrong size on BP_Action_SlaveArm_FlameThrower_C_OnCommandOccurred_Event");
static_assert(offsetof(BP_Action_SlaveArm_FlameThrower_C_OnCommandOccurred_Event, ActMgrComponent) == 0x000000, "Member 'BP_Action_SlaveArm_FlameThrower_C_OnCommandOccurred_Event::ActMgrComponent' has a wrong offset!");
static_assert(offsetof(BP_Action_SlaveArm_FlameThrower_C_OnCommandOccurred_Event, TargetActor) == 0x000008, "Member 'BP_Action_SlaveArm_FlameThrower_C_OnCommandOccurred_Event::TargetActor' has a wrong offset!");
static_assert(offsetof(BP_Action_SlaveArm_FlameThrower_C_OnCommandOccurred_Event, Command) == 0x000010, "Member 'BP_Action_SlaveArm_FlameThrower_C_OnCommandOccurred_Event::Command' has a wrong offset!");
static_assert(offsetof(BP_Action_SlaveArm_FlameThrower_C_OnCommandOccurred_Event, Lever) == 0x000018, "Member 'BP_Action_SlaveArm_FlameThrower_C_OnCommandOccurred_Event::Lever' has a wrong offset!");
static_assert(offsetof(BP_Action_SlaveArm_FlameThrower_C_OnCommandOccurred_Event, SkipCommandPrerequisitiesCheck) == 0x000024, "Member 'BP_Action_SlaveArm_FlameThrower_C_OnCommandOccurred_Event::SkipCommandPrerequisitiesCheck' has a wrong offset!");

// Function BP_Action_SlaveArm_FlameThrower.BP_Action_SlaveArm_FlameThrower_C.OnStop
// 0x0010 (0x0010 - 0x0000)
struct BP_Action_SlaveArm_FlameThrower_C_OnStop final
{
public:
	class ULActBase*                              ReasonAction;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Reason;                                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_SlaveArm_FlameThrower_C_OnStop) == 0x000008, "Wrong alignment on BP_Action_SlaveArm_FlameThrower_C_OnStop");
static_assert(sizeof(BP_Action_SlaveArm_FlameThrower_C_OnStop) == 0x000010, "Wrong size on BP_Action_SlaveArm_FlameThrower_C_OnStop");
static_assert(offsetof(BP_Action_SlaveArm_FlameThrower_C_OnStop, ReasonAction) == 0x000000, "Member 'BP_Action_SlaveArm_FlameThrower_C_OnStop::ReasonAction' has a wrong offset!");
static_assert(offsetof(BP_Action_SlaveArm_FlameThrower_C_OnStop, Reason) == 0x000008, "Member 'BP_Action_SlaveArm_FlameThrower_C_OnStop::Reason' has a wrong offset!");

// Function BP_Action_SlaveArm_FlameThrower.BP_Action_SlaveArm_FlameThrower_C.SetReinforcedVariableValue
// 0x0028 (0x0028 - 0x0000)
struct BP_Action_SlaveArm_FlameThrower_C_SetReinforcedVariableValue final
{
public:
	class FName                                   VariableName;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Value;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_StringToFloat_ReturnValue;           // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchName_CmpSuccess;                      // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Action_SlaveArm_FlameThrower_C_SetReinforcedVariableValue) == 0x000008, "Wrong alignment on BP_Action_SlaveArm_FlameThrower_C_SetReinforcedVariableValue");
static_assert(sizeof(BP_Action_SlaveArm_FlameThrower_C_SetReinforcedVariableValue) == 0x000028, "Wrong size on BP_Action_SlaveArm_FlameThrower_C_SetReinforcedVariableValue");
static_assert(offsetof(BP_Action_SlaveArm_FlameThrower_C_SetReinforcedVariableValue, VariableName) == 0x000000, "Member 'BP_Action_SlaveArm_FlameThrower_C_SetReinforcedVariableValue::VariableName' has a wrong offset!");
static_assert(offsetof(BP_Action_SlaveArm_FlameThrower_C_SetReinforcedVariableValue, Value) == 0x000008, "Member 'BP_Action_SlaveArm_FlameThrower_C_SetReinforcedVariableValue::Value' has a wrong offset!");
static_assert(offsetof(BP_Action_SlaveArm_FlameThrower_C_SetReinforcedVariableValue, CallFunc_Conv_NameToString_ReturnValue) == 0x000010, "Member 'BP_Action_SlaveArm_FlameThrower_C_SetReinforcedVariableValue::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_SlaveArm_FlameThrower_C_SetReinforcedVariableValue, CallFunc_Conv_StringToFloat_ReturnValue) == 0x000020, "Member 'BP_Action_SlaveArm_FlameThrower_C_SetReinforcedVariableValue::CallFunc_Conv_StringToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_SlaveArm_FlameThrower_C_SetReinforcedVariableValue, K2Node_SwitchName_CmpSuccess) == 0x000024, "Member 'BP_Action_SlaveArm_FlameThrower_C_SetReinforcedVariableValue::K2Node_SwitchName_CmpSuccess' has a wrong offset!");

// Function BP_Action_SlaveArm_FlameThrower.BP_Action_SlaveArm_FlameThrower_C.SetBoomState
// 0x0018 (0x0018 - 0x0000)
struct BP_Action_SlaveArm_FlameThrower_C_SetBoomState final
{
public:
	bool                                          bEnable;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ELFlameThrowerExplosionEnableStateType        Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ELFlameThrowerExplosionEnableStateType        Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ULEventDispatcherSystem*                CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ELFlameThrowerExplosionEnableStateType        K2Node_Select_Default;                             // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_SlaveArm_FlameThrower_C_SetBoomState) == 0x000008, "Wrong alignment on BP_Action_SlaveArm_FlameThrower_C_SetBoomState");
static_assert(sizeof(BP_Action_SlaveArm_FlameThrower_C_SetBoomState) == 0x000018, "Wrong size on BP_Action_SlaveArm_FlameThrower_C_SetBoomState");
static_assert(offsetof(BP_Action_SlaveArm_FlameThrower_C_SetBoomState, bEnable) == 0x000000, "Member 'BP_Action_SlaveArm_FlameThrower_C_SetBoomState::bEnable' has a wrong offset!");
static_assert(offsetof(BP_Action_SlaveArm_FlameThrower_C_SetBoomState, Temp_bool_Variable) == 0x000001, "Member 'BP_Action_SlaveArm_FlameThrower_C_SetBoomState::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_Action_SlaveArm_FlameThrower_C_SetBoomState, Temp_byte_Variable) == 0x000002, "Member 'BP_Action_SlaveArm_FlameThrower_C_SetBoomState::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_Action_SlaveArm_FlameThrower_C_SetBoomState, Temp_byte_Variable_1) == 0x000003, "Member 'BP_Action_SlaveArm_FlameThrower_C_SetBoomState::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_Action_SlaveArm_FlameThrower_C_SetBoomState, CallFunc_GetGameInstanceSubsystem_ReturnValue) == 0x000008, "Member 'BP_Action_SlaveArm_FlameThrower_C_SetBoomState::CallFunc_GetGameInstanceSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_SlaveArm_FlameThrower_C_SetBoomState, K2Node_Select_Default) == 0x000010, "Member 'BP_Action_SlaveArm_FlameThrower_C_SetBoomState::K2Node_Select_Default' has a wrong offset!");

}

