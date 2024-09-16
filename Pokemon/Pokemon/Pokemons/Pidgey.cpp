#include "Pidgey.hpp"
#include "../PokemonType.hpp"
#include "../../Utility/Utility.hpp"
#include <iostream>

namespace N_Pokemon {
  namespace N_Pokemons {
    using namespace std;
    
    Pidgey::Pidgey() : Pokemon("Pidgey", PokemonType::NORMAL, 100, 35) {}
    
    void Pidgey::attack(Pokemon* target)
    {
      wingAttack(target);
    }
    
    void Pidgey::wingAttack(Pokemon* target) {
      
      cout << name << " used WING ATTACK!\n";
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