#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIW_SlaveArm_ReinforceLine

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UIW_SlaveArm_ReinforceLine.UIW_SlaveArm_ReinforceLine_C
// 0x0010 (0x0278 - 0x0268)
class UUIW_SlaveArm_ReinforceLine_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0268(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Img_ActiveLine;                                    // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UIW_SlaveArm_ReinforceLine(int32 EntryPoint);
	void Construct();
	void SetActive(bool IsActive);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UIW_SlaveArm_ReinforceLine_C">();
	}
	static class UUIW_SlaveArm_ReinforceLine_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUIW_SlaveArm_ReinforceLine_C>();
	}
};
static_assert(alignof(UUIW_SlaveArm_ReinforceLine_C) == 0x000008, "Wrong alignment on UUIW_SlaveArm_ReinforceLine_C");
static_assert(sizeof(UUIW_SlaveArm_ReinforceLine_C) == 0x000278, "Wrong size on UUIW_SlaveArm_ReinforceLine_C");
static_assert(offsetof(UUIW_SlaveArm_ReinforceLine_C, UberGraphFrame) == 0x000268, "Member 'UUIW_SlaveArm_ReinforceLine_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUIW_SlaveArm_ReinforceLine_C, Img_ActiveLine) == 0x000270, "Member 'UUIW_SlaveArm_ReinforceLine_C::Img_ActiveLine' has a wrong offset!");

}
