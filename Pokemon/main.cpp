#include "Main/Game.hpp"
#include "Character/Player/Player.hpp"
#include "Pokemon/PokemonChoice.hpp"
#include "Pokemon/PokemonType.hpp"
#include "Character/ProfessorOak.hpp"
#include "Utility/Utility.hpp"
#include <iostream>
#include <limits> // Include this header to use std::numeric_limits
#include <string>

int main() {

    // Continue with the main flow of the game
    N_Character::ProfessorOak professor("Professor Oak");
    N_Character::N_Player::Player player;

    // Greet the player and offer Pokemon choices
    professor.greetPlayer(player);
    professor.offerPokemonChoices(player);

    // Explain the main quest
    professor.explainMainQuest(player);

    // Start the main game loop
    N_Main::Game game;
    game.gameLoop(player);

    return 0;
}
