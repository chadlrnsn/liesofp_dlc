#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Action_Decorate_Additive

#include "Basic.hpp"

#include "ProjectPContentInfo_structs.hpp"
#include "ProjectP_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_Action_Decorate_Additive.BP_Action_Decorate_Additive_C.OnStop
// 0x0010 (0x0010 - 0x0000)
struct BP_Action_Decorate_Additive_C_OnStop final
{
public:
	class ULActBase*                              ReasonAction;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Reason;                                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_Decorate_Additive_C_OnStop) == 0x000008, "Wrong alignment on BP_Action_Decorate_Additive_C_OnStop");
static_assert(sizeof(BP_Action_Decorate_Additive_C_OnStop) == 0x000010, "Wrong size on BP_Action_Decorate_Additive_C_OnStop");
static_assert(offsetof(BP_Action_Decorate_Additive_C_OnStop, ReasonAction) == 0x000000, "Member 'BP_Action_Decorate_Additive_C_OnStop::ReasonAction' has a wrong offset!");
static_assert(offsetof(BP_Action_Decorate_Additive_C_OnStop, Reason) == 0x000008, "Member 'BP_Action_Decorate_Additive_C_OnStop::Reason' has a wrong offset!");

// Function BP_Action_Decorate_Additive.BP_Action_Decorate_Additive_C.ExecuteUbergraph_BP_Action_Decorate_Additive
// 0x0170 (0x0170 - 0x0000)
struct BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	struct FVector                                CallFunc_GetActorRightVector_ReturnValue;          // 0x0014(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0020(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorForwardVector_ReturnValue;        // 0x0028(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimInstance*                          CallFunc_GetAnimInst_ReturnValue;                  // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULActPayload_HitAnim*                   K2Node_DynamicCast_AsLAct_Payload_Hit_Anim;        // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ULAnimInstance*                         K2Node_DynamicCast_AsLAnim_Instance;               // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59[0x3];                                       // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable;                               // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Vector_Normal2D_ReturnValue;              // 0x0060(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C[0x4];                                       // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSkillHitInfoPtr                       CallFunc_FindSkillHitInfoByNameBP_ReturnValue;     // 0x0070(0x0008)(NoDestructor)
	ELSkillHitType                                CallFunc_GetSkillHitType_ReturnValue;              // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79[0x3];                                       // 0x0079(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x007C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x008A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x008B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8D[0x3];                                       // 0x008D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_CalcHitAngleBP_OutHitOrigin;              // 0x0090(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EExecutePin                                   CallFunc_CalcHitAngleBP_Branches;                  // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9D[0x3];                                       // 0x009D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_CalcHitAngleBP_ReturnValue;               // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x00A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A5[0x3];                                       // 0x00A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x00A8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue;           // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Vector_Normal2D_ReturnValue_1;            // 0x00B8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue_1;         // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_CC[0x4];                                       // 0x00CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimInstance*                          CallFunc_GetAnimInst_ReturnValue_1;                // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULActBase*                              K2Node_Event_ReasonAction;                         // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Event_Reason;                               // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULAnimInstance*                         K2Node_DynamicCast_AsLAnim_Instance_1;             // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_F1[0x7];                                       // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimInstance*                          CallFunc_GetAnimInst_ReturnValue_2;                // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Stop_ReturnValue;                         // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_101[0x7];                                      // 0x0101(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ULAnimInstance*                         K2Node_DynamicCast_AsLAnim_Instance_2;             // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_111[0x3];                                      // 0x0111(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Temp_struct_Variable;                              // 0x0114(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULActBase*                              CallFunc_GetLastPlayingAction_ReturnValue;         // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Dot_VectorVector_ReturnValue;             // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x012C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_12D[0x3];                                      // 0x012D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Dot_VectorVector_ReturnValue_1;           // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x0134(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_4;        // 0x0135(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_136[0x2];                                      // 0x0136(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSkillInfoPtr                          CallFunc_FindSkillInfoByNameBP_ReturnValue;        // 0x0138(0x0008)(NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_2;                  // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ELAdditiveHitType                             CallFunc_GetAdditiveHitType_ReturnValue;           // 0x0141(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x0142(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_143[0x5];                                      // 0x0143(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class ALNPCCharacterBP_C*                     K2Node_DynamicCast_AsLNPCCharacter_BP;             // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_151[0x3];                                      // 0x0151(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable_1;                             // 0x0154(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ELAdditiveHitType                             CallFunc_GetAdditiveHitType_ReturnValue_1;         // 0x015C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15D[0x3];                                      // 0x015D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_NormalSafe2D_ReturnValue;                 // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive) == 0x000008, "Wrong alignment on BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive");
