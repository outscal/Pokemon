#include "../../../include/Pokemon/Pokemons/Pikachu.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"
#include <iostream>

namespace N_Pokemon {
  namespace N_Pokemons {

    using namespace std;
    
    Pikachu::Pikachu() : Pokemon("Pikachu", PokemonType::ELECTRIC, 100, 20) {}
    
    void Pikachu::thunderShock(Pokemon &target) {
        cout << name << " uses Thunder Shock on " << target.name << "!\n";
        target.takeDamage(20);
    }
  }
}