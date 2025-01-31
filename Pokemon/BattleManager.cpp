#include "BattleManager.h"
#include "Utility.h"
#include <iostream>
using namespace N_Utility;
void BattleManager::startBattle(Player& player, Pokemon& opposingPokemon)
{
    
    battleState.playerPokemon = &player.p_chosenPokemon;
    battleState.wildPokemon = &opposingPokemon;
    battleState.playerTurn = true;  // Player starts first
    battleState.battleOngoing = true;
    
    
    
    std::cout << "A wild " << opposingPokemon.name << " appeared!\n";
    battle(player.p_chosenPokemon, opposingPokemon);
}


void BattleManager::battle(Pokemon& playerPokemon, Pokemon& opposingPokemon)
{
    while (battleState.battleOngoing) {
        if (battleState.playerTurn) {
            // Player's turn to attack
            battleState.playerPokemon->attack(*battleState.wildPokemon);
        }
        else {
            // Wild Pokémon's turn to attack
            battleState.wildPokemon->attack(*battleState.playerPokemon);
        }

        // Update the battle state after the turn
        updateBattleState();

        // Switch turns
        battleState.playerTurn = !battleState.playerTurn;

        Utility::waitForEnter();
    }

    handleBattleOutcome();
    
}

void BattleManager::handleBattleOutcome() {
    if (battleState.playerPokemon->isFainted()) {
        std::cout << battleState.playerPokemon->name << " has fainted! You lose the battle.\\n";
    }
    else {
        std::cout << "You defeated the wild " << battleState.wildPokemon->name << "!\\n";
    }
}

void BattleManager::updateBattleState() {
    if (battleState.playerPokemon->isFainted()) {
        battleState.battleOngoing = false;
    }
    else if (battleState.wildPokemon->isFainted()) {
        battleState.battleOngoing = false;
    }
}
