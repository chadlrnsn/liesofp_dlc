#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LEquipmentComponentBP

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function LEquipmentComponentBP.LEquipmentComponentBP_C.SpawnWeaponWithClass
// 0x0090 (0x0090 - 0x0000)
struct LEquipmentComponentBP_C_SpawnWeaponWithClass final
{
public:
	TSubclassOf<class ALWeapon>                   HandleWeaponClass;                                 // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TSubclassOf<class ALWeapon>                   BladeWeaponClass;                                  // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class ALWeapon*                               ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ClassClass_ReturnValue;          // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ClassClass_ReturnValue_1;        // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_23[0x5];                                       // 0x0023(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;                   // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0030(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0040(0x0030)(IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ALWeapon*                               CallFunc_FinishSpawningActor_ReturnValue;          // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Weapon_Base_C*                      K2Node_DynamicCast_AsBP_Weapon_Base;               // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LEquipmentComponentBP_C_SpawnWeaponWithClass) == 0x000010, "Wrong alignment on LEquipmentComponentBP_C_SpawnWeaponWithClass");
static_assert(sizeof(LEquipmentComponentBP_C_SpawnWeaponWithClass) == 0x000090, "Wrong size on LEquipmentComponentBP_C_SpawnWeaponWithClass");
static_assert(offsetof(LEquipmentComponentBP_C_SpawnWeaponWithClass, HandleWeaponClass) == 0x000000, "Member 'LEquipmentComponentBP_C_SpawnWeaponWithClass::HandleWeaponClass' has a wrong offset!");
static_assert(offsetof(LEquipmentComponentBP_C_SpawnWeaponWithClass, BladeWeaponClass) == 0x000008, "Member 'LEquipmentComponentBP_C_SpawnWeaponWithClass::BladeWeaponClass' has a wrong offset!");
static_assert(offsetof(LEquipmentComponentBP_C_SpawnWeaponWithClass, ReturnValue) == 0x000010, "Member 'LEquipmentComponentBP_C_SpawnWeaponWithClass::ReturnValue' has a wrong offset!");
static_assert(offsetof(LEquipmentComponentBP_C_SpawnWeaponWithClass, CallFunc_GetOwner_ReturnValue) == 0x000018, "Member 'LEquipmentComponentBP_C_SpawnWeaponWithClass::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(LEquipmentComponentBP_C_SpawnWeaponWithClass, CallFunc_NotEqual_ClassClass_ReturnValue) == 0x000020, "Member 'LEquipmentComponentBP_C_SpawnWeaponWithClass::CallFunc_NotEqual_ClassClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(LEquipmentComponentBP_C_SpawnWeaponWithClass, CallFunc_NotEqual_ClassClass_ReturnValue_1) == 0x000021, "Member 'LEquipmentComponentBP_C_SpawnWeaponWithClass::CallFunc_NotEqual_ClassClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LEquipmentComponentBP_C_SpawnWeaponWithClass, CallFunc_BooleanAND_ReturnValue) == 0x000022, "Member 'LEquipmentComponentBP_C_SpawnWeaponWithClass::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(LEquipmentComponentBP_C_SpawnWeaponWithClass, CallFunc_GetOwner_ReturnValue_1) == 0x000028, "Member 'LEquipmentComponentBP_C_SpawnWeaponWithClass::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LEquipmentComponentBP_C_SpawnWeaponWithClass, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000030, "Member 'LEquipmentComponentBP_C_SpawnWeaponWithClass::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(LEquipmentComponentBP_C_SpawnWeaponWithClass, CallFunc_MakeTransform_ReturnValue) == 0x000040, "Member 'LEquipmentComponentBP_C_SpawnWeaponWithClass::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(LEquipmentComponentBP_C_SpawnWeaponWithClass, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000070, "Member 'LEquipmentComponentBP_C_SpawnWeaponWithClass::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(LEquipmentComponentBP_C_SpawnWeaponWithClass, CallFunc_FinishSpawningActor_ReturnValue) == 0x000078, "Member 'LEquipmentComponentBP_C_SpawnWeaponWithClass::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(LEquipmentComponentBP_C_SpawnWeaponWithClass, K2Node_DynamicCast_AsBP_Weapon_Base) == 0x000080, "Member 'LEquipmentComponentBP_C_SpawnWeaponWithClass::K2Node_DynamicCast_AsBP_Weapon_Base' has a wrong offset!");
static_assert(offsetof(LEquipmentComponentBP_C_SpawnWeaponWithClass, K2Node_DynamicCast_bSuccess) == 0x000088, "Member 'LEquipmentComponentBP_C_SpawnWeaponWithClass::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}

