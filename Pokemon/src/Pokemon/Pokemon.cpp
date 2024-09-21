#include "../../include/Pokemon/Pokemon.hpp"
#include "../../include/Pokemon/PokemonType.hpp"
#include <iostream>

namespace N_Pokemon {

  // Default constructor
  Pokemon::Pokemon() {
    name = "Unknown";
    type = PokemonType::NORMAL;
    health = 50;
    maxHealth = 50;
    attackPower = 10;
  }
  
  // Parameterized constructor
  Pokemon::Pokemon(std::string p_name, PokemonType p_type, int p_health,
                   int p_attackPower) {
    name = p_name;
    type = p_type;
    maxHealth = p_health;
    health = p_health;
    attackPower = p_attackPower;
  }
  
  // Copy constructor
  Pokemon::Pokemon(const Pokemon &other) {
    name = other.name;
    type = other.type;
    health = other.health;
    maxHealth = other.maxHealth;
    attackPower = other.attackPower;
  }
  
  // Reduce HP by the damage amount
  void Pokemon::takeDamage(int damage) {
    health -= damage;
    if (health < 0) {
      health = 0;
    }
  }
  
  // Check if the Pokemon has fainted
  bool Pokemon::isFainted() const { return health <= 0; }
  
  // Restore health to full
  void Pokemon::heal() { health = maxHealth; }
  
  // Attack another Pokemon
  void Pokemon::attack(Pokemon &target) {
    std::cout << name << " attacks " << target.name << " for " << attackPower
              << " damage!\n";
    target.takeDamage(attackPower);
  }
} // namespace N_Pokemon