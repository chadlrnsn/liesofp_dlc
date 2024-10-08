#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_Horseman

#include "Basic.hpp"

#include "ProjectP_classes.hpp"
#include "Engine_structs.hpp"
#include "ControlRig_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "KawaiiPhysics_structs.hpp"
#include "LModifyFinalPose_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_Horseman.ABP_Horseman_C
// 0x57B0 (0x5EA0 - 0x06F0)
class UABP_Horseman_C final : public ULAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x06F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_4;                    // 0x06F8(0x0158)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_3;                    // 0x0850(0x0158)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_1;                   // 0x09A8(0x00A0)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_1;                   // 0x0A48(0x0118)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose;                     // 0x0B60(0x0118)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend_1;                  // 0x0C78(0x00C0)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend;                    // 0x0D38(0x00C0)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_10;                    // 0x0DF8(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_9;                     // 0x0E20(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_8;                     // 0x0E48(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_7;                     // 0x0E70(0x0028)()
	struct FAnimNode_Root                         AnimGraphNode_Root_1;                              // 0x0E98(0x0030)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_14;                 // 0x0EC8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_13;                 // 0x0EF0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_12;                 // 0x0F18(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_11;                 // 0x0F40(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_10;                 // 0x0F68(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_9;                  // 0x0F90(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_8;                  // 0x0FB8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_7;                  // 0x0FE0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_6;                  // 0x1008(0x0028)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer_6;                  // 0x1030(0x00E8)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_7;                       // 0x1118(0x0030)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer_5;                  // 0x1148(0x00E8)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_6;                       // 0x1230(0x0030)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_5;                  // 0x1260(0x0028)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer_4;                  // 0x1288(0x00E8)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_5;                       // 0x1370(0x0030)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer_3;                  // 0x13A0(0x00E8)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_4;                       // 0x1488(0x0030)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_4;                  // 0x14B8(0x0028)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer_2;                  // 0x14E0(0x00E8)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_3;                       // 0x15C8(0x0030)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine_1;                      // 0x15F8(0x00B0)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_1;                              // 0x16A8(0x0048)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_2;                    // 0x16F0(0x0158)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_6;                     // 0x1848(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_3;                  // 0x1870(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_2;                  // 0x1898(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x18C0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x18E8(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x1910(0x0080)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;                       // 0x1990(0x0030)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer_1;                  // 0x19C0(0x00E8)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x1AA8(0x0030)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer;                    // 0x1AD8(0x00E8)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x1BC0(0x0030)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x1BF0(0x00B0)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_1;                    // 0x1CA0(0x0158)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_5;                     // 0x1DF8(0x0028)()
	struct FAnimNode_LinkedAnimLayer              AnimGraphNode_LinkedAnimLayer;                     // 0x1E20(0x00B0)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_4;                     // 0x1ED0(0x0028)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool;                     // 0x1EF8(0x00A0)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x1F98(0x0030)()
	struct FAnimNode_BlendListByInt               AnimGraphNode_BlendListByInt;                      // 0x1FC8(0x00A0)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_3;                        // 0x2068(0x0108)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_3;             // 0x2170(0x0020)()
	struct FAnimNode_LookAt                       AnimGraphNode_LookAt;                              // 0x2190(0x0270)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_3;             // 0x2400(0x0020)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_2;                        // 0x2420(0x0108)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2;             // 0x2528(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2;             // 0x2548(0x0020)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_3;                     // 0x2568(0x0028)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;                      // 0x2590(0x0158)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_1;                        // 0x26E8(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;                          // 0x27F0(0x0108)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;             // 0x28F8(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;             // 0x2918(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x2938(0x0020)()
	struct FAnimNode_PoseSnapshot                 AnimGraphNode_PoseSnapshot;                        // 0x2958(0x0090)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x29E8(0x0048)()
	struct FAnimNode_ControlRig                   AnimGraphNode_ControlRig_1;                        // 0x2A30(0x0368)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_2;                     // 0x2D98(0x0028)()
	struct FAnimNode_ControlRig                   AnimGraphNode_ControlRig;                          // 0x2DC0(0x0368)()
	uint8                                         Pad_3128[0x8];                                     // 0x3128(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_4;                     // 0x3130(0x08A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_3;                     // 0x39D0(0x08A0)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x4270(0x0020)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_2;                     // 0x4290(0x08A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_1;                     // 0x4B30(0x08A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics;                       // 0x53D0(0x08A0)()
	struct FLAnimNode_ModifyFinalPose             LAnimGraphNode_ModifyFinalPose;                    // 0x5C70(0x00E8)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_1;                     // 0x5D58(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;                       // 0x5D80(0x0028)()
	struct FAnimNode_ApplyMeshSpaceAdditive       AnimGraphNode_ApplyMeshSpaceAdditive;              // 0x5DA8(0x00D0)()
	bool                                          __CustomProperty_doBakeIK_71D1A325447B9CBB6F58E8B77D83B4DA; // 0x5E78(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E79[0x3];                                     // 0x5E79(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         __CustomProperty_EnableFootIK_73236BE44D166ED610CE29A88CAA4F78; // 0x5E7C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __CustomProperty_doBakeIK_73236BE44D166ED610CE29A88CAA4F78; // 0x5E80(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E81[0x3];                                     // 0x5E81(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKawaiiPhysicsSettings                 KP_Tentacle;                                       // 0x5E84(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void ExecuteUbergraph_ABP_Horseman(int32 EntryPoint);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Horseman_AnimGraphNode_TransitionResult_9291CA7146D7CE88E006778DA4B1E84F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Horseman_AnimGraphNode_TransitionResult_B08089B24E3369BD40F39880F58B5729();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Horseman_AnimGraphNode_TransitionResult_8D840A7940DF3280D554929C76D0C23F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Horseman_AnimGraphNode_TransitionResult_CB0805704E3CFE3810CA51B5D82D70C9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Horseman_AnimGraphNode_TransitionResult_4476568B43F62B222AF205A6D872CEF8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Horseman_AnimGraphNode_TransitionResult_FCD566844B636F8F7CC2F7A1FB344B01();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Horseman_AnimGraphNode_TransitionResult_5893A83148B8BB4260763CBD9632406F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Horseman_AnimGraphNode_TransitionResult_24832C9F4937B8DF80D3A09C0F8632EF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Horseman_AnimGraphNode_TransitionResult_2558162A4853B50D0A6F5AA8A7339E44();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Horseman_AnimGraphNode_TransitionResult_350DC1304B835F2A597B23BBEF2BC77D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Horseman_AnimGraphNode_TransitionResult_1AD66AB541D877E8ED43E3BF498FDA17();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Horseman_AnimGraphNode_TransitionResult_F6DCEE3945DD5B7394FC8A8781CB82E9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Horseman_AnimGraphNode_TransitionResult_2FA70DBC4468E4B4D9628087F1DF05E9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Horseman_AnimGraphNode_BlendListByBool_D79C8F1341080FE4D02240A4C2E18386();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Horseman_AnimGraphNode_ModifyBone_663249214AF8CD1391160FB408A5DB5C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Horseman_AnimGraphNode_ModifyBone_9BB1F0A54D14537D85ED8795DDE0B790();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Horseman_AnimGraphNode_ApplyMeshSpaceAdditive_EAF7A7B24BEC5F651B0342B94FBD9401();
	void AnimGraph(struct FPoseLink* AnimGraph_0);
	void AnimLayer_Additive(const struct FPoseLink& MainStateBasePose, const struct FPoseLink& AdditivePose, struct FPoseLink* AnimLayer_Additive_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_Horseman_C">();
	}
	static class UABP_Horseman_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_Horseman_C>();
	}
};
static_assert(alignof(UABP_Horseman_C) == 0x000010, "Wrong alignment on UABP_Horseman_C");
static_assert(sizeof(UABP_Horseman_C) == 0x005EA0, "Wrong size on UABP_Horseman_C");
static_assert(offsetof(UABP_Horseman_C, UberGraphFrame) == 0x0006F0, "Member 'UABP_Horseman_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABP_Horseman_C, AnimGraphNode_SaveCachedPose_4) == 0x0006F8, "Member 'UABP_Horseman_C::AnimGraphNode_SaveCachedPose_4' has a wrong offset!");
static_assert(offsetof(UABP_Horseman_C, AnimGraphNode_SaveCachedPose_3) == 0x000850, "Member 'UABP_Horseman_C::AnimGraphNode_SaveCachedPose_3' has a wrong offset!");
static_assert(offsetof(UABP_Horseman_C, AnimGraphNode_BlendListByBool_1) == 0x0009A8, "Member 'UABP_Horseman_C::AnimGraphNode_BlendListByBool_1' has a wrong offset!");
static_assert(offsetof(UABP_Horseman_C, AnimGraphNode_LinkedInputPose_1) == 0x000A48, "Member 'UABP_Horseman_C::AnimGraphNode_LinkedInputPose_1' has a wrong offset!");
static_assert(offsetof(UABP_Horseman_C, AnimGraphNode_LinkedInputPose) == 0x000B60, "Member 'UABP_Horseman_C::AnimGraphNode_LinkedInputPose' has a wrong offset!");
static_assert(offsetof(UABP_Horseman_C, AnimGraphNode_LayeredBoneBlend_1) == 0x000C78, "Member 'UABP_Horseman_C::AnimGraphNode_LayeredBoneBlend_1' has a wrong offset!");
static_assert(offsetof(UABP_Horseman_C, AnimGraphNode_LayeredBoneBlend) == 0x000D38, "Member 'UABP_Horseman_C::AnimGraphNode_LayeredBoneBlend' has a wrong offset!");
static_assert(offsetof(UABP_Horseman_C, AnimGraphNode_UseCachedPose_10) == 0x000DF8, "Member 'UABP_Horseman_C::AnimGraphNode_UseCachedPose_10' has a wrong offset!");
static_assert(offsetof(UABP_Horseman_C, AnimGraphNode_UseCachedPose_9) == 0x000E20, "Member 'UABP_Horseman_C::AnimGraphNode_UseCachedPose_9' has a wrong offset!");
static_assert(offsetof(UABP_Horseman_C, AnimGraphNode_UseCachedPose_8) == 0x000E48, "Member 'UABP_Horseman_C::AnimGraphNode_UseCachedPose_8' has a wrong offset!");
static_assert(offsetof(UABP_Horseman_C, AnimGraphNode_UseCachedPose_7) == 0x000E70, "Member 'UABP_Horseman_C::AnimGraphNode_UseCachedPose_7' has a wrong offset!");
static_assert(offsetof(UABP_Horseman_C, AnimGraphNode_Root_1) == 0x000E98, "Member 'UABP_Horseman_C::AnimGraphNode_Root_1' has a wrong offset!");
static_assert(offsetof(UABP_Horseman_C, AnimGraphNode_TransitionResult_14) == 0x000EC8, "Member 'UABP_Horseman_C::AnimGraphNode_TransitionResult_14' has a wrong offset!");
static_assert(offsetof(UABP_Horseman_C, AnimGraphNode_TransitionResult_13) == 0x000EF0, "Member 'UABP_Horseman_C::AnimGraphNode_TransitionResult_13' has a wrong offset!");
static_assert(offsetof(UABP_Horseman_C, AnimGraphNode_TransitionResult_12) == 0x000F18, "Member 'UABP_Horseman_C::AnimGraphNode_TransitionResult_12' has a wrong offset!");
static_assert(offsetof(UABP_Horseman_C, AnimGraphNode_TransitionResult_11) == 0x000F40, "Member 'UABP_Horseman_C::AnimGraphNode_TransitionResult_11' has a wrong offset!");
static_assert(offsetof(UABP_Horseman_C, AnimGraphNode_TransitionResult_10) == 0x000F68, "Member 'UABP_Horseman_C::AnimGraphNode_TransitionResult_10' has a wrong offset!");
static_assert(offsetof(UABP_Horseman_C, AnimGraphNode_TransitionResult_9) == 0x000F90, "Member 'UABP_Horseman_C::AnimGraphNode_TransitionResult_9' has a wrong offset!");
static_assert(offsetof(UABP_Horseman_C, AnimGraphNode_TransitionResult_8) == 0x000FB8, "Member 'UABP_Horseman_C::AnimGraphNode_TransitionResult_8' has a wrong offset!");
static_assert(offsetof(UABP_Horseman_C, AnimGraphNode_TransitionResult_7) == 0x000FE0, "Member 'UABP_Horseman_C::AnimGraphNode_TransitionResult_7' has a wrong offset!");
static_assert(offsetof(UABP_Horseman_C, AnimGraphNode_TransitionResult_6) == 0x001008, "Member 'UABP_Horseman_C::AnimGraphNode_TransitionResult_6' has a wrong offset!");
static_assert(offsetof(UABP_Horseman_C, AnimGraphNode_BlendSpacePlayer_6) == 0x001030, "Member 'UABP_Horseman_C::AnimGraphNode_BlendSpacePlayer_6' has a wrong offset!");
static_assert(offsetof(UABP_Horseman_C, AnimGraphNode_StateResult_7) == 0x001118, "Member 'UABP_Horseman_C::AnimGraphNode_StateResult_7' has a wrong offset!");
static_assert(offsetof(UABP_Horseman_C, AnimGraphNode_BlendSpacePlayer_5) == 0x001148, "Member 'UABP_Horseman_C::AnimGraphNode_BlendSpacePlayer_5' has a wrong offset!");
static_assert(offsetof(UABP_Horseman_C, AnimGraphNode_StateResult_6) == 0x001230, "Member 'UABP_Horseman_C::AnimGraphNode_StateResult_6' has a wrong offset!");
static_assert(offsetof(UABP_Horseman_C, AnimGraphNode_TransitionResult_5) == 0x001260, "Member 'UABP_Horseman_C::AnimGraphNode_TransitionResult_5' has a wrong offset!");
static_assert(offsetof(UABP_Horseman_C, AnimGraphNode_BlendSpacePlayer_4) == 0x001288, "Member 'UABP_Horseman_C::AnimGraphNode_BlendSpacePlayer_4' has a wrong offset!");
static_assert(offsetof(UABP_Horseman_C, AnimGraphNode_StateResult_5) == 0x001370, "Member 'UABP_Horseman_C::AnimGraphNode_StateResult_5' has a wrong offset!");
static_assert(offsetof(UABP_Horseman_C, AnimGraphNode_BlendSpacePlayer_3) == 0x0013A0, "Member 'UABP_Horseman_C::AnimGraphNode_BlendSpacePlayer_3' has a wrong offset!");
static_assert(offsetof(UABP_Horseman_C, AnimGraphNode_StateResult_4) == 0x001488, "Member 'UABP_Horseman_C::AnimGraphNode_StateResult_4' has a wrong offset!");
static_assert(offsetof(UABP_Horseman_C, AnimGraphNode_TransitionResult_4) == 0x0014B8, "Member 'UABP_Horseman_C::AnimGraphNode_TransitionResult_4' has a wrong offset!");
static_assert(offsetof(UABP_Horseman_C, AnimGraphNode_BlendSpacePlayer_2) == 0x0014E0, "Member 'UABP_Horseman_C::AnimGraphNode_BlendSpacePlayer_2' has a wrong offset!");
static_assert(offsetof(UABP_Horseman_C, AnimGraphNode_StateResult_3) == 0x0015C8, "Member 'UABP_Horseman_C::AnimGraphNode_StateResult_3' has a wrong offset!");
static_assert(offsetof(UABP_Horseman_C, AnimGraphNode_StateMachine_1) == 0x0015F8, "Member 'UABP_Horseman_C::AnimGraphNode_StateMachine_1' has a wrong offset!");
static_assert(offsetof(UABP_Horseman_C, AnimGraphNode_Slot_1) == 0x0016A8, "Member 'UABP_Horseman_C::AnimGraphNode_Slot_1' has a wrong offset!");
static_assert(offsetof(UABP_Horseman_C, AnimGraphNode_SaveCachedPose_2) == 0x0016F0, "Member 'UABP_Horseman_C::AnimGraphNode_SaveCachedPose_2' has a wrong offset!");
static_assert(offsetof(UABP_Horseman_C, AnimGraphNode_UseCachedPose_6) == 0x001848, "Member 'UABP_Horseman_C::AnimGraphNode_UseCachedPose_6' has a wrong offset!");
static_assert(offsetof(UABP_Horseman_C, AnimGraphNode_TransitionResult_3) == 0x001870, "Member 'UABP_Horseman_C::AnimGraphNode_TransitionResult_3' has a wrong offset!");
static_assert(offsetof(UABP_Horseman_C, AnimGraphNode_TransitionResult_2) == 0x001898, "Member 'UABP_Horseman_C::AnimGraphNode_TransitionResult_2' has a wrong offset!");
static_assert(offsetof(UABP_Horseman_C, AnimGraphNode_TransitionResult_1) == 0x0018C0, "Member 'UABP_Horseman_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UABP_Horseman_C, AnimGraphNode_TransitionResult) == 0x0018E8, "Member 'UABP_Horseman_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UABP_Horseman_C, AnimGraphNode_SequencePlayer) == 0x001910, "Member 'UABP_Horseman_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UABP_Horseman_C, AnimGraphNode_StateResult_2) == 0x001990, "Member 'UABP_Horseman_C::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(UABP_Horseman_C, AnimGraphNode_BlendSpacePlayer_1) == 0x0019C0, "Member 'UABP_Horseman_C::AnimGraphNode_BlendSpacePlayer_1' has a wrong offset!");
static_assert(offsetof(UABP_Horseman_C, AnimGraphNode_StateResult_1) == 0x001AA8, "Member 'UABP_Horseman_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UABP_Horseman_C, AnimGraphNode_BlendSpacePlayer) == 0x001AD8, "Member 'UABP_Horseman_C::AnimGraphNode_BlendSpacePlayer' has a wrong offset!");
static_assert(offsetof(UABP_Horseman_C, AnimGraphNode_StateResult) == 0x001BC0, "Member 'UABP_Horseman_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UABP_Horseman_C, AnimGraphNode_StateMachine) == 0x001BF0, "Member 'UABP_Horseman_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UABP_Horseman_C, AnimGraphNode_SaveCachedPose_1) == 0x001CA0, "Member 'UABP_Horseman_C::AnimGraphNode_SaveCachedPose_1' has a wrong offset!");
static_assert(offsetof(UABP_Horseman_C, AnimGraphNode_UseCachedPose_5) == 0x001DF8, "Member 'UABP_Horseman_C::AnimGraphNode_UseCachedPose_5' has a wrong offset!");
static_assert(offsetof(UABP_Horseman_C, AnimGraphNode_LinkedAnimLayer) == 0x001E20, "Member 'UABP_Horseman_C::AnimGraphNode_LinkedAnimLayer' has a wrong offset!");
static_assert(offsetof(UABP_Horseman_C, AnimGraphNode_UseCachedPose_4) == 0x001ED0, "Member 'UABP_Horseman_C::AnimGraphNode_UseCachedPose_4' has a wrong offset!");
static_assert(offsetof(UABP_Horseman_C, AnimGraphNode_BlendListByBool) == 0x001EF8, "Member 'UABP_Horseman_C::AnimGraphNode_BlendListByBool' has a wrong offset!");
static_assert(offsetof(UABP_Horseman_C, AnimGraphNode_Root) == 0x001F98, "Member 'UABP_Horseman_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UABP_Horseman_C, AnimGraphNode_BlendListByInt) == 0x001FC8, "Member 'UABP_Horseman_C::AnimGraphNode_BlendListByInt' has a wrong offset!");
static_assert(offsetof(UABP_Horseman_C, AnimGraphNode_ModifyBone_3) == 0x002068, "Member 'UABP_Horseman_C::AnimGraphNode_ModifyBone_3' has a wrong offset!");
static_assert(offsetof(UABP_Horseman_C, AnimGraphNode_LocalToComponentSpace_3) == 0x002170, "Member 'UABP_Horseman_C::AnimGraphNode_LocalToComponentSpace_3' has a wrong offset!");
static_assert(offsetof(UABP_Horseman_C, AnimGraphNode_LookAt) == 0x002190, "Member 'UABP_Horseman_C::AnimGraphNode_LookAt' has a wrong offset!");
static_assert(offsetof(UABP_Horseman_C, AnimGraphNode_ComponentToLocalSpace_3) == 0x002400, "Member 'UABP_Horseman_C::AnimGraphNode_ComponentToLocalSpace_3' has a wrong offset!");
static_assert(offsetof(UABP_Horseman_C, AnimGraphNode_ModifyBone_2) == 0x002420, "Member 'UABP_Horseman_C::AnimGraphNode_ModifyBone_2' has a wrong offset!");
static_assert(offsetof(UABP_Horseman_C, AnimGraphNode_LocalToComponentSpace_2) == 0x002528, "Member 'UABP_Horseman_C::AnimGraphNode_LocalToComponentSpace_2' has a wrong offset!");
static_assert(offsetof(UABP_Horseman_C, AnimGraphNode_ComponentToLocalSpace_2) == 0x002548, "Member 'UABP_Horseman_C::AnimGraphNode_ComponentToLocalSpace_2' has a wrong offset!");
static_assert(offsetof(UABP_Horseman_C, AnimGraphNode_UseCachedPose_3) == 0x002568, "Member 'UABP_Horseman_C::AnimGraphNode_UseCachedPose_3' has a wrong offset!");
static_assert(offsetof(UABP_Horseman_C, AnimGraphNode_SaveCachedPose) == 0x002590, "Member 'UABP_Horseman_C::AnimGraphNode_SaveCachedPose' has a wrong offset!");
static_assert(offsetof(UABP_Horseman_C, AnimGraphNode_ModifyBone_1) == 0x0026E8, "Member 'UABP_Horseman_C::AnimGraphNode_ModifyBone_1' has a wrong offset!");
static_assert(offsetof(UABP_Horseman_C, AnimGraphNode_ModifyBone) == 0x0027F0, "Member 'UABP_Horseman_C::AnimGraphNode_ModifyBone' has a wrong offset!");
static_assert(offsetof(UABP_Horseman_C, AnimGraphNode_LocalToComponentSpace_1) == 0x0028F8, "Member 'UABP_Horseman_C::AnimGraphNode_LocalToComponentSpace_1' has a wrong offset!");
static_assert(offsetof(UABP_Horseman_C, AnimGraphNode_ComponentToLocalSpace_1) == 0x002918, "Member 'UABP_Horseman_C::AnimGraphNode_ComponentToLocalSpace_1' has a wrong offset!");
static_assert(offsetof(UABP_Horseman_C, AnimGraphNode_ComponentToLocalSpace) == 0x002938, "Member 'UABP_Horseman_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UABP_Horseman_C, AnimGraphNode_PoseSnapshot) == 0x002958, "Member 'UABP_Horseman_C::AnimGraphNode_PoseSnapshot' has a wrong offset!");
static_assert(offsetof(UABP_Horseman_C, AnimGraphNode_Slot) == 0x0029E8, "Member 'UABP_Horseman_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UABP_Horseman_C, AnimGraphNode_ControlRig_1) == 0x002A30, "Member 'UABP_Horseman_C::AnimGraphNode_ControlRig_1' has a wrong offset!");
static_assert(offsetof(UABP_Horseman_C, AnimGraphNode_UseCachedPose_2) == 0x002D98, "Member 'UABP_Horseman_C::AnimGraphNode_UseCachedPose_2' has a wrong offset!");
static_assert(offsetof(UABP_Horseman_C, AnimGraphNode_ControlRig) == 0x002DC0, "Member 'UABP_Horseman_C::AnimGraphNode_ControlRig' has a wrong offset!");
static_assert(offsetof(UABP_Horseman_C, AnimGraphNode_KawaiiPhysics_4) == 0x003130, "Member 'UABP_Horseman_C::AnimGraphNode_KawaiiPhysics_4' has a wrong offset!");
static_assert(offsetof(UABP_Horseman_C, AnimGraphNode_KawaiiPhysics_3) == 0x0039D0, "Member 'UABP_Horseman_C::AnimGraphNode_KawaiiPhysics_3' has a wrong offset!");
static_assert(offsetof(UABP_Horseman_C, AnimGraphNode_LocalToComponentSpace) == 0x004270, "Member 'UABP_Horseman_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UABP_Horseman_C, AnimGraphNode_KawaiiPhysics_2) == 0x004290, "Member 'UABP_Horseman_C::AnimGraphNode_KawaiiPhysics_2' has a wrong offset!");
static_assert(offsetof(UABP_Horseman_C, AnimGraphNode_KawaiiPhysics_1) == 0x004B30, "Member 'UABP_Horseman_C::AnimGraphNode_KawaiiPhysics_1' has a wrong offset!");
static_assert(offsetof(UABP_Horseman_C, AnimGraphNode_KawaiiPhysics) == 0x0053D0, "Member 'UABP_Horseman_C::AnimGraphNode_KawaiiPhysics' has a wrong offset!");
static_assert(offsetof(UABP_Horseman_C, LAnimGraphNode_ModifyFinalPose) == 0x005C70, "Member 'UABP_Horseman_C::LAnimGraphNode_ModifyFinalPose' has a wrong offset!");
static_assert(offsetof(UABP_Horseman_C, AnimGraphNode_UseCachedPose_1) == 0x005D58, "Member 'UABP_Horseman_C::AnimGraphNode_UseCachedPose_1' has a wrong offset!");
static_assert(offsetof(UABP_Horseman_C, AnimGraphNode_UseCachedPose) == 0x005D80, "Member 'UABP_Horseman_C::AnimGraphNode_UseCachedPose' has a wrong offset!");
static_assert(offsetof(UABP_Horseman_C, AnimGraphNode_ApplyMeshSpaceAdditive) == 0x005DA8, "Member 'UABP_Horseman_C::AnimGraphNode_ApplyMeshSpaceAdditive' has a wrong offset!");
static_assert(offsetof(UABP_Horseman_C, __CustomProperty_doBakeIK_71D1A325447B9CBB6F58E8B77D83B4DA) == 0x005E78, "Member 'UABP_Horseman_C::__CustomProperty_doBakeIK_71D1A325447B9CBB6F58E8B77D83B4DA' has a wrong offset!");
static_assert(offsetof(UABP_Horseman_C, __CustomProperty_EnableFootIK_73236BE44D166ED610CE29A88CAA4F78) == 0x005E7C, "Member 'UABP_Horseman_C::__CustomProperty_EnableFootIK_73236BE44D166ED610CE29A88CAA4F78' has a wrong offset!");
static_assert(offsetof(UABP_Horseman_C, __CustomProperty_doBakeIK_73236BE44D166ED610CE29A88CAA4F78) == 0x005E80, "Member 'UABP_Horseman_C::__CustomProperty_doBakeIK_73236BE44D166ED610CE29A88CAA4F78' has a wrong offset!");
static_assert(offsetof(UABP_Horseman_C, KP_Tentacle) == 0x005E84, "Member 'UABP_Horseman_C::KP_Tentacle' has a wrong offset!");

}

