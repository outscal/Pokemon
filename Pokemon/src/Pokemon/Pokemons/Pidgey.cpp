#include "../../../include/Pokemon/Pokemons/Pidgey.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"
#include "../../../include/Pokemon/Move.hpp"
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