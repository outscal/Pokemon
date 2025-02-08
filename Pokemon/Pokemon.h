#pragma once

#ifndef POKEMON_H
#define POKEMON_H

#include <string>
#include <unordered_map>
#include "PokemonTypes.h"
#include "PokemonSpecies.h"
#include "Move.h"
#include "IStatusEffect.h"
#include "StatusEffectType.h"
#include "ParalyzedEffect.h"

class Pokemon {
private:
    PokemonSpecies species;

protected:
    PokemonType type;
    int health;
    int maxHealth;
    int attackPower = 1;
    IStatusEffect* appliedEffect;
    vector<Move> moves; // Store the list of moves
public:
    // Static dictionaries for Pokemon names and types
    static std::unordered_map<PokemonSpecies, std::string> pokemon_names;
    static std::unordered_map<PokemonSpecies, PokemonType> pokemon_types;

    

    std::string name;

    // Constructors and Destructor
    Pokemon();
    Pokemon(PokemonSpecies p_species, int p_health);
    Pokemon(const Pokemon& other);
    ~Pokemon();

    // Member functions
    virtual void attack(Pokemon& opposingPokemon) = 0; // syntax for an abstract function declaration 
    void constructNameDictionary();
    void constructTypeDictionary();
    void takeDamage(int damage);
    bool isFainted();
    void healToFullHealth(); // Method to restore HP to max
    void selectAndUseMove(Pokemon* target);
    void printAvailableMoves();
    int selectMove();
    void useMove(Move selectedMove, Pokemon* target);
    void changeAttackPower(int modifier);
    void applyEffect(StatusEffectType effectToApply);
    bool canApplyEffect();
    bool canAttack();
    void clearEffect();

    
    // list of methods for all moves
    void vineWhip(Move selectedMove, Pokemon* target);

    
    void stickyWeb(Move selectedMove, Pokemon* target);

    
    void blazingCharge(Move selectedMove, Pokemon* target);

    
    void gust(Move selectedMove, Pokemon* target);

    
    void thunderbolt(Move selectedMove, Pokemon* target);

    
    void rapidSpin(Move selectedMove, Pokemon* target);

    
    void leechLife(Move selectedMove, Pokemon* target);
    
};

#endif // POKEMON_H