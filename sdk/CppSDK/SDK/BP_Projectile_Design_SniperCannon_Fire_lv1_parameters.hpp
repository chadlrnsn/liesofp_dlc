#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Projectile_Design_SniperCannon_Fire_lv1

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ProjectP_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_Projectile_Design_SniperCannon_Fire_lv1.BP_Projectile_Design_SniperCannon_Fire_lv1_C.ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1
// 0x03C0 (0x03C0 - 0x0000)
struct BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ELProjectileDestroyReason                     K2Node_Event_Reason_1;                             // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_Event_HitResult_1;                          // 0x0014(0x0088)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x009D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E[0x2];                                       // 0x009E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x00A8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x00B4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x00C0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x00CC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x00E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x0104(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x0110(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x011C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         CallFunc_GetAttachedActors_OutActors;              // 0x0128(0x0010)(ReferenceParm)
	uint8                                         Pad_138[0x8];                                      // 0x0138(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0140(0x0030)(IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_178[0x8];                                      // 0x0178(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLChildProjectileSpawnInfo             K2Node_MakeStruct_LChildProjectileSpawnInfo;       // 0x0180(0x0050)(NoDestructor)
	class ALDynamicDamageVolumeActor*             K2Node_DynamicCast_AsLDynamic_Damage_Volume_Actor; // 0x01D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x01D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D9[0x3];                                      // 0x01D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x01DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x01E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1E2[0x6];                                      // 0x01E2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ALProjectile*                           CallFunc_GetProjectile_ReturnValue;                // 0x01E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x01F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ELProjectileDestroyReason                     K2Node_Event_Reason;                               // 0x01F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1F2[0x2];                                      // 0x01F2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_Event_HitResult;                            // 0x01F4(0x0088)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                                CallFunc_MakeVector_ReturnValue_1;                 // 0x027C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x0288(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_289[0x7];                                      // 0x0289(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue_1;              // 0x0290(0x0030)(IsPlainOldData, NoDestructor)
	class ALProjectile*                           CallFunc_GetProjectile_ReturnValue_1;              // 0x02C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C8[0x8];                                      // 0x02C8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLChildProjectileSpawnInfo             K2Node_MakeStruct_LChildProjectileSpawnInfo_1;     // 0x02D0(0x0050)(NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0320(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_321[0x7];                                      // 0x0321(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ALProjectile*                           CallFunc_GetProjectile_ReturnValue_2;              // 0x0328(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0330(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_331[0x3];                                      // 0x0331(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_MakeVector_ReturnValue_2;                 // 0x0334(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue_2;              // 0x0340(0x0030)(IsPlainOldData, NoDestructor)
	struct FLChildProjectileSpawnInfo             K2Node_MakeStruct_LChildProjectileSpawnInfo_2;     // 0x0370(0x0050)(NoDestructor)
};
static_assert(alignof(BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1) == 0x000010, "Wrong alignment on BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1");
static_assert(sizeof(BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1) == 0x0003C0, "Wrong size on BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1");
static_assert(offsetof(BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1, EntryPoint) == 0x000000, "Member 'BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1, Temp_int_Array_Index_Variable) == 0x00000C, "Member 'BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1, K2Node_Event_Reason_1) == 0x000010, "Member 'BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1::K2Node_Event_Reason_1' has a wrong offset!");
static_assert(offsetof(BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1, K2Node_Event_HitResult_1) == 0x000014, "Member 'BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1::K2Node_Event_HitResult_1' has a wrong offset!");
static_assert(offsetof(BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1, CallFunc_BreakHitResult_bBlockingHit) == 0x00009C, "Member 'BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1, CallFunc_BreakHitResult_bInitialOverlap) == 0x00009D, "Member 'BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1, CallFunc_BreakHitResult_Time) == 0x0000A0, "Member 'BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1, CallFunc_BreakHitResult_Distance) == 0x0000A4, "Member 'BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1, CallFunc_BreakHitResult_Location) == 0x0000A8, "Member 'BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1, CallFunc_BreakHitResult_ImpactPoint) == 0x0000B4, "Member 'BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1, CallFunc_BreakHitResult_Normal) == 0x0000C0, "Member 'BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1, CallFunc_BreakHitResult_ImpactNormal) == 0x0000CC, "Member 'BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1, CallFunc_BreakHitResult_PhysMat) == 0x0000D8, "Member 'BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1, CallFunc_BreakHitResult_HitActor) == 0x0000E0, "Member 'BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1, CallFunc_BreakHitResult_HitComponent) == 0x0000E8, "Member 'BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1, CallFunc_BreakHitResult_HitBoneName) == 0x0000F0, "Member 'BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1, CallFunc_BreakHitResult_HitItem) == 0x0000F8, "Member 'BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1, CallFunc_BreakHitResult_ElementIndex) == 0x0000FC, "Member 'BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1, CallFunc_BreakHitResult_FaceIndex) == 0x000100, "Member 'BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1, CallFunc_BreakHitResult_TraceStart) == 0x000104, "Member 'BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1, CallFunc_BreakHitResult_TraceEnd) == 0x000110, "Member 'BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1, CallFunc_MakeVector_ReturnValue) == 0x00011C, "Member 'BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1, CallFunc_GetAttachedActors_OutActors) == 0x000128, "Member 'BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1::CallFunc_GetAttachedActors_OutActors' has a wrong offset!");
static_assert(offsetof(BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1, CallFunc_MakeTransform_ReturnValue) == 0x000140, "Member 'BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1, CallFunc_Array_Get_Item) == 0x000170, "Member 'BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1, K2Node_MakeStruct_LChildProjectileSpawnInfo) == 0x000180, "Member 'BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1::K2Node_MakeStruct_LChildProjectileSpawnInfo' has a wrong offset!");
static_assert(offsetof(BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1, K2Node_DynamicCast_AsLDynamic_Damage_Volume_Actor) == 0x0001D0, "Member 'BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1::K2Node_DynamicCast_AsLDynamic_Damage_Volume_Actor' has a wrong offset!");
static_assert(offsetof(BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1, K2Node_DynamicCast_bSuccess) == 0x0001D8, "Member 'BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1, CallFunc_Array_Length_ReturnValue) == 0x0001DC, "Member 'BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1, CallFunc_Less_IntInt_ReturnValue) == 0x0001E0, "Member 'BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1, K2Node_SwitchEnum_CmpSuccess) == 0x0001E1, "Member 'BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1, CallFunc_GetProjectile_ReturnValue) == 0x0001E8, "Member 'BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1::CallFunc_GetProjectile_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1, CallFunc_IsValid_ReturnValue) == 0x0001F0, "Member 'BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1, K2Node_Event_Reason) == 0x0001F1, "Member 'BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1::K2Node_Event_Reason' has a wrong offset!");
static_assert(offsetof(BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1, K2Node_Event_HitResult) == 0x0001F4, "Member 'BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1::K2Node_Event_HitResult' has a wrong offset!");
static_assert(offsetof(BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1, CallFunc_MakeVector_ReturnValue_1) == 0x00027C, "Member 'BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1::CallFunc_MakeVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1, K2Node_SwitchEnum_CmpSuccess_1) == 0x000288, "Member 'BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1, CallFunc_MakeTransform_ReturnValue_1) == 0x000290, "Member 'BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1::CallFunc_MakeTransform_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1, CallFunc_GetProjectile_ReturnValue_1) == 0x0002C0, "Member 'BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1::CallFunc_GetProjectile_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1, K2Node_MakeStruct_LChildProjectileSpawnInfo_1) == 0x0002D0, "Member 'BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1::K2Node_MakeStruct_LChildProjectileSpawnInfo_1' has a wrong offset!");
static_assert(offsetof(BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1, CallFunc_IsValid_ReturnValue_1) == 0x000320, "Member 'BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1, CallFunc_GetProjectile_ReturnValue_2) == 0x000328, "Member 'BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1::CallFunc_GetProjectile_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1, CallFunc_IsValid_ReturnValue_2) == 0x000330, "Member 'BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1, CallFunc_MakeVector_ReturnValue_2) == 0x000334, "Member 'BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1::CallFunc_MakeVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1, CallFunc_MakeTransform_ReturnValue_2) == 0x000340, "Member 'BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1::CallFunc_MakeTransform_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1, K2Node_MakeStruct_LChildProjectileSpawnInfo_2) == 0x000370, "Member 'BP_Projectile_Design_SniperCannon_Fire_lv1_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire_lv1::K2Node_MakeStruct_LChildProjectileSpawnInfo_2' has a wrong offset!");

