#include "../../include/Pokemon/Pokemons/Pidgey.hpp"
#include "../../include/Pokemon/PokemonType.hpp"
#include <iostream>

namespace N_Pokemon {
  namespace N_Pokemons {
    using namespace std;
    
    N_Pokemon::N_Pokemons::Pidgey::Pidgey() : Pokemon("Pidgey", PokemonType::NORMAL, 100, 35) {}
    
    void N_Pokemon::N_Pokemons::Pidgey::wingAttack(Pokemon &target) {
      cout << name << " uses Wing Attack on " << target.name << "!\n";
      target.takeDamage(20);
    }
  }
}