#include "../../../include/Character/Player/Player.hpp"
#include "../../../include/Pokemon/PokemonChoice.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"
#include "../../../include/Pokemon/Pokemons/Pikachu.hpp"
#include "../../../include/Utility/Utility.hpp"
#include "iostream"

namespace N_Character
{
  namespace N_Player
  {
    using namespace N_Utility;
    using namespace N_Pokemon;
    using namespace N_Pokemons;

    Player::Player() {
      name = "Trainer";
      chosenPokemon = Pokemon(); // Using the default Pokemon constructor
    }

    Player::Player(std::string p_name, Pokemon p_chosenPokemon) {
      name = p_name;
      chosenPokemon = p_chosenPokemon;
    }

    void Player::choosePokemon(int choice) {
      switch ((PokemonChoice)choice) {
      case PokemonChoice::CHARMANDER:
        chosenPokemon = Pokemon("Charmander", PokemonType::FIRE, 100, 10);
        break;
      case PokemonChoice::BULBASAUR:
        chosenPokemon = Pokemon("Bulbasaur", PokemonType::GRASS, 100, 8);
        break;
      case PokemonChoice::SQUIRTLE:
        chosenPokemon = Pokemon("Squirtle", PokemonType::WATER, 100, 9);
        break;
      default:
        chosenPokemon = Pikachu();
        break;
      }
      std::cout << "Player " << name << " chose " << chosenPokemon.name << "!\n";
      Utility::waitForEnter(); // Wait for user to press Enter before
      // proceeding
    }
  }
}
