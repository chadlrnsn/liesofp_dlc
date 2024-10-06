#pragma once
#include <SDK.hpp>
#include <atomic>
#include <SDK.hpp>
#include <include/logger/logger.h>

using namespace SDK;
namespace globals {
    inline std::atomic_bool(g_break) = false;

    inline UGameInstance* game_instance;
    inline TArray<ULocalPlayer*> local_players;
    inline ULocalPlayer* local_player;
    inline APlayerController* player_controller;
    inline APawn* pawn;


}

//namespace 

// ALPCCharacter
// ALCharacter
// ALPCController