#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIBP_Drag_TestWindow

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass UIBP_Drag_TestWindow.UIBP_Drag_TestWindow_C
// 0x0010 (0x0098 - 0x0088)
class UUIBP_Drag_TestWindow_C final : public UDragDropOperation
{
public:
	class UUserWidget*                            WidgetReference;                                   // 0x0088(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector2D                              DragOffset;                                        // 0x0090(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UIBP_Drag_TestWindow_C">();
	}
	static class UUIBP_Drag_TestWindow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUIBP_Drag_TestWindow_C>();
	}
};
static_assert(alignof(UUIBP_Drag_TestWindow_C) == 0x000008, "Wrong alignment on UUIBP_Drag_TestWindow_C");
static_assert(sizeof(UUIBP_Drag_TestWindow_C) == 0x000098, "Wrong size on UUIBP_Drag_TestWindow_C");
static_assert(offsetof(UUIBP_Drag_TestWindow_C, WidgetReference) == 0x000088, "Member 'UUIBP_Drag_TestWindow_C::WidgetReference' has a wrong offset!");
static_assert(offsetof(UUIBP_Drag_TestWindow_C, DragOffset) == 0x000090, "Member 'UUIBP_Drag_TestWindow_C::DragOffset' has a wrong offset!");

}
