#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Action_Parry

#include "Basic.hpp"

#include "ProjectP_structs.hpp"


namespace SDK::Params
{

// Function BP_Action_Parry.BP_Action_Parry_C.ExecuteUbergraph_BP_Action_Parry
// 0x0098 (0x0098 - 0x0000)
struct BP_Action_Parry_C_ExecuteUbergraph_BP_Action_Parry final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_ActionState_Stance_Parrying_ReturnValue;  // 0x0004(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_ReserveSkill;                   // 0x000C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaTime;                            // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetTickable_ReturnValue;                  // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetTickable_ReturnValue_1;                // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1E[0x2];                                       // 0x001E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetRealTimeSeconds_ReturnValue;           // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetRealTimeSeconds_ReturnValue_1;         // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2D[0x3];                                       // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ULActBase*                              K2Node_Event_ReasonAction;                         // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Event_Reason;                               // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           K2Node_Event_Montage;                              // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bInterrupted;                         // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49[0x3];                                       // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Event_MontageInstanceID;                    // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Stop_ReturnValue;                         // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue_1;          // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52[0x2];                                       // 0x0052(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLAction_StartRotationInfo             K2Node_MakeStruct_LAction_StartRotationInfo;       // 0x0054(0x0028)(NoDestructor)
	EExecutePin                                   CallFunc_PlaySkillActionBP_Branches;               // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7D[0x3];                                       // 0x007D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ULActBase*                              CallFunc_PlaySkillActionBP_ReturnValue;            // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89[0x3];                                       // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_ActionState_Invincible_ReturnValue;       // 0x008C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ClearActionState_ReturnValue;             // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Action_Parry_C_ExecuteUbergraph_BP_Action_Parry) == 0x000008, "Wrong alignment on BP_Action_Parry_C_ExecuteUbergraph_BP_Action_Parry");
static_assert(sizeof(BP_Action_Parry_C_ExecuteUbergraph_BP_Action_Parry) == 0x000098, "Wrong size on BP_Action_Parry_C_ExecuteUbergraph_BP_Action_Parry");
static_assert(offsetof(BP_Action_Parry_C_ExecuteUbergraph_BP_Action_Parry, EntryPoint) == 0x000000, "Member 'BP_Action_Parry_C_ExecuteUbergraph_BP_Action_Parry::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Action_Parry_C_ExecuteUbergraph_BP_Action_Parry, CallFunc_ActionState_Stance_Parrying_ReturnValue) == 0x000004, "Member 'BP_Action_Parry_C_ExecuteUbergraph_BP_Action_Parry::CallFunc_ActionState_Stance_Parrying_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Parry_C_ExecuteUbergraph_BP_Action_Parry, K2Node_CustomEvent_ReserveSkill) == 0x00000C, "Member 'BP_Action_Parry_C_ExecuteUbergraph_BP_Action_Parry::K2Node_CustomEvent_ReserveSkill' has a wrong offset!");
static_assert(offsetof(BP_Action_Parry_C_ExecuteUbergraph_BP_Action_Parry, CallFunc_NotEqual_NameName_ReturnValue) == 0x000014, "Member 'BP_Action_Parry_C_ExecuteUbergraph_BP_Action_Parry::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Parry_C_ExecuteUbergraph_BP_Action_Parry, K2Node_Event_DeltaTime) == 0x000018, "Member 'BP_Action_Parry_C_ExecuteUbergraph_BP_Action_Parry::K2Node_Event_DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_Action_Parry_C_ExecuteUbergraph_BP_Action_Parry, CallFunc_SetTickable_ReturnValue) == 0x00001C, "Member 'BP_Action_Parry_C_ExecuteUbergraph_BP_Action_Parry::CallFunc_SetTickable_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Parry_C_ExecuteUbergraph_BP_Action_Parry, CallFunc_SetTickable_ReturnValue_1) == 0x00001D, "Member 'BP_Action_Parry_C_ExecuteUbergraph_BP_Action_Parry::CallFunc_SetTickable_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Parry_C_ExecuteUbergraph_BP_Action_Parry, CallFunc_GetRealTimeSeconds_ReturnValue) == 0x000020, "Member 'BP_Action_Parry_C_ExecuteUbergraph_BP_Action_Parry::CallFunc_GetRealTimeSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Parry_C_ExecuteUbergraph_BP_Action_Parry, CallFunc_Add_FloatFloat_ReturnValue) == 0x000024, "Member 'BP_Action_Parry_C_ExecuteUbergraph_BP_Action_Parry::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Parry_C_ExecuteUbergraph_BP_Action_Parry, CallFunc_GetRealTimeSeconds_ReturnValue_1) == 0x000028, "Member 'BP_Action_Parry_C_ExecuteUbergraph_BP_Action_Parry::CallFunc_GetRealTimeSeconds_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Parry_C_ExecuteUbergraph_BP_Action_Parry, CallFunc_Less_FloatFloat_ReturnValue) == 0x00002C, "Member 'BP_Action_Parry_C_ExecuteUbergraph_BP_Action_Parry::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Parry_C_ExecuteUbergraph_BP_Action_Parry, K2Node_Event_ReasonAction) == 0x000030, "Member 'BP_Action_Parry_C_ExecuteUbergraph_BP_Action_Parry::K2Node_Event_ReasonAction' has a wrong offset!");
static_assert(offsetof(BP_Action_Parry_C_ExecuteUbergraph_BP_Action_Parry, K2Node_Event_Reason) == 0x000038, "Member 'BP_Action_Parry_C_ExecuteUbergraph_BP_Action_Parry::K2Node_Event_Reason' has a wrong offset!");
static_assert(offsetof(BP_Action_Parry_C_ExecuteUbergraph_BP_Action_Parry, K2Node_Event_Montage) == 0x000040, "Member 'BP_Action_Parry_C_ExecuteUbergraph_BP_Action_Parry::K2Node_Event_Montage' has a wrong offset!");
static_assert(offsetof(BP_Action_Parry_C_ExecuteUbergraph_BP_Action_Parry, K2Node_Event_bInterrupted) == 0x000048, "Member 'BP_Action_Parry_C_ExecuteUbergraph_BP_Action_Parry::K2Node_Event_bInterrupted' has a wrong offset!");
static_assert(offsetof(BP_Action_Parry_C_ExecuteUbergraph_BP_Action_Parry, K2Node_Event_MontageInstanceID) == 0x00004C, "Member 'BP_Action_Parry_C_ExecuteUbergraph_BP_Action_Parry::K2Node_Event_MontageInstanceID' has a wrong offset!");
static_assert(offsetof(BP_Action_Parry_C_ExecuteUbergraph_BP_Action_Parry, CallFunc_Stop_ReturnValue) == 0x000050, "Member 'BP_Action_Parry_C_ExecuteUbergraph_BP_Action_Parry::CallFunc_Stop_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Parry_C_ExecuteUbergraph_BP_Action_Parry, CallFunc_NotEqual_NameName_ReturnValue_1) == 0x000051, "Member 'BP_Action_Parry_C_ExecuteUbergraph_BP_Action_Parry::CallFunc_NotEqual_NameName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Parry_C_ExecuteUbergraph_BP_Action_Parry, K2Node_MakeStruct_LAction_StartRotationInfo) == 0x000054, "Member 'BP_Action_Parry_C_ExecuteUbergraph_BP_Action_Parry::K2Node_MakeStruct_LAction_StartRotationInfo' has a wrong offset!");
static_assert(offsetof(BP_Action_Parry_C_ExecuteUbergraph_BP_Action_Parry, CallFunc_PlaySkillActionBP_Branches) == 0x00007C, "Member 'BP_Action_Parry_C_ExecuteUbergraph_BP_Action_Parry::CallFunc_PlaySkillActionBP_Branches' has a wrong offset!");
static_assert(offsetof(BP_Action_Parry_C_ExecuteUbergraph_BP_Action_Parry, CallFunc_PlaySkillActionBP_ReturnValue) == 0x000080, "Member 'BP_Action_Parry_C_ExecuteUbergraph_BP_Action_Parry::CallFunc_PlaySkillActionBP_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Parry_C_ExecuteUbergraph_BP_Action_Parry, K2Node_SwitchEnum_CmpSuccess) == 0x000088, "Member 'BP_Action_Parry_C_ExecuteUbergraph_BP_Action_Parry::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_Action_Parry_C_ExecuteUbergraph_BP_Action_Parry, CallFunc_ActionState_Invincible_ReturnValue) == 0x00008C, "Member 'BP_Action_Parry_C_ExecuteUbergraph_BP_Action_Parry::CallFunc_ActionState_Invincible_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Parry_C_ExecuteUbergraph_BP_Action_Parry, CallFunc_ClearActionState_ReturnValue) == 0x000094, "Member 'BP_Action_Parry_C_ExecuteUbergraph_BP_Action_Parry::CallFunc_ClearActionState_ReturnValue' has a wrong offset!");

// Function BP_Action_Parry.BP_Action_Parry_C.OnCurrMontageEnded
// 0x0010 (0x0010 - 0x0000)
struct BP_Action_Parry_C_OnCurrMontageEnded final
{
public:
	class UAnimMontage*                           Montage;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInterrupted;                                      // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         MontageInstanceID;                                 // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_Parry_C_OnCurrMontageEnded) == 0x000008, "Wrong alignment on BP_Action_Parry_C_OnCurrMontageEnded");
static_assert(sizeof(BP_Action_Parry_C_OnCurrMontageEnded) == 0x000010, "Wrong size on BP_Action_Parry_C_OnCurrMontageEnded");
static_assert(offsetof(BP_Action_Parry_C_OnCurrMontageEnded, Montage) == 0x000000, "Member 'BP_Action_Parry_C_OnCurrMontageEnded::Montage' has a wrong offset!");
static_assert(offsetof(BP_Action_Parry_C_OnCurrMontageEnded, bInterrupted) == 0x000008, "Member 'BP_Action_Parry_C_OnCurrMontageEnded::bInterrupted' has a wrong offset!");
static_assert(offsetof(BP_Action_Parry_C_OnCurrMontageEnded, MontageInstanceID) == 0x00000C, "Member 'BP_Action_Parry_C_OnCurrMontageEnded::MontageInstanceID' has a wrong offset!");

// Function BP_Action_Parry.BP_Action_Parry_C.OnStop
// 0x0010 (0x0010 - 0x0000)
struct BP_Action_Parry_C_OnStop final
{
public:
	class ULActBase*                              ReasonAction;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Reason;                                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_Parry_C_OnStop) == 0x000008, "Wrong alignment on BP_Action_Parry_C_OnStop");
static_assert(sizeof(BP_Action_Parry_C_OnStop) == 0x000010, "Wrong size on BP_Action_Parry_C_OnStop");
static_assert(offsetof(BP_Action_Parry_C_OnStop, ReasonAction) == 0x000000, "Member 'BP_Action_Parry_C_OnStop::ReasonAction' has a wrong offset!");
static_assert(offsetof(BP_Action_Parry_C_OnStop, Reason) == 0x000008, "Member 'BP_Action_Parry_C_OnStop::Reason' has a wrong offset!");

// Function BP_Action_Parry.BP_Action_Parry_C.OnTick
// 0x0004 (0x0004 - 0x0000)
struct BP_Action_Parry_C_OnTick final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_Parry_C_OnTick) == 0x000004, "Wrong alignment on BP_Action_Parry_C_OnTick");
static_assert(sizeof(BP_Action_Parry_C_OnTick) == 0x000004, "Wrong size on BP_Action_Parry_C_OnTick");
static_assert(offsetof(BP_Action_Parry_C_OnTick, DeltaTime) == 0x000000, "Member 'BP_Action_Parry_C_OnTick::DeltaTime' has a wrong offset!");

// Function BP_Action_Parry.BP_Action_Parry_C.OnParrySuccess
// 0x0008 (0x0008 - 0x0000)
struct BP_Action_Parry_C_OnParrySuccess final
{
public:
	class FName                                   ReserveSkill;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_Parry_C_OnParrySuccess) == 0x000004, "Wrong alignment on BP_Action_Parry_C_OnParrySuccess");
static_assert(sizeof(BP_Action_Parry_C_OnParrySuccess) == 0x000008, "Wrong size on BP_Action_Parry_C_OnParrySuccess");
static_assert(offsetof(BP_Action_Parry_C_OnParrySuccess, ReserveSkill) == 0x000000, "Member 'BP_Action_Parry_C_OnParrySuccess::ReserveSkill' has a wrong offset!");

}

