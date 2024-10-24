#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PABP_Pino_03_Body

#include "Basic.hpp"

#include "AnimGraphRuntime_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "KawaiiPhysics_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass PABP_Pino_03_Body.PABP_Pino_03_Body_C
// 0x254C0 (0x25780 - 0x02C0)
class UPABP_Pino_03_Body_C final : public UAnimInstance
{
public:
	uint8                                         Pad_2B8[0x8];                                      // 0x02B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x02C8(0x0030)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose;                     // 0x02F8(0x0118)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_67;                    // 0x0410(0x08A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_66;                    // 0x0CB0(0x08A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_65;                    // 0x1550(0x08A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_64;                    // 0x1DF0(0x08A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_63;                    // 0x2690(0x08A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_62;                    // 0x2F30(0x08A0)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x37D0(0x0020)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_61;                    // 0x37F0(0x08A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_60;                    // 0x4090(0x08A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_59;                    // 0x4930(0x08A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_58;                    // 0x51D0(0x08A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_57;                    // 0x5A70(0x08A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_56;                    // 0x6310(0x08A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_55;                    // 0x6BB0(0x08A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_54;                    // 0x7450(0x08A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_53;                    // 0x7CF0(0x08A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_52;                    // 0x8590(0x08A0)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x8E30(0x0020)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_51;                    // 0x8E50(0x08A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_50;                    // 0x96F0(0x08A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_49;                    // 0x9F90(0x08A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_48;                    // 0xA830(0x08A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_47;                    // 0xB0D0(0x08A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_46;                    // 0xB970(0x08A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_45;                    // 0xC210(0x08A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_44;                    // 0xCAB0(0x08A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_43;                    // 0xD350(0x08A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_42;                    // 0xDBF0(0x08A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_41;                    // 0xE490(0x08A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_40;                    // 0xED30(0x08A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_39;                    // 0xF5D0(0x08A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_38;                    // 0xFE70(0x08A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_37;                    // 0x10710(0x08A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_36;                    // 0x10FB0(0x08A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_35;                    // 0x11850(0x08A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_34;                    // 0x120F0(0x08A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_33;                    // 0x12990(0x08A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_32;                    // 0x13230(0x08A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_31;                    // 0x13AD0(0x08A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_30;                    // 0x14370(0x08A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_29;                    // 0x14C10(0x08A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_28;                    // 0x154B0(0x08A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_27;                    // 0x15D50(0x08A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_26;                    // 0x165F0(0x08A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_25;                    // 0x16E90(0x08A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_24;                    // 0x17730(0x08A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_23;                    // 0x17FD0(0x08A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_22;                    // 0x18870(0x08A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_21;                    // 0x19110(0x08A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_20;                    // 0x199B0(0x08A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_19;                    // 0x1A250(0x08A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_18;                    // 0x1AAF0(0x08A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_17;                    // 0x1B390(0x08A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_16;                    // 0x1BC30(0x08A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_15;                    // 0x1C4D0(0x08A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_14;                    // 0x1CD70(0x08A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_13;                    // 0x1D610(0x08A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_12;                    // 0x1DEB0(0x08A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_11;                    // 0x1E750(0x08A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_10;                    // 0x1EFF0(0x08A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_9;                     // 0x1F890(0x08A0)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_6;                        // 0x20130(0x0108)()
	uint8                                         Pad_20238[0x8];                                    // 0x20238(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_8;                     // 0x20240(0x08A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_7;                     // 0x20AE0(0x08A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_6;                     // 0x21380(0x08A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_5;                     // 0x21C20(0x08A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_4;                     // 0x224C0(0x08A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_3;                     // 0x22D60(0x08A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_2;                     // 0x23600(0x08A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics_1;                     // 0x23EA0(0x08A0)()
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics;                       // 0x24740(0x08A0)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_5;                        // 0x24FE0(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_4;                        // 0x250E8(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_3;                        // 0x251F0(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_2;                        // 0x252F8(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_1;                        // 0x25400(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;                          // 0x25508(0x0108)()
	struct FKawaiiPhysicsSettings                 KP_Robe_Default;                                   // 0x25610(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FKawaiiPhysicsSettings                 KP_ACC_Default;                                    // 0x25628(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FKawaiiPhysicsSettings                 KP_Frill_Default;                                  // 0x25640(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FKawaiiPhysicsSettings                 KP_Frill_Neck;                                     // 0x25658(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FKawaiiPhysicsSettings                 KP_Helmet_Cat;                                     // 0x25670(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FKawaiiPhysicsSettings                 KP_Helmet_Donkey;                                  // 0x25688(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FKawaiiPhysicsSettings                 KP_Helmet_WhiteLady;                               // 0x256A0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FKawaiiPhysicsSettings                 KP_Helmet_WhiteLady_02;                            // 0x256B8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FKawaiiPhysicsSettings                 KP_Helmet_Weasel_01;                               // 0x256D0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FKawaiiPhysicsSettings                 KP_Helmet_Weasel_02;                               // 0x256E8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FKawaiiPhysicsSettings                 KP_Helmet_FestivalLeader;                          // 0x25700(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FKawaiiPhysicsSettings                 KP_Robe_F;                                         // 0x25718(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FKawaiiPhysicsSettings                 KP_Helmet_Alidoro_Rope;                            // 0x25730(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FKawaiiPhysicsSettings                 KP_Helmet_Alidoro;                                 // 0x25748(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FKawaiiPhysicsSettings                 KP_GuanYu_helmet;                                  // 0x25760(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void ExecuteUbergraph_PABP_Pino_03_Body(int32 EntryPoint);
	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PABP_Pino_03_Body_C">();
	}
	static class UPABP_Pino_03_Body_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPABP_Pino_03_Body_C>();
	}
};
static_assert(alignof(UPABP_Pino_03_Body_C) == 0x000010, "Wrong alignment on UPABP_Pino_03_Body_C");
static_assert(sizeof(UPABP_Pino_03_Body_C) == 0x025780, "Wrong size on UPABP_Pino_03_Body_C");
static_assert(offsetof(UPABP_Pino_03_Body_C, UberGraphFrame) == 0x0002C0, "Member 'UPABP_Pino_03_Body_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPABP_Pino_03_Body_C, AnimGraphNode_Root) == 0x0002C8, "Member 'UPABP_Pino_03_Body_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UPABP_Pino_03_Body_C, AnimGraphNode_LinkedInputPose) == 0x0002F8, "Member 'UPABP_Pino_03_Body_C::AnimGraphNode_LinkedInputPose' has a wrong offset!");
static_assert(offsetof(UPABP_Pino_03_Body_C, AnimGraphNode_KawaiiPhysics_67) == 0x000410, "Member 'UPABP_Pino_03_Body_C::AnimGraphNode_KawaiiPhysics_67' has a wrong offset!");
static_assert(offsetof(UPABP_Pino_03_Body_C, AnimGraphNode_KawaiiPhysics_66) == 0x000CB0, "Member 'UPABP_Pino_03_Body_C::AnimGraphNode_KawaiiPhysics_66' has a wrong offset!");
static_assert(offsetof(UPABP_Pino_03_Body_C, AnimGraphNode_KawaiiPhysics_65) == 0x001550, "Member 'UPABP_Pino_03_Body_C::AnimGraphNode_KawaiiPhysics_65' has a wrong offset!");
static_assert(offsetof(UPABP_Pino_03_Body_C, AnimGraphNode_KawaiiPhysics_64) == 0x001DF0, "Member 'UPABP_Pino_03_Body_C::AnimGraphNode_KawaiiPhysics_64' has a wrong offset!");
static_assert(offsetof(UPABP_Pino_03_Body_C, AnimGraphNode_KawaiiPhysics_63) == 0x002690, "Member 'UPABP_Pino_03_Body_C::AnimGraphNode_KawaiiPhysics_63' has a wrong offset!");
static_assert(offsetof(UPABP_Pino_03_Body_C, AnimGraphNode_KawaiiPhysics_62) == 0x002F30, "Member 'UPABP_Pino_03_Body_C::AnimGraphNode_KawaiiPhysics_62' has a wrong offset!");
static_assert(offsetof(UPABP_Pino_03_Body_C, AnimGraphNode_LocalToComponentSpace) == 0x0037D0, "Member 'UPABP_Pino_03_Body_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UPABP_Pino_03_Body_C, AnimGraphNode_KawaiiPhysics_61) == 0x0037F0, "Member 'UPABP_Pino_03_Body_C::AnimGraphNode_KawaiiPhysics_61' has a wrong offset!");
static_assert(offsetof(UPABP_Pino_03_Body_C, AnimGraphNode_KawaiiPhysics_60) == 0x004090, "Member 'UPABP_Pino_03_Body_C::AnimGraphNode_KawaiiPhysics_60' has a wrong offset!");
static_assert(offsetof(UPABP_Pino_03_Body_C, AnimGraphNode_KawaiiPhysics_59) == 0x004930, "Member 'UPABP_Pino_03_Body_C::AnimGraphNode_KawaiiPhysics_59' has a wrong offset!");
static_assert(offsetof(UPABP_Pino_03_Body_C, AnimGraphNode_KawaiiPhysics_58) == 0x0051D0, "Member 'UPABP_Pino_03_Body_C::AnimGraphNode_KawaiiPhysics_58' has a wrong offset!");
static_assert(offsetof(UPABP_Pino_03_Body_C, AnimGraphNode_KawaiiPhysics_57) == 0x005A70, "Member 'UPABP_Pino_03_Body_C::AnimGraphNode_KawaiiPhysics_57' has a wrong offset!");
static_assert(offsetof(UPABP_Pino_03_Body_C, AnimGraphNode_KawaiiPhysics_56) == 0x006310, "Member 'UPABP_Pino_03_Body_C::AnimGraphNode_KawaiiPhysics_56' has a wrong offset!");
static_assert(offsetof(UPABP_Pino_03_Body_C, AnimGraphNode_KawaiiPhysics_55) == 0x006BB0, "Member 'UPABP_Pino_03_Body_C::AnimGraphNode_KawaiiPhysics_55' has a wrong offset!");
static_assert(offsetof(UPABP_Pino_03_Body_C, AnimGraphNode_KawaiiPhysics_54) == 0x007450, "Member 'UPABP_Pino_03_Body_C::AnimGraphNode_KawaiiPhysics_54' has a wrong offset!");
static_assert(offsetof(UPABP_Pino_03_Body_C, AnimGraphNode_KawaiiPhysics_53) == 0x007CF0, "Member 'UPABP_Pino_03_Body_C::AnimGraphNode_KawaiiPhysics_53' has a wrong offset!");
static_assert(offsetof(UPABP_Pino_03_Body_C, AnimGraphNode_KawaiiPhysics_52) == 0x008590, "Member 'UPABP_Pino_03_Body_C::AnimGraphNode_KawaiiPhysics_52' has a wrong offset!");
static_assert(offsetof(UPABP_Pino_03_Body_C, AnimGraphNode_ComponentToLocalSpace) == 0x008E30, "Member 'UPABP_Pino_03_Body_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UPABP_Pino_03_Body_C, AnimGraphNode_KawaiiPhysics_51) == 0x008E50, "Member 'UPABP_Pino_03_Body_C::AnimGraphNode_KawaiiPhysics_51' has a wrong offset!");
static_assert(offsetof(UPABP_Pino_03_Body_C, AnimGraphNode_KawaiiPhysics_50) == 0x0096F0, "Member 'UPABP_Pino_03_Body_C::AnimGraphNode_KawaiiPhysics_50' has a wrong offset!");
static_assert(offsetof(UPABP_Pino_03_Body_C, AnimGraphNode_KawaiiPhysics_49) == 0x009F90, "Member 'UPABP_Pino_03_Body_C::AnimGraphNode_KawaiiPhysics_49' has a wrong offset!");
static_assert(offsetof(UPABP_Pino_03_Body_C, AnimGraphNode_KawaiiPhysics_48) == 0x00A830, "Member 'UPABP_Pino_03_Body_C::AnimGraphNode_KawaiiPhysics_48' has a wrong offset!");
static_assert(offsetof(UPABP_Pino_03_Body_C, AnimGraphNode_KawaiiPhysics_47) == 0x00B0D0, "Member 'UPABP_Pino_03_Body_C::AnimGraphNode_KawaiiPhysics_47' has a wrong offset!");
static_assert(offsetof(UPABP_Pino_03_Body_C, AnimGraphNode_KawaiiPhysics_46) == 0x00B970, "Member 'UPABP_Pino_03_Body_C::AnimGraphNode_KawaiiPhysics_46' has a wrong offset!");
static_assert(offsetof(UPABP_Pino_03_Body_C, AnimGraphNode_KawaiiPhysics_45) == 0x00C210, "Member 'UPABP_Pino_03_Body_C::AnimGraphNode_KawaiiPhysics_45' has a wrong offset!");
static_assert(offsetof(UPABP_Pino_03_Body_C, AnimGraphNode_KawaiiPhysics_44) == 0x00CAB0, "Member 'UPABP_Pino_03_Body_C::AnimGraphNode_KawaiiPhysics_44' has a wrong offset!");
static_assert(offsetof(UPABP_Pino_03_Body_C, AnimGraphNode_KawaiiPhysics_43) == 0x00D350, "Member 'UPABP_Pino_03_Body_C::AnimGraphNode_KawaiiPhysics_43' has a wrong offset!");
static_assert(offsetof(UPABP_Pino_03_Body_C, AnimGraphNode_KawaiiPhysics_42) == 0x00DBF0, "Member 'UPABP_Pino_03_Body_C::AnimGraphNode_KawaiiPhysics_42' has a wrong offset!");
static_assert(offsetof(UPABP_Pino_03_Body_C, AnimGraphNode_KawaiiPhysics_41) == 0x00E490, "Member 'UPABP_Pino_03_Body_C::AnimGraphNode_KawaiiPhysics_41' has a wrong offset!");
static_assert(offsetof(UPABP_Pino_03_Body_C, AnimGraphNode_KawaiiPhysics_40) == 0x00ED30, "Member 'UPABP_Pino_03_Body_C::AnimGraphNode_KawaiiPhysics_40' has a wrong offset!");
static_assert(offsetof(UPABP_Pino_03_Body_C, AnimGraphNode_KawaiiPhysics_39) == 0x00F5D0, "Member 'UPABP_Pino_03_Body_C::AnimGraphNode_KawaiiPhysics_39' has a wrong offset!");
static_assert(offsetof(UPABP_Pino_03_Body_C, AnimGraphNode_KawaiiPhysics_38) == 0x00FE70, "Member 'UPABP_Pino_03_Body_C::AnimGraphNode_KawaiiPhysics_38' has a wrong offset!");
static_assert(offsetof(UPABP_Pino_03_Body_C, AnimGraphNode_KawaiiPhysics_37) == 0x010710, "Member 'UPABP_Pino_03_Body_C::AnimGraphNode_KawaiiPhysics_37' has a wrong offset!");
static_assert(offsetof(UPABP_Pino_03_Body_C, AnimGraphNode_KawaiiPhysics_36) == 0x010FB0, "Member 'UPABP_Pino_03_Body_C::AnimGraphNode_KawaiiPhysics_36' has a wrong offset!");
static_assert(offsetof(UPABP_Pino_03_Body_C, AnimGraphNode_KawaiiPhysics_35) == 0x011850, "Member 'UPABP_Pino_03_Body_C::AnimGraphNode_KawaiiPhysics_35' has a wrong offset!");
static_assert(offsetof(UPABP_Pino_03_Body_C, AnimGraphNode_KawaiiPhysics_34) == 0x0120F0, "Member 'UPABP_Pino_03_Body_C::AnimGraphNode_KawaiiPhysics_34' has a wrong offset!");
static_assert(offsetof(UPABP_Pino_03_Body_C, AnimGraphNode_KawaiiPhysics_33) == 0x012990, "Member 'UPABP_Pino_03_Body_C::AnimGraphNode_KawaiiPhysics_33' has a wrong offset!");
static_assert(offsetof(UPABP_Pino_03_Body_C, AnimGraphNode_KawaiiPhysics_32) == 0x013230, "Member 'UPABP_Pino_03_Body_C::AnimGraphNode_KawaiiPhysics_32' has a wrong offset!");
static_assert(offsetof(UPABP_Pino_03_Body_C, AnimGraphNode_KawaiiPhysics_31) == 0x013AD0, "Member 'UPABP_Pino_03_Body_C::AnimGraphNode_KawaiiPhysics_31' has a wrong offset!");
static_assert(offsetof(UPABP_Pino_03_Body_C, AnimGraphNode_KawaiiPhysics_30) == 0x014370, "Member 'UPABP_Pino_03_Body_C::AnimGraphNode_KawaiiPhysics_30' has a wrong offset!");
static_assert(offsetof(UPABP_Pino_03_Body_C, AnimGraphNode_KawaiiPhysics_29) == 0x014C10, "Member 'UPABP_Pino_03_Body_C::AnimGraphNode_KawaiiPhysics_29' has a wrong offset!");
static_assert(offsetof(UPABP_Pino_03_Body_C, AnimGraphNode_KawaiiPhysics_28) == 0x0154B0, "Member 'UPABP_Pino_03_Body_C::AnimGraphNode_KawaiiPhysics_28' has a wrong offset!");
static_assert(offsetof(UPABP_Pino_03_Body_C, AnimGraphNode_KawaiiPhysics_27) == 0x015D50, "Member 'UPABP_Pino_03_Body_C::AnimGraphNode_KawaiiPhysics_27' has a wrong offset!");
static_assert(offsetof(UPABP_Pino_03_Body_C, AnimGraphNode_KawaiiPhysics_26) == 0x0165F0, "Member 'UPABP_Pino_03_Body_C::AnimGraphNode_KawaiiPhysics_26' has a wrong offset!");
static_assert(offsetof(UPABP_Pino_03_Body_C, AnimGraphNode_KawaiiPhysics_25) == 0x016E90, "Member 'UPABP_Pino_03_Body_C::AnimGraphNode_KawaiiPhysics_25' has a wrong offset!");
static_assert(offsetof(UPABP_Pino_03_Body_C, AnimGraphNode_KawaiiPhysics_24) == 0x017730, "Member 'UPABP_Pino_03_Body_C::AnimGraphNode_KawaiiPhysics_24' has a wrong offset!");
static_assert(offsetof(UPABP_Pino_03_Body_C, AnimGraphNode_KawaiiPhysics_23) == 0x017FD0, "Member 'UPABP_Pino_03_Body_C::AnimGraphNode_KawaiiPhysics_23' has a wrong offset!");
static_assert(offsetof(UPABP_Pino_03_Body_C, AnimGraphNode_KawaiiPhysics_22) == 0x018870, "Member 'UPABP_Pino_03_Body_C::AnimGraphNode_KawaiiPhysics_22' has a wrong offset!");
static_assert(offsetof(UPABP_Pino_03_Body_C, AnimGraphNode_KawaiiPhysics_21) == 0x019110, "Member 'UPABP_Pino_03_Body_C::AnimGraphNode_KawaiiPhysics_21' has a wrong offset!");
static_assert(offsetof(UPABP_Pino_03_Body_C, AnimGraphNode_KawaiiPhysics_20) == 0x0199B0, "Member 'UPABP_Pino_03_Body_C::AnimGraphNode_KawaiiPhysics_20' has a wrong offset!");
static_assert(offsetof(UPABP_Pino_03_Body_C, AnimGraphNode_KawaiiPhysics_19) == 0x01A250, "Member 'UPABP_Pino_03_Body_C::AnimGraphNode_KawaiiPhysics_19' has a wrong offset!");
static_assert(offsetof(UPABP_Pino_03_Body_C, AnimGraphNode_KawaiiPhysics_18) == 0x01AAF0, "Member 'UPABP_Pino_03_Body_C::AnimGraphNode_KawaiiPhysics_18' has a wrong offset!");
static_assert(offsetof(UPABP_Pino_03_Body_C, AnimGraphNode_KawaiiPhysics_17) == 0x01B390, "Member 'UPABP_Pino_03_Body_C::AnimGraphNode_KawaiiPhysics_17' has a wrong offset!");
static_assert(offsetof(UPABP_Pino_03_Body_C, AnimGraphNode_KawaiiPhysics_16) == 0x01BC30, "Member 'UPABP_Pino_03_Body_C::AnimGraphNode_KawaiiPhysics_16' has a wrong offset!");
static_assert(offsetof(UPABP_Pino_03_Body_C, AnimGraphNode_KawaiiPhysics_15) == 0x01C4D0, "Member 'UPABP_Pino_03_Body_C::AnimGraphNode_KawaiiPhysics_15' has a wrong offset!");
static_assert(offsetof(UPABP_Pino_03_Body_C, AnimGraphNode_KawaiiPhysics_14) == 0x01CD70, "Member 'UPABP_Pino_03_Body_C::AnimGraphNode_KawaiiPhysics_14' has a wrong offset!");
static_assert(offsetof(UPABP_Pino_03_Body_C, AnimGraphNode_KawaiiPhysics_13) == 0x01D610, "Member 'UPABP_Pino_03_Body_C::AnimGraphNode_KawaiiPhysics_13' has a wrong offset!");
static_assert(offsetof(UPABP_Pino_03_Body_C, AnimGraphNode_KawaiiPhysics_12) == 0x01DEB0, "Member 'UPABP_Pino_03_Body_C::AnimGraphNode_KawaiiPhysics_12' has a wrong offset!");
static_assert(offsetof(UPABP_Pino_03_Body_C, AnimGraphNode_KawaiiPhysics_11) == 0x01E750, "Member 'UPABP_Pino_03_Body_C::AnimGraphNode_KawaiiPhysics_11' has a wrong offset!");
static_assert(offsetof(UPABP_Pino_03_Body_C, AnimGraphNode_KawaiiPhysics_10) == 0x01EFF0, "Member 'UPABP_Pino_03_Body_C::AnimGraphNode_KawaiiPhysics_10' has a wrong offset!");
static_assert(offsetof(UPABP_Pino_03_Body_C, AnimGraphNode_KawaiiPhysics_9) == 0x01F890, "Member 'UPABP_Pino_03_Body_C::AnimGraphNode_KawaiiPhysics_9' has a wrong offset!");
static_assert(offsetof(UPABP_Pino_03_Body_C, AnimGraphNode_ModifyBone_6) == 0x020130, "Member 'UPABP_Pino_03_Body_C::AnimGraphNode_ModifyBone_6' has a wrong offset!");
static_assert(offsetof(UPABP_Pino_03_Body_C, AnimGraphNode_KawaiiPhysics_8) == 0x020240, "Member 'UPABP_Pino_03_Body_C::AnimGraphNode_KawaiiPhysics_8' has a wrong offset!");
static_assert(offsetof(UPABP_Pino_03_Body_C, AnimGraphNode_KawaiiPhysics_7) == 0x020AE0, "Member 'UPABP_Pino_03_Body_C::AnimGraphNode_KawaiiPhysics_7' has a wrong offset!");
static_assert(offsetof(UPABP_Pino_03_Body_C, AnimGraphNode_KawaiiPhysics_6) == 0x021380, "Member 'UPABP_Pino_03_Body_C::AnimGraphNode_KawaiiPhysics_6' has a wrong offset!");
static_assert(offsetof(UPABP_Pino_03_Body_C, AnimGraphNode_KawaiiPhysics_5) == 0x021C20, "Member 'UPABP_Pino_03_Body_C::AnimGraphNode_KawaiiPhysics_5' has a wrong offset!");
static_assert(offsetof(UPABP_Pino_03_Body_C, AnimGraphNode_KawaiiPhysics_4) == 0x0224C0, "Member 'UPABP_Pino_03_Body_C::AnimGraphNode_KawaiiPhysics_4' has a wrong offset!");
static_assert(offsetof(UPABP_Pino_03_Body_C, AnimGraphNode_KawaiiPhysics_3) == 0x022D60, "Member 'UPABP_Pino_03_Body_C::AnimGraphNode_KawaiiPhysics_3' has a wrong offset!");
static_assert(offsetof(UPABP_Pino_03_Body_C, AnimGraphNode_KawaiiPhysics_2) == 0x023600, "Member 'UPABP_Pino_03_Body_C::AnimGraphNode_KawaiiPhysics_2' has a wrong offset!");
static_assert(offsetof(UPABP_Pino_03_Body_C, AnimGraphNode_KawaiiPhysics_1) == 0x023EA0, "Member 'UPABP_Pino_03_Body_C::AnimGraphNode_KawaiiPhysics_1' has a wrong offset!");
static_assert(offsetof(UPABP_Pino_03_Body_C, AnimGraphNode_KawaiiPhysics) == 0x024740, "Member 'UPABP_Pino_03_Body_C::AnimGraphNode_KawaiiPhysics' has a wrong offset!");
static_assert(offsetof(UPABP_Pino_03_Body_C, AnimGraphNode_ModifyBone_5) == 0x024FE0, "Member 'UPABP_Pino_03_Body_C::AnimGraphNode_ModifyBone_5' has a wrong offset!");
static_assert(offsetof(UPABP_Pino_03_Body_C, AnimGraphNode_ModifyBone_4) == 0x0250E8, "Member 'UPABP_Pino_03_Body_C::AnimGraphNode_ModifyBone_4' has a wrong offset!");
static_assert(offsetof(UPABP_Pino_03_Body_C, AnimGraphNode_ModifyBone_3) == 0x0251F0, "Member 'UPABP_Pino_03_Body_C::AnimGraphNode_ModifyBone_3' has a wrong offset!");
static_assert(offsetof(UPABP_Pino_03_Body_C, AnimGraphNode_ModifyBone_2) == 0x0252F8, "Member 'UPABP_Pino_03_Body_C::AnimGraphNode_ModifyBone_2' has a wrong offset!");
static_assert(offsetof(UPABP_Pino_03_Body_C, AnimGraphNode_ModifyBone_1) == 0x025400, "Member 'UPABP_Pino_03_Body_C::AnimGraphNode_ModifyBone_1' has a wrong offset!");
static_assert(offsetof(UPABP_Pino_03_Body_C, AnimGraphNode_ModifyBone) == 0x025508, "Member 'UPABP_Pino_03_Body_C::AnimGraphNode_ModifyBone' has a wrong offset!");
static_assert(offsetof(UPABP_Pino_03_Body_C, KP_Robe_Default) == 0x025610, "Member 'UPABP_Pino_03_Body_C::KP_Robe_Default' has a wrong offset!");
static_assert(offsetof(UPABP_Pino_03_Body_C, KP_ACC_Default) == 0x025628, "Member 'UPABP_Pino_03_Body_C::KP_ACC_Default' has a wrong offset!");
static_assert(offsetof(UPABP_Pino_03_Body_C, KP_Frill_Default) == 0x025640, "Member 'UPABP_Pino_03_Body_C::KP_Frill_Default' has a wrong offset!");
static_assert(offsetof(UPABP_Pino_03_Body_C, KP_Frill_Neck) == 0x025658, "Member 'UPABP_Pino_03_Body_C::KP_Frill_Neck' has a wrong offset!");
static_assert(offsetof(UPABP_Pino_03_Body_C, KP_Helmet_Cat) == 0x025670, "Member 'UPABP_Pino_03_Body_C::KP_Helmet_Cat' has a wrong offset!");
static_assert(offsetof(UPABP_Pino_03_Body_C, KP_Helmet_Donkey) == 0x025688, "Member 'UPABP_Pino_03_Body_C::KP_Helmet_Donkey' has a wrong offset!");
static_assert(offsetof(UPABP_Pino_03_Body_C, KP_Helmet_WhiteLady) == 0x0256A0, "Member 'UPABP_Pino_03_Body_C::KP_Helmet_WhiteLady' has a wrong offset!");
static_assert(offsetof(UPABP_Pino_03_Body_C, KP_Helmet_WhiteLady_02) == 0x0256B8, "Member 'UPABP_Pino_03_Body_C::KP_Helmet_WhiteLady_02' has a wrong offset!");
static_assert(offsetof(UPABP_Pino_03_Body_C, KP_Helmet_Weasel_01) == 0x0256D0, "Member 'UPABP_Pino_03_Body_C::KP_Helmet_Weasel_01' has a wrong offset!");
static_assert(offsetof(UPABP_Pino_03_Body_C, KP_Helmet_Weasel_02) == 0x0256E8, "Member 'UPABP_Pino_03_Body_C::KP_Helmet_Weasel_02' has a wrong offset!");
static_assert(offsetof(UPABP_Pino_03_Body_C, KP_Helmet_FestivalLeader) == 0x025700, "Member 'UPABP_Pino_03_Body_C::KP_Helmet_FestivalLeader' has a wrong offset!");
static_assert(offsetof(UPABP_Pino_03_Body_C, KP_Robe_F) == 0x025718, "Member 'UPABP_Pino_03_Body_C::KP_Robe_F' has a wrong offset!");
static_assert(offsetof(UPABP_Pino_03_Body_C, KP_Helmet_Alidoro_Rope) == 0x025730, "Member 'UPABP_Pino_03_Body_C::KP_Helmet_Alidoro_Rope' has a wrong offset!");
static_assert(offsetof(UPABP_Pino_03_Body_C, KP_Helmet_Alidoro) == 0x025748, "Member 'UPABP_Pino_03_Body_C::KP_Helmet_Alidoro' has a wrong offset!");
static_assert(offsetof(UPABP_Pino_03_Body_C, KP_GuanYu_helmet) == 0x025760, "Member 'UPABP_Pino_03_Body_C::KP_GuanYu_helmet' has a wrong offset!");

}

