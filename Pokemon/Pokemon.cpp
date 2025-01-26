#include "Pokemon.h"
#include <iostream>

// Static member initialization
std::unordered_map<PokemonSpecies, std::string> Pokemon::pokemon_names;
std::unordered_map<PokemonSpecies, PokemonType> Pokemon::pokemon_types;

// Default constructor
Pokemon::Pokemon() {
    constructNameDictionary();
    constructTypeDictionary();
    species = PokemonSpecies::Pikachu;
    name = pokemon_names[species];
    health = 15;
    type = pokemon_types[species];
}

// Parameterized constructor
Pokemon::Pokemon(PokemonSpecies p_species, int p_health) {
    constructNameDictionary();
    constructTypeDictionary();
    species = p_species;
    type = pokemon_types[species];
    health = p_health;
    name = pokemon_names[p_species];
}

// Copy constructor
Pokemon::Pokemon(const Pokemon& other) {
    name = other.name;
    type = other.type;
    health = other.health;
}

// Destructor
Pokemon::~Pokemon() {
    
}

// Attack function
void Pokemon::attack() {
    std::cout << name << " attacks with a powerful move!\n";
}

// Helper function to construct the name dictionary
void Pokemon::constructNameDictionary() {
    if (pokemon_names.empty()) {
        pokemon_names = {
            {PokemonSpecies::Charmander, "Charmander"},
            {PokemonSpecies::Bulbasaur, "Bulbasaur"},
            {PokemonSpecies::Squirtle, "Squirtle"},
            {PokemonSpecies::Pikachu, "Pikachu"}
        };
    }
}

// Helper function to construct the type dictionary
void Pokemon::constructTypeDictionary() {
    if (pokemon_types.empty()) {
        pokemon_types = {
            {PokemonSpecies::Charmander, PokemonType::Fire},
            {PokemonSpecies::Bulbasaur, PokemonType::Grass},
            {PokemonSpecies::Squirtle, PokemonType::Water},
            {PokemonSpecies::Pikachu, PokemonType::Electric}
        };
    }
}