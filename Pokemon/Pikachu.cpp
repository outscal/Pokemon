#include "Pikachu.h"


#include <iostream>



using namespace std;

Pikachu::Pikachu() : Pokemon(PokemonSpecies::Pikachu, 50) { attackPower = 20; }

void Pikachu::thunderShock(Pokemon& target) {
    cout << name << " uses Thunder Shock on " << target.name << "!\n";
    target.takeDamage(attackPower);
}
void Pikachu::attack(Pokemon& target) {
    thunderShock(target);
}
    
