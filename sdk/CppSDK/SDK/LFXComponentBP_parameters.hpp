#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LFXComponentBP

#include "Basic.hpp"

#include "ProjectPContentInfo_structs.hpp"
#include "ProjectP_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function LFXComponentBP.LFXComponentBP_C.ExecuteUbergraph_LFXComponentBP
// 0x01F0 (0x01F0 - 0x0000)
struct LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_MakeLiteralName_ReturnValue;              // 0x0004(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLHitFXPlayData                        K2Node_Event_HitFXPlayData;                        // 0x0010(0x0080)(ConstParm, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_92[0x6];                                       // 0x0092(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ALCharacter*                            K2Node_Event_Attacker;                             // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ALWeapon*                               K2Node_Event_AttackerWeapon;                       // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ELBloodEffectType                             K2Node_Event_BloodType;                            // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A9[0x3];                                       // 0x00A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_AttackerStiffenDurationTime;          // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                         CallFunc_FindSplashBloodFx_OutParticle;            // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        CallFunc_FindSplashBloodFx_OutTrail;               // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindSplashBloodFx_ReturnValue;            // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasBroken_ReturnValue;                    // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C2[0x6];                                       // 0x00C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D1[0x7];                                       // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ALCharacter*                            K2Node_DynamicCast_AsLCharacter;                   // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E1[0x3];                                       // 0x00E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetSocketLocation_ReturnValue;            // 0x00E4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_F1[0x7];                                       // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UNiagaraComponent*                      CallFunc_SpawnSystemAtLocation_ReturnValue;        // 0x00F8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UFXSystemComponent*>             K2Node_MakeArray_Array;                            // 0x0100(0x0010)(ReferenceParm, ContainsInstancedReference)
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue;         // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0111(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_112[0x6];                                      // 0x0112(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UNiagaraSystem*                         K2Node_Event_System;                               // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_Event_HitLocation;                          // 0x0120(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_FindClosestBoneOnPhysicsAsset_ClosestBoneName; // 0x0134(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindClosestBoneOnPhysicsAsset_ReturnValue; // 0x013C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_13D[0x3];                                      // 0x013D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_FindNearbyBoneList_BoneList;              // 0x0140(0x0010)(ReferenceParm)
	bool                                          CallFunc_FindNearbyBoneList_ReturnValue;           // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_151[0x3];                                      // 0x0151(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0154(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x015C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15D[0x3];                                      // 0x015D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetRigidBodyBox_Location;                 // 0x0168(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_GetRigidBodyBox_Rotation;                 // 0x0174(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_GetRigidBodyBox_BoundExtent;              // 0x0180(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetRigidBodyBox_ReturnValue;              // 0x018C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_18D[0x3];                                      // 0x018D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0190(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19C[0x4];                                      // 0x019C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UNiagaraComponent*                      CallFunc_SpawnSystemAttached_ReturnValue;          // 0x01A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_VSize_ReturnValue;                        // 0x01A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1AC[0x4];                                      // 0x01AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UFXSystemComponent*>             K2Node_MakeArray_Array_1;                          // 0x01B0(0x0010)(ReferenceParm, ContainsInstancedReference)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x01C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ELPartsAttachPointType                        K2Node_Event_AttachPointType;                      // 0x01C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C5[0x3];                                      // 0x01C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;                   // 0x01C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D1[0x7];                                      // 0x01D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ALCharacter*                            K2Node_DynamicCast_AsLCharacter_1;                 // 0x01D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP) == 0x000010, "Wrong alignment on LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP");
