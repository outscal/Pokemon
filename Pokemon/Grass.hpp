//#pragma once
#include <string>
#include <vector>
using namespace std;

class Pokemon;

struct Grass {
    string environmentType;  // Example: "Forest", "Cave", "Riverbank"
    vector<Pokemon> wildPokemonList;  // List of wild Pokémon in this grass
    int encounterRate;  // Likelihood of encountering a wild Pokémon, out of 100
};