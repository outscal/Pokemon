#include "Bulbasaur.h"
#include "PokemonTypes.h"
#include <iostream>
using namespace std;

Balbasaur::Balbasaur() : Pokemon(PokemonSpecies::Bulbasaur, 50) {}

void Balbasaur::vineWhip(Pokemon& target) {
    cout << name << " uses vine Whip on " << target.name << "!\n";
    target.takeDamage(20);
}