#include "Caterpie.h"
#include <iostream>

using namespace std;

Caterpie::Caterpie() : Pokemon(PokemonSpecies::Caterpie, 20) 
{
    
}


void Caterpie::attack(Pokemon& target) {
    selectAndUseMove(&target);
}