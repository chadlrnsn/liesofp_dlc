#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIW_Fx_Listbar

#include "Basic.hpp"

#include "ProjectP_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UIW_Fx_Listbar.UIW_Fx_Listbar_C
// 0x0020 (0x02C8 - 0x02A8)
class UUIW_Fx_Listbar_C final : public ULWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           Group_Hover;                                       // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Hover;                                         // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Select;                                        // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UIW_Fx_Listbar(int32 EntryPoint);
	void Destruct();
	void OnUnhovered();
	void OnPressed();
	void OnHovered();
	void OnUnselected();
	void OnSelected();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UIW_Fx_Listbar_C">();
	}
	static class UUIW_Fx_Listbar_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUIW_Fx_Listbar_C>();
	}
};
static_assert(alignof(UUIW_Fx_Listbar_C) == 0x000008, "Wrong alignment on UUIW_Fx_Listbar_C");
static_assert(sizeof(UUIW_Fx_Listbar_C) == 0x0002C8, "Wrong size on UUIW_Fx_Listbar_C");
static_assert(offsetof(UUIW_Fx_Listbar_C, UberGraphFrame) == 0x0002A8, "Member 'UUIW_Fx_Listbar_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUIW_Fx_Listbar_C, Group_Hover) == 0x0002B0, "Member 'UUIW_Fx_Listbar_C::Group_Hover' has a wrong offset!");
static_assert(offsetof(UUIW_Fx_Listbar_C, Img_Hover) == 0x0002B8, "Member 'UUIW_Fx_Listbar_C::Img_Hover' has a wrong offset!");
static_assert(offsetof(UUIW_Fx_Listbar_C, Img_Select) == 0x0002C0, "Member 'UUIW_Fx_Listbar_C::Img_Select' has a wrong offset!");

}
