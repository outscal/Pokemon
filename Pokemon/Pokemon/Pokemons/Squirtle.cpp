#include "Squirtle.hpp"
#include "../PokemonType.hpp"
#include "../Move.hpp"
#include <iostream>

namespace N_Pokemon {
    namespace N_Pokemons {
        using namespace std;
    
        Squirtle::Squirtle()
        : Pokemon("Squirtle", PokemonType::WATER, 105, {
            Move("WATER GUN", 20),
            Move("TACKLE", 10)
        }) {}
        
        void Squirtle::attack(Pokemon* target)
        {
            selectAndUseMove(target);
        }

    }
}