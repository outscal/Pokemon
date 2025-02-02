#include "Caterpie.h"
#include <iostream>

using namespace std;

Caterpie::Caterpie() : Pokemon(PokemonSpecies::Caterpie, 20) 
{
    attackPower = 10;
}

void Caterpie::bugBite(Pokemon& target) {
    cout << name << " uses Bug Bite on " << target.name << "!\n";
    target.takeDamage(attackPower);
}
void Caterpie::attack(Pokemon& target) {
    bugBite(target);
}