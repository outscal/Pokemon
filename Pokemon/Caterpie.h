#pragma once
#include "Pokemon.h"

class Caterpie : public Pokemon {
public:
    Caterpie();
    void bugBite(Pokemon& target);
};