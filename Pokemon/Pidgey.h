#pragma once
#include "Pokemon.h"

class Pidgey : public Pokemon {
public:
    Pidgey();
    void attack(Pokemon& target) override;
    int attackPower;
private:
    void wingAttack(Pokemon& target);
};