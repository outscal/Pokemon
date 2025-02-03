#include "Bulbasaur.h"
#include "PokemonTypes.h"
#include <iostream>
using namespace std;

Bulbasaur::Bulbasaur() : Pokemon(PokemonSpecies::Bulbasaur, 50) 
{
    
}

void Bulbasaur::attack(Pokemon& target) {
    selectAndUseMove(&target);
}