// grass.h

#ifndef GRASS_H
#define GRASS_H
#include<string>
#include<vector>
#include "Pokemon.h"
#include "PokemonSpecies.h"
#include "PokemonTypes.h"
#include "EnvironmentTypes.h"

using namespace std;


struct Grass {
    EnvironmentTypes environmentType;  // Example: "Forest", "Cave", "Riverbank"
    vector<PokemonSpecies> wildPokemonList;  // List of wild Pok�mon that live in this grass
    int encounterRate;  // Likelihood of encountering a wild Pok�mon, out of 100
};

#endif 