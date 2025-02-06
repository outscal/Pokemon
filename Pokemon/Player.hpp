#pragma once
#include<iostream>
#include<string>
#include "PokemonType.hpp"
#include "PokemonChoice.hpp"
#include "Utility.hpp"
using namespace std;


class Player {
public:
    string name;
    Pokemon chosenPokemon;

    // Default constructor
    Player();

    // Parameterized constructor
    Player(string p_name, Pokemon p_chosenPokemon);


    void choosePokemon(int choice);
};