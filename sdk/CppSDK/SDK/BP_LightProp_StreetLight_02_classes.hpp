#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LightProp_StreetLight_02

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_LightProp_StreetLight_02.BP_LightProp_StreetLight_02_C
// 0x0028 (0x0208 - 0x01E0)
class ABP_LightProp_StreetLight_02_C final : public AActor
{
public:
	class USpotLightComponent*                    SpotLight;                                         // 0x01E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Lamp;                                              // 0x01E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x01F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             NewEventDispatcher_0;                              // 0x01F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void NewEventDispatcher_0__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_LightProp_StreetLight_02_C">();
	}
	static class ABP_LightProp_StreetLight_02_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_LightProp_StreetLight_02_C>();
	}
};
static_assert(alignof(ABP_LightProp_StreetLight_02_C) == 0x000008, "Wrong alignment on ABP_LightProp_StreetLight_02_C");
static_assert(sizeof(ABP_LightProp_StreetLight_02_C) == 0x000208, "Wrong size on ABP_LightProp_StreetLight_02_C");
static_assert(offsetof(ABP_LightProp_StreetLight_02_C, SpotLight) == 0x0001E0, "Member 'ABP_LightProp_StreetLight_02_C::SpotLight' has a wrong offset!");
static_assert(offsetof(ABP_LightProp_StreetLight_02_C, Lamp) == 0x0001E8, "Member 'ABP_LightProp_StreetLight_02_C::Lamp' has a wrong offset!");
static_assert(offsetof(ABP_LightProp_StreetLight_02_C, DefaultSceneRoot) == 0x0001F0, "Member 'ABP_LightProp_StreetLight_02_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_LightProp_StreetLight_02_C, NewEventDispatcher_0) == 0x0001F8, "Member 'ABP_LightProp_StreetLight_02_C::NewEventDispatcher_0' has a wrong offset!");

}
