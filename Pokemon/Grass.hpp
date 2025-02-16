#pragma once
#include <string>
#include <vector>
#include "WildEncounterManager.hpp"
using namespace std;



struct Grass {
	string environmentType;
	vector<Pokemon> wildPokemonList;
	int encounterRate;
};

Grass forestGrass = {
	"Forest",
	{("Pidgey", PokemonType::NORMAL, 40), {"Caterpie", PokemonType::BUG, 35}},
	70
};
Grass caveGrass = {
	"Cave",
	{{"Zubat", PokemonType::POISON, 30}, {"Geodude", PokemonType::ROCK, 50}},
	80
};