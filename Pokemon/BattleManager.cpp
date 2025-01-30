#include "BattleManager.h"
#include "Utility.h"
#include <iostream>

void BattleManager::startBattle(Player& player, Pokemon& opposingPokemon)
{
    std::cout << "A wild " << opposingPokemon.name << " appeared!\n";
    battle(player.p_chosenPokemon, opposingPokemon);
}


void BattleManager::battle(Pokemon& playerPokemon, Pokemon& opposingPokemon)
{

    while (!playerPokemon.isFainted() && !opposingPokemon.isFainted()) {
        playerPokemon.attack(opposingPokemon); // Player attacks first

        if (!opposingPokemon.isFainted()) {
            opposingPokemon.attack(playerPokemon); // Wild Pokémon attacks back
        }
    }

    if (playerPokemon.isFainted()) {
        std::cout << playerPokemon.name << " has fainted! You lose the battle.\\n";
    }
    else {
        std::cout << "You defeated the wild " << opposingPokemon.name << "!\\n";
    }
}

void BattleManager::handleBattleOutcome(Player& player, bool playerWon) {
    if(playerWon) {
        std::cout << player.p_chosenPokemon.name << " is victorious! Keep an eye on your Pokémon's health.\n";
    }
     else {
         std::cout << "Oh no! " << player.p_chosenPokemon.name << " fainted! You need to visit the PokeCenter.\n";
         Utility::waitForEnter();
         std::cout << "Game Over.\n";
        }
}
