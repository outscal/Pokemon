#include "Pikachu.hpp"
#include "../PokemonType.hpp"
#include <iostream>

namespace N_Pokemon {
  namespace N_Pokemons {

    using namespace std;
    
    N_Pokemon::N_Pokemons::Pikachu::Pikachu() : Pokemon("Pikachu", PokemonType::ELECTRIC, 100, 20) {}
    
    void N_Pokemon::N_Pokemons::Pikachu::thunderShock(Pokemon &target) {
        cout << name << " uses Thunder Shock on " << target.name << "!\n";
        target.takeDamage(20);
    }
  }
}