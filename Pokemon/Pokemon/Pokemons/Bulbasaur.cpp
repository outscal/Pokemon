#include "Bulbasaur.hpp"
#include "../PokemonType.hpp"
#include "../../Utility/Utility.hpp"
#include <iostream>

namespace N_Pokemon {
    namespace N_Pokemons {
        using namespace std;
    
        Bulbasaur::Bulbasaur() : Pokemon("Bulbasaur", PokemonType::GRASS, 100, 30) {}
    
        void Bulbasaur::attack(Pokemon* target)
        {
            vinewhip(target);
        }
    
        void Bulbasaur::vinewhip(Pokemon* target) {
            
            cout << name << " used VINE WHIP!\n";
            N_Utility::Utility::waitForEnter();
        
            cout << "...\n"; 
            N_Utility::Utility::waitForEnter();

            target->takeDamage(attackPower);

            if (target->isFainted())
                cout << target->name << " fainted!\n";
            else
                cout << target->name << " has " << target->health << " HP left.\n";
            N_Utility::Utility::waitForEnter();
        }
    }
}