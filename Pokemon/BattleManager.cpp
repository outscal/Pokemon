#include "BattleManager.h"
#include <iostream>

void BattleManager::battle(Pokemon& playerPokemon, Pokemon& opposingPokemon)
{
    std::cout << "A wild " << opposingPokemon.name << " appeared!\\n";

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