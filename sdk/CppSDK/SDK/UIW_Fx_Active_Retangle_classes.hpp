#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIW_Fx_Active_Retangle

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UIW_Fx_Active_Retangle.UIW_Fx_Active_Retangle_C
// 0x0010 (0x0278 - 0x0268)
class UUIW_Fx_Active_Retangle_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0268(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Ani_Play;                                          // 0x0270(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UIW_Fx_Active_Retangle(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UIW_Fx_Active_Retangle_C">();
	}
	static class UUIW_Fx_Active_Retangle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUIW_Fx_Active_Retangle_C>();
	}
};
static_assert(alignof(UUIW_Fx_Active_Retangle_C) == 0x000008, "Wrong alignment on UUIW_Fx_Active_Retangle_C");
static_assert(sizeof(UUIW_Fx_Active_Retangle_C) == 0x000278, "Wrong size on UUIW_Fx_Active_Retangle_C");
static_assert(offsetof(UUIW_Fx_Active_Retangle_C, UberGraphFrame) == 0x000268, "Member 'UUIW_Fx_Active_Retangle_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUIW_Fx_Active_Retangle_C, Ani_Play) == 0x000270, "Member 'UUIW_Fx_Active_Retangle_C::Ani_Play' has a wrong offset!");

}
