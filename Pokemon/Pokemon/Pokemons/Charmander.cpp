#include "Charmander.hpp"
#include "../PokemonType.hpp"
#include "../Move.hpp"
#include <iostream>

namespace N_Pokemon {
  namespace N_Pokemons {
    using namespace std;

    Charmander::Charmander()
        : Pokemon("Charmander", PokemonType::FIRE, 95, {
            Move("EMBER", 20),
            Move("SCRATCH", 15)
        }) {}
    
    void Charmander::attack(Pokemon* target)
    {
      selectAndUseMove(target);
    }

  }
}