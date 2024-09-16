#include "Zubat.hpp"
#include "../PokemonType.hpp"
#include "../Move.hpp"
#include <iostream>

namespace N_Pokemon {
  namespace N_Pokemons {
  
    using namespace std;

    Zubat::Zubat()
        : Pokemon("Zubat", PokemonType::POISON, 85, {
            Move("BITE", 18),
            Move("LEECH LIFE", 10)
        }) {}
    
    void Zubat::attack(Pokemon* target)
    {
      selectAndUseMove(target);
    }
  
  }
}