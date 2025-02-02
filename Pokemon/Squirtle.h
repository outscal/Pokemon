#pragma once
#include "Pokemon.h"

class Squirtle : public Pokemon {
private:
    int attackPower;
    void waterSplash(Pokemon& target);

public:
    void attack(Pokemon& target) override;
    Squirtle();

};