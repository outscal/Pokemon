#include "Pidgey.h"
#include <iostream>
using namespace std;

Pidgey::Pidgey() : Pokemon(PokemonSpecies::Pidgey, 35) {  }



void Pidgey::attack(Pokemon& target) {
    selectAndUseMove(&target);
}