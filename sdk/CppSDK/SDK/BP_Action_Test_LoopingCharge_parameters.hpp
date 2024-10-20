#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Action_Test_LoopingCharge

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "ProjectP_structs.hpp"


namespace SDK::Params
{

// Function BP_Action_Test_LoopingCharge.BP_Action_Test_LoopingCharge_C.ExecuteUbergraph_BP_Action_Test_LoopingCharge
// 0x00D8 (0x00D8 - 0x0000)
struct BP_Action_Test_LoopingCharge_C_ExecuteUbergraph_BP_Action_Test_LoopingCharge final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class ULActMgrComponent* ActMgrComponent, class AActor* TargetActor, class FName Command, const struct FVector& Lever, bool SkipCommandPrerequisitiesCheck)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ULActBase*                              K2Node_Event_ReasonAction;                         // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Event_Reason;                               // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULActMgrComponent*                      K2Node_CustomEvent_ActMgrComponent;                // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_CustomEvent_TargetActor;                    // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_Command;                        // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_CustomEvent_Lever;                          // 0x0048(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_SkipCommandPrerequisitiesCheck; // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0055(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchName_CmpSuccess;                      // 0x0056(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindActionState_ReturnValue;              // 0x0057(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UAnimInstance*                          CallFunc_GetAnimInst_ReturnValue;                  // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTime;                            // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EExecutePin                                   CallFunc_GetMontage_CurrentSectionBP_Branches;     // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_65[0x3];                                       // 0x0065(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_GetMontage_CurrentSectionBP_ReturnValue;  // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetMontage_NextSection_ReturnValue;       // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EExecutePin                                   CallFunc_GetStatComponentBP_Branches;              // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_72[0x6];                                       // 0x0072(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ULStatComponent*                        CallFunc_GetStatComponentBP_ReturnValue;           // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchName_CmpSuccess_1;                    // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81[0x3];                                       // 0x0081(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetCharacterStat_ReturnValue;             // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x008A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8B[0x5];                                       // 0x008B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimMontage*                           K2Node_Event_Montage;                              // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bInterrupted;                         // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99[0x3];                                       // 0x0099(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Event_MontageInstanceID;                    // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Stop_ReturnValue;                         // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EExecutePin                                   CallFunc_PlaySkillActionBP_Branches;               // 0x00A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A3[0x5];                                       // 0x00A3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class ULActBase*                              CallFunc_PlaySkillActionBP_ReturnValue;            // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EExecutePin                                   CallFunc_PlaySkillActionBP_Branches_1;             // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B1[0x7];                                       // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ULActBase*                              CallFunc_PlaySkillActionBP_ReturnValue_1;          // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_2;                    // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess_3;                    // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00C2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x00C3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EExecutePin                                   CallFunc_PlaySkillActionBP_Branches_2;             // 0x00C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C5[0x3];                                       // 0x00C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ULActBase*                              CallFunc_PlaySkillActionBP_ReturnValue_2;          // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_4;                    // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Action_Test_LoopingCharge_C_ExecuteUbergraph_BP_Action_Test_LoopingCharge) == 0x000008, "Wrong alignment on BP_Action_Test_LoopingCharge_C_ExecuteUbergraph_BP_Action_Test_LoopingCharge");
static_assert(sizeof(BP_Action_Test_LoopingCharge_C_ExecuteUbergraph_BP_Action_Test_LoopingCharge) == 0x0000D8, "Wrong size on BP_Action_Test_LoopingCharge_C_ExecuteUbergraph_BP_Action_Test_LoopingCharge");
static_assert(offsetof(BP_Action_Test_LoopingCharge_C_ExecuteUbergraph_BP_Action_Test_LoopingCharge, EntryPoint) == 0x000000, "Member 'BP_Action_Test_LoopingCharge_C_ExecuteUbergraph_BP_Action_Test_LoopingCharge::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Action_Test_LoopingCharge_C_ExecuteUbergraph_BP_Action_Test_LoopingCharge, Temp_bool_Has_Been_Initd_Variable) == 0x000004, "Member 'BP_Action_Test_LoopingCharge_C_ExecuteUbergraph_BP_Action_Test_LoopingCharge::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(BP_Action_Test_LoopingCharge_C_ExecuteUbergraph_BP_Action_Test_LoopingCharge, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'BP_Action_Test_LoopingCharge_C_ExecuteUbergraph_BP_Action_Test_LoopingCharge::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_Action_Test_LoopingCharge_C_ExecuteUbergraph_BP_Action_Test_LoopingCharge, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'BP_Action_Test_LoopingCharge_C_ExecuteUbergraph_BP_Action_Test_LoopingCharge::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Test_LoopingCharge_C_ExecuteUbergraph_BP_Action_Test_LoopingCharge, K2Node_Event_ReasonAction) == 0x000020, "Member 'BP_Action_Test_LoopingCharge_C_ExecuteUbergraph_BP_Action_Test_LoopingCharge::K2Node_Event_ReasonAction' has a wrong offset!");
static_assert(offsetof(BP_Action_Test_LoopingCharge_C_ExecuteUbergraph_BP_Action_Test_LoopingCharge, K2Node_Event_Reason) == 0x000028, "Member 'BP_Action_Test_LoopingCharge_C_ExecuteUbergraph_BP_Action_Test_LoopingCharge::K2Node_Event_Reason' has a wrong offset!");
static_assert(offsetof(BP_Action_Test_LoopingCharge_C_ExecuteUbergraph_BP_Action_Test_LoopingCharge, K2Node_CustomEvent_ActMgrComponent) == 0x000030, "Member 'BP_Action_Test_LoopingCharge_C_ExecuteUbergraph_BP_Action_Test_LoopingCharge::K2Node_CustomEvent_ActMgrComponent' has a wrong offset!");
static_assert(offsetof(BP_Action_Test_LoopingCharge_C_ExecuteUbergraph_BP_Action_Test_LoopingCharge, K2Node_CustomEvent_TargetActor) == 0x000038, "Member 'BP_Action_Test_LoopingCharge_C_ExecuteUbergraph_BP_Action_Test_LoopingCharge::K2Node_CustomEvent_TargetActor' has a wrong offset!");
static_assert(offsetof(BP_Action_Test_LoopingCharge_C_ExecuteUbergraph_BP_Action_Test_LoopingCharge, K2Node_CustomEvent_Command) == 0x000040, "Member 'BP_Action_Test_LoopingCharge_C_ExecuteUbergraph_BP_Action_Test_LoopingCharge::K2Node_CustomEvent_Command' has a wrong offset!");
static_assert(offsetof(BP_Action_Test_LoopingCharge_C_ExecuteUbergraph_BP_Action_Test_LoopingCharge, K2Node_CustomEvent_Lever) == 0x000048, "Member 'BP_Action_Test_LoopingCharge_C_ExecuteUbergraph_BP_Action_Test_LoopingCharge::K2Node_CustomEvent_Lever' has a wrong offset!");
static_assert(offsetof(BP_Action_Test_LoopingCharge_C_ExecuteUbergraph_BP_Action_Test_LoopingCharge, K2Node_CustomEvent_SkipCommandPrerequisitiesCheck) == 0x000054, "Member 'BP_Action_Test_LoopingCharge_C_ExecuteUbergraph_BP_Action_Test_LoopingCharge::K2Node_CustomEvent_SkipCommandPrerequisitiesCheck' has a wrong offset!");
static_assert(offsetof(BP_Action_Test_LoopingCharge_C_ExecuteUbergraph_BP_Action_Test_LoopingCharge, CallFunc_IsValid_ReturnValue_1) == 0x000055, "Member 'BP_Action_Test_LoopingCharge_C_ExecuteUbergraph_BP_Action_Test_LoopingCharge::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Test_LoopingCharge_C_ExecuteUbergraph_BP_Action_Test_LoopingCharge, K2Node_SwitchName_CmpSuccess) == 0x000056, "Member 'BP_Action_Test_LoopingCharge_C_ExecuteUbergraph_BP_Action_Test_LoopingCharge::K2Node_SwitchName_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_Action_Test_LoopingCharge_C_ExecuteUbergraph_BP_Action_Test_LoopingCharge, CallFunc_FindActionState_ReturnValue) == 0x000057, "Member 'BP_Action_Test_LoopingCharge_C_ExecuteUbergraph_BP_Action_Test_LoopingCharge::CallFunc_FindActionState_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Test_LoopingCharge_C_ExecuteUbergraph_BP_Action_Test_LoopingCharge, CallFunc_GetAnimInst_ReturnValue) == 0x000058, "Member 'BP_Action_Test_LoopingCharge_C_ExecuteUbergraph_BP_Action_Test_LoopingCharge::CallFunc_GetAnimInst_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Test_LoopingCharge_C_ExecuteUbergraph_BP_Action_Test_LoopingCharge, K2Node_Event_DeltaTime) == 0x000060, "Member 'BP_Action_Test_LoopingCharge_C_ExecuteUbergraph_BP_Action_Test_LoopingCharge::K2Node_Event_DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_Action_Test_LoopingCharge_C_ExecuteUbergraph_BP_Action_Test_LoopingCharge, CallFunc_GetMontage_CurrentSectionBP_Branches) == 0x000064, "Member 'BP_Action_Test_LoopingCharge_C_ExecuteUbergraph_BP_Action_Test_LoopingCharge::CallFunc_GetMontage_CurrentSectionBP_Branches' has a wrong offset!");
static_assert(offsetof(BP_Action_Test_LoopingCharge_C_ExecuteUbergraph_BP_Action_Test_LoopingCharge, CallFunc_GetMontage_CurrentSectionBP_ReturnValue) == 0x000068, "Member 'BP_Action_Test_LoopingCharge_C_ExecuteUbergraph_BP_Action_Test_LoopingCharge::CallFunc_GetMontage_CurrentSectionBP_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Test_LoopingCharge_C_ExecuteUbergraph_BP_Action_Test_LoopingCharge, CallFunc_SetMontage_NextSection_ReturnValue) == 0x000070, "Member 'BP_Action_Test_LoopingCharge_C_ExecuteUbergraph_BP_Action_Test_LoopingCharge::CallFunc_SetMontage_NextSection_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Test_LoopingCharge_C_ExecuteUbergraph_BP_Action_Test_LoopingCharge, CallFunc_GetStatComponentBP_Branches) == 0x000071, "Member 'BP_Action_Test_LoopingCharge_C_ExecuteUbergraph_BP_Action_Test_LoopingCharge::CallFunc_GetStatComponentBP_Branches' has a wrong offset!");
static_assert(offsetof(BP_Action_Test_LoopingCharge_C_ExecuteUbergraph_BP_Action_Test_LoopingCharge, CallFunc_GetStatComponentBP_ReturnValue) == 0x000078, "Member 'BP_Action_Test_LoopingCharge_C_ExecuteUbergraph_BP_Action_Test_LoopingCharge::CallFunc_GetStatComponentBP_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Test_LoopingCharge_C_ExecuteUbergraph_BP_Action_Test_LoopingCharge, K2Node_SwitchName_CmpSuccess_1) == 0x000080, "Member 'BP_Action_Test_LoopingCharge_C_ExecuteUbergraph_BP_Action_Test_LoopingCharge::K2Node_SwitchName_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Test_LoopingCharge_C_ExecuteUbergraph_BP_Action_Test_LoopingCharge, CallFunc_GetCharacterStat_ReturnValue) == 0x000084, "Member 'BP_Action_Test_LoopingCharge_C_ExecuteUbergraph_BP_Action_Test_LoopingCharge::CallFunc_GetCharacterStat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Test_LoopingCharge_C_ExecuteUbergraph_BP_Action_Test_LoopingCharge, K2Node_SwitchEnum_CmpSuccess) == 0x000088, "Member 'BP_Action_Test_LoopingCharge_C_ExecuteUbergraph_BP_Action_Test_LoopingCharge::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_Action_Test_LoopingCharge_C_ExecuteUbergraph_BP_Action_Test_LoopingCharge, CallFunc_Greater_IntInt_ReturnValue) == 0x000089, "Member 'BP_Action_Test_LoopingCharge_C_ExecuteUbergraph_BP_Action_Test_LoopingCharge::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Test_LoopingCharge_C_ExecuteUbergraph_BP_Action_Test_LoopingCharge, K2Node_SwitchEnum_CmpSuccess_1) == 0x00008A, "Member 'BP_Action_Test_LoopingCharge_C_ExecuteUbergraph_BP_Action_Test_LoopingCharge::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Test_LoopingCharge_C_ExecuteUbergraph_BP_Action_Test_LoopingCharge, K2Node_Event_Montage) == 0x000090, "Member 'BP_Action_Test_LoopingCharge_C_ExecuteUbergraph_BP_Action_Test_LoopingCharge::K2Node_Event_Montage' has a wrong offset!");
static_assert(offsetof(BP_Action_Test_LoopingCharge_C_ExecuteUbergraph_BP_Action_Test_LoopingCharge, K2Node_Event_bInterrupted) == 0x000098, "Member 'BP_Action_Test_LoopingCharge_C_ExecuteUbergraph_BP_Action_Test_LoopingCharge::K2Node_Event_bInterrupted' has a wrong offset!");
static_assert(offsetof(BP_Action_Test_LoopingCharge_C_ExecuteUbergraph_BP_Action_Test_LoopingCharge, K2Node_Event_MontageInstanceID) == 0x00009C, "Member 'BP_Action_Test_LoopingCharge_C_ExecuteUbergraph_BP_Action_Test_LoopingCharge::K2Node_Event_MontageInstanceID' has a wrong offset!");
static_assert(offsetof(BP_Action_Test_LoopingCharge_C_ExecuteUbergraph_BP_Action_Test_LoopingCharge, CallFunc_Stop_ReturnValue) == 0x0000A0, "Member 'BP_Action_Test_LoopingCharge_C_ExecuteUbergraph_BP_Action_Test_LoopingCharge::CallFunc_Stop_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Test_LoopingCharge_C_ExecuteUbergraph_BP_Action_Test_LoopingCharge, Temp_bool_IsClosed_Variable) == 0x0000A1, "Member 'BP_Action_Test_LoopingCharge_C_ExecuteUbergraph_BP_Action_Test_LoopingCharge::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(BP_Action_Test_LoopingCharge_C_ExecuteUbergraph_BP_Action_Test_LoopingCharge, CallFunc_PlaySkillActionBP_Branches) == 0x0000A2, "Member 'BP_Action_Test_LoopingCharge_C_ExecuteUbergraph_BP_Action_Test_LoopingCharge::CallFunc_PlaySkillActionBP_Branches' has a wrong offset!");
static_assert(offsetof(BP_Action_Test_LoopingCharge_C_ExecuteUbergraph_BP_Action_Test_LoopingCharge, CallFunc_PlaySkillActionBP_ReturnValue) == 0x0000A8, "Member 'BP_Action_Test_LoopingCharge_C_ExecuteUbergraph_BP_Action_Test_LoopingCharge::CallFunc_PlaySkillActionBP_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Test_LoopingCharge_C_ExecuteUbergraph_BP_Action_Test_LoopingCharge, CallFunc_PlaySkillActionBP_Branches_1) == 0x0000B0, "Member 'BP_Action_Test_LoopingCharge_C_ExecuteUbergraph_BP_Action_Test_LoopingCharge::CallFunc_PlaySkillActionBP_Branches_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Test_LoopingCharge_C_ExecuteUbergraph_BP_Action_Test_LoopingCharge, CallFunc_PlaySkillActionBP_ReturnValue_1) == 0x0000B8, "Member 'BP_Action_Test_LoopingCharge_C_ExecuteUbergraph_BP_Action_Test_LoopingCharge::CallFunc_PlaySkillActionBP_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Test_LoopingCharge_C_ExecuteUbergraph_BP_Action_Test_LoopingCharge, K2Node_SwitchEnum_CmpSuccess_2) == 0x0000C0, "Member 'BP_Action_Test_LoopingCharge_C_ExecuteUbergraph_BP_Action_Test_LoopingCharge::K2Node_SwitchEnum_CmpSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_Action_Test_LoopingCharge_C_ExecuteUbergraph_BP_Action_Test_LoopingCharge, K2Node_SwitchEnum_CmpSuccess_3) == 0x0000C1, "Member 'BP_Action_Test_LoopingCharge_C_ExecuteUbergraph_BP_Action_Test_LoopingCharge::K2Node_SwitchEnum_CmpSuccess_3' has a wrong offset!");
static_assert(offsetof(BP_Action_Test_LoopingCharge_C_ExecuteUbergraph_BP_Action_Test_LoopingCharge, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000C2, "Member 'BP_Action_Test_LoopingCharge_C_ExecuteUbergraph_BP_Action_Test_LoopingCharge::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Test_LoopingCharge_C_ExecuteUbergraph_BP_Action_Test_LoopingCharge, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x0000C3, "Member 'BP_Action_Test_LoopingCharge_C_ExecuteUbergraph_BP_Action_Test_LoopingCharge::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Test_LoopingCharge_C_ExecuteUbergraph_BP_Action_Test_LoopingCharge, CallFunc_PlaySkillActionBP_Branches_2) == 0x0000C4, "Member 'BP_Action_Test_LoopingCharge_C_ExecuteUbergraph_BP_Action_Test_LoopingCharge::CallFunc_PlaySkillActionBP_Branches_2' has a wrong offset!");
static_assert(offsetof(BP_Action_Test_LoopingCharge_C_ExecuteUbergraph_BP_Action_Test_LoopingCharge, CallFunc_PlaySkillActionBP_ReturnValue_2) == 0x0000C8, "Member 'BP_Action_Test_LoopingCharge_C_ExecuteUbergraph_BP_Action_Test_LoopingCharge::CallFunc_PlaySkillActionBP_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Action_Test_LoopingCharge_C_ExecuteUbergraph_BP_Action_Test_LoopingCharge, K2Node_SwitchEnum_CmpSuccess_4) == 0x0000D0, "Member 'BP_Action_Test_LoopingCharge_C_ExecuteUbergraph_BP_Action_Test_LoopingCharge::K2Node_SwitchEnum_CmpSuccess_4' has a wrong offset!");

// Function BP_Action_Test_LoopingCharge.BP_Action_Test_LoopingCharge_C.OnCurrMontageBlendOutStarted
// 0x0010 (0x0010 - 0x0000)
struct BP_Action_Test_LoopingCharge_C_OnCurrMontageBlendOutStarted final
{
public:
	class UAnimMontage*                           Montage;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInterrupted;                                      // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         MontageInstanceID;                                 // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_Test_LoopingCharge_C_OnCurrMontageBlendOutStarted) == 0x000008, "Wrong alignment on BP_Action_Test_LoopingCharge_C_OnCurrMontageBlendOutStarted");
static_assert(sizeof(BP_Action_Test_LoopingCharge_C_OnCurrMontageBlendOutStarted) == 0x000010, "Wrong size on BP_Action_Test_LoopingCharge_C_OnCurrMontageBlendOutStarted");
static_assert(offsetof(BP_Action_Test_LoopingCharge_C_OnCurrMontageBlendOutStarted, Montage) == 0x000000, "Member 'BP_Action_Test_LoopingCharge_C_OnCurrMontageBlendOutStarted::Montage' has a wrong offset!");
static_assert(offsetof(BP_Action_Test_LoopingCharge_C_OnCurrMontageBlendOutStarted, bInterrupted) == 0x000008, "Member 'BP_Action_Test_LoopingCharge_C_OnCurrMontageBlendOutStarted::bInterrupted' has a wrong offset!");
static_assert(offsetof(BP_Action_Test_LoopingCharge_C_OnCurrMontageBlendOutStarted, MontageInstanceID) == 0x00000C, "Member 'BP_Action_Test_LoopingCharge_C_OnCurrMontageBlendOutStarted::MontageInstanceID' has a wrong offset!");

// Function BP_Action_Test_LoopingCharge.BP_Action_Test_LoopingCharge_C.OnTick
// 0x0004 (0x0004 - 0x0000)
struct BP_Action_Test_LoopingCharge_C_OnTick final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_Test_LoopingCharge_C_OnTick) == 0x000004, "Wrong alignment on BP_Action_Test_LoopingCharge_C_OnTick");
static_assert(sizeof(BP_Action_Test_LoopingCharge_C_OnTick) == 0x000004, "Wrong size on BP_Action_Test_LoopingCharge_C_OnTick");
static_assert(offsetof(BP_Action_Test_LoopingCharge_C_OnTick, DeltaTime) == 0x000000, "Member 'BP_Action_Test_LoopingCharge_C_OnTick::DeltaTime' has a wrong offset!");

// Function BP_Action_Test_LoopingCharge.BP_Action_Test_LoopingCharge_C.OnCommandOccurred_Event
// 0x0028 (0x0028 - 0x0000)
struct BP_Action_Test_LoopingCharge_C_OnCommandOccurred_Event final
{
public:
	class ULActMgrComponent*                      ActMgrComponent;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 TargetActor;                                       // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Command;                                           // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Lever;                                             // 0x0018(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SkipCommandPrerequisitiesCheck;                    // 0x0024(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Action_Test_LoopingCharge_C_OnCommandOccurred_Event) == 0x000008, "Wrong alignment on BP_Action_Test_LoopingCharge_C_OnCommandOccurred_Event");
static_assert(sizeof(BP_Action_Test_LoopingCharge_C_OnCommandOccurred_Event) == 0x000028, "Wrong size on BP_Action_Test_LoopingCharge_C_OnCommandOccurred_Event");
static_assert(offsetof(BP_Action_Test_LoopingCharge_C_OnCommandOccurred_Event, ActMgrComponent) == 0x000000, "Member 'BP_Action_Test_LoopingCharge_C_OnCommandOccurred_Event::ActMgrComponent' has a wrong offset!");
static_assert(offsetof(BP_Action_Test_LoopingCharge_C_OnCommandOccurred_Event, TargetActor) == 0x000008, "Member 'BP_Action_Test_LoopingCharge_C_OnCommandOccurred_Event::TargetActor' has a wrong offset!");
static_assert(offsetof(BP_Action_Test_LoopingCharge_C_OnCommandOccurred_Event, Command) == 0x000010, "Member 'BP_Action_Test_LoopingCharge_C_OnCommandOccurred_Event::Command' has a wrong offset!");
static_assert(offsetof(BP_Action_Test_LoopingCharge_C_OnCommandOccurred_Event, Lever) == 0x000018, "Member 'BP_Action_Test_LoopingCharge_C_OnCommandOccurred_Event::Lever' has a wrong offset!");
static_assert(offsetof(BP_Action_Test_LoopingCharge_C_OnCommandOccurred_Event, SkipCommandPrerequisitiesCheck) == 0x000024, "Member 'BP_Action_Test_LoopingCharge_C_OnCommandOccurred_Event::SkipCommandPrerequisitiesCheck' has a wrong offset!");

// Function BP_Action_Test_LoopingCharge.BP_Action_Test_LoopingCharge_C.OnStop
// 0x0010 (0x0010 - 0x0000)
struct BP_Action_Test_LoopingCharge_C_OnStop final
{
public:
	class ULActBase*                              ReasonAction;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Reason;                                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_Test_LoopingCharge_C_OnStop) == 0x000008, "Wrong alignment on BP_Action_Test_LoopingCharge_C_OnStop");
static_assert(sizeof(BP_Action_Test_LoopingCharge_C_OnStop) == 0x000010, "Wrong size on BP_Action_Test_LoopingCharge_C_OnStop");
static_assert(offsetof(BP_Action_Test_LoopingCharge_C_OnStop, ReasonAction) == 0x000000, "Member 'BP_Action_Test_LoopingCharge_C_OnStop::ReasonAction' has a wrong offset!");
static_assert(offsetof(BP_Action_Test_LoopingCharge_C_OnStop, Reason) == 0x000008, "Member 'BP_Action_Test_LoopingCharge_C_OnStop::Reason' has a wrong offset!");

}

