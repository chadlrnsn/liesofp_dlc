#include <stdafx.h>

#include "util.h"
#include <globals.h>
#include <include/logger/logger.h>
#include <util.h>
using namespace globals;

bool util::game::IsGameExploitable()
{
    UWorld* world = UWorld::GetWorld();
    UEngine* engine = UEngine::GetEngine();

    if (!world) {
        LOG_WARN("no world");
        return false;
    }

    game_instance = world->OwningGameInstance;

    if (!game_instance) {
        LOG_WARN("no game_instance");
        return false;
    }

    if (!util::IsPointerReadable(&game_instance->LocalPlayers)) {
        LOG_ERROR("Pointer on LocalPlayer not readable!");
        return false;
    }

    local_players = game_instance->LocalPlayers;

    if (!local_players) {
        LOG_WARN("no local_players");
        return false;
    }

    if (local_players.Num() < 1) {
        LOG_WARN("local_players < 1");
        return false;
    }

    local_player = local_players[0];

    if (!local_player) {
        LOG_WARN("no self");
        return false;
    }

    player_controller = local_player->PlayerController;

    if (!player_controller) {
        LOG_WARN("no player controller");
        return false;
    }

    pawn = player_controller->AcknowledgedPawn;

    if (!pawn) {
        LOG_WARN("no pawn");
        return false;
    }

    if (!pawn->IsControlled() or !pawn->IsPawnControlled()) {
        LOG_WARN("something not controlled pawn");
        return false;
    }


	return true;
}
