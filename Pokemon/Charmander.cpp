#include "Charmander.h"
#include "PokemonTypes.h"
#include <iostream>
using namespace std;

Charmander::Charmander() : Pokemon(PokemonSpecies::Charmander, 50) { attackPower = 25; }

void Charmander::flameThrower(Pokemon& target) {
    cout << name << " uses Flame Thrower on " << target.name << "!\n";
    target.takeDamage(attackPower);
}

void Charmander::attack(Pokemon& target) {
    flameThrower(target);
}