#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_NPC_Geppetto

#include "Basic.hpp"

#include "ProjectP_classes.hpp"
#include "Engine_structs.hpp"
#include "KawaiiPhysics_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_NPC_Geppetto.ABP_NPC_Geppetto_C
// 0x6C50 (0x7340 - 0x06F0)
class UABP_NPC_Geppetto_C final : public ULAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x06F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x06F8(0x0048)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool;                     // 0x0740(0x00A0)()
	struct FAnimNode_PoseSnapshot                 AnimGraphNode_PoseSnapshot;                        // 0x07E0(0x0090)()
	struct FAnimNode_BlendListByInt               AnimGraphNode_BlendListByInt;                      // 0x0870(0x00A0)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;             // 0x0910(0x0020)()
	struct FAnimNode_LookAt                       AnimGraphNode_LookAt;                              // 0x0930(0x0270)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;             // 0x0BA0(0x0020)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_6;                     // 0x0BC0(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_5;                     // 0x0BE8(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_4;                     // 0x0C10(0x0028)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_3;                    // 0x0C38(0x0158)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;                          // 0x0D90(0x0108)()
	uint8                                         Pad_E98[0x8];                                      // 0x0E98(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_9;                     // 0x0EA0(0x08A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_8;                     // 0x1740(0x08A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_7;                     // 0x1FE0(0x08A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_6;                     // 0x2880(0x08A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_5;                     // 0x3120(0x08A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_4;                     // 0x39C0(0x08A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_3;                     // 0x4260(0x08A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_2;                     // 0x4B00(0x08A0)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x53A0(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x53C0(0x0020)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_1;                     // 0x53E0(0x08A0)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_3;                     // 0x5C80(0x0028)()
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive_2;                     // 0x5CA8(0x00C8)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_2;                    // 0x5D70(0x0158)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend_1;                  // 0x5EC8(0x00C0)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_1;                    // 0x5F88(0x0158)()
	struct FAnimNode_RandomPlayer                 AnimGraphNode_RandomPlayer_3;                      // 0x60E0(0x0078)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x6158(0x0080)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;                       // 0x61D8(0x0030)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine_1;                      // 0x6208(0x00B0)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_2;                     // 0x62B8(0x0028)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics;                       // 0x62E0(0x08A0)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;                      // 0x6B80(0x0158)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x6CD8(0x0030)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x6D08(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x6D30(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x6D58(0x0080)()
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive_1;                     // 0x6DD8(0x00C8)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_1;                     // 0x6EA0(0x0028)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x6EC8(0x0030)()
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive;                       // 0x6EF8(0x00C8)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;                       // 0x6FC0(0x0028)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend;                    // 0x6FE8(0x00C0)()
	struct FAnimNode_RandomPlayer                 AnimGraphNode_RandomPlayer_2;                      // 0x70A8(0x0078)()
	struct FAnimNode_RandomPlayer                 AnimGraphNode_RandomPlayer_1;                      // 0x7120(0x0078)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x7198(0x0030)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x71C8(0x00B0)()
	struct FAnimNode_RandomPlayer                 AnimGraphNode_RandomPlayer;                        // 0x7278(0x0078)()
	struct FKawaiiPhysicsSettings                 KP_Robe_Default;                                   // 0x72F0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FKawaiiPhysicsSettings                 KP_Frill_Default;                                  // 0x7308(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FKawaiiPhysicsSettings                 KP_Monocle;                                        // 0x7320(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void AnimGraph(struct FPoseLink* AnimGraph_0);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Geppetto_AnimGraphNode_LayeredBoneBlend_EB5D1C8843F4094814BB9D9569A2C3EC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Geppetto_AnimGraphNode_LayeredBoneBlend_36F112354A4CF3B7FC40528C97548E8F();
	void ExecuteUbergraph_ABP_NPC_Geppetto(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_NPC_Geppetto_C">();
	}
	static class UABP_NPC_Geppetto_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_NPC_Geppetto_C>();
	}
};
static_assert(alignof(UABP_NPC_Geppetto_C) == 0x000010, "Wrong alignment on UABP_NPC_Geppetto_C");
static_assert(sizeof(UABP_NPC_Geppetto_C) == 0x007340, "Wrong size on UABP_NPC_Geppetto_C");
static_assert(offsetof(UABP_NPC_Geppetto_C, UberGraphFrame) == 0x0006F0, "Member 'UABP_NPC_Geppetto_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Geppetto_C, AnimGraphNode_Slot) == 0x0006F8, "Member 'UABP_NPC_Geppetto_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Geppetto_C, AnimGraphNode_BlendListByBool) == 0x000740, "Member 'UABP_NPC_Geppetto_C::AnimGraphNode_BlendListByBool' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Geppetto_C, AnimGraphNode_PoseSnapshot) == 0x0007E0, "Member 'UABP_NPC_Geppetto_C::AnimGraphNode_PoseSnapshot' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Geppetto_C, AnimGraphNode_BlendListByInt) == 0x000870, "Member 'UABP_NPC_Geppetto_C::AnimGraphNode_BlendListByInt' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Geppetto_C, AnimGraphNode_LocalToComponentSpace_1) == 0x000910, "Member 'UABP_NPC_Geppetto_C::AnimGraphNode_LocalToComponentSpace_1' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Geppetto_C, AnimGraphNode_LookAt) == 0x000930, "Member 'UABP_NPC_Geppetto_C::AnimGraphNode_LookAt' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Geppetto_C, AnimGraphNode_ComponentToLocalSpace_1) == 0x000BA0, "Member 'UABP_NPC_Geppetto_C::AnimGraphNode_ComponentToLocalSpace_1' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Geppetto_C, AnimGraphNode_UseCachedPose_6) == 0x000BC0, "Member 'UABP_NPC_Geppetto_C::AnimGraphNode_UseCachedPose_6' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Geppetto_C, AnimGraphNode_UseCachedPose_5) == 0x000BE8, "Member 'UABP_NPC_Geppetto_C::AnimGraphNode_UseCachedPose_5' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Geppetto_C, AnimGraphNode_UseCachedPose_4) == 0x000C10, "Member 'UABP_NPC_Geppetto_C::AnimGraphNode_UseCachedPose_4' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Geppetto_C, AnimGraphNode_SaveCachedPose_3) == 0x000C38, "Member 'UABP_NPC_Geppetto_C::AnimGraphNode_SaveCachedPose_3' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Geppetto_C, AnimGraphNode_ModifyBone) == 0x000D90, "Member 'UABP_NPC_Geppetto_C::AnimGraphNode_ModifyBone' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Geppetto_C, AnimGraphNode_KawaiiPhysics_9) == 0x000EA0, "Member 'UABP_NPC_Geppetto_C::AnimGraphNode_KawaiiPhysics_9' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Geppetto_C, AnimGraphNode_KawaiiPhysics_8) == 0x001740, "Member 'UABP_NPC_Geppetto_C::AnimGraphNode_KawaiiPhysics_8' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Geppetto_C, AnimGraphNode_KawaiiPhysics_7) == 0x001FE0, "Member 'UABP_NPC_Geppetto_C::AnimGraphNode_KawaiiPhysics_7' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Geppetto_C, AnimGraphNode_KawaiiPhysics_6) == 0x002880, "Member 'UABP_NPC_Geppetto_C::AnimGraphNode_KawaiiPhysics_6' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Geppetto_C, AnimGraphNode_KawaiiPhysics_5) == 0x003120, "Member 'UABP_NPC_Geppetto_C::AnimGraphNode_KawaiiPhysics_5' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Geppetto_C, AnimGraphNode_KawaiiPhysics_4) == 0x0039C0, "Member 'UABP_NPC_Geppetto_C::AnimGraphNode_KawaiiPhysics_4' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Geppetto_C, AnimGraphNode_KawaiiPhysics_3) == 0x004260, "Member 'UABP_NPC_Geppetto_C::AnimGraphNode_KawaiiPhysics_3' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Geppetto_C, AnimGraphNode_KawaiiPhysics_2) == 0x004B00, "Member 'UABP_NPC_Geppetto_C::AnimGraphNode_KawaiiPhysics_2' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Geppetto_C, AnimGraphNode_LocalToComponentSpace) == 0x0053A0, "Member 'UABP_NPC_Geppetto_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Geppetto_C, AnimGraphNode_ComponentToLocalSpace) == 0x0053C0, "Member 'UABP_NPC_Geppetto_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Geppetto_C, AnimGraphNode_KawaiiPhysics_1) == 0x0053E0, "Member 'UABP_NPC_Geppetto_C::AnimGraphNode_KawaiiPhysics_1' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Geppetto_C, AnimGraphNode_UseCachedPose_3) == 0x005C80, "Member 'UABP_NPC_Geppetto_C::AnimGraphNode_UseCachedPose_3' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Geppetto_C, AnimGraphNode_ApplyAdditive_2) == 0x005CA8, "Member 'UABP_NPC_Geppetto_C::AnimGraphNode_ApplyAdditive_2' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Geppetto_C, AnimGraphNode_SaveCachedPose_2) == 0x005D70, "Member 'UABP_NPC_Geppetto_C::AnimGraphNode_SaveCachedPose_2' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Geppetto_C, AnimGraphNode_LayeredBoneBlend_1) == 0x005EC8, "Member 'UABP_NPC_Geppetto_C::AnimGraphNode_LayeredBoneBlend_1' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Geppetto_C, AnimGraphNode_SaveCachedPose_1) == 0x005F88, "Member 'UABP_NPC_Geppetto_C::AnimGraphNode_SaveCachedPose_1' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Geppetto_C, AnimGraphNode_RandomPlayer_3) == 0x0060E0, "Member 'UABP_NPC_Geppetto_C::AnimGraphNode_RandomPlayer_3' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Geppetto_C, AnimGraphNode_SequencePlayer_1) == 0x006158, "Member 'UABP_NPC_Geppetto_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Geppetto_C, AnimGraphNode_StateResult_2) == 0x0061D8, "Member 'UABP_NPC_Geppetto_C::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Geppetto_C, AnimGraphNode_StateMachine_1) == 0x006208, "Member 'UABP_NPC_Geppetto_C::AnimGraphNode_StateMachine_1' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Geppetto_C, AnimGraphNode_UseCachedPose_2) == 0x0062B8, "Member 'UABP_NPC_Geppetto_C::AnimGraphNode_UseCachedPose_2' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Geppetto_C, AnimGraphNode_KawaiiPhysics) == 0x0062E0, "Member 'UABP_NPC_Geppetto_C::AnimGraphNode_KawaiiPhysics' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Geppetto_C, AnimGraphNode_SaveCachedPose) == 0x006B80, "Member 'UABP_NPC_Geppetto_C::AnimGraphNode_SaveCachedPose' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Geppetto_C, AnimGraphNode_Root) == 0x006CD8, "Member 'UABP_NPC_Geppetto_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Geppetto_C, AnimGraphNode_TransitionResult_1) == 0x006D08, "Member 'UABP_NPC_Geppetto_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Geppetto_C, AnimGraphNode_TransitionResult) == 0x006D30, "Member 'UABP_NPC_Geppetto_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Geppetto_C, AnimGraphNode_SequencePlayer) == 0x006D58, "Member 'UABP_NPC_Geppetto_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Geppetto_C, AnimGraphNode_ApplyAdditive_1) == 0x006DD8, "Member 'UABP_NPC_Geppetto_C::AnimGraphNode_ApplyAdditive_1' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Geppetto_C, AnimGraphNode_UseCachedPose_1) == 0x006EA0, "Member 'UABP_NPC_Geppetto_C::AnimGraphNode_UseCachedPose_1' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Geppetto_C, AnimGraphNode_StateResult_1) == 0x006EC8, "Member 'UABP_NPC_Geppetto_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Geppetto_C, AnimGraphNode_ApplyAdditive) == 0x006EF8, "Member 'UABP_NPC_Geppetto_C::AnimGraphNode_ApplyAdditive' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Geppetto_C, AnimGraphNode_UseCachedPose) == 0x006FC0, "Member 'UABP_NPC_Geppetto_C::AnimGraphNode_UseCachedPose' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Geppetto_C, AnimGraphNode_LayeredBoneBlend) == 0x006FE8, "Member 'UABP_NPC_Geppetto_C::AnimGraphNode_LayeredBoneBlend' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Geppetto_C, AnimGraphNode_RandomPlayer_2) == 0x0070A8, "Member 'UABP_NPC_Geppetto_C::AnimGraphNode_RandomPlayer_2' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Geppetto_C, AnimGraphNode_RandomPlayer_1) == 0x007120, "Member 'UABP_NPC_Geppetto_C::AnimGraphNode_RandomPlayer_1' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Geppetto_C, AnimGraphNode_StateResult) == 0x007198, "Member 'UABP_NPC_Geppetto_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Geppetto_C, AnimGraphNode_StateMachine) == 0x0071C8, "Member 'UABP_NPC_Geppetto_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Geppetto_C, AnimGraphNode_RandomPlayer) == 0x007278, "Member 'UABP_NPC_Geppetto_C::AnimGraphNode_RandomPlayer' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Geppetto_C, KP_Robe_Default) == 0x0072F0, "Member 'UABP_NPC_Geppetto_C::KP_Robe_Default' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Geppetto_C, KP_Frill_Default) == 0x007308, "Member 'UABP_NPC_Geppetto_C::KP_Frill_Default' has a wrong offset!");
static_assert(offsetof(UABP_NPC_Geppetto_C, KP_Monocle) == 0x007320, "Member 'UABP_NPC_Geppetto_C::KP_Monocle' has a wrong offset!");

}
