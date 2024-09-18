#include "../../../include/Pokemon/Pokemons/Caterpie.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"
#include "../../../include/Pokemon/Move.hpp"
#include <iostream>

namespace N_Pokemon {
    namespace N_Pokemons {
    
        using namespace std;
        
        Caterpie::Caterpie()
            : Pokemon("Caterpie", PokemonType::BUG, 75, {
                Move("TACKLE", 10),
                Move("STRING SHOT", 5),
                Move("STICKY WEB", 10)
            }) {}
          
        void Caterpie::attack(Move selectedMove, Pokemon* target)
        {
            Pokemon::attack(selectedMove, target);
            
            if(selectedMove.name == "STICKY WEB")
            {
                // Reduce the target's next attack damage (for simplicity, reducing by a fixed value)
                int reducedDamage = 5;
                target->reduceAttackPower(reducedDamage);
                std::cout << target->name << "'s next attack will be reduced by " << reducedDamage << " damage!\n";
            }
        }

  }
}