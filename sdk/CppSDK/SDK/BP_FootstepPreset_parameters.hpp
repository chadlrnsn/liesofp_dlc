#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FootstepPreset

#include "Basic.hpp"

#include "BS_FootstepAttachement_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_FootstepPreset.BP_FootstepPreset_C.Spawn
// 0x00D0 (0x00D0 - 0x0000)
struct BP_FootstepPreset_C_Spawn final
{
public:
	class USceneComponent*                        Mesh;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8[0x8];                                        // 0x0008(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FBS_FootstepAttachement                Attachement;                                       // 0x0010(0x0050)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Intensity;                                         // 0x0060(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64[0x4];                                       // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               SpawnedEmitter;                                    // 0x0068(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        SpawnedAudio;                                      // 0x0070(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x0078(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x0084(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x0090(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakTransform_Location_1;                // 0x009C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation_1;                // 0x00A8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale_1;                   // 0x00B4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        CallFunc_SpawnSoundAttached_ReturnValue;           // 0x00C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAttached_ReturnValue;         // 0x00C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FootstepPreset_C_Spawn) == 0x000010, "Wrong alignment on BP_FootstepPreset_C_Spawn");
static_assert(sizeof(BP_FootstepPreset_C_Spawn) == 0x0000D0, "Wrong size on BP_FootstepPreset_C_Spawn");
static_assert(offsetof(BP_FootstepPreset_C_Spawn, Mesh) == 0x000000, "Member 'BP_FootstepPreset_C_Spawn::Mesh' has a wrong offset!");
static_assert(offsetof(BP_FootstepPreset_C_Spawn, Attachement) == 0x000010, "Member 'BP_FootstepPreset_C_Spawn::Attachement' has a wrong offset!");
static_assert(offsetof(BP_FootstepPreset_C_Spawn, Intensity) == 0x000060, "Member 'BP_FootstepPreset_C_Spawn::Intensity' has a wrong offset!");
static_assert(offsetof(BP_FootstepPreset_C_Spawn, SpawnedEmitter) == 0x000068, "Member 'BP_FootstepPreset_C_Spawn::SpawnedEmitter' has a wrong offset!");
static_assert(offsetof(BP_FootstepPreset_C_Spawn, SpawnedAudio) == 0x000070, "Member 'BP_FootstepPreset_C_Spawn::SpawnedAudio' has a wrong offset!");
static_assert(offsetof(BP_FootstepPreset_C_Spawn, CallFunc_BreakTransform_Location) == 0x000078, "Member 'BP_FootstepPreset_C_Spawn::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(BP_FootstepPreset_C_Spawn, CallFunc_BreakTransform_Rotation) == 0x000084, "Member 'BP_FootstepPreset_C_Spawn::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(BP_FootstepPreset_C_Spawn, CallFunc_BreakTransform_Scale) == 0x000090, "Member 'BP_FootstepPreset_C_Spawn::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(BP_FootstepPreset_C_Spawn, CallFunc_BreakTransform_Location_1) == 0x00009C, "Member 'BP_FootstepPreset_C_Spawn::CallFunc_BreakTransform_Location_1' has a wrong offset!");
static_assert(offsetof(BP_FootstepPreset_C_Spawn, CallFunc_BreakTransform_Rotation_1) == 0x0000A8, "Member 'BP_FootstepPreset_C_Spawn::CallFunc_BreakTransform_Rotation_1' has a wrong offset!");
static_assert(offsetof(BP_FootstepPreset_C_Spawn, CallFunc_BreakTransform_Scale_1) == 0x0000B4, "Member 'BP_FootstepPreset_C_Spawn::CallFunc_BreakTransform_Scale_1' has a wrong offset!");
static_assert(offsetof(BP_FootstepPreset_C_Spawn, CallFunc_SpawnSoundAttached_ReturnValue) == 0x0000C0, "Member 'BP_FootstepPreset_C_Spawn::CallFunc_SpawnSoundAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FootstepPreset_C_Spawn, CallFunc_SpawnEmitterAttached_ReturnValue) == 0x0000C8, "Member 'BP_FootstepPreset_C_Spawn::CallFunc_SpawnEmitterAttached_ReturnValue' has a wrong offset!");

}

