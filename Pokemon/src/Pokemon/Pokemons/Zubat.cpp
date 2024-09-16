#include "../../../include/Pokemon/Pokemons/Zubat.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"
#include "../../../include/Pokemon/Move.hpp"
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