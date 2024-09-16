#include "Caterpie.hpp"
#include "../PokemonType.hpp"
#include "../../Utility/Utility.hpp"
#include <iostream>

namespace N_Pokemon {

  namespace N_Pokemons {
    
    using namespace std;
    
    Caterpie::Caterpie() : Pokemon("Caterpie", PokemonType::BUG, 100, 10) {}
    
    void Caterpie::attack(Pokemon* target)
    {
      bugBite(target);
    }
    
    void Caterpie::bugBite(Pokemon* target) {
      
      cout << name << " used BUG BITE!\n";
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