#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_Buttler_Melee

#include "Basic.hpp"

#include "ProjectP_classes.hpp"
#include "Engine_structs.hpp"
#include "ControlRig_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "LModifyFinalPose_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_Buttler_Melee.ABP_Buttler_Melee_C
// 0x25A0 (0x2C90 - 0x06F0)
class UABP_Buttler_Melee_C final : public ULAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x06F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_1;                   // 0x06F8(0x00A0)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_4;                    // 0x0798(0x0158)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_3;                    // 0x08F0(0x0158)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_1;                   // 0x0A48(0x0118)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose;                     // 0x0B60(0x0118)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend_1;                  // 0x0C78(0x00C0)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend;                    // 0x0D38(0x00C0)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_10;                    // 0x0DF8(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_9;                     // 0x0E20(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_8;                     // 0x0E48(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_7;                     // 0x0E70(0x0028)()
	struct FAnimNode_Root                         AnimGraphNode_Root_1;                              // 0x0E98(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x0EC8(0x0080)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_3;                       // 0x0F48(0x0030)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine_1;                      // 0x0F78(0x00B0)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_2;                    // 0x1028(0x0158)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_1;                    // 0x1180(0x0158)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool;                     // 0x12D8(0x00A0)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x1378(0x0030)()
	struct FAnimNode_BlendListByInt               AnimGraphNode_BlendListByInt;                      // 0x13A8(0x00A0)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_3;                        // 0x1448(0x0108)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_3;             // 0x1550(0x0020)()
	struct FAnimNode_LookAt                       AnimGraphNode_LookAt;                              // 0x1570(0x0270)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_3;             // 0x17E0(0x0020)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_2;                        // 0x1800(0x0108)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2;             // 0x1908(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2;             // 0x1928(0x0020)()
	struct FAnimNode_LinkedAnimLayer              AnimGraphNode_LinkedAnimLayer;                     // 0x1948(0x00B0)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x19F8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x1A20(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x1A48(0x0080)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;                       // 0x1AC8(0x0030)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer_1;                  // 0x1AF8(0x00E8)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x1BE0(0x0030)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer;                    // 0x1C10(0x00E8)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x1CF8(0x0030)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x1D28(0x00B0)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_6;                     // 0x1DD8(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_5;                     // 0x1E00(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_4;                     // 0x1E28(0x0028)()
	struct FAnimNode_ControlRig                   AnimGraphNode_ControlRig_1;                        // 0x1E50(0x0368)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_3;                     // 0x21B8(0x0028)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;                      // 0x21E0(0x0158)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_1;                        // 0x2338(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;                          // 0x2440(0x0108)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;             // 0x2548(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;             // 0x2568(0x0020)()
	struct FAnimNode_PoseSnapshot                 AnimGraphNode_PoseSnapshot;                        // 0x2588(0x0090)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_1;                              // 0x2618(0x0048)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x2660(0x0048)()
	struct FAnimNode_ControlRig                   AnimGraphNode_ControlRig;                          // 0x26A8(0x0368)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_2;                     // 0x2A10(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_1;                     // 0x2A38(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;                       // 0x2A60(0x0028)()
	struct FAnimNode_ApplyMeshSpaceAdditive       AnimGraphNode_ApplyMeshSpaceAdditive;              // 0x2A88(0x00D0)()
	struct FLAnimNode_ModifyFinalPose             LAnimGraphNode_ModifyFinalPose;                    // 0x2B58(0x00E8)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x2C40(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x2C60(0x0020)()
	bool                                          __CustomProperty_doBakeIK_708014B24E9C85E1240731B8BF373DE2; // 0x2C80(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2C81[0x3];                                     // 0x2C81(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         __CustomProperty_FootIKAlpha_89CA1BB44C21D9C7722D748997A55C75; // 0x2C84(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __CustomProperty_EnableFootIK_89CA1BB44C21D9C7722D748997A55C75; // 0x2C88(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          __CustomProperty_doBakeIK_89CA1BB44C21D9C7722D748997A55C75; // 0x2C89(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void AnimLayer_Additive(const struct FPoseLink& MainStateBasePose, const struct FPoseLink& AdditivePose, struct FPoseLink* AnimLayer_Additive_0);
	void AnimGraph(struct FPoseLink* AnimGraph_0);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Buttler_Melee_AnimGraphNode_ApplyMeshSpaceAdditive_A115228F4301C4B845662DA8FEF883A3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Buttler_Melee_AnimGraphNode_ModifyBone_8B2DFB384250677A090946868E45E358();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Buttler_Melee_AnimGraphNode_ModifyBone_1941EF3D42565E60EA410CA5D1C9E4AA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Buttler_Melee_AnimGraphNode_BlendListByBool_0D17E07B4CEDCC7BAB311794D70D9BEE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Buttler_Melee_AnimGraphNode_TransitionResult_06462E564B6929FD284C87A6103B1883();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Buttler_Melee_AnimGraphNode_TransitionResult_CEE5B9B74A8D33FDC4198E9193BFF9F3();
	void ExecuteUbergraph_ABP_Buttler_Melee(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_Buttler_Melee_C">();
	}
	static class UABP_Buttler_Melee_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_Buttler_Melee_C>();
	}
};
static_assert(alignof(UABP_Buttler_Melee_C) == 0x000010, "Wrong alignment on UABP_Buttler_Melee_C");
static_assert(sizeof(UABP_Buttler_Melee_C) == 0x002C90, "Wrong size on UABP_Buttler_Melee_C");
static_assert(offsetof(UABP_Buttler_Melee_C, UberGraphFrame) == 0x0006F0, "Member 'UABP_Buttler_Melee_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABP_Buttler_Melee_C, AnimGraphNode_BlendListByBool_1) == 0x0006F8, "Member 'UABP_Buttler_Melee_C::AnimGraphNode_BlendListByBool_1' has a wrong offset!");
static_assert(offsetof(UABP_Buttler_Melee_C, AnimGraphNode_SaveCachedPose_4) == 0x000798, "Member 'UABP_Buttler_Melee_C::AnimGraphNode_SaveCachedPose_4' has a wrong offset!");
static_assert(offsetof(UABP_Buttler_Melee_C, AnimGraphNode_SaveCachedPose_3) == 0x0008F0, "Member 'UABP_Buttler_Melee_C::AnimGraphNode_SaveCachedPose_3' has a wrong offset!");
static_assert(offsetof(UABP_Buttler_Melee_C, AnimGraphNode_LinkedInputPose_1) == 0x000A48, "Member 'UABP_Buttler_Melee_C::AnimGraphNode_LinkedInputPose_1' has a wrong offset!");
static_assert(offsetof(UABP_Buttler_Melee_C, AnimGraphNode_LinkedInputPose) == 0x000B60, "Member 'UABP_Buttler_Melee_C::AnimGraphNode_LinkedInputPose' has a wrong offset!");
static_assert(offsetof(UABP_Buttler_Melee_C, AnimGraphNode_LayeredBoneBlend_1) == 0x000C78, "Member 'UABP_Buttler_Melee_C::AnimGraphNode_LayeredBoneBlend_1' has a wrong offset!");
static_assert(offsetof(UABP_Buttler_Melee_C, AnimGraphNode_LayeredBoneBlend) == 0x000D38, "Member 'UABP_Buttler_Melee_C::AnimGraphNode_LayeredBoneBlend' has a wrong offset!");
static_assert(offsetof(UABP_Buttler_Melee_C, AnimGraphNode_UseCachedPose_10) == 0x000DF8, "Member 'UABP_Buttler_Melee_C::AnimGraphNode_UseCachedPose_10' has a wrong offset!");
static_assert(offsetof(UABP_Buttler_Melee_C, AnimGraphNode_UseCachedPose_9) == 0x000E20, "Member 'UABP_Buttler_Melee_C::AnimGraphNode_UseCachedPose_9' has a wrong offset!");
static_assert(offsetof(UABP_Buttler_Melee_C, AnimGraphNode_UseCachedPose_8) == 0x000E48, "Member 'UABP_Buttler_Melee_C::AnimGraphNode_UseCachedPose_8' has a wrong offset!");
static_assert(offsetof(UABP_Buttler_Melee_C, AnimGraphNode_UseCachedPose_7) == 0x000E70, "Member 'UABP_Buttler_Melee_C::AnimGraphNode_UseCachedPose_7' has a wrong offset!");
static_assert(offsetof(UABP_Buttler_Melee_C, AnimGraphNode_Root_1) == 0x000E98, "Member 'UABP_Buttler_Melee_C::AnimGraphNode_Root_1' has a wrong offset!");
static_assert(offsetof(UABP_Buttler_Melee_C, AnimGraphNode_SequencePlayer_1) == 0x000EC8, "Member 'UABP_Buttler_Melee_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UABP_Buttler_Melee_C, AnimGraphNode_StateResult_3) == 0x000F48, "Member 'UABP_Buttler_Melee_C::AnimGraphNode_StateResult_3' has a wrong offset!");
static_assert(offsetof(UABP_Buttler_Melee_C, AnimGraphNode_StateMachine_1) == 0x000F78, "Member 'UABP_Buttler_Melee_C::AnimGraphNode_StateMachine_1' has a wrong offset!");
static_assert(offsetof(UABP_Buttler_Melee_C, AnimGraphNode_SaveCachedPose_2) == 0x001028, "Member 'UABP_Buttler_Melee_C::AnimGraphNode_SaveCachedPose_2' has a wrong offset!");
static_assert(offsetof(UABP_Buttler_Melee_C, AnimGraphNode_SaveCachedPose_1) == 0x001180, "Member 'UABP_Buttler_Melee_C::AnimGraphNode_SaveCachedPose_1' has a wrong offset!");
static_assert(offsetof(UABP_Buttler_Melee_C, AnimGraphNode_BlendListByBool) == 0x0012D8, "Member 'UABP_Buttler_Melee_C::AnimGraphNode_BlendListByBool' has a wrong offset!");
static_assert(offsetof(UABP_Buttler_Melee_C, AnimGraphNode_Root) == 0x001378, "Member 'UABP_Buttler_Melee_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UABP_Buttler_Melee_C, AnimGraphNode_BlendListByInt) == 0x0013A8, "Member 'UABP_Buttler_Melee_C::AnimGraphNode_BlendListByInt' has a wrong offset!");
static_assert(offsetof(UABP_Buttler_Melee_C, AnimGraphNode_ModifyBone_3) == 0x001448, "Member 'UABP_Buttler_Melee_C::AnimGraphNode_ModifyBone_3' has a wrong offset!");
static_assert(offsetof(UABP_Buttler_Melee_C, AnimGraphNode_LocalToComponentSpace_3) == 0x001550, "Member 'UABP_Buttler_Melee_C::AnimGraphNode_LocalToComponentSpace_3' has a wrong offset!");
static_assert(offsetof(UABP_Buttler_Melee_C, AnimGraphNode_LookAt) == 0x001570, "Member 'UABP_Buttler_Melee_C::AnimGraphNode_LookAt' has a wrong offset!");
static_assert(offsetof(UABP_Buttler_Melee_C, AnimGraphNode_ComponentToLocalSpace_3) == 0x0017E0, "Member 'UABP_Buttler_Melee_C::AnimGraphNode_ComponentToLocalSpace_3' has a wrong offset!");
static_assert(offsetof(UABP_Buttler_Melee_C, AnimGraphNode_ModifyBone_2) == 0x001800, "Member 'UABP_Buttler_Melee_C::AnimGraphNode_ModifyBone_2' has a wrong offset!");
static_assert(offsetof(UABP_Buttler_Melee_C, AnimGraphNode_LocalToComponentSpace_2) == 0x001908, "Member 'UABP_Buttler_Melee_C::AnimGraphNode_LocalToComponentSpace_2' has a wrong offset!");
static_assert(offsetof(UABP_Buttler_Melee_C, AnimGraphNode_ComponentToLocalSpace_2) == 0x001928, "Member 'UABP_Buttler_Melee_C::AnimGraphNode_ComponentToLocalSpace_2' has a wrong offset!");
static_assert(offsetof(UABP_Buttler_Melee_C, AnimGraphNode_LinkedAnimLayer) == 0x001948, "Member 'UABP_Buttler_Melee_C::AnimGraphNode_LinkedAnimLayer' has a wrong offset!");
static_assert(offsetof(UABP_Buttler_Melee_C, AnimGraphNode_TransitionResult_1) == 0x0019F8, "Member 'UABP_Buttler_Melee_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UABP_Buttler_Melee_C, AnimGraphNode_TransitionResult) == 0x001A20, "Member 'UABP_Buttler_Melee_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UABP_Buttler_Melee_C, AnimGraphNode_SequencePlayer) == 0x001A48, "Member 'UABP_Buttler_Melee_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UABP_Buttler_Melee_C, AnimGraphNode_StateResult_2) == 0x001AC8, "Member 'UABP_Buttler_Melee_C::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(UABP_Buttler_Melee_C, AnimGraphNode_BlendSpacePlayer_1) == 0x001AF8, "Member 'UABP_Buttler_Melee_C::AnimGraphNode_BlendSpacePlayer_1' has a wrong offset!");
static_assert(offsetof(UABP_Buttler_Melee_C, AnimGraphNode_StateResult_1) == 0x001BE0, "Member 'UABP_Buttler_Melee_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UABP_Buttler_Melee_C, AnimGraphNode_BlendSpacePlayer) == 0x001C10, "Member 'UABP_Buttler_Melee_C::AnimGraphNode_BlendSpacePlayer' has a wrong offset!");
static_assert(offsetof(UABP_Buttler_Melee_C, AnimGraphNode_StateResult) == 0x001CF8, "Member 'UABP_Buttler_Melee_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UABP_Buttler_Melee_C, AnimGraphNode_StateMachine) == 0x001D28, "Member 'UABP_Buttler_Melee_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UABP_Buttler_Melee_C, AnimGraphNode_UseCachedPose_6) == 0x001DD8, "Member 'UABP_Buttler_Melee_C::AnimGraphNode_UseCachedPose_6' has a wrong offset!");
static_assert(offsetof(UABP_Buttler_Melee_C, AnimGraphNode_UseCachedPose_5) == 0x001E00, "Member 'UABP_Buttler_Melee_C::AnimGraphNode_UseCachedPose_5' has a wrong offset!");
static_assert(offsetof(UABP_Buttler_Melee_C, AnimGraphNode_UseCachedPose_4) == 0x001E28, "Member 'UABP_Buttler_Melee_C::AnimGraphNode_UseCachedPose_4' has a wrong offset!");
static_assert(offsetof(UABP_Buttler_Melee_C, AnimGraphNode_ControlRig_1) == 0x001E50, "Member 'UABP_Buttler_Melee_C::AnimGraphNode_ControlRig_1' has a wrong offset!");
static_assert(offsetof(UABP_Buttler_Melee_C, AnimGraphNode_UseCachedPose_3) == 0x0021B8, "Member 'UABP_Buttler_Melee_C::AnimGraphNode_UseCachedPose_3' has a wrong offset!");
static_assert(offsetof(UABP_Buttler_Melee_C, AnimGraphNode_SaveCachedPose) == 0x0021E0, "Member 'UABP_Buttler_Melee_C::AnimGraphNode_SaveCachedPose' has a wrong offset!");
static_assert(offsetof(UABP_Buttler_Melee_C, AnimGraphNode_ModifyBone_1) == 0x002338, "Member 'UABP_Buttler_Melee_C::AnimGraphNode_ModifyBone_1' has a wrong offset!");
static_assert(offsetof(UABP_Buttler_Melee_C, AnimGraphNode_ModifyBone) == 0x002440, "Member 'UABP_Buttler_Melee_C::AnimGraphNode_ModifyBone' has a wrong offset!");
static_assert(offsetof(UABP_Buttler_Melee_C, AnimGraphNode_LocalToComponentSpace_1) == 0x002548, "Member 'UABP_Buttler_Melee_C::AnimGraphNode_LocalToComponentSpace_1' has a wrong offset!");
static_assert(offsetof(UABP_Buttler_Melee_C, AnimGraphNode_ComponentToLocalSpace_1) == 0x002568, "Member 'UABP_Buttler_Melee_C::AnimGraphNode_ComponentToLocalSpace_1' has a wrong offset!");
static_assert(offsetof(UABP_Buttler_Melee_C, AnimGraphNode_PoseSnapshot) == 0x002588, "Member 'UABP_Buttler_Melee_C::AnimGraphNode_PoseSnapshot' has a wrong offset!");
static_assert(offsetof(UABP_Buttler_Melee_C, AnimGraphNode_Slot_1) == 0x002618, "Member 'UABP_Buttler_Melee_C::AnimGraphNode_Slot_1' has a wrong offset!");
static_assert(offsetof(UABP_Buttler_Melee_C, AnimGraphNode_Slot) == 0x002660, "Member 'UABP_Buttler_Melee_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UABP_Buttler_Melee_C, AnimGraphNode_ControlRig) == 0x0026A8, "Member 'UABP_Buttler_Melee_C::AnimGraphNode_ControlRig' has a wrong offset!");
static_assert(offsetof(UABP_Buttler_Melee_C, AnimGraphNode_UseCachedPose_2) == 0x002A10, "Member 'UABP_Buttler_Melee_C::AnimGraphNode_UseCachedPose_2' has a wrong offset!");
static_assert(offsetof(UABP_Buttler_Melee_C, AnimGraphNode_UseCachedPose_1) == 0x002A38, "Member 'UABP_Buttler_Melee_C::AnimGraphNode_UseCachedPose_1' has a wrong offset!");
static_assert(offsetof(UABP_Buttler_Melee_C, AnimGraphNode_UseCachedPose) == 0x002A60, "Member 'UABP_Buttler_Melee_C::AnimGraphNode_UseCachedPose' has a wrong offset!");
static_assert(offsetof(UABP_Buttler_Melee_C, AnimGraphNode_ApplyMeshSpaceAdditive) == 0x002A88, "Member 'UABP_Buttler_Melee_C::AnimGraphNode_ApplyMeshSpaceAdditive' has a wrong offset!");
static_assert(offsetof(UABP_Buttler_Melee_C, LAnimGraphNode_ModifyFinalPose) == 0x002B58, "Member 'UABP_Buttler_Melee_C::LAnimGraphNode_ModifyFinalPose' has a wrong offset!");
static_assert(offsetof(UABP_Buttler_Melee_C, AnimGraphNode_LocalToComponentSpace) == 0x002C40, "Member 'UABP_Buttler_Melee_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UABP_Buttler_Melee_C, AnimGraphNode_ComponentToLocalSpace) == 0x002C60, "Member 'UABP_Buttler_Melee_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UABP_Buttler_Melee_C, __CustomProperty_doBakeIK_708014B24E9C85E1240731B8BF373DE2) == 0x002C80, "Member 'UABP_Buttler_Melee_C::__CustomProperty_doBakeIK_708014B24E9C85E1240731B8BF373DE2' has a wrong offset!");
static_assert(offsetof(UABP_Buttler_Melee_C, __CustomProperty_FootIKAlpha_89CA1BB44C21D9C7722D748997A55C75) == 0x002C84, "Member 'UABP_Buttler_Melee_C::__CustomProperty_FootIKAlpha_89CA1BB44C21D9C7722D748997A55C75' has a wrong offset!");
static_assert(offsetof(UABP_Buttler_Melee_C, __CustomProperty_EnableFootIK_89CA1BB44C21D9C7722D748997A55C75) == 0x002C88, "Member 'UABP_Buttler_Melee_C::__CustomProperty_EnableFootIK_89CA1BB44C21D9C7722D748997A55C75' has a wrong offset!");
static_assert(offsetof(UABP_Buttler_Melee_C, __CustomProperty_doBakeIK_89CA1BB44C21D9C7722D748997A55C75) == 0x002C89, "Member 'UABP_Buttler_Melee_C::__CustomProperty_doBakeIK_89CA1BB44C21D9C7722D748997A55C75' has a wrong offset!");

}
