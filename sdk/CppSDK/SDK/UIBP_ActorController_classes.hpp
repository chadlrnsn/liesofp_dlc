#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIBP_ActorController

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass UIBP_ActorController.UIBP_ActorController_C
// 0x0058 (0x0080 - 0x0028)
class UUIBP_ActorController_C final : public UObject
{
public:
	struct FVector                                PanInit;                                           // 0x0028(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PanVelocity;                                       // 0x0034(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                PanDirection;                                      // 0x0038(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                RotateInit;                                        // 0x0044(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ALGalleryActor_C*                       GalleryActor;                                      // 0x0050(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsCapturingRotate;                                 // 0x0058(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59[0x3];                                       // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              StartMousePosition_Rotate;                         // 0x005C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                RotateDirection;                                   // 0x0064(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RotateVelocity;                                    // 0x0070(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MaxMoveWidth;                                      // 0x0074(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MaxMoveHeight;                                     // 0x0078(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CurrentZoom;                                       // 0x007C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void UpdateTick(const struct FVector2D& MousePositionViewport, float DeltaTime);
	void Reset(bool Zoom, bool Pan, bool Rotation);
	void SetActorInit(const struct FVector& Pan, const struct FVector& Rotation);
	void StartCaptureForRotate(const struct FVector2D& Mouse_Position_Viewport);
	void SetDirection(const struct FVector2D& MousePositionViewport, const struct FVector2D& StartPosition, struct FVector* Direction, float* SpeedX, float* SpeedY);
	void SetMaxMoveInfo(float MaxWidth, float MaxHeight);
	void GetHalfMaxWidth(float* OutHalfWidth);
	void GetHalfMaxHeight(float* OutHalfHeight);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UIBP_ActorController_C">();
	}
	static class UUIBP_ActorController_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUIBP_ActorController_C>();
	}
};
static_assert(alignof(UUIBP_ActorController_C) == 0x000008, "Wrong alignment on UUIBP_ActorController_C");
static_assert(sizeof(UUIBP_ActorController_C) == 0x000080, "Wrong size on UUIBP_ActorController_C");
static_assert(offsetof(UUIBP_ActorController_C, PanInit) == 0x000028, "Member 'UUIBP_ActorController_C::PanInit' has a wrong offset!");
static_assert(offsetof(UUIBP_ActorController_C, PanVelocity) == 0x000034, "Member 'UUIBP_ActorController_C::PanVelocity' has a wrong offset!");
static_assert(offsetof(UUIBP_ActorController_C, PanDirection) == 0x000038, "Member 'UUIBP_ActorController_C::PanDirection' has a wrong offset!");
static_assert(offsetof(UUIBP_ActorController_C, RotateInit) == 0x000044, "Member 'UUIBP_ActorController_C::RotateInit' has a wrong offset!");
static_assert(offsetof(UUIBP_ActorController_C, GalleryActor) == 0x000050, "Member 'UUIBP_ActorController_C::GalleryActor' has a wrong offset!");
static_assert(offsetof(UUIBP_ActorController_C, IsCapturingRotate) == 0x000058, "Member 'UUIBP_ActorController_C::IsCapturingRotate' has a wrong offset!");
static_assert(offsetof(UUIBP_ActorController_C, StartMousePosition_Rotate) == 0x00005C, "Member 'UUIBP_ActorController_C::StartMousePosition_Rotate' has a wrong offset!");
static_assert(offsetof(UUIBP_ActorController_C, RotateDirection) == 0x000064, "Member 'UUIBP_ActorController_C::RotateDirection' has a wrong offset!");
static_assert(offsetof(UUIBP_ActorController_C, RotateVelocity) == 0x000070, "Member 'UUIBP_ActorController_C::RotateVelocity' has a wrong offset!");
static_assert(offsetof(UUIBP_ActorController_C, MaxMoveWidth) == 0x000074, "Member 'UUIBP_ActorController_C::MaxMoveWidth' has a wrong offset!");
static_assert(offsetof(UUIBP_ActorController_C, MaxMoveHeight) == 0x000078, "Member 'UUIBP_ActorController_C::MaxMoveHeight' has a wrong offset!");
static_assert(offsetof(UUIBP_ActorController_C, CurrentZoom) == 0x00007C, "Member 'UUIBP_ActorController_C::CurrentZoom' has a wrong offset!");

}

