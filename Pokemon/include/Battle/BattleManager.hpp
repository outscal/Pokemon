#pragma once
#include "../Battle/BattleState.hpp"
#include "../Character/Player/Player.hpp"

namespace N_Battle
{ 

    class Pokemon;
    using namespace N_Character::N_Player;

    class BattleManager {
    public:
        void startBattle(N_Character::N_Player::Player& player, N_Pokemon::Pokemon& wildPokemon);
    private:
        N_Battle::BattleState battleState;
    
        void battle();
        void handleBattleOutcome();
        void updateBattleState();
    };
}