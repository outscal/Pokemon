#include "WildEncounterManager.hpp"
#include <vector>
#include <cstdlib>
#include <ctime>

WildEncounterManager::WildEncounterManager() {
	srand(time(0)); // Seed the random number generator
}

WildPokemon WildEncounterManager::getRandomPokemonFromGrass(const Grass& grass) {
	int randomIndex = rand() % grass.wildPokemonList.size();
	return grass.wildPokemonList[randomIndex];
}
