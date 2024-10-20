#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Projectile_Design_SoldierFlameThrower

#include "Basic.hpp"

#include "ProjectP_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_Projectile_Design_SoldierFlameThrower.BP_Projectile_Design_SoldierFlameThrower_C.CheckUseSubstituteSkillHit
// 0x01F0 (0x01F0 - 0x0000)
struct BP_Projectile_Design_SoldierFlameThrower_C_CheckUseSubstituteSkillHit final
{
public:
	struct FLProjectileHitInfo                    ProjectileHitInfo;                                 // 0x0000(0x0090)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	struct FHitResult                             HitResult;                                         // 0x0090(0x0088)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class FName                                   ReturnValue;                                       // 0x0118(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x0121(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x0122(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_123[0x1];                                      // 0x0123(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x0124(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x012C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x0138(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x0144(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x0150(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15C[0x4];                                      // 0x015C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0170(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0178(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0180(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x0184(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x0188(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x018C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x0198(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_CheckUseSubstituteSkillHit_ReturnValue;   // 0x01A4(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1AC[0x4];                                      // 0x01AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ALCharacter*                            K2Node_DynamicCast_AsLCharacter;                   // 0x01B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1B9[0x3];                                      // 0x01B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Temp_name_Variable;                                // 0x01BC(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C4[0x4];                                      // 0x01C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ULActMgrComponent*                      CallFunc_GetActMgrComponent_ReturnValue;           // 0x01C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D1[0x3];                                      // 0x01D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Temp_name_Variable_1;                              // 0x01D4(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_MakeLiteralName_ReturnValue;              // 0x01DC(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindActionState_ReturnValue;              // 0x01E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1E5[0x3];                                      // 0x01E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_Select_Default;                             // 0x01E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Projectile_Design_SoldierFlameThrower_C_CheckUseSubstituteSkillHit) == 0x000010, "Wrong alignment on BP_Projectile_Design_SoldierFlameThrower_C_CheckUseSubstituteSkillHit");
static_assert(sizeof(BP_Projectile_Design_SoldierFlameThrower_C_CheckUseSubstituteSkillHit) == 0x0001F0, "Wrong size on BP_Projectile_Design_SoldierFlameThrower_C_CheckUseSubstituteSkillHit");
static_assert(offsetof(BP_Projectile_Design_SoldierFlameThrower_C_CheckUseSubstituteSkillHit, ProjectileHitInfo) == 0x000000, "Member 'BP_Projectile_Design_SoldierFlameThrower_C_CheckUseSubstituteSkillHit::ProjectileHitInfo' has a wrong offset!");
static_assert(offsetof(BP_Projectile_Design_SoldierFlameThrower_C_CheckUseSubstituteSkillHit, HitResult) == 0x000090, "Member 'BP_Projectile_Design_SoldierFlameThrower_C_CheckUseSubstituteSkillHit::HitResult' has a wrong offset!");
static_assert(offsetof(BP_Projectile_Design_SoldierFlameThrower_C_CheckUseSubstituteSkillHit, ReturnValue) == 0x000118, "Member 'BP_Projectile_Design_SoldierFlameThrower_C_CheckUseSubstituteSkillHit::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Projectile_Design_SoldierFlameThrower_C_CheckUseSubstituteSkillHit, Temp_bool_Variable) == 0x000120, "Member 'BP_Projectile_Design_SoldierFlameThrower_C_CheckUseSubstituteSkillHit::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_Projectile_Design_SoldierFlameThrower_C_CheckUseSubstituteSkillHit, CallFunc_BreakHitResult_bBlockingHit) == 0x000121, "Member 'BP_Projectile_Design_SoldierFlameThrower_C_CheckUseSubstituteSkillHit::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(BP_Projectile_Design_SoldierFlameThrower_C_CheckUseSubstituteSkillHit, CallFunc_BreakHitResult_bInitialOverlap) == 0x000122, "Member 'BP_Projectile_Design_SoldierFlameThrower_C_CheckUseSubstituteSkillHit::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(BP_Projectile_Design_SoldierFlameThrower_C_CheckUseSubstituteSkillHit, CallFunc_BreakHitResult_Time) == 0x000124, "Member 'BP_Projectile_Design_SoldierFlameThrower_C_CheckUseSubstituteSkillHit::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(BP_Projectile_Design_SoldierFlameThrower_C_CheckUseSubstituteSkillHit, CallFunc_BreakHitResult_Distance) == 0x000128, "Member 'BP_Projectile_Design_SoldierFlameThrower_C_CheckUseSubstituteSkillHit::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(BP_Projectile_Design_SoldierFlameThrower_C_CheckUseSubstituteSkillHit, CallFunc_BreakHitResult_Location) == 0x00012C, "Member 'BP_Projectile_Design_SoldierFlameThrower_C_CheckUseSubstituteSkillHit::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(BP_Projectile_Design_SoldierFlameThrower_C_CheckUseSubstituteSkillHit, CallFunc_BreakHitResult_ImpactPoint) == 0x000138, "Member 'BP_Projectile_Design_SoldierFlameThrower_C_CheckUseSubstituteSkillHit::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(BP_Projectile_Design_SoldierFlameThrower_C_CheckUseSubstituteSkillHit, CallFunc_BreakHitResult_Normal) == 0x000144, "Member 'BP_Projectile_Design_SoldierFlameThrower_C_CheckUseSubstituteSkillHit::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(BP_Projectile_Design_SoldierFlameThrower_C_CheckUseSubstituteSkillHit, CallFunc_BreakHitResult_ImpactNormal) == 0x000150, "Member 'BP_Projectile_Design_SoldierFlameThrower_C_CheckUseSubstituteSkillHit::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(BP_Projectile_Design_SoldierFlameThrower_C_CheckUseSubstituteSkillHit, CallFunc_BreakHitResult_PhysMat) == 0x000160, "Member 'BP_Projectile_Design_SoldierFlameThrower_C_CheckUseSubstituteSkillHit::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(BP_Projectile_Design_SoldierFlameThrower_C_CheckUseSubstituteSkillHit, CallFunc_BreakHitResult_HitActor) == 0x000168, "Member 'BP_Projectile_Design_SoldierFlameThrower_C_CheckUseSubstituteSkillHit::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(BP_Projectile_Design_SoldierFlameThrower_C_CheckUseSubstituteSkillHit, CallFunc_BreakHitResult_HitComponent) == 0x000170, "Member 'BP_Projectile_Design_SoldierFlameThrower_C_CheckUseSubstituteSkillHit::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(BP_Projectile_Design_SoldierFlameThrower_C_CheckUseSubstituteSkillHit, CallFunc_BreakHitResult_HitBoneName) == 0x000178, "Member 'BP_Projectile_Design_SoldierFlameThrower_C_CheckUseSubstituteSkillHit::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(BP_Projectile_Design_SoldierFlameThrower_C_CheckUseSubstituteSkillHit, CallFunc_BreakHitResult_HitItem) == 0x000180, "Member 'BP_Projectile_Design_SoldierFlameThrower_C_CheckUseSubstituteSkillHit::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(BP_Projectile_Design_SoldierFlameThrower_C_CheckUseSubstituteSkillHit, CallFunc_BreakHitResult_ElementIndex) == 0x000184, "Member 'BP_Projectile_Design_SoldierFlameThrower_C_CheckUseSubstituteSkillHit::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(BP_Projectile_Design_SoldierFlameThrower_C_CheckUseSubstituteSkillHit, CallFunc_BreakHitResult_FaceIndex) == 0x000188, "Member 'BP_Projectile_Design_SoldierFlameThrower_C_CheckUseSubstituteSkillHit::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(BP_Projectile_Design_SoldierFlameThrower_C_CheckUseSubstituteSkillHit, CallFunc_BreakHitResult_TraceStart) == 0x00018C, "Member 'BP_Projectile_Design_SoldierFlameThrower_C_CheckUseSubstituteSkillHit::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(BP_Projectile_Design_SoldierFlameThrower_C_CheckUseSubstituteSkillHit, CallFunc_BreakHitResult_TraceEnd) == 0x000198, "Member 'BP_Projectile_Design_SoldierFlameThrower_C_CheckUseSubstituteSkillHit::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(BP_Projectile_Design_SoldierFlameThrower_C_CheckUseSubstituteSkillHit, CallFunc_CheckUseSubstituteSkillHit_ReturnValue) == 0x0001A4, "Member 'BP_Projectile_Design_SoldierFlameThrower_C_CheckUseSubstituteSkillHit::CallFunc_CheckUseSubstituteSkillHit_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Projectile_Design_SoldierFlameThrower_C_CheckUseSubstituteSkillHit, K2Node_DynamicCast_AsLCharacter) == 0x0001B0, "Member 'BP_Projectile_Design_SoldierFlameThrower_C_CheckUseSubstituteSkillHit::K2Node_DynamicCast_AsLCharacter' has a wrong offset!");
static_assert(offsetof(BP_Projectile_Design_SoldierFlameThrower_C_CheckUseSubstituteSkillHit, K2Node_DynamicCast_bSuccess) == 0x0001B8, "Member 'BP_Projectile_Design_SoldierFlameThrower_C_CheckUseSubstituteSkillHit::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_Projectile_Design_SoldierFlameThrower_C_CheckUseSubstituteSkillHit, Temp_name_Variable) == 0x0001BC, "Member 'BP_Projectile_Design_SoldierFlameThrower_C_CheckUseSubstituteSkillHit::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(BP_Projectile_Design_SoldierFlameThrower_C_CheckUseSubstituteSkillHit, CallFunc_GetActMgrComponent_ReturnValue) == 0x0001C8, "Member 'BP_Projectile_Design_SoldierFlameThrower_C_CheckUseSubstituteSkillHit::CallFunc_GetActMgrComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Projectile_Design_SoldierFlameThrower_C_CheckUseSubstituteSkillHit, CallFunc_IsValid_ReturnValue) == 0x0001D0, "Member 'BP_Projectile_Design_SoldierFlameThrower_C_CheckUseSubstituteSkillHit::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Projectile_Design_SoldierFlameThrower_C_CheckUseSubstituteSkillHit, Temp_name_Variable_1) == 0x0001D4, "Member 'BP_Projectile_Design_SoldierFlameThrower_C_CheckUseSubstituteSkillHit::Temp_name_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_Projectile_Design_SoldierFlameThrower_C_CheckUseSubstituteSkillHit, CallFunc_MakeLiteralName_ReturnValue) == 0x0001DC, "Member 'BP_Projectile_Design_SoldierFlameThrower_C_CheckUseSubstituteSkillHit::CallFunc_MakeLiteralName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Projectile_Design_SoldierFlameThrower_C_CheckUseSubstituteSkillHit, CallFunc_FindActionState_ReturnValue) == 0x0001E4, "Member 'BP_Projectile_Design_SoldierFlameThrower_C_CheckUseSubstituteSkillHit::CallFunc_FindActionState_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Projectile_Design_SoldierFlameThrower_C_CheckUseSubstituteSkillHit, K2Node_Select_Default) == 0x0001E8, "Member 'BP_Projectile_Design_SoldierFlameThrower_C_CheckUseSubstituteSkillHit::K2Node_Select_Default' has a wrong offset!");

}

