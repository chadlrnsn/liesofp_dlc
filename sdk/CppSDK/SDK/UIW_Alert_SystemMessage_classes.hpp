#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIW_Alert_SystemMessage

#include "Basic.hpp"

#include "ProjectP_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UIW_Alert_SystemMessage.UIW_Alert_SystemMessage_C
// 0x0028 (0x02D0 - 0x02A8)
class UUIW_Alert_SystemMessage_C final : public ULWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Ani_Construct;                                     // 0x02B0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           Group_Bg;                                          // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBP_LRichKeyTextBlock_C*              KeyBindText;                                       // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FTimerHandle                           Timer;                                             // 0x02C8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UIW_Alert_SystemMessage(int32 EntryPoint);
	void Destruct();
	void Remove(class FName CategoryName);
	void RemoveTween();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UIW_Alert_SystemMessage_C">();
	}
	static class UUIW_Alert_SystemMessage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUIW_Alert_SystemMessage_C>();
	}
};
static_assert(alignof(UUIW_Alert_SystemMessage_C) == 0x000008, "Wrong alignment on UUIW_Alert_SystemMessage_C");
static_assert(sizeof(UUIW_Alert_SystemMessage_C) == 0x0002D0, "Wrong size on UUIW_Alert_SystemMessage_C");
static_assert(offsetof(UUIW_Alert_SystemMessage_C, UberGraphFrame) == 0x0002A8, "Member 'UUIW_Alert_SystemMessage_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUIW_Alert_SystemMessage_C, Ani_Construct) == 0x0002B0, "Member 'UUIW_Alert_SystemMessage_C::Ani_Construct' has a wrong offset!");
static_assert(offsetof(UUIW_Alert_SystemMessage_C, Group_Bg) == 0x0002B8, "Member 'UUIW_Alert_SystemMessage_C::Group_Bg' has a wrong offset!");
static_assert(offsetof(UUIW_Alert_SystemMessage_C, KeyBindText) == 0x0002C0, "Member 'UUIW_Alert_SystemMessage_C::KeyBindText' has a wrong offset!");
static_assert(offsetof(UUIW_Alert_SystemMessage_C, Timer) == 0x0002C8, "Member 'UUIW_Alert_SystemMessage_C::Timer' has a wrong offset!");

}
