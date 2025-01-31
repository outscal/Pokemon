#pragma once
#ifndef PIKACHU_H
#define PIKACHU
#include "Pokemon.h"



class Pikachu : public Pokemon {
public:
    Pikachu();
    void thunderShock(Pokemon& target);
};


#endif // !PIKACHU_H