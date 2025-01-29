// grass.h
#include<string>
#include<vector>
#include "Pokemon.h"
#include "PokemonSpecies.h"
#include "PokemonTypes.h"
#include "EnvironmentTypes.h"

using namespace std;


struct Grass {
    EnvironmentTypes environmentType;  // Example: "Forest", "Cave", "Riverbank"
    vector<PokemonSpecies> wildPokemonList;  // List of wild Pokémon that live in this grass
    int encounterRate;  // Likelihood of encountering a wild Pokémon, out of 100
};