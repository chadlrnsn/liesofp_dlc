#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIBP_ListData_CombineItem

#include "Basic.hpp"

#include "ProjectP_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass UIBP_ListData_CombineItem.UIBP_ListData_CombineItem_C
// 0x0020 (0x0048 - 0x0028)
class UUIBP_ListData_CombineItem_C final : public UObject
{
public:
	class UUIW_Window_C*                          OwnerWindow;                                       // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FName                                   ID;                                                // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FLWeaponPartInfoForCombine             CombineItem;                                       // 0x0038(0x0010)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UIBP_ListData_CombineItem_C">();
	}
	static class UUIBP_ListData_CombineItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUIBP_ListData_CombineItem_C>();
	}
};
static_assert(alignof(UUIBP_ListData_CombineItem_C) == 0x000008, "Wrong alignment on UUIBP_ListData_CombineItem_C");
static_assert(sizeof(UUIBP_ListData_CombineItem_C) == 0x000048, "Wrong size on UUIBP_ListData_CombineItem_C");
static_assert(offsetof(UUIBP_ListData_CombineItem_C, OwnerWindow) == 0x000028, "Member 'UUIBP_ListData_CombineItem_C::OwnerWindow' has a wrong offset!");
static_assert(offsetof(UUIBP_ListData_CombineItem_C, ID) == 0x000030, "Member 'UUIBP_ListData_CombineItem_C::ID' has a wrong offset!");
static_assert(offsetof(UUIBP_ListData_CombineItem_C, CombineItem) == 0x000038, "Member 'UUIBP_ListData_CombineItem_C::CombineItem' has a wrong offset!");

}
