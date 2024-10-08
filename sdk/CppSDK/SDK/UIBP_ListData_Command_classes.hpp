#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIBP_ListData_Command

#include "Basic.hpp"

#include "Slate_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass UIBP_ListData_Command.UIBP_ListData_Command_C
// 0x0058 (0x0080 - 0x0028)
class UUIBP_ListData_Command_C final : public UObject
{
public:
	class FString                                 Label;                                             // 0x0028(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FString                                 Catergory;                                         // 0x0038(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<class FString>                         CommandLines;                                      // 0x0048(0x0010)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FInputChord                            HotKey;                                            // 0x0058(0x0020)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	class UUIW_CommandBook_C*                     CommandBook;                                       // 0x0078(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UIBP_ListData_Command_C">();
	}
	static class UUIBP_ListData_Command_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUIBP_ListData_Command_C>();
	}
};
static_assert(alignof(UUIBP_ListData_Command_C) == 0x000008, "Wrong alignment on UUIBP_ListData_Command_C");
static_assert(sizeof(UUIBP_ListData_Command_C) == 0x000080, "Wrong size on UUIBP_ListData_Command_C");
static_assert(offsetof(UUIBP_ListData_Command_C, Label) == 0x000028, "Member 'UUIBP_ListData_Command_C::Label' has a wrong offset!");
static_assert(offsetof(UUIBP_ListData_Command_C, Catergory) == 0x000038, "Member 'UUIBP_ListData_Command_C::Catergory' has a wrong offset!");
static_assert(offsetof(UUIBP_ListData_Command_C, CommandLines) == 0x000048, "Member 'UUIBP_ListData_Command_C::CommandLines' has a wrong offset!");
static_assert(offsetof(UUIBP_ListData_Command_C, HotKey) == 0x000058, "Member 'UUIBP_ListData_Command_C::HotKey' has a wrong offset!");
static_assert(offsetof(UUIBP_ListData_Command_C, CommandBook) == 0x000078, "Member 'UUIBP_ListData_Command_C::CommandBook' has a wrong offset!");

}

