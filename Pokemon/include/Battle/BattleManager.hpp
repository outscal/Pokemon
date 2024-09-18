#pragma once
#include "../Battle/BattleState.hpp"
#include "../Character/Player/Player.hpp"

namespace N_Battle
{
    class Pokemon;
    using namespace N_Character::N_Player;
    using namespace N_Pokemon;

    class BattleManager {
    public:
        void startBattle(Player* player, N_Pokemon::Pokemon* wildPokemon);
        static void stopBattle();
    private:
        static BattleState battleState;  

        void battle();
        void handleBattleOutcome();
        void updateBattleState(); 
    };
}
