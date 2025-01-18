#include <iostream>
#include <string>
using std::string;

enum class PokemonChoice {
    Charmander,
    Bulbasaur,
    Squirtle,
    InvalidChoice
};


int main() {
   
    std::cout << "Welcome to the wonderous world of Pokemon, young trainer." << "\n"
        << "By what name should I address you?" << "\n" << std::endl;
    string trainerName;
    std::cin >> trainerName;
    std::cout << "Congratulations " << trainerName << ", now you are almost ready for adventure!\n" << std::endl;

    std::cout << "But one last thing, what every youth in Kanto dreams of, you must choose your partner pokemon!" << "\n" << std::endl;
    std::cout << "Will it be Charmander, Squirtle or Bulbasaur?" << "\n\n" << std::endl;
    std::cout << "Enter the name of the pokemon of your choice." << "\n\n" << std::endl;

    PokemonChoice firstPokemon = PokemonChoice::InvalidChoice;
    string choice;
    while (firstPokemon == PokemonChoice::InvalidChoice)
    {
        std::cin >> choice;

        if (choice == "Charmander")
        {
            std::cout << "Charmander it is! Take care to not burn down Viridian forest.\n" << std::endl;
            firstPokemon = PokemonChoice::Charmander;
        }
        else if (choice == "Squirtle")
        {
            std::cout << "You chose Squirtle! Ever wondered what's within its shell?\n" << std::endl;
            firstPokemon = PokemonChoice::Squirtle;
        }
        else if (choice == "Bulbasaur")
        {
            std::cout << "Bulbasaur should make a great partner! It is speculated that these pokemon are the descendants of ancient monsters.\n" << std::endl;
            firstPokemon = PokemonChoice::Bulbasaur;
        }
        else {
            std::cout << "Unfortunately we do not have that pokemon available currently, please choose one of the three I have listed above." << "\n\n" << std::endl;
        }
    }


}
