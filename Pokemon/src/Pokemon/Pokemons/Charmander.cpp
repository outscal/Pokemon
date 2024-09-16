#include "../../../include/Pokemon/Pokemons/Charmander.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"
#include "../../../include/Pokemon/Move.hpp"
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