static_assert(sizeof(LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP) == 0x0001F0, "Wrong size on LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP");
static_assert(offsetof(LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP, EntryPoint) == 0x000000, "Member 'LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP::EntryPoint' has a wrong offset!");
static_assert(offsetof(LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP, CallFunc_MakeLiteralName_ReturnValue) == 0x000004, "Member 'LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP::CallFunc_MakeLiteralName_ReturnValue' has a wrong offset!");
static_assert(offsetof(LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP, K2Node_Event_HitFXPlayData) == 0x000010, "Member 'LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP::K2Node_Event_HitFXPlayData' has a wrong offset!");
static_assert(offsetof(LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP, CallFunc_IsValid_ReturnValue) == 0x000090, "Member 'LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP, CallFunc_IsValid_ReturnValue_1) == 0x000091, "Member 'LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP, K2Node_Event_Attacker) == 0x000098, "Member 'LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP::K2Node_Event_Attacker' has a wrong offset!");
static_assert(offsetof(LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP, K2Node_Event_AttackerWeapon) == 0x0000A0, "Member 'LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP::K2Node_Event_AttackerWeapon' has a wrong offset!");
static_assert(offsetof(LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP, K2Node_Event_BloodType) == 0x0000A8, "Member 'LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP::K2Node_Event_BloodType' has a wrong offset!");
static_assert(offsetof(LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP, K2Node_Event_AttackerStiffenDurationTime) == 0x0000AC, "Member 'LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP::K2Node_Event_AttackerStiffenDurationTime' has a wrong offset!");
static_assert(offsetof(LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP, CallFunc_FindSplashBloodFx_OutParticle) == 0x0000B0, "Member 'LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP::CallFunc_FindSplashBloodFx_OutParticle' has a wrong offset!");
static_assert(offsetof(LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP, CallFunc_FindSplashBloodFx_OutTrail) == 0x0000B8, "Member 'LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP::CallFunc_FindSplashBloodFx_OutTrail' has a wrong offset!");
static_assert(offsetof(LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP, CallFunc_FindSplashBloodFx_ReturnValue) == 0x0000C0, "Member 'LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP::CallFunc_FindSplashBloodFx_ReturnValue' has a wrong offset!");
static_assert(offsetof(LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP, CallFunc_HasBroken_ReturnValue) == 0x0000C1, "Member 'LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP::CallFunc_HasBroken_ReturnValue' has a wrong offset!");
static_assert(offsetof(LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP, CallFunc_GetOwner_ReturnValue) == 0x0000C8, "Member 'LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP, CallFunc_IsValid_ReturnValue_2) == 0x0000D0, "Member 'LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP, K2Node_DynamicCast_AsLCharacter) == 0x0000D8, "Member 'LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP::K2Node_DynamicCast_AsLCharacter' has a wrong offset!");
static_assert(offsetof(LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP, K2Node_DynamicCast_bSuccess) == 0x0000E0, "Member 'LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP, CallFunc_GetSocketLocation_ReturnValue) == 0x0000E4, "Member 'LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP::CallFunc_GetSocketLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP, CallFunc_IsValid_ReturnValue_3) == 0x0000F0, "Member 'LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP, CallFunc_SpawnSystemAtLocation_ReturnValue) == 0x0000F8, "Member 'LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP::CallFunc_SpawnSystemAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP, K2Node_MakeArray_Array) == 0x000100, "Member 'LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP, CallFunc_K2_AttachToComponent_ReturnValue) == 0x000110, "Member 'LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP::CallFunc_K2_AttachToComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP, CallFunc_IsValid_ReturnValue_4) == 0x000111, "Member 'LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP, K2Node_Event_System) == 0x000118, "Member 'LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP::K2Node_Event_System' has a wrong offset!");
static_assert(offsetof(LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP, K2Node_Event_HitLocation) == 0x000120, "Member 'LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP::K2Node_Event_HitLocation' has a wrong offset!");
static_assert(offsetof(LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP, Temp_int_Loop_Counter_Variable) == 0x00012C, "Member 'LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP, CallFunc_Add_IntInt_ReturnValue) == 0x000130, "Member 'LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP, CallFunc_FindClosestBoneOnPhysicsAsset_ClosestBoneName) == 0x000134, "Member 'LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP::CallFunc_FindClosestBoneOnPhysicsAsset_ClosestBoneName' has a wrong offset!");
static_assert(offsetof(LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP, CallFunc_FindClosestBoneOnPhysicsAsset_ReturnValue) == 0x00013C, "Member 'LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP::CallFunc_FindClosestBoneOnPhysicsAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP, CallFunc_FindNearbyBoneList_BoneList) == 0x000140, "Member 'LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP::CallFunc_FindNearbyBoneList_BoneList' has a wrong offset!");
static_assert(offsetof(LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP, CallFunc_FindNearbyBoneList_ReturnValue) == 0x000150, "Member 'LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP::CallFunc_FindNearbyBoneList_ReturnValue' has a wrong offset!");
static_assert(offsetof(LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP, CallFunc_Array_Length_ReturnValue) == 0x000154, "Member 'LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP, Temp_int_Array_Index_Variable) == 0x000158, "Member 'LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP, CallFunc_Less_IntInt_ReturnValue) == 0x00015C, "Member 'LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP, CallFunc_Array_Get_Item) == 0x000160, "Member 'LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP, CallFunc_GetRigidBodyBox_Location) == 0x000168, "Member 'LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP::CallFunc_GetRigidBodyBox_Location' has a wrong offset!");
static_assert(offsetof(LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP, CallFunc_GetRigidBodyBox_Rotation) == 0x000174, "Member 'LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP::CallFunc_GetRigidBodyBox_Rotation' has a wrong offset!");
static_assert(offsetof(LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP, CallFunc_GetRigidBodyBox_BoundExtent) == 0x000180, "Member 'LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP::CallFunc_GetRigidBodyBox_BoundExtent' has a wrong offset!");
static_assert(offsetof(LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP, CallFunc_GetRigidBodyBox_ReturnValue) == 0x00018C, "Member 'LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP::CallFunc_GetRigidBodyBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000190, "Member 'LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP, CallFunc_SpawnSystemAttached_ReturnValue) == 0x0001A0, "Member 'LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP::CallFunc_SpawnSystemAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP, CallFunc_VSize_ReturnValue) == 0x0001A8, "Member 'LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP, K2Node_MakeArray_Array_1) == 0x0001B0, "Member 'LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x0001C0, "Member 'LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP, K2Node_Event_AttachPointType) == 0x0001C4, "Member 'LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP::K2Node_Event_AttachPointType' has a wrong offset!");
static_assert(offsetof(LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP, CallFunc_GetOwner_ReturnValue_1) == 0x0001C8, "Member 'LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP, K2Node_SwitchEnum_CmpSuccess) == 0x0001D0, "Member 'LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP, K2Node_DynamicCast_AsLCharacter_1) == 0x0001D8, "Member 'LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP::K2Node_DynamicCast_AsLCharacter_1' has a wrong offset!");
static_assert(offsetof(LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP, K2Node_DynamicCast_bSuccess_1) == 0x0001E0, "Member 'LFXComponentBP_C_ExecuteUbergraph_LFXComponentBP::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

// Function LFXComponentBP.LFXComponentBP_C.PlayBodyDurabilityConsumeFX
// 0x0001 (0x0001 - 0x0000)
struct LFXComponentBP_C_PlayBodyDurabilityConsumeFX final
{
public:
	ELPartsAttachPointType                        AttachPointType;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LFXComponentBP_C_PlayBodyDurabilityConsumeFX) == 0x000001, "Wrong alignment on LFXComponentBP_C_PlayBodyDurabilityConsumeFX");
static_assert(sizeof(LFXComponentBP_C_PlayBodyDurabilityConsumeFX) == 0x000001, "Wrong size on LFXComponentBP_C_PlayBodyDurabilityConsumeFX");
static_assert(offsetof(LFXComponentBP_C_PlayBodyDurabilityConsumeFX, AttachPointType) == 0x000000, "Member 'LFXComponentBP_C_PlayBodyDurabilityConsumeFX::AttachPointType' has a wrong offset!");

// Function LFXComponentBP.LFXComponentBP_C.PlayElementPartsHitFX
// 0x0018 (0x0018 - 0x0000)
struct LFXComponentBP_C_PlayElementPartsHitFX final
{
public:
	class UNiagaraSystem*                         System;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                HitLocation;                                       // 0x0008(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LFXComponentBP_C_PlayElementPartsHitFX) == 0x000008, "Wrong alignment on LFXComponentBP_C_PlayElementPartsHitFX");
static_assert(sizeof(LFXComponentBP_C_PlayElementPartsHitFX) == 0x000018, "Wrong size on LFXComponentBP_C_PlayElementPartsHitFX");
static_assert(offsetof(LFXComponentBP_C_PlayElementPartsHitFX, System) == 0x000000, "Member 'LFXComponentBP_C_PlayElementPartsHitFX::System' has a wrong offset!");
static_assert(offsetof(LFXComponentBP_C_PlayElementPartsHitFX, HitLocation) == 0x000008, "Member 'LFXComponentBP_C_PlayElementPartsHitFX::HitLocation' has a wrong offset!");

// Function LFXComponentBP.LFXComponentBP_C.PlayHitRegionFX
// 0x0080 (0x0080 - 0x0000)
struct LFXComponentBP_C_PlayHitRegionFX final
{
public:
	struct FLHitFXPlayData                        HitFXPlayData;                                     // 0x0000(0x0080)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(LFXComponentBP_C_PlayHitRegionFX) == 0x000010, "Wrong alignment on LFXComponentBP_C_PlayHitRegionFX");
static_assert(sizeof(LFXComponentBP_C_PlayHitRegionFX) == 0x000080, "Wrong size on LFXComponentBP_C_PlayHitRegionFX");
static_assert(offsetof(LFXComponentBP_C_PlayHitRegionFX, HitFXPlayData) == 0x000000, "Member 'LFXComponentBP_C_PlayHitRegionFX::HitFXPlayData' has a wrong offset!");

// Function LFXComponentBP.LFXComponentBP_C.StartSplashBloodFX
// 0x0018 (0x0018 - 0x0000)
struct LFXComponentBP_C_StartSplashBloodFX final
{
public:
	class ALCharacter*                            Attacker;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ALWeapon*                               AttackerWeapon;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ELBloodEffectType                             BloodType;                                         // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         AttackerStiffenDurationTime;                       // 0x0014(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LFXComponentBP_C_StartSplashBloodFX) == 0x000008, "Wrong alignment on LFXComponentBP_C_StartSplashBloodFX");
static_assert(sizeof(LFXComponentBP_C_StartSplashBloodFX) == 0x000018, "Wrong size on LFXComponentBP_C_StartSplashBloodFX");
static_assert(offsetof(LFXComponentBP_C_StartSplashBloodFX, Attacker) == 0x000000, "Member 'LFXComponentBP_C_StartSplashBloodFX::Attacker' has a wrong offset!");
static_assert(offsetof(LFXComponentBP_C_StartSplashBloodFX, AttackerWeapon) == 0x000008, "Member 'LFXComponentBP_C_StartSplashBloodFX::AttackerWeapon' has a wrong offset!");
static_assert(offsetof(LFXComponentBP_C_StartSplashBloodFX, BloodType) == 0x000010, "Member 'LFXComponentBP_C_StartSplashBloodFX::BloodType' has a wrong offset!");
static_assert(offsetof(LFXComponentBP_C_StartSplashBloodFX, AttackerStiffenDurationTime) == 0x000014, "Member 'LFXComponentBP_C_StartSplashBloodFX::AttackerStiffenDurationTime' has a wrong offset!");

}
