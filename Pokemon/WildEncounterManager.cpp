#include "Grass.hpp"
#include "WildEncounterManager.hpp"
#include "Pokemon.hpp"
#include <cstdlib> // For rand()
#include <ctime>   // For time()

WildEncounterManager::WildEncounterManager() {
	srand(time(0)); // Seed the random number generator
}

Pokemon WildEncounterManager::getRandomPokemonFromGrass(const Grass& grass) {
	int randomIndex = rand() % grass.wildPokemonList.size();
	return grass.wildPokemonList[randomIndex];
}