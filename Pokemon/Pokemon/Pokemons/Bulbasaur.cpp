#include "Bulbasaur.hpp"
#include "../PokemonType.hpp"
#include "../Move.hpp"
#include <iostream>

namespace N_Pokemon {
    namespace N_Pokemons {
        using namespace std;

        Bulbasaur::Bulbasaur()
        : Pokemon("Bulbasaur", PokemonType::GRASS, 110, {
            Move("VINE WHIP", 25),
            Move("TACKLE", 10)
        }) {}
        
        void Bulbasaur::attack(Pokemon* target)
        {
            selectAndUseMove(target);
        }
    }
}