#include "Caterpie.hpp"
#include "../PokemonType.hpp"
#include "../Move.hpp"
#include <iostream>

namespace N_Pokemon {
    namespace N_Pokemons {
    
        using namespace std;
        
        Caterpie::Caterpie()
            : Pokemon("Caterpie", PokemonType::BUG, 75, {
                Move("TACKLE", 10),
                Move("STRING SHOT", 5)
            }) {}
          
        void Caterpie::attack(Pokemon* target)
        {
          selectAndUseMove(target);
        }

  }
}