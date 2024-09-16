#include "Pikachu.hpp"
#include "../PokemonType.hpp"
#include "../Move.hpp"
#include <iostream>

namespace N_Pokemon {
    namespace N_Pokemons {
      
        using namespace std;

        Pikachu::Pikachu()
                : Pokemon("Pikachu", PokemonType::ELECTRIC, 100, {
                    Move("THUNDER SHOCK", 20),
                    Move("QUICK ATTACK", 10)
                }) {}
        
        void Pikachu::attack(Pokemon* target)
        {
            selectAndUseMove(target);
        }
        
  }
}
