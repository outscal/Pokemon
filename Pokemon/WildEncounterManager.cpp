#include "WildEncounterManager.h"
#include <cstdlib>
#include <ctime>


WildEncounterManager::WildEncounterManager() {
	srand(time(0));
}

WildPokemon WildEncounterManager::getRandomPokemonFromGrass(const Grass& grass) {
    int randomIndex = rand() % grass.wildPokemonList.size();
    return WildPokemon(grass.wildPokemonList[randomIndex]);
}