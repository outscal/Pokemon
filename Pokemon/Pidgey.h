#pragma once
#include "Pokemon.h"

class Pidgey : public Pokemon {
public:
    Pidgey();
    void wingAttack(Pokemon& target);
};