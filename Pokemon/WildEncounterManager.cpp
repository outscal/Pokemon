#include "Grass.h"
#include "WildEncounterManager.h"
#include "Pokemon.h"
#include <cstdlib> // For rand()
#include <ctime>   // For time()

WildEncounterManager::WildEncounterManager() {
	srand(time(0)); // Seed the random number generator
}

Pokemon WildEncounterManager::getRandomPokemonFromGrass(const Grass& grass) {
	int randomIndex = rand() % grass.wildPokemonList.size();
	return grass.wildPokemonList[randomIndex];
}