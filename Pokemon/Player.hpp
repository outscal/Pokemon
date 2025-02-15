#ifndef PLAYER_HPP
#define PLAYER_HPP


#include <string>
#include "Pokemon.hpp"
using namespace std;
class Player {
public:
    string name;
    Pokemon chosenPokemon;

    Player(); // Default constructor
    Player(string p_name, Pokemon p_chosenPokemon); // Parameterized constructor

    void choosePokemon(int choice); // Method to choose a Pokemon
};

#endif