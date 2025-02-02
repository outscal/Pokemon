#include "Zubat.h"
#include <iostream>
using namespace std;

Zubat::Zubat() : Pokemon(PokemonSpecies::Zubat, 30) { attackPower = 15; }

void Zubat::supersonic(Pokemon& target) {
    cout << name << " uses Supersonic on " << target.name << "!\n";
    target.takeDamage(attackPower);
}

void Zubat::attack(Pokemon& target) {
    supersonic(target);
}