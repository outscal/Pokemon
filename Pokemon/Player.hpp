#pragma once
#include<iostream>
#include<string>
#include "PokemonType.hpp"
#include "PokemonChoice.hpp"
#include "Utility.hpp"
#include "Pokemon.hpp"
using namespace std;

class Pokemon;

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