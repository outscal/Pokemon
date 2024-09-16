#pragma once
#include <string>
#include <vector>
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
        int attackPower;
        vector<Move> moves; // Store the list of moves
    
        Pokemon(); 
        Pokemon(std::string p_name, PokemonType p_type, int p_health, int p_attackPower);
        Pokemon(Pokemon* other);
    
        bool isFainted() const;
        void heal();
        virtual void attack(Pokemon* target) = 0;
        void takeDamage(int damage);

    protected:
        // Base implementation for selecting and using a move
        void selectAndUseMove(Pokemon* target); 
    };
}