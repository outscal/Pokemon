#pragma once
#ifndef WILDENCOUNTERMANAGER_H
#define WILDENCOUNTERMANAGER_H

#include "Grass.h"
#include "WildPokemon.h"


class WildEncounterManager {
public:
	WildPokemon getRandomPokemonFromGrass(const Grass& encounterGrass);

};


#endif