#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPF_TAD_IES

#include "Basic.hpp"


namespace SDK::Params
{

// Function BPF_TAD_IES.BPF_TAD_IES_C.BPF TAD IES
// 0x0020 (0x0020 - 0x0000)
struct BPF_TAD_IES_C_BPF_TAD_IES final
{
public:
	class ULightComponent*                        LightTarget;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextureLightProfile*                   IES_Texture;                                       // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         IES_Intensity;                                     // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Use_IES_Intensity;                                 // 0x0014(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPF_TAD_IES_C_BPF_TAD_IES) == 0x000008, "Wrong alignment on BPF_TAD_IES_C_BPF_TAD_IES");
static_assert(sizeof(BPF_TAD_IES_C_BPF_TAD_IES) == 0x000020, "Wrong size on BPF_TAD_IES_C_BPF_TAD_IES");
static_assert(offsetof(BPF_TAD_IES_C_BPF_TAD_IES, LightTarget) == 0x000000, "Member 'BPF_TAD_IES_C_BPF_TAD_IES::LightTarget' has a wrong offset!");
static_assert(offsetof(BPF_TAD_IES_C_BPF_TAD_IES, IES_Texture) == 0x000008, "Member 'BPF_TAD_IES_C_BPF_TAD_IES::IES_Texture' has a wrong offset!");
static_assert(offsetof(BPF_TAD_IES_C_BPF_TAD_IES, IES_Intensity) == 0x000010, "Member 'BPF_TAD_IES_C_BPF_TAD_IES::IES_Intensity' has a wrong offset!");
static_assert(offsetof(BPF_TAD_IES_C_BPF_TAD_IES, Use_IES_Intensity) == 0x000014, "Member 'BPF_TAD_IES_C_BPF_TAD_IES::Use_IES_Intensity' has a wrong offset!");
static_assert(offsetof(BPF_TAD_IES_C_BPF_TAD_IES, __WorldContext) == 0x000018, "Member 'BPF_TAD_IES_C_BPF_TAD_IES::__WorldContext' has a wrong offset!");

}
