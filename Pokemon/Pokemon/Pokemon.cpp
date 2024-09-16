#include "Pokemon.hpp"
#include "PokemonType.hpp"
#include "Move.hpp"
#include <iostream>

#include "../Utility/Utility.hpp"
using namespace std;

namespace N_Pokemon {

  // Default constructor
  Pokemon::Pokemon() {
    name = "Unknown";
    type = PokemonType::NORMAL;
    health = 50;
    maxHealth = 50;
  }
  
  // Parameterized constructor
  Pokemon::Pokemon(string p_name, PokemonType p_type, int p_health, vector<Move> p_moves) {
    name = p_name;
    type = p_type;
    maxHealth = p_health;
    health = p_health;
    moves = p_moves;
  }
  
  // Copy constructor
  Pokemon::Pokemon(Pokemon* other) {
    name = other->name;
    type = other->type;
    health = other->health;
    maxHealth = other->maxHealth;
    moves = other->moves;
  }
  
  // Reduce HP by the damage amount
  void Pokemon::takeDamage(int damage) {
    health -= damage;
    if (health < 0) {
      health = 0;
    }
  }

  void Pokemon::selectAndUseMove(Pokemon* target)
  {
    printAvailableMoves();
    N_Utility::Utility::waitForEnter();

    int choice = selectMove();
    Move selectedMove = moves[choice-1];
    

    useMove(selectedMove, target);
    
  }

  void Pokemon::printAvailableMoves()
  {
    cout << name << "'s available moves:\n";

    // List out all moves for the player to choose from
    for (size_t i = 0; i < moves.size(); ++i) {
      cout << i + 1 << ": " << moves[i].name << " (Power: " << moves[i].power << ")\n";
    }
  }

  int Pokemon::selectMove()
  {
    // Ask the player to select a move
    int choice;
    cout << "Choose a move: ";
    cin >> choice;

    // Validate the choice
    while (choice < 1 || choice > static_cast<int>(moves.size())) {
      cout << "Invalid choice. Try again: ";
      cin >> choice;
    }

    return choice;
  }

  void Pokemon::useMove(Move selectedMove, Pokemon* target)
  {
    target->takeDamage(selectedMove.power);
    cout << name << " used " << selectedMove.name << "!\n";
    N_Utility::Utility::waitForEnter();

    cout << "...\n"; 
    N_Utility::Utility::waitForEnter();
    
    if (target->isFainted())
      cout << target->name << " fainted!\n";
    else
      cout << target->name << " has " << target->health << " HP left.\n";
    N_Utility::Utility::waitForEnter();
  }

  // Check if the Pokemon has fainted
  bool Pokemon::isFainted() const { return health <= 0; }
  
  // Restore health to full
  void Pokemon::heal() { health = maxHealth; }
  
} // namespace N_Pokemon