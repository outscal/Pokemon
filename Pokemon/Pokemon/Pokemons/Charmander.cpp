#include "Charmander.hpp"
#include "../PokemonType.hpp"
#include <iostream>

namespace N_Pokemon {
  namespace N_Pokemons {
    using namespace std;
    
    N_Pokemon::N_Pokemons::Charmander::Charmander() : Pokemon("Charmander", PokemonType::FIRE, 100, 35) {}
    
    void N_Pokemon::N_Pokemons::Charmander::flameThrower(Pokemon &target) {
      cout << name << " uses Flame Thrower on " << target.name << "!\n";
      target.takeDamage(20);
    }
  }
}