#include "Bulbasaur.h"
#include "PokemonTypes.h"
#include <iostream>
using namespace std;

Bulbasaur::Bulbasaur() : Pokemon(PokemonSpecies::Bulbasaur, 50) 
{
    attackPower = 20;
}

void Bulbasaur::vineWhip(Pokemon& target) {
    cout << name << " uses vine Whip on " << target.name << "!\n";
    target.takeDamage(attackPower);
}

void Bulbasaur::attack(Pokemon& target) {
    vineWhip(target);
}