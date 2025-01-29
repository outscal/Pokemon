#pragma once
#ifndef WILDPOKEMON_H
#define WILDPOKEMON_H
#include "Pokemon.h"



class WildPokemon : public Pokemon{
public:
	WildPokemon(PokemonSpecies encounteredPokemon);
};


#endif // !WILDPOKEMON_H
