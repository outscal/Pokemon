#include <iostream>
#include "Pokemon.h"
#include "Player.h"
#include "ProfessorOak.h"
#include "Utility.h"
#include "Game.h"

// Function to handle the game loop

int main() {
    // Create a Player object
    Player player_object;

    // Create a ProfessorOak object and pass the player to it
    ProfessorOak professor("Professor Oak", player_object);

    // Professor greets the player
    professor.greetPlayer();

    // Professor offers Pokémon choices
    professor.offerPokemonChoices();

    // Professor explains the main quest
    professor.explainMainQuest(player_object);

    // Start the game loop
    Game game;
    game.GameLoop(player_object);

    return 0;
}