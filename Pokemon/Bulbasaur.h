#pragma once
#include "Pokemon.h"


class Bulbasaur : public Pokemon {
private:
    void vineWhip(Pokemon& target);
    int attackPower;

public:
    Bulbasaur();
    void attack(Pokemon& target) override;

};