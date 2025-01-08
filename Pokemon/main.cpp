#include <iostream>
#include <string>
using namespace std;

enum PokemonChoice {
    Charmander,
    Bulbasaur,
    Squirtle,
    InvalidChoice
};

int main() {
    
    //variables to store player name and chosen pokemon
    string player_name;
    PokemonChoice chosen_pokemon = InvalidChoice;


    //introductionof professor oak
    cout << "Professor Oak: Hello there! Welcome to the world of Pokemon!" << endl;
    cout << "Professor Oak: My name is Oak. People call me the Pokemon Professor!" << endl;
    cout << "Professor Oak: But enough about me. Let's talk about you!" << endl;


    //taking player name as input
    cout << "Professor Oak: First, tell me, what's your name?" << endl;
    cin >> player_name;

    cout << "Professor Oak: Ah, " << player_name << "! What a fantastic name!" << endl;
    cout << "Professor Oak: You must be eager to start your adventure. But first, you'll need a Pokemon of your own!" << endl;
    
    
    // presenting pokemon choices
    cout << "Professor Oak: I have three Pokemon here with me. They're all quite feisty!" << endl;
    cout << "Professor Oak: Choose wisely..." << endl;
    cout << "1. Charmander - The fire type. A real hothead!" << endl;
    cout << "2. Bulbasaur - The grass type. Calm and collected!" << endl;
    cout << "3. Squirtle - The water type. Cool as a cucumber!" << endl;

    int choice;
    cout << "Professor Oak: So, which one will it be? Enter the number of your choice: ";
    cin >> choice;

    // store the choice integer to respective pokemon
    switch (choice)
    {
    case 1:
        chosen_pokemon = Charmander;
        break;
    case 2:
        chosen_pokemon = Bulbasaur;
        break;
    case 3:
        chosen_pokemon = Squirtle;
        break;
    default:
        chosen_pokemon = InvalidChoice;
    }
    
    // store the chosen pokemon based on user input
    switch (chosen_pokemon)
    {
    case Charmander:
        cout << "You chose Charmander! A fiery choice." << endl;
        break;
    case Bulbasaur:
        cout << "You chose Bulbasaur! A wise choice." << endl;
        break;
    case Squirtle:
        cout << "You chose Squirtle! A cool Choice." << endl;
        break;
    default:
        cout << "Professor Oak: Hmm, That doesn't seem right. Let me choose for you..." << endl;
        chosen_pokemon = Charmander; // if you chose invalid option then it charmander by default
        cout << "Professor Oak: Just kidding! Lests go with charmander, the fiery dragon in the making!" << endl;
        break;
    }

    // Concluding the first chapter
        cout << "Professor Oak: " << (chosen_pokemon == Charmander ? "Charmander" : chosen_pokemon == Bulbasaur ? "Bulbasaur" : "Squirtle") << " and you, " << player_name << ", are going to be the best of friends!" << endl;
        cout << "Professor Oak: Your journey begins now! Get ready to explore the vast world of Pokemon!" << endl;

    return 0;
}
