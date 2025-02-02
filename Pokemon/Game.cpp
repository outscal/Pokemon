#include "Game.h"
#include <iostream>
#include "Grass.h"
#include "WildEncounterManager.h"
#include "BattleManager.h"




void Game::GameLoop(Player& player) {
    bool keepPlaying = true;
    int choice;
    BattleManager battleManager;



    Grass caveGrass = {
        EnvironmentTypes::Cave,
        {PokemonSpecies::Zubat, PokemonSpecies::Geodude},
        60
    };

    Grass forestGrass = {
        EnvironmentTypes::Forest,
        {PokemonSpecies::Pidgey, PokemonSpecies::Caterpie},
        80
    };


    while (keepPlaying) {
        Utility::clearConsole();
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
        {
            WildEncounterManager encounterManager;
            WildPokemon encounteredPokemon = encounterManager.getRandomPokemonFromGrass(forestGrass);

            battleManager.startBattle(player, encounteredPokemon);
            
            break;
        }
            case 2:
                cout << "You head to the PokeCenter.\\n";
                player.p_chosenPokemon.healToFullHealth(); // Heal the player's Pokémon
                cout << player.p_chosenPokemon.name << "'s health is fully restored!\\n";
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


