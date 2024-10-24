#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LP_PointLight_Static

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass LP_PointLight_Static.LP_PointLight_Static_C
// 0x0058 (0x0238 - 0x01E0)
class ALP_PointLight_Static_C final : public AActor
{
public:
	class UPointLightComponent*                   PointLight;                                        // 0x01E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Light_Position;                                    // 0x01E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                    Billboard;                                         // 0x01F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           LightColor;                                        // 0x01F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Intensity;                                         // 0x0208(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Light_Temperature;                                 // 0x020C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Light_Radius;                                      // 0x0210(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_214[0x4];                                      // 0x0214(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTextureLightProfile*                   IESProfile;                                        // 0x0218(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         IES_Intensity;                                     // 0x0220(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Volumetric_Scattering_Intensity;                   // 0x0224(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EComponentMobility                            Set_Mode;                                          // 0x0228(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ELightUnits                                   Intensity_Unit;                                    // 0x0229(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Use_IES_Intensity;                                 // 0x022A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Cast_Shadow_PointLight;                            // 0x022B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         Specular_Scale;                                    // 0x022C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Source_Radius;                                     // 0x0230(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Contact_Shadow;                                    // 0x0234(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LP_PointLight_Static_C">();
	}
	static class ALP_PointLight_Static_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALP_PointLight_Static_C>();
	}
};
static_assert(alignof(ALP_PointLight_Static_C) == 0x000008, "Wrong alignment on ALP_PointLight_Static_C");
static_assert(sizeof(ALP_PointLight_Static_C) == 0x000238, "Wrong size on ALP_PointLight_Static_C");
static_assert(offsetof(ALP_PointLight_Static_C, PointLight) == 0x0001E0, "Member 'ALP_PointLight_Static_C::PointLight' has a wrong offset!");
static_assert(offsetof(ALP_PointLight_Static_C, Light_Position) == 0x0001E8, "Member 'ALP_PointLight_Static_C::Light_Position' has a wrong offset!");
static_assert(offsetof(ALP_PointLight_Static_C, Billboard) == 0x0001F0, "Member 'ALP_PointLight_Static_C::Billboard' has a wrong offset!");
static_assert(offsetof(ALP_PointLight_Static_C, LightColor) == 0x0001F8, "Member 'ALP_PointLight_Static_C::LightColor' has a wrong offset!");
static_assert(offsetof(ALP_PointLight_Static_C, Intensity) == 0x000208, "Member 'ALP_PointLight_Static_C::Intensity' has a wrong offset!");
static_assert(offsetof(ALP_PointLight_Static_C, Light_Temperature) == 0x00020C, "Member 'ALP_PointLight_Static_C::Light_Temperature' has a wrong offset!");
static_assert(offsetof(ALP_PointLight_Static_C, Light_Radius) == 0x000210, "Member 'ALP_PointLight_Static_C::Light_Radius' has a wrong offset!");
static_assert(offsetof(ALP_PointLight_Static_C, IESProfile) == 0x000218, "Member 'ALP_PointLight_Static_C::IESProfile' has a wrong offset!");
static_assert(offsetof(ALP_PointLight_Static_C, IES_Intensity) == 0x000220, "Member 'ALP_PointLight_Static_C::IES_Intensity' has a wrong offset!");
static_assert(offsetof(ALP_PointLight_Static_C, Volumetric_Scattering_Intensity) == 0x000224, "Member 'ALP_PointLight_Static_C::Volumetric_Scattering_Intensity' has a wrong offset!");
static_assert(offsetof(ALP_PointLight_Static_C, Set_Mode) == 0x000228, "Member 'ALP_PointLight_Static_C::Set_Mode' has a wrong offset!");
static_assert(offsetof(ALP_PointLight_Static_C, Intensity_Unit) == 0x000229, "Member 'ALP_PointLight_Static_C::Intensity_Unit' has a wrong offset!");
static_assert(offsetof(ALP_PointLight_Static_C, Use_IES_Intensity) == 0x00022A, "Member 'ALP_PointLight_Static_C::Use_IES_Intensity' has a wrong offset!");
static_assert(offsetof(ALP_PointLight_Static_C, Cast_Shadow_PointLight) == 0x00022B, "Member 'ALP_PointLight_Static_C::Cast_Shadow_PointLight' has a wrong offset!");
static_assert(offsetof(ALP_PointLight_Static_C, Specular_Scale) == 0x00022C, "Member 'ALP_PointLight_Static_C::Specular_Scale' has a wrong offset!");
static_assert(offsetof(ALP_PointLight_Static_C, Source_Radius) == 0x000230, "Member 'ALP_PointLight_Static_C::Source_Radius' has a wrong offset!");
static_assert(offsetof(ALP_PointLight_Static_C, Contact_Shadow) == 0x000234, "Member 'ALP_PointLight_Static_C::Contact_Shadow' has a wrong offset!");

}

