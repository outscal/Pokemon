#include "Pidgey.hpp"
#include "../PokemonType.hpp"
#include "../Move.hpp"
#include <iostream>

namespace N_Pokemon {
  namespace N_Pokemons {
    using namespace std;
    
    Pidgey::Pidgey()
        : Pokemon("Pidgey", PokemonType::FLYING, 80, {
            Move("GUST", 15),
            Move("TACKLE", 10)
        }) {}
    
    void Pidgey::attack(Pokemon* target)
    {
      selectAndUseMove(target);
    }

  }
}