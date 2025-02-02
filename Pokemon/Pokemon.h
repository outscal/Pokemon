#pragma once

#ifndef POKEMON_H
#define POKEMON_H

#include <string>
#include <unordered_map>
#include "PokemonTypes.h"
#include "PokemonSpecies.h"

class Pokemon {
private:
    PokemonSpecies species;

protected:
    PokemonType type;
    int health;
    int maxHealth;
    int attackPower;
public:
    // Static dictionaries for Pokemon names and types
    static std::unordered_map<PokemonSpecies, std::string> pokemon_names;
    static std::unordered_map<PokemonSpecies, PokemonType> pokemon_types;

    

    std::string name;

    // Constructors and Destructor
    Pokemon();
    Pokemon(PokemonSpecies p_species, int p_health);
    Pokemon(const Pokemon& other);
    ~Pokemon();

    // Member functions
    virtual void attack(Pokemon& opposingPokemon) = 0; // syntax for an abstract function declaration 
    void constructNameDictionary();
    void constructTypeDictionary();
    void takeDamage(int damage);
    bool isFainted();
    void healToFullHealth(); // Method to restore HP to max
};

#endif // POKEMON_H