static_assert(sizeof(BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive) == 0x000170, "Wrong size on BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive");
static_assert(offsetof(BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive, EntryPoint) == 0x000000, "Member 'BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive, CallFunc_GetActorRightVector_ReturnValue) == 0x000014, "Member 'BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive::CallFunc_GetActorRightVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000020, "Member 'BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive, CallFunc_GetActorForwardVector_ReturnValue) == 0x000028, "Member 'BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive::CallFunc_GetActorForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive, CallFunc_GetAnimInst_ReturnValue) == 0x000038, "Member 'BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive::CallFunc_GetAnimInst_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive, K2Node_DynamicCast_AsLAct_Payload_Hit_Anim) == 0x000040, "Member 'BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive::K2Node_DynamicCast_AsLAct_Payload_Hit_Anim' has a wrong offset!");
static_assert(offsetof(BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive, K2Node_DynamicCast_AsLAnim_Instance) == 0x000050, "Member 'BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive::K2Node_DynamicCast_AsLAnim_Instance' has a wrong offset!");
static_assert(offsetof(BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive, K2Node_DynamicCast_bSuccess_1) == 0x000058, "Member 'BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive, Temp_float_Variable) == 0x00005C, "Member 'BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive, CallFunc_Vector_Normal2D_ReturnValue) == 0x000060, "Member 'BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive::CallFunc_Vector_Normal2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive, CallFunc_FindSkillHitInfoByNameBP_ReturnValue) == 0x000070, "Member 'BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive::CallFunc_FindSkillHitInfoByNameBP_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive, CallFunc_GetSkillHitType_ReturnValue) == 0x000078, "Member 'BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive::CallFunc_GetSkillHitType_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive, CallFunc_K2_GetActorLocation_ReturnValue) == 0x00007C, "Member 'BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000088, "Member 'BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000089, "Member 'BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x00008A, "Member 'BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive, CallFunc_BooleanOR_ReturnValue) == 0x00008B, "Member 'BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive, CallFunc_BooleanOR_ReturnValue_1) == 0x00008C, "Member 'BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive, CallFunc_CalcHitAngleBP_OutHitOrigin) == 0x000090, "Member 'BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive::CallFunc_CalcHitAngleBP_OutHitOrigin' has a wrong offset!");
static_assert(offsetof(BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive, CallFunc_CalcHitAngleBP_Branches) == 0x00009C, "Member 'BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive::CallFunc_CalcHitAngleBP_Branches' has a wrong offset!");
static_assert(offsetof(BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive, CallFunc_CalcHitAngleBP_ReturnValue) == 0x0000A0, "Member 'BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive::CallFunc_CalcHitAngleBP_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive, K2Node_SwitchEnum_CmpSuccess) == 0x0000A4, "Member 'BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive, CallFunc_Subtract_VectorVector_ReturnValue) == 0x0000A8, "Member 'BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive, CallFunc_RandomFloatInRange_ReturnValue) == 0x0000B4, "Member 'BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive, CallFunc_Vector_Normal2D_ReturnValue_1) == 0x0000B8, "Member 'BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive::CallFunc_Vector_Normal2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x0000C4, "Member 'BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive, CallFunc_RandomFloatInRange_ReturnValue_1) == 0x0000C8, "Member 'BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive::CallFunc_RandomFloatInRange_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive, CallFunc_GetAnimInst_ReturnValue_1) == 0x0000D0, "Member 'BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive::CallFunc_GetAnimInst_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive, K2Node_Event_ReasonAction) == 0x0000D8, "Member 'BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive::K2Node_Event_ReasonAction' has a wrong offset!");
static_assert(offsetof(BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive, K2Node_Event_Reason) == 0x0000E0, "Member 'BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive::K2Node_Event_Reason' has a wrong offset!");
static_assert(offsetof(BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive, K2Node_DynamicCast_AsLAnim_Instance_1) == 0x0000E8, "Member 'BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive::K2Node_DynamicCast_AsLAnim_Instance_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive, K2Node_DynamicCast_bSuccess_2) == 0x0000F0, "Member 'BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive, CallFunc_GetAnimInst_ReturnValue_2) == 0x0000F8, "Member 'BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive::CallFunc_GetAnimInst_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive, CallFunc_Stop_ReturnValue) == 0x000100, "Member 'BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive::CallFunc_Stop_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive, K2Node_DynamicCast_AsLAnim_Instance_2) == 0x000108, "Member 'BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive::K2Node_DynamicCast_AsLAnim_Instance_2' has a wrong offset!");
static_assert(offsetof(BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive, K2Node_DynamicCast_bSuccess_3) == 0x000110, "Member 'BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive, Temp_struct_Variable) == 0x000114, "Member 'BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive, CallFunc_GetLastPlayingAction_ReturnValue) == 0x000120, "Member 'BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive::CallFunc_GetLastPlayingAction_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive, CallFunc_Dot_VectorVector_ReturnValue) == 0x000128, "Member 'BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive::CallFunc_Dot_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive, CallFunc_IsValid_ReturnValue) == 0x00012C, "Member 'BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive, CallFunc_Dot_VectorVector_ReturnValue_1) == 0x000130, "Member 'BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive::CallFunc_Dot_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x000134, "Member 'BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive, CallFunc_EqualEqual_ByteByte_ReturnValue_4) == 0x000135, "Member 'BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive::CallFunc_EqualEqual_ByteByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive, CallFunc_FindSkillInfoByNameBP_ReturnValue) == 0x000138, "Member 'BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive::CallFunc_FindSkillInfoByNameBP_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive, CallFunc_BooleanOR_ReturnValue_2) == 0x000140, "Member 'BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive, CallFunc_GetAdditiveHitType_ReturnValue) == 0x000141, "Member 'BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive::CallFunc_GetAdditiveHitType_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive, CallFunc_NotEqual_NameName_ReturnValue) == 0x000142, "Member 'BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive, K2Node_DynamicCast_AsLNPCCharacter_BP) == 0x000148, "Member 'BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive::K2Node_DynamicCast_AsLNPCCharacter_BP' has a wrong offset!");
static_assert(offsetof(BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive, K2Node_DynamicCast_bSuccess_4) == 0x000150, "Member 'BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive, Temp_float_Variable_1) == 0x000154, "Member 'BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive::Temp_float_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive, CallFunc_Multiply_FloatFloat_ReturnValue_1) == 0x000158, "Member 'BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive::CallFunc_Multiply_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive, CallFunc_GetAdditiveHitType_ReturnValue_1) == 0x00015C, "Member 'BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive::CallFunc_GetAdditiveHitType_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive, CallFunc_MakeVector2D_ReturnValue) == 0x000160, "Member 'BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive, CallFunc_NormalSafe2D_ReturnValue) == 0x000168, "Member 'BP_Action_Decorate_Additive_C_ExecuteUbergraph_BP_Action_Decorate_Additive::CallFunc_NormalSafe2D_ReturnValue' has a wrong offset!");

}
