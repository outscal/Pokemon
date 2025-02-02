#include "Squirtle.h"
#include "PokemonTypes.h"
#include <iostream>
using namespace std;

Squirtle::Squirtle() : Pokemon(PokemonSpecies::Squirtle, 50) { attackPower = 20; }

void Squirtle::waterSplash(Pokemon& target) {
    cout << name << " uses Water splash on " << target.name << "!\n";
    target.takeDamage(attackPower);
}
void Squirtle::attack(Pokemon& target) {
    waterSplash(target);
}