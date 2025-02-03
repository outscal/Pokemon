#pragma once
#ifndef PIKACHU_H
#define PIKACHU
#include "Pokemon.h"



class Pikachu : public Pokemon {
public:
    Pikachu();
    void attack(Pokemon& target) override;
    int attackPower;
private:
    
    void thunderShock(Pokemon& target);
};


#endif // !PIKACHU_H