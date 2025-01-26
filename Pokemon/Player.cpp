#include "Player.h"
#include <iostream>

// Default constructor
Player::Player() {
    p_name = "Trainer";
    p_chosenPokemon = Pokemon();
}

// Function to allow the player to choose their Pokemon
void Player::choosePokemon() {
    PokemonSpecies firstPokemon = PokemonSpecies::InvalidChoice;
    std::string choice;

    while (firstPokemon == PokemonSpecies::InvalidChoice) {
        std::cin >> choice;

        if (choice == "Charmander") {
            std::cout << "Charmander it is! Take care to not burn down Viridian forest.\n" << std::endl;
            firstPokemon = PokemonSpecies::Charmander;
            p_chosenPokemon = Pokemon(firstPokemon, 20);
        }
        else if (choice == "Squirtle") {
            std::cout << "You chose Squirtle! Ever wondered what's within its shell?\n" << std::endl;
            firstPokemon = PokemonSpecies::Squirtle;
            p_chosenPokemon = Pokemon(firstPokemon, 20);
        }
        else if (choice == "Bulbasaur") {
            std::cout << "Bulbasaur should make a great partner! It is speculated that these Pokémon are the descendants of ancient monsters.\n" << std::endl;
            firstPokemon = PokemonSpecies::Bulbasaur;
            p_chosenPokemon = Pokemon(firstPokemon, 20);
        }
        else {
            std::cout << "Unfortunately, we do not have that Pokémon available currently. Please choose one of the three I have listed above.\n\n" << std::endl;
        }
    }
}