// Function BP_Projectile_Design_SniperCannon_Fire_lv1.BP_Projectile_Design_SniperCannon_Fire_lv1_C.OnDisappear
// 0x008C (0x008C - 0x0000)
struct BP_Projectile_Design_SniperCannon_Fire_lv1_C_OnDisappear final
{
public:
	ELProjectileDestroyReason                     Reason;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             HitResult;                                         // 0x0004(0x0088)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_Projectile_Design_SniperCannon_Fire_lv1_C_OnDisappear) == 0x000004, "Wrong alignment on BP_Projectile_Design_SniperCannon_Fire_lv1_C_OnDisappear");
static_assert(sizeof(BP_Projectile_Design_SniperCannon_Fire_lv1_C_OnDisappear) == 0x00008C, "Wrong size on BP_Projectile_Design_SniperCannon_Fire_lv1_C_OnDisappear");
static_assert(offsetof(BP_Projectile_Design_SniperCannon_Fire_lv1_C_OnDisappear, Reason) == 0x000000, "Member 'BP_Projectile_Design_SniperCannon_Fire_lv1_C_OnDisappear::Reason' has a wrong offset!");
static_assert(offsetof(BP_Projectile_Design_SniperCannon_Fire_lv1_C_OnDisappear, HitResult) == 0x000004, "Member 'BP_Projectile_Design_SniperCannon_Fire_lv1_C_OnDisappear::HitResult' has a wrong offset!");

// Function BP_Projectile_Design_SniperCannon_Fire_lv1.BP_Projectile_Design_SniperCannon_Fire_lv1_C.OnExplode
// 0x008C (0x008C - 0x0000)
struct BP_Projectile_Design_SniperCannon_Fire_lv1_C_OnExplode final
{
public:
	ELProjectileDestroyReason                     Reason;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             HitResult;                                         // 0x0004(0x0088)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_Projectile_Design_SniperCannon_Fire_lv1_C_OnExplode) == 0x000004, "Wrong alignment on BP_Projectile_Design_SniperCannon_Fire_lv1_C_OnExplode");
static_assert(sizeof(BP_Projectile_Design_SniperCannon_Fire_lv1_C_OnExplode) == 0x00008C, "Wrong size on BP_Projectile_Design_SniperCannon_Fire_lv1_C_OnExplode");
static_assert(offsetof(BP_Projectile_Design_SniperCannon_Fire_lv1_C_OnExplode, Reason) == 0x000000, "Member 'BP_Projectile_Design_SniperCannon_Fire_lv1_C_OnExplode::Reason' has a wrong offset!");
static_assert(offsetof(BP_Projectile_Design_SniperCannon_Fire_lv1_C_OnExplode, HitResult) == 0x000004, "Member 'BP_Projectile_Design_SniperCannon_Fire_lv1_C_OnExplode::HitResult' has a wrong offset!");

}

