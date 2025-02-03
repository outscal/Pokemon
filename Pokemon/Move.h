#pragma once
#ifndef MOVES_H
#define MOVES_H
#include <string>
#include "PokemonTypes.h"


using namespace std;


struct Move {
    string name;
    int power;
    PokemonType moveType;

    Move(const string& moveName, PokemonType type, int movePower) {
        name = moveName;
        power = movePower;
        moveType = type;
    }
};



#endif