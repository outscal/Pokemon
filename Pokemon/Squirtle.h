#pragma once
#include "Pokemon.h"

class Squirtle : public Pokemon {
private:
   
    void waterSplash(Pokemon& target);

public:
    void attack(Pokemon& target) override;
    Squirtle();

};