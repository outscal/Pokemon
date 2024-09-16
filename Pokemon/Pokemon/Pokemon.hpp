#pragma once
#include <string>

namespace N_Pokemon {
    
    enum class PokemonType;
    
    class Pokemon {
    public:
        std::string name;
        PokemonType type;
        int health; 
        int maxHealth; 
        int attackPower;
    
        Pokemon(); 
        Pokemon(std::string p_name, PokemonType p_type, int p_health, int p_attackPower);
        Pokemon(Pokemon* other);
    
        bool isFainted() const;
        void heal();
        virtual void attack(Pokemon* target) = 0;
        void takeDamage(int damage);
    };
}