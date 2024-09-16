#pragma once
#include "../Pokemon.hpp"

namespace N_Pokemon {
    namespace N_Pokemons {
    
        class Squirtle : public Pokemon {
        public:
            Squirtle();
            void waterGun(Pokemon* target);
            void attack(Pokemon* target) override; 
        };
        
    }
}