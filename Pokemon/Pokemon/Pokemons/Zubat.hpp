#pragma once
#include "../Pokemon.hpp"

namespace N_Pokemon {
  namespace N_Pokemons {
  
    class Zubat : public Pokemon {
    public:
      Zubat();
      void supersonic(Pokemon* target);
      void attack(Pokemon* target) override; 
    };
    
  }
}