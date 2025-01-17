#include <iostream>
#include <string>
using std::string;

int main() {

    std::cout << "Welcome to the wonderous world of Pokemon, young trainer." << "\n"
        << "By what name should I address you?" << "\n" << std::endl;
    string trainerName;
    std::cin >> trainerName;
    std::cout << "Congratulations " << trainerName << ", now you are almost ready for adventure!\n" << std::endl;

    std::cout << "But one last thing, what every youth in Kanto dreams of, you must choose your partner pokemon!" << "\n" << std::endl;
    std::cout << "Will it be Charmander, Squirtle or Bulbasaur?" << "\n\n" << std::endl;
    std::cout << "Enter the name of the pokemon of your choice." << "\n\n" << std::endl;

    string firstPokemon;

    while (firstPokemon.empty())
    {
        std::cin >> firstPokemon;

        if (firstPokemon == "Charmander")
        {
            std::cout << "Charmander it is! Take care to not burn down Viridian forest.\n" << std::endl;
        }
        else if (firstPokemon == "Squirtle")
        {
            std::cout << "You chose Squirtle! Ever wondered what's within its shell?\n" << std::endl;
        }
        else if (firstPokemon == "Bulbasaur")
        {
            std::cout << "Bulbasaur should make a great partner! It is speculated that these pokemon are the descendants of ancient monsters.\n" << std::endl;
        }
        else {
            std::cout << "Unfortunately we do not have that pokemon available currently, please choose one of the three I have listed above." << "\n\n" << std::endl;
            firstPokemon = "";
        }
    }


}
