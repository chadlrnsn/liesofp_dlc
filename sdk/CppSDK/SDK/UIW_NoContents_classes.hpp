#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIW_NoContents

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UIW_NoContents.UIW_NoContents_C
// 0x0010 (0x0278 - 0x0268)
class UUIW_NoContents_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0268(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             Text;                                              // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UIW_NoContents(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UIW_NoContents_C">();
	}
	static class UUIW_NoContents_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUIW_NoContents_C>();
	}
};
static_assert(alignof(UUIW_NoContents_C) == 0x000008, "Wrong alignment on UUIW_NoContents_C");
static_assert(sizeof(UUIW_NoContents_C) == 0x000278, "Wrong size on UUIW_NoContents_C");
static_assert(offsetof(UUIW_NoContents_C, UberGraphFrame) == 0x000268, "Member 'UUIW_NoContents_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUIW_NoContents_C, Text) == 0x000270, "Member 'UUIW_NoContents_C::Text' has a wrong offset!");

}
