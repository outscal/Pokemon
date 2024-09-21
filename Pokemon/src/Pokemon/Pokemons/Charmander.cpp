#include "../../../include/Pokemon/Pokemons/Charmander.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"
#include <iostream>

namespace N_Pokemon {
  namespace N_Pokemons {
    using namespace std;
    
    Charmander::Charmander() : Pokemon("Charmander", PokemonType::FIRE, 100, 35) {}
    
    void Charmander::flameThrower(Pokemon &target) {
      cout << name << " uses Flame Thrower on " << target.name << "!\n";
      target.takeDamage(20);
    }
  }
}