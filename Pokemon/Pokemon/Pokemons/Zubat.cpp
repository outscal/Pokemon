#include "Zubat.hpp"
#include "../PokemonType.hpp"
#include "../../Utility/Utility.hpp"
#include <iostream>

namespace N_Pokemon {
  namespace N_Pokemons {
  
    using namespace std;
    
    Zubat::Zubat() : Pokemon("Zubat", PokemonType::POISON, 100, 20) {}
    
    void Zubat::attack(Pokemon* target)
    {
      supersonic(target);
    }
    
    void Zubat::supersonic(Pokemon* target) {
      
      cout << name << " used SUPERSONIC!\n";
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