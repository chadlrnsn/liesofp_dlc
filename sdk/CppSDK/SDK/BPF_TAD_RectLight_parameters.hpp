#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPF_TAD_RectLight

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BPF_TAD_RectLight.BPF_TAD_RectLight_C.BPF TAD Rect Light
// 0x0058 (0x0058 - 0x0000)
struct BPF_TAD_RectLight_C_BPF_TAD_Rect_Light final
{
public:
	class URectLightComponent*                    RectLight;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           LightColor;                                        // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Intensity;                                         // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temperature;                                       // 0x001C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AttenuationRadius;                                 // 0x0020(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SourceWidth;                                       // 0x0024(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SourceHeight;                                      // 0x0028(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BarnDoorAngle;                                     // 0x002C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BarnDoorLength;                                    // 0x0030(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         VolumScatterIntensity;                             // 0x0034(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EComponentMobility                            Mobility;                                          // 0x0038(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ELightUnits                                   IntensityUnits;                                    // 0x0039(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CastShadow;                                        // 0x003A(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3B[0x1];                                       // 0x003B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Specular_Scale;                                    // 0x003C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Contact_Shadow;                                    // 0x0040(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0048(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Shadow_Slop_Bias;                                  // 0x0050(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Shadow_Bias;                                       // 0x0054(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPF_TAD_RectLight_C_BPF_TAD_Rect_Light) == 0x000008, "Wrong alignment on BPF_TAD_RectLight_C_BPF_TAD_Rect_Light");
static_assert(sizeof(BPF_TAD_RectLight_C_BPF_TAD_Rect_Light) == 0x000058, "Wrong size on BPF_TAD_RectLight_C_BPF_TAD_Rect_Light");
static_assert(offsetof(BPF_TAD_RectLight_C_BPF_TAD_Rect_Light, RectLight) == 0x000000, "Member 'BPF_TAD_RectLight_C_BPF_TAD_Rect_Light::RectLight' has a wrong offset!");
static_assert(offsetof(BPF_TAD_RectLight_C_BPF_TAD_Rect_Light, LightColor) == 0x000008, "Member 'BPF_TAD_RectLight_C_BPF_TAD_Rect_Light::LightColor' has a wrong offset!");
static_assert(offsetof(BPF_TAD_RectLight_C_BPF_TAD_Rect_Light, Intensity) == 0x000018, "Member 'BPF_TAD_RectLight_C_BPF_TAD_Rect_Light::Intensity' has a wrong offset!");
static_assert(offsetof(BPF_TAD_RectLight_C_BPF_TAD_Rect_Light, Temperature) == 0x00001C, "Member 'BPF_TAD_RectLight_C_BPF_TAD_Rect_Light::Temperature' has a wrong offset!");
static_assert(offsetof(BPF_TAD_RectLight_C_BPF_TAD_Rect_Light, AttenuationRadius) == 0x000020, "Member 'BPF_TAD_RectLight_C_BPF_TAD_Rect_Light::AttenuationRadius' has a wrong offset!");
static_assert(offsetof(BPF_TAD_RectLight_C_BPF_TAD_Rect_Light, SourceWidth) == 0x000024, "Member 'BPF_TAD_RectLight_C_BPF_TAD_Rect_Light::SourceWidth' has a wrong offset!");
static_assert(offsetof(BPF_TAD_RectLight_C_BPF_TAD_Rect_Light, SourceHeight) == 0x000028, "Member 'BPF_TAD_RectLight_C_BPF_TAD_Rect_Light::SourceHeight' has a wrong offset!");
static_assert(offsetof(BPF_TAD_RectLight_C_BPF_TAD_Rect_Light, BarnDoorAngle) == 0x00002C, "Member 'BPF_TAD_RectLight_C_BPF_TAD_Rect_Light::BarnDoorAngle' has a wrong offset!");
static_assert(offsetof(BPF_TAD_RectLight_C_BPF_TAD_Rect_Light, BarnDoorLength) == 0x000030, "Member 'BPF_TAD_RectLight_C_BPF_TAD_Rect_Light::BarnDoorLength' has a wrong offset!");
static_assert(offsetof(BPF_TAD_RectLight_C_BPF_TAD_Rect_Light, VolumScatterIntensity) == 0x000034, "Member 'BPF_TAD_RectLight_C_BPF_TAD_Rect_Light::VolumScatterIntensity' has a wrong offset!");
static_assert(offsetof(BPF_TAD_RectLight_C_BPF_TAD_Rect_Light, Mobility) == 0x000038, "Member 'BPF_TAD_RectLight_C_BPF_TAD_Rect_Light::Mobility' has a wrong offset!");
static_assert(offsetof(BPF_TAD_RectLight_C_BPF_TAD_Rect_Light, IntensityUnits) == 0x000039, "Member 'BPF_TAD_RectLight_C_BPF_TAD_Rect_Light::IntensityUnits' has a wrong offset!");
static_assert(offsetof(BPF_TAD_RectLight_C_BPF_TAD_Rect_Light, CastShadow) == 0x00003A, "Member 'BPF_TAD_RectLight_C_BPF_TAD_Rect_Light::CastShadow' has a wrong offset!");
static_assert(offsetof(BPF_TAD_RectLight_C_BPF_TAD_Rect_Light, Specular_Scale) == 0x00003C, "Member 'BPF_TAD_RectLight_C_BPF_TAD_Rect_Light::Specular_Scale' has a wrong offset!");
static_assert(offsetof(BPF_TAD_RectLight_C_BPF_TAD_Rect_Light, Contact_Shadow) == 0x000040, "Member 'BPF_TAD_RectLight_C_BPF_TAD_Rect_Light::Contact_Shadow' has a wrong offset!");
static_assert(offsetof(BPF_TAD_RectLight_C_BPF_TAD_Rect_Light, __WorldContext) == 0x000048, "Member 'BPF_TAD_RectLight_C_BPF_TAD_Rect_Light::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPF_TAD_RectLight_C_BPF_TAD_Rect_Light, Shadow_Slop_Bias) == 0x000050, "Member 'BPF_TAD_RectLight_C_BPF_TAD_Rect_Light::Shadow_Slop_Bias' has a wrong offset!");
static_assert(offsetof(BPF_TAD_RectLight_C_BPF_TAD_Rect_Light, Shadow_Bias) == 0x000054, "Member 'BPF_TAD_RectLight_C_BPF_TAD_Rect_Light::Shadow_Bias' has a wrong offset!");

}
