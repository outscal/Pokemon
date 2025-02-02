#pragma once
#include "Pokemon.h"

class Caterpie : public Pokemon {
public:
    Caterpie();
private:
    void bugBite(Pokemon& target);
};