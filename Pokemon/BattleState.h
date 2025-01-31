#pragma once
#ifndef BATTLESTATE_H
#define BATTLESTATE_H

#include "Pokemon.h"

struct BattleState {
    Pokemon* playerPokemon;  // Pointer to the player's Pok�mon
    Pokemon* wildPokemon;    // Pointer to the wild Pok�mon
    bool playerTurn;          // True if it's the player's turn, false otherwise
    bool battleOngoing;       // True if the battle is still ongoing
};



#endif // !BATTLESTATE_H
