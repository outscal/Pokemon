#pragma once
#include "Pokemon.h"

class Pidgey : public Pokemon {
public:
    Pidgey();
private:
    void wingAttack(Pokemon& target);
};