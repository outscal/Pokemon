#pragma once
#ifndef WILDPOKEMON_H
#define WILDPOKEMON_H
#include "Pokemon.h"



class WildPokemon : public Pokemon{
private:
	Pokemon* pokemon;
public:
	WildPokemon(PokemonSpecies encounteredPokemon);
	void attack(Pokemon& target) override;

};


#endif // !WILDPOKEMON_H
