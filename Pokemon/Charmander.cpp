#include "Charmander.h"
#include "PokemonTypes.h"
#include <iostream>
using namespace std;

Charmander::Charmander() : Pokemon(PokemonSpecies::Charmander, 50) {  }



void Charmander::attack(Pokemon& target) {
    selectAndUseMove(&target);
}