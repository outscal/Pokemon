#include "../../../include/Pokemon/Pokemons/Caterpie.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"
#include "../../../include/Pokemon/Move.hpp"
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