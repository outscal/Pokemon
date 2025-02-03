#pragma once
#ifndef PROFESSOROAK_H
#define PROFESSOROAK_H

#include <string>
#include "Player.h"

class ProfessorOak {
public:
    // Member variables
    std::string p_name;
    Player player;

    // Constructor
    ProfessorOak(const std::string& profName, Player& playerRef);

    // Member functions
    void greetPlayer();
    void offerPokemonChoices();
    void explainMainQuest(Player player);
};

#endif // PROFESSOROAK_H