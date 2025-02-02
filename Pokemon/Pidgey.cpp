#include "Pidgey.h"
#include <iostream>
using namespace std;

Pidgey::Pidgey() : Pokemon(PokemonSpecies::Pidgey, 35) { attackPower = 15; }

void Pidgey::wingAttack(Pokemon& target) {
    cout << name << " uses Wing Attack on " << target.name << "!\n";
    target.takeDamage(attackPower);
}

void Pidgey::attack(Pokemon& target) {
    wingAttack(target);
}