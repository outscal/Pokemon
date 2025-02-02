#include "Pidgey.h"
#include <iostream>
using namespace std;

Pidgey::Pidgey() : Pokemon(PokemonSpecies::Pidgey, 35) {}

void Pidgey::wingAttack(Pokemon& target) {
    cout << name << " uses Wing Attack on " << target.name << "!\n";
    target.takeDamage(20);
}