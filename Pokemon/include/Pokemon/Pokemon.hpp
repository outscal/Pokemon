#pragma once
#include <string>
#include <vector>
#include "Move.hpp"
#include "StatusEffects/IStatusEffect.hpp"
#include "StatusEffects/StatusEffectType.hpp"

using namespace std;
using namespace N_Pokemon::N_StatusEffects;

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
        IStatusEffect* appliedEffect;
    
        Pokemon(); 
        Pokemon(std::string p_name, PokemonType p_type, int p_health, vector<Move>);
        Pokemon(Pokemon* other);
    
        bool isFainted() const;
        void heal();
        virtual void attack(Move selectedMove, Pokemon* target);
        void takeDamage(int damage);
        void selectAndUseMove(Pokemon* target);
        void reduceAttackPower(int reduced_damage);
        bool canAttack();
        bool canApplyEffect();
        void applyEffect(StatusEffectType effectToApply);
        void clearEffect();

    protected:
        // Base implementation for selecting and using a move
        void printAvailableMoves();
        int selectMove();
        void useMove(Move selectedMove, Pokemon* target);
    };
}