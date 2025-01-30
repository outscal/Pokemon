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
    maxHealth = 15;
    health = maxHealth;
    type = pokemon_types[species];
}

// Parameterized constructor
Pokemon::Pokemon(PokemonSpecies p_species, int p_health) {
    constructNameDictionary();
    constructTypeDictionary();
    species = p_species;
    type = pokemon_types[species];
    maxHealth = p_health;
    health = maxHealth;
    name = pokemon_names[p_species];
}

// Copy constructor
Pokemon::Pokemon(const Pokemon& other) {
    name = other.name;
    type = other.type;
    maxHealth = other.maxHealth;
    health = other.health;
}

// Destructor
Pokemon::~Pokemon() {
    
}

// Attack function
void Pokemon::attack(Pokemon& opposingPokemon) {
    int damage = 10; // Fixed damage for simplicity
    std::cout << name << " attacks " << opposingPokemon.name << " for " << damage << " damage!\\n";
    opposingPokemon.takeDamage(damage); // Apply damage to the target Pokémon
}
void Pokemon::takeDamage(int damage) {
    health -= damage; // Reduce HP by the damage amount
    if (health < 0) {
        health = 0; // Ensure HP doesn't go below 0
    }
}

bool Pokemon::isFainted() {
    return health <= 0;
}

// Helper function to construct the name dictionary
void Pokemon::constructNameDictionary() {
    if (pokemon_names.empty()) {
        pokemon_names = {
            {PokemonSpecies::Charmander, "Charmander"},
            {PokemonSpecies::Bulbasaur, "Bulbasaur"},
            {PokemonSpecies::Squirtle, "Squirtle"},
            {PokemonSpecies::Pikachu, "Pikachu"},
            {PokemonSpecies::Geodude, "Geodude" },
            {PokemonSpecies::Zubat, "Zubat"},
            {PokemonSpecies::Caterpie, "Caterpie"},
            {PokemonSpecies::Goldeen, "Goldeen"}
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
            {PokemonSpecies::Pikachu, PokemonType::Electric},
            {PokemonSpecies::Geodude, PokemonType::Rock },
            {PokemonSpecies::Zubat, PokemonType::Poison},
            {PokemonSpecies::Caterpie, PokemonType::Bug},
            {PokemonSpecies::Goldeen, PokemonType::Water}
        };
    }
}