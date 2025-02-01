#pragma once
#include "Pokemon.h"

class Zubat : public Pokemon {
public:
    Zubat();
private:
    void supersonic(Pokemon& target);
};