#include "Charmander.h"
#include "PokemonTypes.h"
#include <iostream>
using namespace std;

Charmander::Charmander() : Pokemon(PokemonSpecies::Charmander, 50) {}

void Charmander::flameThrower(Pokemon& target) {
    cout << name << " uses Flame Thrower on " << target.name << "!\n";
    target.takeDamage(20);
}

void Charmander::attack(Pokemon& target) {
    flameThrower(target);
}