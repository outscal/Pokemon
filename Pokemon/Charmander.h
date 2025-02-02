#pragma once
#include "Pokemon.h"

class Charmander : public Pokemon {
private:
    void flameThrower(Pokemon& target);

public:
    Charmander();
    void attack(Pokemon& target) override;
    

};