#pragma once
#include "../Pokemon.hpp"

namespace N_Pokemon {
  namespace N_Pokemons {
    
    class Caterpie : public Pokemon {
    public:
      Caterpie();
      void bugBite(Pokemon &target);
    };

  }
}