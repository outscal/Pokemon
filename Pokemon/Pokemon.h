#pragma once

#ifndef POKEMON_H
#define POKEMON_H

#include <string>
#include <unordered_map>
#include "PokemonTypes.h"
#include "PokemonSpecies.h"

class Pokemon {
public:
    // Static dictionaries for Pokemon names and types
    static std::unordered_map<PokemonSpecies, std::string> pokemon_names;
    static std::unordered_map<PokemonSpecies, PokemonType> pokemon_types;

    // Member variables
    PokemonSpecies species;
    PokemonType type;
    int health;
    std::string name;

    // Constructors and Destructor
    Pokemon();
    Pokemon(PokemonSpecies p_species, int p_health);
    Pokemon(const Pokemon& other);
    ~Pokemon();

    // Member functions
    void attack();
    void constructNameDictionary();
    void constructTypeDictionary();
};

#endif // POKEMON_H