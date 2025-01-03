#pragma once
#include "../Character/Player/Player.hpp"
#include "../Pokemon/Grass.hpp"

namespace N_Main
{
  using namespace N_Pokemon;

  class Game {
  private:
    Grass forestGrass;
  public:
    Game();
    void gameLoop(N_Character::N_Player::Player &player);
    void visitPokeCenter(N_Character::N_Player::Player& player);
  };
}
