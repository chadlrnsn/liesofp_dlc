#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LOPARTnMusicPlugin

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// Class LOPARTnMusicPlugin.LOPARTnMusicPluginBPLibrary
// 0x0000 (0x0028 - 0x0028)
class ULOPARTnMusicPluginBPLibrary final : public UBlueprintFunctionLibrary
{
public:
	static class FString GetPlayerNickName();
	static bool IsRightAcceptButton();
	static float LOPARTnMusicPluginSampleFunction(float Param);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LOPARTnMusicPluginBPLibrary">();
	}
	static class ULOPARTnMusicPluginBPLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULOPARTnMusicPluginBPLibrary>();
	}
};
static_assert(alignof(ULOPARTnMusicPluginBPLibrary) == 0x000008, "Wrong alignment on ULOPARTnMusicPluginBPLibrary");
static_assert(sizeof(ULOPARTnMusicPluginBPLibrary) == 0x000028, "Wrong size on ULOPARTnMusicPluginBPLibrary");

}
