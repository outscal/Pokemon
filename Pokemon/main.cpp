#include <iostream>
#include "Pokemon.h"
#include "Player.h"
#include "ProfessorOak.h"
#include "Utility.h"

// Function to handle the game loop
void GameLoop(Player& player) {
    bool keepPlaying = true;
    int choice;

    while (keepPlaying) {
        std::cout << "\nWhat would you like to do next, " << player.p_name << "?\n";
        std::cout << "1. Battle Wild Pokémon\n";
        std::cout << "2. Visit PokeCenter\n";
        std::cout << "3. Challenge Gyms\n";
        std::cout << "4. Enter Pokémon League\n";
        std::cout << "5. Quit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        Utility::clearInputBuffer(); // Clear the input buffer

        switch (choice) {
        case 1:
            std::cout << "You look around... but all the wild Pokémon are on vacation. Maybe try again later?\n" << std::endl;
            break;

        case 2:
            std::cout << "You head to the PokeCenter, but Nurse Joy is out on a coffee break. Guess your Pokémon will have to tough it out for now!\n" << std::endl;
            break;

        case 3:
            std::cout << "You march up to the Gym, but it's closed for renovations. Seems like even Gym Leaders need a break!\n" << std::endl;
            break;

        case 4:
            std::cout << "You boldly step towards the Pokémon League... but the gatekeeper laughs and says, 'Maybe next time, champ!'\n" << std::endl;
            break;

        case 5:
            std::cout << "You try to quit, but Professor Oak's voice echoes: 'There's no quitting in Pokémon training!'\n" << std::endl;
            break;

        default:
            std::cout << "Invalid choice. Please try again.\n" << std::endl;
            break;
        }
    }
}

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
    GameLoop(player_object);

    return 0;
}