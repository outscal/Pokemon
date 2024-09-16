#include "Squirtle.hpp"
#include "../PokemonType.hpp"
#include "../../Utility/Utility.hpp"
#include <iostream>

namespace N_Pokemon {
    namespace N_Pokemons {
        using namespace std;
    
        Squirtle::Squirtle() : Pokemon("Squirtle", PokemonType::WATER, 100, 35) {}
    
        void Squirtle::attack(Pokemon* target)
        {
            waterGun(target);
        }
    
        void Squirtle::waterGun(Pokemon* target) {
            
            cout << name << " used WATER GUN!\n";
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