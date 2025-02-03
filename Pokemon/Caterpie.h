#pragma once
#include "Pokemon.h"

class Caterpie : public Pokemon {
public:
    Caterpie();
    void attack(Pokemon& target) override;
    int attackPower;
private:
    void bugBite(Pokemon& target);
};