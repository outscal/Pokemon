#pragma once

#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include "Pokemon.h"

class Player {
public:
    // Member variables
    std::string p_name;
    Pokemon* p_chosenPokemon;

    // Constructors
    Player();

    // Member functions
    void choosePokemon();
};

#endif // PLAYER_H