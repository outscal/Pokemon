#include "Charmander.hpp"
#include "../../Utility/Utility.hpp"
#include "../PokemonType.hpp"
#include <iostream>

namespace N_Pokemon {
  namespace N_Pokemons {
    using namespace std;
    
    Charmander::Charmander() : Pokemon("Charmander", PokemonType::FIRE, 100, 35) {}
    
    void Charmander::attack(Pokemon* target)
    {
      flameThrower(target);
    }
    
    void Charmander::flameThrower(Pokemon* target) {
      
      cout << name << " used FLAME THROWER!\n";
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