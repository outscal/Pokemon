#include <iostream>
#include "Pokemon.h"
#include "Player.h"
#include "ProfessorOak.h"
#include "Utility.h"
#include "Game.h"

// Function to handle the game loop

int main() {
    // Create a Player object
    Player* player_object = new Player();

    // Create a ProfessorOak object and pass the player to it
    ProfessorOak* professor = new ProfessorOak("Professor Oak", *player_object);

    // Professor greets the player
    professor->greetPlayer();

    // Professor offers Pokémon choices
    professor->offerPokemonChoices();

    // Professor explains the main quest
    professor->explainMainQuest(*player_object);

    // Start the game loop
    Game *game = new Game();
    game->GameLoop(*player_object);

    return 0;
}