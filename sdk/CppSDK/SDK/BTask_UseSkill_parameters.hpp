#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTask_UseSkill

#include "Basic.hpp"

#include "ProjectPContentInfo_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "ProjectP_structs.hpp"


namespace SDK::Params
{

// Function BTask_UseSkill.BTask_UseSkill_C.ExecuteUbergraph_BTask_UseSkill
// 0x0060 (0x0060 - 0x0000)
struct BTask_UseSkill_C_ExecuteUbergraph_BTask_UseSkill final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_SkillId;                        // 0x0004(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AAIController*                          K2Node_Event_OwnerController;                      // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CheckCoolTime_Result;                     // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSkillInfoPtr                          CallFunc_GetSkillInfo_SkillInfo;                   // 0x0028(0x0008)(NoDestructor)
	class FName                                   CallFunc_GetCodeName_ReturnValue;                  // 0x0030(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLNPCSkillLaunchResult                 CallFunc_UseSkill_OutResult;                       // 0x0038(0x0008)(NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLNPCSkillLaunchResult                 K2Node_MakeStruct_LNPCSkillLaunchResult;           // 0x0048(0x0008)(NoDestructor)
	struct FLNPCSkillLaunchResult                 CallFunc_ExecuteSkillTask_OutResult;               // 0x0050(0x0008)(NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BTask_UseSkill_C_ExecuteUbergraph_BTask_UseSkill) == 0x000008, "Wrong alignment on BTask_UseSkill_C_ExecuteUbergraph_BTask_UseSkill");
static_assert(sizeof(BTask_UseSkill_C_ExecuteUbergraph_BTask_UseSkill) == 0x000060, "Wrong size on BTask_UseSkill_C_ExecuteUbergraph_BTask_UseSkill");
static_assert(offsetof(BTask_UseSkill_C_ExecuteUbergraph_BTask_UseSkill, EntryPoint) == 0x000000, "Member 'BTask_UseSkill_C_ExecuteUbergraph_BTask_UseSkill::EntryPoint' has a wrong offset!");
static_assert(offsetof(BTask_UseSkill_C_ExecuteUbergraph_BTask_UseSkill, K2Node_CustomEvent_SkillId) == 0x000004, "Member 'BTask_UseSkill_C_ExecuteUbergraph_BTask_UseSkill::K2Node_CustomEvent_SkillId' has a wrong offset!");
static_assert(offsetof(BTask_UseSkill_C_ExecuteUbergraph_BTask_UseSkill, K2Node_Event_OwnerController) == 0x000010, "Member 'BTask_UseSkill_C_ExecuteUbergraph_BTask_UseSkill::K2Node_Event_OwnerController' has a wrong offset!");
static_assert(offsetof(BTask_UseSkill_C_ExecuteUbergraph_BTask_UseSkill, K2Node_Event_ControlledPawn) == 0x000018, "Member 'BTask_UseSkill_C_ExecuteUbergraph_BTask_UseSkill::K2Node_Event_ControlledPawn' has a wrong offset!");
static_assert(offsetof(BTask_UseSkill_C_ExecuteUbergraph_BTask_UseSkill, CallFunc_CheckCoolTime_Result) == 0x000020, "Member 'BTask_UseSkill_C_ExecuteUbergraph_BTask_UseSkill::CallFunc_CheckCoolTime_Result' has a wrong offset!");
static_assert(offsetof(BTask_UseSkill_C_ExecuteUbergraph_BTask_UseSkill, CallFunc_GetSkillInfo_SkillInfo) == 0x000028, "Member 'BTask_UseSkill_C_ExecuteUbergraph_BTask_UseSkill::CallFunc_GetSkillInfo_SkillInfo' has a wrong offset!");
static_assert(offsetof(BTask_UseSkill_C_ExecuteUbergraph_BTask_UseSkill, CallFunc_GetCodeName_ReturnValue) == 0x000030, "Member 'BTask_UseSkill_C_ExecuteUbergraph_BTask_UseSkill::CallFunc_GetCodeName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTask_UseSkill_C_ExecuteUbergraph_BTask_UseSkill, CallFunc_UseSkill_OutResult) == 0x000038, "Member 'BTask_UseSkill_C_ExecuteUbergraph_BTask_UseSkill::CallFunc_UseSkill_OutResult' has a wrong offset!");
static_assert(offsetof(BTask_UseSkill_C_ExecuteUbergraph_BTask_UseSkill, CallFunc_IsValid_ReturnValue) == 0x000040, "Member 'BTask_UseSkill_C_ExecuteUbergraph_BTask_UseSkill::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTask_UseSkill_C_ExecuteUbergraph_BTask_UseSkill, K2Node_MakeStruct_LNPCSkillLaunchResult) == 0x000048, "Member 'BTask_UseSkill_C_ExecuteUbergraph_BTask_UseSkill::K2Node_MakeStruct_LNPCSkillLaunchResult' has a wrong offset!");
static_assert(offsetof(BTask_UseSkill_C_ExecuteUbergraph_BTask_UseSkill, CallFunc_ExecuteSkillTask_OutResult) == 0x000050, "Member 'BTask_UseSkill_C_ExecuteUbergraph_BTask_UseSkill::CallFunc_ExecuteSkillTask_OutResult' has a wrong offset!");
static_assert(offsetof(BTask_UseSkill_C_ExecuteUbergraph_BTask_UseSkill, CallFunc_IsValid_ReturnValue_1) == 0x000058, "Member 'BTask_UseSkill_C_ExecuteUbergraph_BTask_UseSkill::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function BTask_UseSkill.BTask_UseSkill_C.DoSkill
// 0x0008 (0x0008 - 0x0000)
struct BTask_UseSkill_C_DoSkill final
{
public:
	class FName                                   SkillId;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTask_UseSkill_C_DoSkill) == 0x000004, "Wrong alignment on BTask_UseSkill_C_DoSkill");
static_assert(sizeof(BTask_UseSkill_C_DoSkill) == 0x000008, "Wrong size on BTask_UseSkill_C_DoSkill");
static_assert(offsetof(BTask_UseSkill_C_DoSkill, SkillId) == 0x000000, "Member 'BTask_UseSkill_C_DoSkill::SkillId' has a wrong offset!");

// Function BTask_UseSkill.BTask_UseSkill_C.ReceiveExecuteAI
// 0x0010 (0x0010 - 0x0000)
struct BTask_UseSkill_C_ReceiveExecuteAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTask_UseSkill_C_ReceiveExecuteAI) == 0x000008, "Wrong alignment on BTask_UseSkill_C_ReceiveExecuteAI");
static_assert(sizeof(BTask_UseSkill_C_ReceiveExecuteAI) == 0x000010, "Wrong size on BTask_UseSkill_C_ReceiveExecuteAI");
static_assert(offsetof(BTask_UseSkill_C_ReceiveExecuteAI, OwnerController) == 0x000000, "Member 'BTask_UseSkill_C_ReceiveExecuteAI::OwnerController' has a wrong offset!");
static_assert(offsetof(BTask_UseSkill_C_ReceiveExecuteAI, ControlledPawn) == 0x000008, "Member 'BTask_UseSkill_C_ReceiveExecuteAI::ControlledPawn' has a wrong offset!");

// Function BTask_UseSkill.BTask_UseSkill_C.CheckCoolTime
// 0x0010 (0x0010 - 0x0000)
struct BTask_UseSkill_C_CheckCoolTime final
{
public:
	class FName                                   SkillId;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Result;                                            // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsSkillGlobalCooltime_ReturnValue;        // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsSkillCooltime_ReturnValue;              // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BTask_UseSkill_C_CheckCoolTime) == 0x000004, "Wrong alignment on BTask_UseSkill_C_CheckCoolTime");
static_assert(sizeof(BTask_UseSkill_C_CheckCoolTime) == 0x000010, "Wrong size on BTask_UseSkill_C_CheckCoolTime");
static_assert(offsetof(BTask_UseSkill_C_CheckCoolTime, SkillId) == 0x000000, "Member 'BTask_UseSkill_C_CheckCoolTime::SkillId' has a wrong offset!");
static_assert(offsetof(BTask_UseSkill_C_CheckCoolTime, Result) == 0x000008, "Member 'BTask_UseSkill_C_CheckCoolTime::Result' has a wrong offset!");
static_assert(offsetof(BTask_UseSkill_C_CheckCoolTime, CallFunc_IsSkillGlobalCooltime_ReturnValue) == 0x000009, "Member 'BTask_UseSkill_C_CheckCoolTime::CallFunc_IsSkillGlobalCooltime_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTask_UseSkill_C_CheckCoolTime, CallFunc_IsSkillCooltime_ReturnValue) == 0x00000A, "Member 'BTask_UseSkill_C_CheckCoolTime::CallFunc_IsSkillCooltime_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTask_UseSkill_C_CheckCoolTime, CallFunc_BooleanAND_ReturnValue) == 0x00000B, "Member 'BTask_UseSkill_C_CheckCoolTime::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTask_UseSkill_C_CheckCoolTime, CallFunc_BooleanAND_ReturnValue_1) == 0x00000C, "Member 'BTask_UseSkill_C_CheckCoolTime::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BTask_UseSkill_C_CheckCoolTime, CallFunc_BooleanOR_ReturnValue) == 0x00000D, "Member 'BTask_UseSkill_C_CheckCoolTime::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function BTask_UseSkill.BTask_UseSkill_C.CheckOutOfRotationAngle
// 0x0040 (0x0040 - 0x0000)
struct BTask_UseSkill_C_CheckOutOfRotationAngle final
{
public:
	class AAIController*                          Controller;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Angle;                                             // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bResult;                                           // 0x000C(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ALNPCControllerBP_C*                    K2Node_DynamicCast_AsLNPCController_BP;            // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetPrimaryTarget_ReturnValue;             // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x002C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CheckTargetAngleDeviation_ReturnValue;    // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BTask_UseSkill_C_CheckOutOfRotationAngle) == 0x000008, "Wrong alignment on BTask_UseSkill_C_CheckOutOfRotationAngle");
static_assert(sizeof(BTask_UseSkill_C_CheckOutOfRotationAngle) == 0x000040, "Wrong size on BTask_UseSkill_C_CheckOutOfRotationAngle");
static_assert(offsetof(BTask_UseSkill_C_CheckOutOfRotationAngle, Controller) == 0x000000, "Member 'BTask_UseSkill_C_CheckOutOfRotationAngle::Controller' has a wrong offset!");
static_assert(offsetof(BTask_UseSkill_C_CheckOutOfRotationAngle, Angle) == 0x000008, "Member 'BTask_UseSkill_C_CheckOutOfRotationAngle::Angle' has a wrong offset!");
static_assert(offsetof(BTask_UseSkill_C_CheckOutOfRotationAngle, bResult) == 0x00000C, "Member 'BTask_UseSkill_C_CheckOutOfRotationAngle::bResult' has a wrong offset!");
static_assert(offsetof(BTask_UseSkill_C_CheckOutOfRotationAngle, K2Node_DynamicCast_AsLNPCController_BP) == 0x000010, "Member 'BTask_UseSkill_C_CheckOutOfRotationAngle::K2Node_DynamicCast_AsLNPCController_BP' has a wrong offset!");
static_assert(offsetof(BTask_UseSkill_C_CheckOutOfRotationAngle, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BTask_UseSkill_C_CheckOutOfRotationAngle::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BTask_UseSkill_C_CheckOutOfRotationAngle, CallFunc_GetPrimaryTarget_ReturnValue) == 0x000020, "Member 'BTask_UseSkill_C_CheckOutOfRotationAngle::CallFunc_GetPrimaryTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTask_UseSkill_C_CheckOutOfRotationAngle, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'BTask_UseSkill_C_CheckOutOfRotationAngle::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTask_UseSkill_C_CheckOutOfRotationAngle, CallFunc_K2_GetActorLocation_ReturnValue) == 0x00002C, "Member 'BTask_UseSkill_C_CheckOutOfRotationAngle::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTask_UseSkill_C_CheckOutOfRotationAngle, CallFunc_CheckTargetAngleDeviation_ReturnValue) == 0x000038, "Member 'BTask_UseSkill_C_CheckOutOfRotationAngle::CallFunc_CheckTargetAngleDeviation_ReturnValue' has a wrong offset!");

// Function BTask_UseSkill.BTask_UseSkill_C.GetSkillInfo
// 0x0028 (0x0028 - 0x0000)
struct BTask_UseSkill_C_GetSkillInfo final
{
public:
	struct FSkillInfoPtr                          SkillInfo;                                         // 0x0000(0x0008)(Parm, OutParm, NoDestructor)
	class FName                                   CallFunc_GetSelectedSkillCodeName_ReturnValue;     // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSkillInfoPtr                          CallFunc_FindSkillInfoByNameBP_ReturnValue;        // 0x0010(0x0008)(NoDestructor)
	struct FSkillInfoPtr                          CallFunc_FindSkillInfoByNameBP_ReturnValue_1;      // 0x0018(0x0008)(NoDestructor)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BTask_UseSkill_C_GetSkillInfo) == 0x000008, "Wrong alignment on BTask_UseSkill_C_GetSkillInfo");
static_assert(sizeof(BTask_UseSkill_C_GetSkillInfo) == 0x000028, "Wrong size on BTask_UseSkill_C_GetSkillInfo");
static_assert(offsetof(BTask_UseSkill_C_GetSkillInfo, SkillInfo) == 0x000000, "Member 'BTask_UseSkill_C_GetSkillInfo::SkillInfo' has a wrong offset!");
static_assert(offsetof(BTask_UseSkill_C_GetSkillInfo, CallFunc_GetSelectedSkillCodeName_ReturnValue) == 0x000008, "Member 'BTask_UseSkill_C_GetSkillInfo::CallFunc_GetSelectedSkillCodeName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTask_UseSkill_C_GetSkillInfo, CallFunc_FindSkillInfoByNameBP_ReturnValue) == 0x000010, "Member 'BTask_UseSkill_C_GetSkillInfo::CallFunc_FindSkillInfoByNameBP_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTask_UseSkill_C_GetSkillInfo, CallFunc_FindSkillInfoByNameBP_ReturnValue_1) == 0x000018, "Member 'BTask_UseSkill_C_GetSkillInfo::CallFunc_FindSkillInfoByNameBP_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BTask_UseSkill_C_GetSkillInfo, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000020, "Member 'BTask_UseSkill_C_GetSkillInfo::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");

// Function BTask_UseSkill.BTask_UseSkill_C.GetRotateAngle
// 0x0020 (0x0020 - 0x0000)
struct BTask_UseSkill_C_GetRotateAngle final
{
public:
	struct FSkillInfoPtr                          SkillInfoPtr;                                      // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	struct FNPCInfoPtr                            NPCInfoPtr;                                        // 0x0008(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	int32                                         ReturnValue;                                       // 0x0010(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetSkillRotateAngle_ReturnValue;          // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetRotateAngle_ReturnValue;               // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BTask_UseSkill_C_GetRotateAngle) == 0x000008, "Wrong alignment on BTask_UseSkill_C_GetRotateAngle");
static_assert(sizeof(BTask_UseSkill_C_GetRotateAngle) == 0x000020, "Wrong size on BTask_UseSkill_C_GetRotateAngle");
static_assert(offsetof(BTask_UseSkill_C_GetRotateAngle, SkillInfoPtr) == 0x000000, "Member 'BTask_UseSkill_C_GetRotateAngle::SkillInfoPtr' has a wrong offset!");
static_assert(offsetof(BTask_UseSkill_C_GetRotateAngle, NPCInfoPtr) == 0x000008, "Member 'BTask_UseSkill_C_GetRotateAngle::NPCInfoPtr' has a wrong offset!");
static_assert(offsetof(BTask_UseSkill_C_GetRotateAngle, ReturnValue) == 0x000010, "Member 'BTask_UseSkill_C_GetRotateAngle::ReturnValue' has a wrong offset!");
static_assert(offsetof(BTask_UseSkill_C_GetRotateAngle, CallFunc_GetSkillRotateAngle_ReturnValue) == 0x000014, "Member 'BTask_UseSkill_C_GetRotateAngle::CallFunc_GetSkillRotateAngle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTask_UseSkill_C_GetRotateAngle, CallFunc_GetRotateAngle_ReturnValue) == 0x000018, "Member 'BTask_UseSkill_C_GetRotateAngle::CallFunc_GetRotateAngle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTask_UseSkill_C_GetRotateAngle, CallFunc_IsValid_ReturnValue) == 0x00001C, "Member 'BTask_UseSkill_C_GetRotateAngle::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BTask_UseSkill.BTask_UseSkill_C.DoRatate
// 0x0060 (0x0060 - 0x0000)
struct BTask_UseSkill_C_DoRatate final
{
public:
	class AAIController*                          Controller;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ALNPCCharacter*                         Character;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSkillInfoPtr                          CallFunc_GetSkillInfo_SkillInfo;                   // 0x0010(0x0008)(NoDestructor)
	class ALNPCController*                        K2Node_DynamicCast_AsLNPCController;               // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetRotationCooltime_ReturnValue;          // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FNPCInfoPtr                            CallFunc_GetNpcInfo_ReturnValue;                   // 0x0030(0x0008)(NoDestructor)
	int32                                         CallFunc_GetRotateAngle_ReturnValue;               // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FNPCInfoPtr                            CallFunc_GetNpcInfo_ReturnValue_1;                 // 0x0040(0x0008)(NoDestructor)
	bool                                          CallFunc_CheckOutOfRotationAngle_bResult;          // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49[0x3];                                       // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetRotateCooltime_ReturnValue;            // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ULActBase*                              CallFunc_PlayAction_RotationToTarget_ReturnValue;  // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTask_UseSkill_C_DoRatate) == 0x000008, "Wrong alignment on BTask_UseSkill_C_DoRatate");
static_assert(sizeof(BTask_UseSkill_C_DoRatate) == 0x000060, "Wrong size on BTask_UseSkill_C_DoRatate");
static_assert(offsetof(BTask_UseSkill_C_DoRatate, Controller) == 0x000000, "Member 'BTask_UseSkill_C_DoRatate::Controller' has a wrong offset!");
static_assert(offsetof(BTask_UseSkill_C_DoRatate, Character) == 0x000008, "Member 'BTask_UseSkill_C_DoRatate::Character' has a wrong offset!");
static_assert(offsetof(BTask_UseSkill_C_DoRatate, CallFunc_GetSkillInfo_SkillInfo) == 0x000010, "Member 'BTask_UseSkill_C_DoRatate::CallFunc_GetSkillInfo_SkillInfo' has a wrong offset!");
static_assert(offsetof(BTask_UseSkill_C_DoRatate, K2Node_DynamicCast_AsLNPCController) == 0x000018, "Member 'BTask_UseSkill_C_DoRatate::K2Node_DynamicCast_AsLNPCController' has a wrong offset!");
static_assert(offsetof(BTask_UseSkill_C_DoRatate, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BTask_UseSkill_C_DoRatate::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BTask_UseSkill_C_DoRatate, CallFunc_GetRotationCooltime_ReturnValue) == 0x000024, "Member 'BTask_UseSkill_C_DoRatate::CallFunc_GetRotationCooltime_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTask_UseSkill_C_DoRatate, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000028, "Member 'BTask_UseSkill_C_DoRatate::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTask_UseSkill_C_DoRatate, CallFunc_GetNpcInfo_ReturnValue) == 0x000030, "Member 'BTask_UseSkill_C_DoRatate::CallFunc_GetNpcInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTask_UseSkill_C_DoRatate, CallFunc_GetRotateAngle_ReturnValue) == 0x000038, "Member 'BTask_UseSkill_C_DoRatate::CallFunc_GetRotateAngle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTask_UseSkill_C_DoRatate, CallFunc_GetNpcInfo_ReturnValue_1) == 0x000040, "Member 'BTask_UseSkill_C_DoRatate::CallFunc_GetNpcInfo_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BTask_UseSkill_C_DoRatate, CallFunc_CheckOutOfRotationAngle_bResult) == 0x000048, "Member 'BTask_UseSkill_C_DoRatate::CallFunc_CheckOutOfRotationAngle_bResult' has a wrong offset!");
static_assert(offsetof(BTask_UseSkill_C_DoRatate, CallFunc_GetRotateCooltime_ReturnValue) == 0x00004C, "Member 'BTask_UseSkill_C_DoRatate::CallFunc_GetRotateCooltime_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTask_UseSkill_C_DoRatate, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000050, "Member 'BTask_UseSkill_C_DoRatate::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTask_UseSkill_C_DoRatate, CallFunc_PlayAction_RotationToTarget_ReturnValue) == 0x000058, "Member 'BTask_UseSkill_C_DoRatate::CallFunc_PlayAction_RotationToTarget_ReturnValue' has a wrong offset!");

}
