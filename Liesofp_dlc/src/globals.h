#pragma once
#include <SDK.hpp>
#include <atomic>
#include <SDK.hpp>
#include <include/logger/logger.h>

using namespace SDK;
namespace globals {
    inline std::atomic<bool> g_break{ false };

    inline UGameInstance* game_instance;
    inline TArray<ULocalPlayer*> local_players;
    inline ULocalPlayer* local_player;
    inline APlayerController* player_controller;

    inline ACharacter* character;
    inline ALCharacter* AL_Character;
    inline ALPCCharacter* ALPC_Character;

    inline APawn* pawn;
}

//namespace 

// ALPCCharacter
// ALCharacter
// ALPCController