#include "Caterpie.hpp"
#include "../PokemonType.hpp"
#include <iostream>

namespace N_Pokemon {

  namespace N_Pokemons {
    
    using namespace std;
    
    N_Pokemon::N_Pokemons::Caterpie::Caterpie() : Pokemon("Caterpie", PokemonType::BUG, 100, 10) {}
    
    void N_Pokemon::N_Pokemons::Caterpie::bugBite(Pokemon &target) {
      cout << name << " uses Bug Bite on " << target.name << "!\n";
      target.takeDamage(20);
    }
  }
}