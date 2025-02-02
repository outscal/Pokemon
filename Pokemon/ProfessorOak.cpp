
#include "ProfessorOak.h"
#include <iostream>
#include "Utility.h"

using namespace N_Utility;

// Constructor
ProfessorOak::ProfessorOak(const std::string& profName, Player& playerRef)
    : p_name(profName), player(playerRef) {
}

// Greets the player
void ProfessorOak::greetPlayer() {
    std::cout << "Welcome to the wondrous world of Pok�mon, young trainer." << "\n"
        << "By what name should I address you?" << "\n" << std::endl;

    Utility::waitForEnter();
    std::getline(std::cin, player.p_name);
    std::cout << "Congratulations " << player.p_name
        << ", now you are almost ready for adventure!\n" << std::endl;
}

// Offers Pok�mon choices to the player
void ProfessorOak::offerPokemonChoices() {
    std::cout << "But one last thing: What every youth in Kanto dreams of, you must choose your partner Pok�mon!"
        << "\n" << std::endl;

    Utility::waitForEnter();
    std::cout << "Will it be Charmander, Squirtle, or Bulbasaur?" << "\n\n" << std::endl;
    std::cout << "Enter the name of the Pok�mon of your choice." << "\n\n" << std::endl;

    player.choosePokemon();
    Utility::waitForEnter();
    Utility::clearConsole();
}

// Explains the main quest to the player
void ProfessorOak::explainMainQuest(Player player) {
    std::cout << "Professor Oak: Oak-ay " << player.p_name
        << "!, I am about to explain your upcoming grand adventure.\n";
    Utility::waitForEnter();

    std::cout << "Professor Oak: You see, becoming a Pok�mon Master is no easy feat. It takes courage, wisdom, and a bit of luck!\n";
    Utility::waitForEnter();

    std::cout << "Professor Oak: Your mission, should you choose to accept it�and trust me, you really don�t have a choice�is to collect all the Pok�mon Badges and conquer the Pok�mon League.\n";
    Utility::waitForEnter();

    std::cout << "\n" << player.p_name << ": Wait... that sounds a lot like every other Pok�mon game out there...\n";
    Utility::waitForEnter();

    std::cout << "Professor Oak: Shhh! Don't break the fourth wall, " << player.p_name << "! This is serious business!\n";
    Utility::waitForEnter();

    std::cout << "\nProfessor Oak: To achieve this, you�ll need to battle wild Pok�mon, challenge gym leaders, and of course, keep your Pok�mon healthy at the PokeCenter.\n";
    Utility::waitForEnter();

    std::cout << "Professor Oak: Along the way, you'll capture new Pok�mon to strengthen your team. Just remember�there�s a limit to how many Pok�mon you can carry, so choose wisely!\n";
    Utility::waitForEnter();

    std::cout << "\n" << player.p_name << ": Sounds like a walk in the park... right?\n";
    Utility::waitForEnter();

    std::cout << "Professor Oak: Hah! That�s what they all say! But beware, young Trainer, the path to victory is fraught with challenges. And if you lose a battle... well, let�s just say you'll be starting from square one.\n";
    Utility::waitForEnter();

    std::cout << "\nProfessor Oak: So, what do you say? Are you ready to become the next Pok�mon Champion?\n";
    Utility::waitForEnter();

    std::cout << "\n" << player.p_name << ": Ready as I�ll ever be, Professor!\n";
    Utility::waitForEnter();

    std::cout << "\nProfessor Oak: That�s the spirit! Now, your journey begins...\n";
    Utility::waitForEnter();

    std::cout << "Professor Oak: But first... let's just pretend I didn't forget to set up the actual game loop... Ahem, onwards!\n";
    Utility::waitForEnter();
    Utility::clearConsole();
}