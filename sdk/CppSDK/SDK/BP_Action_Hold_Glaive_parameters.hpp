#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Action_Hold_Glaive

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "ProjectP_structs.hpp"


namespace SDK::Params
{

// Function BP_Action_Hold_Glaive.BP_Action_Hold_Glaive_C.ExecuteUbergraph_BP_Action_Hold_Glaive
// 0x00C8 (0x00C8 - 0x0000)
struct BP_Action_Hold_Glaive_C_ExecuteUbergraph_BP_Action_Hold_Glaive final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class ULActBase*                              K2Node_Event_ReasonAction;                         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Event_Reason;                               // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULActMgrComponent*                      K2Node_CustomEvent_ActMgrComponent;                // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_CustomEvent_TargetActor;                    // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_Command;                        // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_CustomEvent_Lever;                          // 0x0030(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_SkipCommandPrerequisitiesCheck; // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchName_CmpSuccess;                      // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindActionState_ReturnValue;              // 0x003E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3F[0x1];                                       // 0x003F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimInstance*                          CallFunc_GetAnimInst_ReturnValue;                  // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EExecutePin                                   CallFunc_GetMontage_CurrentSectionBP_Branches;     // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x3];                                       // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_GetMontage_CurrentSectionBP_ReturnValue;  // 0x004C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchName_CmpSuccess_1;                    // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EExecutePin                                   CallFunc_PlaySkillActionBP_Branches;               // 0x0055(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_56[0x2];                                       // 0x0056(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class ULActBase*                              CallFunc_PlaySkillActionBP_ReturnValue;            // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EExecutePin                                   CallFunc_PlaySkillActionBP_Branches_1;             // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ULActBase*                              CallFunc_PlaySkillActionBP_ReturnValue_1;          // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess_2;                    // 0x0072(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_73[0x1];                                       // 0x0073(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaTime;                            // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class ULActMgrComponent* ActMgrComponent, class AActor* TargetActor, class FName Command, const struct FVector& Lever, bool SkipCommandPrerequisitiesCheck)> K2Node_CreateDelegate_OutputDelegate;              // 0x0078(0x0010)(ZeroConstructor, NoDestructor)
	class UAnimInstance*                          CallFunc_GetAnimInst_ReturnValue_1;                // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EExecutePin                                   CallFunc_GetMontage_CurrentSectionBP_Branches_1;   // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_91[0x3];                                       // 0x0091(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_GetMontage_CurrentSectionBP_ReturnValue_1; // 0x0094(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EExecutePin                                   CallFunc_PlaySkillActionBP_Branches_2;             // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9D[0x3];                                       // 0x009D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ULActBase*                              CallFunc_PlaySkillActionBP_ReturnValue_2;          // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchName_CmpSuccess_2;                    // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess_3;                    // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess_4;                    // 0x00AA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsCommandPressed_ReturnValue;             // 0x00AB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EExecutePin                                   CallFunc_GetStatComponentBP_Branches;              // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_AD[0x3];                                       // 0x00AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ULStatComponent*                        CallFunc_GetStatComponentBP_ReturnValue;           // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_5;                    // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B9[0x3];                                       // 0x00B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetCharacterStat_ReturnValue;             // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Action_Hold_Glaive_C_ExecuteUbergraph_BP_Action_Hold_Glaive) == 0x000008, "Wrong alignment on BP_Action_Hold_Glaive_C_ExecuteUbergraph_BP_Action_Hold_Glaive");
static_assert(sizeof(BP_Action_Hold_Glaive_C_ExecuteUbergraph_BP_Action_Hold_Glaive) == 0x0000C8, "Wrong size on BP_Action_Hold_Glaive_C_ExecuteUbergraph_BP_Action_Hold_Glaive");
static_assert(offsetof(BP_Action_Hold_Glaive_C_ExecuteUbergraph_BP_Action_Hold_Glaive, EntryPoint) == 0x000000, "Member 'BP_Action_Hold_Glaive_C_ExecuteUbergraph_BP_Action_Hold_Glaive::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Action_Hold_Glaive_C_ExecuteUbergraph_BP_Action_Hold_Glaive, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'BP_Action_Hold_Glaive_C_ExecuteUbergraph_BP_Action_Hold_Glaive::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Hold_Glaive_C_ExecuteUbergraph_BP_Action_Hold_Glaive, CallFunc_IsValid_ReturnValue_1) == 0x000005, "Member 'BP_Action_Hold_Glaive_C_ExecuteUbergraph_BP_Action_Hold_Glaive::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Hold_Glaive_C_ExecuteUbergraph_BP_Action_Hold_Glaive, K2Node_Event_ReasonAction) == 0x000008, "Member 'BP_Action_Hold_Glaive_C_ExecuteUbergraph_BP_Action_Hold_Glaive::K2Node_Event_ReasonAction' has a wrong offset!");
static_assert(offsetof(BP_Action_Hold_Glaive_C_ExecuteUbergraph_BP_Action_Hold_Glaive, K2Node_Event_Reason) == 0x000010, "Member 'BP_Action_Hold_Glaive_C_ExecuteUbergraph_BP_Action_Hold_Glaive::K2Node_Event_Reason' has a wrong offset!");
static_assert(offsetof(BP_Action_Hold_Glaive_C_ExecuteUbergraph_BP_Action_Hold_Glaive, K2Node_CustomEvent_ActMgrComponent) == 0x000018, "Member 'BP_Action_Hold_Glaive_C_ExecuteUbergraph_BP_Action_Hold_Glaive::K2Node_CustomEvent_ActMgrComponent' has a wrong offset!");
static_assert(offsetof(BP_Action_Hold_Glaive_C_ExecuteUbergraph_BP_Action_Hold_Glaive, K2Node_CustomEvent_TargetActor) == 0x000020, "Member 'BP_Action_Hold_Glaive_C_ExecuteUbergraph_BP_Action_Hold_Glaive::K2Node_CustomEvent_TargetActor' has a wrong offset!");
static_assert(offsetof(BP_Action_Hold_Glaive_C_ExecuteUbergraph_BP_Action_Hold_Glaive, K2Node_CustomEvent_Command) == 0x000028, "Member 'BP_Action_Hold_Glaive_C_ExecuteUbergraph_BP_Action_Hold_Glaive::K2Node_CustomEvent_Command' has a wrong offset!");
static_assert(offsetof(BP_Action_Hold_Glaive_C_ExecuteUbergraph_BP_Action_Hold_Glaive, K2Node_CustomEvent_Lever) == 0x000030, "Member 'BP_Action_Hold_Glaive_C_ExecuteUbergraph_BP_Action_Hold_Glaive::K2Node_CustomEvent_Lever' has a wrong offset!");
static_assert(offsetof(BP_Action_Hold_Glaive_C_ExecuteUbergraph_BP_Action_Hold_Glaive, K2Node_CustomEvent_SkipCommandPrerequisitiesCheck) == 0x00003C, "Member 'BP_Action_Hold_Glaive_C_ExecuteUbergraph_BP_Action_Hold_Glaive::K2Node_CustomEvent_SkipCommandPrerequisitiesCheck' has a wrong offset!");
static_assert(offsetof(BP_Action_Hold_Glaive_C_ExecuteUbergraph_BP_Action_Hold_Glaive, K2Node_SwitchName_CmpSuccess) == 0x00003D, "Member 'BP_Action_Hold_Glaive_C_ExecuteUbergraph_BP_Action_Hold_Glaive::K2Node_SwitchName_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_Action_Hold_Glaive_C_ExecuteUbergraph_BP_Action_Hold_Glaive, CallFunc_FindActionState_ReturnValue) == 0x00003E, "Member 'BP_Action_Hold_Glaive_C_ExecuteUbergraph_BP_Action_Hold_Glaive::CallFunc_FindActionState_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Hold_Glaive_C_ExecuteUbergraph_BP_Action_Hold_Glaive, CallFunc_GetAnimInst_ReturnValue) == 0x000040, "Member 'BP_Action_Hold_Glaive_C_ExecuteUbergraph_BP_Action_Hold_Glaive::CallFunc_GetAnimInst_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Hold_Glaive_C_ExecuteUbergraph_BP_Action_Hold_Glaive, CallFunc_GetMontage_CurrentSectionBP_Branches) == 0x000048, "Member 'BP_Action_Hold_Glaive_C_ExecuteUbergraph_BP_Action_Hold_Glaive::CallFunc_GetMontage_CurrentSectionBP_Branches' has a wrong offset!");
static_assert(offsetof(BP_Action_Hold_Glaive_C_ExecuteUbergraph_BP_Action_Hold_Glaive, CallFunc_GetMontage_CurrentSectionBP_ReturnValue) == 0x00004C, "Member 'BP_Action_Hold_Glaive_C_ExecuteUbergraph_BP_Action_Hold_Glaive::CallFunc_GetMontage_CurrentSectionBP_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Hold_Glaive_C_ExecuteUbergraph_BP_Action_Hold_Glaive, K2Node_SwitchName_CmpSuccess_1) == 0x000054, "Member 'BP_Action_Hold_Glaive_C_ExecuteUbergraph_BP_Action_Hold_Glaive::K2Node_SwitchName_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Hold_Glaive_C_ExecuteUbergraph_BP_Action_Hold_Glaive, CallFunc_PlaySkillActionBP_Branches) == 0x000055, "Member 'BP_Action_Hold_Glaive_C_ExecuteUbergraph_BP_Action_Hold_Glaive::CallFunc_PlaySkillActionBP_Branches' has a wrong offset!");
static_assert(offsetof(BP_Action_Hold_Glaive_C_ExecuteUbergraph_BP_Action_Hold_Glaive, CallFunc_PlaySkillActionBP_ReturnValue) == 0x000058, "Member 'BP_Action_Hold_Glaive_C_ExecuteUbergraph_BP_Action_Hold_Glaive::CallFunc_PlaySkillActionBP_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Hold_Glaive_C_ExecuteUbergraph_BP_Action_Hold_Glaive, CallFunc_PlaySkillActionBP_Branches_1) == 0x000060, "Member 'BP_Action_Hold_Glaive_C_ExecuteUbergraph_BP_Action_Hold_Glaive::CallFunc_PlaySkillActionBP_Branches_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Hold_Glaive_C_ExecuteUbergraph_BP_Action_Hold_Glaive, CallFunc_PlaySkillActionBP_ReturnValue_1) == 0x000068, "Member 'BP_Action_Hold_Glaive_C_ExecuteUbergraph_BP_Action_Hold_Glaive::CallFunc_PlaySkillActionBP_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Hold_Glaive_C_ExecuteUbergraph_BP_Action_Hold_Glaive, K2Node_SwitchEnum_CmpSuccess) == 0x000070, "Member 'BP_Action_Hold_Glaive_C_ExecuteUbergraph_BP_Action_Hold_Glaive::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_Action_Hold_Glaive_C_ExecuteUbergraph_BP_Action_Hold_Glaive, K2Node_SwitchEnum_CmpSuccess_1) == 0x000071, "Member 'BP_Action_Hold_Glaive_C_ExecuteUbergraph_BP_Action_Hold_Glaive::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Hold_Glaive_C_ExecuteUbergraph_BP_Action_Hold_Glaive, K2Node_SwitchEnum_CmpSuccess_2) == 0x000072, "Member 'BP_Action_Hold_Glaive_C_ExecuteUbergraph_BP_Action_Hold_Glaive::K2Node_SwitchEnum_CmpSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_Action_Hold_Glaive_C_ExecuteUbergraph_BP_Action_Hold_Glaive, K2Node_Event_DeltaTime) == 0x000074, "Member 'BP_Action_Hold_Glaive_C_ExecuteUbergraph_BP_Action_Hold_Glaive::K2Node_Event_DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_Action_Hold_Glaive_C_ExecuteUbergraph_BP_Action_Hold_Glaive, K2Node_CreateDelegate_OutputDelegate) == 0x000078, "Member 'BP_Action_Hold_Glaive_C_ExecuteUbergraph_BP_Action_Hold_Glaive::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_Action_Hold_Glaive_C_ExecuteUbergraph_BP_Action_Hold_Glaive, CallFunc_GetAnimInst_ReturnValue_1) == 0x000088, "Member 'BP_Action_Hold_Glaive_C_ExecuteUbergraph_BP_Action_Hold_Glaive::CallFunc_GetAnimInst_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Hold_Glaive_C_ExecuteUbergraph_BP_Action_Hold_Glaive, CallFunc_GetMontage_CurrentSectionBP_Branches_1) == 0x000090, "Member 'BP_Action_Hold_Glaive_C_ExecuteUbergraph_BP_Action_Hold_Glaive::CallFunc_GetMontage_CurrentSectionBP_Branches_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Hold_Glaive_C_ExecuteUbergraph_BP_Action_Hold_Glaive, CallFunc_GetMontage_CurrentSectionBP_ReturnValue_1) == 0x000094, "Member 'BP_Action_Hold_Glaive_C_ExecuteUbergraph_BP_Action_Hold_Glaive::CallFunc_GetMontage_CurrentSectionBP_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Hold_Glaive_C_ExecuteUbergraph_BP_Action_Hold_Glaive, CallFunc_PlaySkillActionBP_Branches_2) == 0x00009C, "Member 'BP_Action_Hold_Glaive_C_ExecuteUbergraph_BP_Action_Hold_Glaive::CallFunc_PlaySkillActionBP_Branches_2' has a wrong offset!");
static_assert(offsetof(BP_Action_Hold_Glaive_C_ExecuteUbergraph_BP_Action_Hold_Glaive, CallFunc_PlaySkillActionBP_ReturnValue_2) == 0x0000A0, "Member 'BP_Action_Hold_Glaive_C_ExecuteUbergraph_BP_Action_Hold_Glaive::CallFunc_PlaySkillActionBP_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Action_Hold_Glaive_C_ExecuteUbergraph_BP_Action_Hold_Glaive, K2Node_SwitchName_CmpSuccess_2) == 0x0000A8, "Member 'BP_Action_Hold_Glaive_C_ExecuteUbergraph_BP_Action_Hold_Glaive::K2Node_SwitchName_CmpSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_Action_Hold_Glaive_C_ExecuteUbergraph_BP_Action_Hold_Glaive, K2Node_SwitchEnum_CmpSuccess_3) == 0x0000A9, "Member 'BP_Action_Hold_Glaive_C_ExecuteUbergraph_BP_Action_Hold_Glaive::K2Node_SwitchEnum_CmpSuccess_3' has a wrong offset!");
static_assert(offsetof(BP_Action_Hold_Glaive_C_ExecuteUbergraph_BP_Action_Hold_Glaive, K2Node_SwitchEnum_CmpSuccess_4) == 0x0000AA, "Member 'BP_Action_Hold_Glaive_C_ExecuteUbergraph_BP_Action_Hold_Glaive::K2Node_SwitchEnum_CmpSuccess_4' has a wrong offset!");
static_assert(offsetof(BP_Action_Hold_Glaive_C_ExecuteUbergraph_BP_Action_Hold_Glaive, CallFunc_IsCommandPressed_ReturnValue) == 0x0000AB, "Member 'BP_Action_Hold_Glaive_C_ExecuteUbergraph_BP_Action_Hold_Glaive::CallFunc_IsCommandPressed_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Hold_Glaive_C_ExecuteUbergraph_BP_Action_Hold_Glaive, CallFunc_GetStatComponentBP_Branches) == 0x0000AC, "Member 'BP_Action_Hold_Glaive_C_ExecuteUbergraph_BP_Action_Hold_Glaive::CallFunc_GetStatComponentBP_Branches' has a wrong offset!");
static_assert(offsetof(BP_Action_Hold_Glaive_C_ExecuteUbergraph_BP_Action_Hold_Glaive, CallFunc_GetStatComponentBP_ReturnValue) == 0x0000B0, "Member 'BP_Action_Hold_Glaive_C_ExecuteUbergraph_BP_Action_Hold_Glaive::CallFunc_GetStatComponentBP_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Hold_Glaive_C_ExecuteUbergraph_BP_Action_Hold_Glaive, K2Node_SwitchEnum_CmpSuccess_5) == 0x0000B8, "Member 'BP_Action_Hold_Glaive_C_ExecuteUbergraph_BP_Action_Hold_Glaive::K2Node_SwitchEnum_CmpSuccess_5' has a wrong offset!");
static_assert(offsetof(BP_Action_Hold_Glaive_C_ExecuteUbergraph_BP_Action_Hold_Glaive, CallFunc_GetCharacterStat_ReturnValue) == 0x0000BC, "Member 'BP_Action_Hold_Glaive_C_ExecuteUbergraph_BP_Action_Hold_Glaive::CallFunc_GetCharacterStat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Hold_Glaive_C_ExecuteUbergraph_BP_Action_Hold_Glaive, CallFunc_Less_IntInt_ReturnValue) == 0x0000C0, "Member 'BP_Action_Hold_Glaive_C_ExecuteUbergraph_BP_Action_Hold_Glaive::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function BP_Action_Hold_Glaive.BP_Action_Hold_Glaive_C.OnTick
// 0x0004 (0x0004 - 0x0000)
struct BP_Action_Hold_Glaive_C_OnTick final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_Hold_Glaive_C_OnTick) == 0x000004, "Wrong alignment on BP_Action_Hold_Glaive_C_OnTick");
static_assert(sizeof(BP_Action_Hold_Glaive_C_OnTick) == 0x000004, "Wrong size on BP_Action_Hold_Glaive_C_OnTick");
static_assert(offsetof(BP_Action_Hold_Glaive_C_OnTick, DeltaTime) == 0x000000, "Member 'BP_Action_Hold_Glaive_C_OnTick::DeltaTime' has a wrong offset!");

// Function BP_Action_Hold_Glaive.BP_Action_Hold_Glaive_C.OnCommandOccurred_Event
// 0x0028 (0x0028 - 0x0000)
struct BP_Action_Hold_Glaive_C_OnCommandOccurred_Event final
{
public:
	class ULActMgrComponent*                      ActMgrComponent;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 TargetActor;                                       // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Command;                                           // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Lever;                                             // 0x0018(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SkipCommandPrerequisitiesCheck;                    // 0x0024(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Action_Hold_Glaive_C_OnCommandOccurred_Event) == 0x000008, "Wrong alignment on BP_Action_Hold_Glaive_C_OnCommandOccurred_Event");
static_assert(sizeof(BP_Action_Hold_Glaive_C_OnCommandOccurred_Event) == 0x000028, "Wrong size on BP_Action_Hold_Glaive_C_OnCommandOccurred_Event");
static_assert(offsetof(BP_Action_Hold_Glaive_C_OnCommandOccurred_Event, ActMgrComponent) == 0x000000, "Member 'BP_Action_Hold_Glaive_C_OnCommandOccurred_Event::ActMgrComponent' has a wrong offset!");
static_assert(offsetof(BP_Action_Hold_Glaive_C_OnCommandOccurred_Event, TargetActor) == 0x000008, "Member 'BP_Action_Hold_Glaive_C_OnCommandOccurred_Event::TargetActor' has a wrong offset!");
static_assert(offsetof(BP_Action_Hold_Glaive_C_OnCommandOccurred_Event, Command) == 0x000010, "Member 'BP_Action_Hold_Glaive_C_OnCommandOccurred_Event::Command' has a wrong offset!");
static_assert(offsetof(BP_Action_Hold_Glaive_C_OnCommandOccurred_Event, Lever) == 0x000018, "Member 'BP_Action_Hold_Glaive_C_OnCommandOccurred_Event::Lever' has a wrong offset!");
static_assert(offsetof(BP_Action_Hold_Glaive_C_OnCommandOccurred_Event, SkipCommandPrerequisitiesCheck) == 0x000024, "Member 'BP_Action_Hold_Glaive_C_OnCommandOccurred_Event::SkipCommandPrerequisitiesCheck' has a wrong offset!");

// Function BP_Action_Hold_Glaive.BP_Action_Hold_Glaive_C.OnStop
// 0x0010 (0x0010 - 0x0000)
struct BP_Action_Hold_Glaive_C_OnStop final
{
public:
	class ULActBase*                              ReasonAction;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Reason;                                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_Hold_Glaive_C_OnStop) == 0x000008, "Wrong alignment on BP_Action_Hold_Glaive_C_OnStop");
static_assert(sizeof(BP_Action_Hold_Glaive_C_OnStop) == 0x000010, "Wrong size on BP_Action_Hold_Glaive_C_OnStop");
static_assert(offsetof(BP_Action_Hold_Glaive_C_OnStop, ReasonAction) == 0x000000, "Member 'BP_Action_Hold_Glaive_C_OnStop::ReasonAction' has a wrong offset!");
static_assert(offsetof(BP_Action_Hold_Glaive_C_OnStop, Reason) == 0x000008, "Member 'BP_Action_Hold_Glaive_C_OnStop::Reason' has a wrong offset!");

}

