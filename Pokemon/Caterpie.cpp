#include "Caterpie.h"
#include <iostream>

using namespace std;

Caterpie::Caterpie() : Pokemon(PokemonSpecies::Caterpie, 20) {}

void Caterpie::bugBite(Pokemon& target) {
    cout << name << " uses Bug Bite on " << target.name << "!\n";
    target.takeDamage(20);
}