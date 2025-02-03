#include "Pikachu.h"


#include <iostream>



using namespace std;

Pikachu::Pikachu() : Pokemon(PokemonSpecies::Pikachu, 50) {}


void Pikachu::attack(Pokemon& target) {
    selectAndUseMove(&target);
}
    
