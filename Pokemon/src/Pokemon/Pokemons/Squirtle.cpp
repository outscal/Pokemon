#include "../../../include/Pokemon/Pokemons/Squirtle.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"
#include "../../../include/Pokemon/Move.hpp"
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