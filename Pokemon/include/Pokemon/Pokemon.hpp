#pragma once
#include <string>
#include <vector>
#include "Move.hpp"
using namespace std;

namespace N_Pokemon {

    struct Move;
    enum class PokemonType;
    
    class Pokemon {
    public:
        std::string name;
        PokemonType type;
        int health; 
        int maxHealth; 
        vector<Move> moves; // Store the list of moves
    
        Pokemon(); 
        Pokemon(std::string p_name, PokemonType p_type, int p_health, vector<Move>);
        Pokemon(Pokemon* other);
    
        bool isFainted() const;
        void heal();
        virtual void attack(Move selectedMove, Pokemon* target);
        void takeDamage(int damage);
        void selectAndUseMove(Pokemon* target);
        void reduceAttackPower(int reduced_damage);

    protected:
        // Base implementation for selecting and using a move
        void printAvailableMoves();
        int selectMove();
        void useMove(Move selectedMove, Pokemon* target);
    };
}