#include "stdafx.h"
#include "utils.h"
#include <globals.h>

using namespace globals;
using namespace SDK;

void utils::UpdateGlobals() noexcept
{
    if (!IsAddressReadable(UEngine::GetEngine(), sizeof(UEngine))) {
        LOG_ERROR("Engine address not readable!");
        return;
    }

    UEngine* engine = UEngine::GetEngine();
    if (!engine) return;
    
    if (!IsAddressReadable(UWorld::GetWorld(), sizeof(UWorld))) {
        LOG_ERROR("World address not readable!");
        return;
    }

    UWorld* world = UWorld::GetWorld();


    if (!world) {
        LOG_WARN("no world");
        return;
    }

    if (!IsPointerReadable(&world->OwningGameInstance)) {
        LOG_ERROR("Pointer on OwningGameInstance not readable!");
        return;
    }

    game_instance = world->OwningGameInstance;

    if (!game_instance) {
        LOG_WARN("no game_instance");
        return;
    }

    if (!IsPointerReadable(&game_instance->LocalPlayers)) {
        LOG_ERROR("Pointer on LocalPlayer not readable!");
        return;
    }

    local_players = game_instance->LocalPlayers;

    if (!local_players) {
        LOG_WARN("no local_players");
        return;
    }

    if (local_players.Num() < 1) {
        LOG_WARN("local_players < 1");
        return;
    }

    local_player = local_players[0];

    if (!local_player) {
        LOG_WARN("no self");
        return;
    }

    if (!IsPointerReadable(&local_player->PlayerController)) {
        LOG_ERROR("Pointer on OwningGameInstance not readable!");
        return;
    }

    player_controller = local_player->PlayerController;

    if (!player_controller) {
        LOG_WARN("no player controller");
        return;
    }

    if (!IsPointerReadable(&player_controller->AcknowledgedPawn)) {
        LOG_ERROR("Pointer on OwningGameInstance not readable!");
        return;
    }

    pawn = player_controller->AcknowledgedPawn;

    if (!pawn) {
        LOG_WARN("no pawn");
        return;
    }

    if (!pawn->IsControlled() or !pawn->IsPawnControlled()) {
        LOG_WARN("something not controlled pawn");
        return;
    }

}

bool utils::IsGameExploitable()
{

    if (!pawn)
        return false;

	return true;
}

bool utils::IsAddressReadable(const void* ptr, size_t size) {
    MEMORY_BASIC_INFORMATION mbi;
    if (VirtualQuery(ptr, &mbi, sizeof(mbi)) == 0)
        return false;
    if (mbi.State != MEM_COMMIT)
        return false;
    if (mbi.Protect & (PAGE_GUARD | PAGE_NOACCESS))
        return false;
    return (reinterpret_cast<uintptr_t>(ptr) + size) <= (reinterpret_cast<uintptr_t>(mbi.BaseAddress) + mbi.RegionSize);
}