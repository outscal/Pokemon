#pragma once
#include <iostream>
#include <limits>
#include <string>   
#include "Pokemon.hpp"
using namespace std;

    Pokemon::Pokemon() {
        name = "Unknown";
        type = PokemonType::NORMAL;
        health = 50;
    }

    // Parameterized constructor
    Pokemon::Pokemon(string p_name, PokemonType p_type, int p_health) {
        name = p_name;
        type = p_type;
        health = p_health;
    }

    // Copy constructor
    Pokemon::Pokemon(const Pokemon& other) {
        name = other.name;
        type = other.type;
        health = other.health;
    }

    // Destructor
    Pokemon::~Pokemon() {
        // Destructor message removed
    }

    void Pokemon::attack() { std::cout << name << " attacks with a powerful move!\n"; }