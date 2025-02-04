#include <iostream>
using namespace std;

int main() {

    string name;
    string chosen_pokemon;
    int choice;

    cout << "Professor Oak: Hello there! Welcome to the world of Pokemon!\n";
    cout << "Professor Oak: My name is Oak. People call me the Pokemon Professor!\n";

    cout << "Professor Oak: But enough about me. Let's talk about you!\n";

    cout << "Professor Oak: First, tell me, what’s your name?\n";
    cin >> name;
    cout << "Professor Oak: Ah, " << name<< "! What a fantastic name!\n";
    cout << "Professor Oak: You must be eager to start your adventure. But first, you will need a Pokemon of your own!\n";

    cout << "Professor Oak: I have three Pokemon here with me. They are all quite feisty!\n";
    cout << "Professor Oak: Choose wisely...\n";
    cout << "1. Charmander - The fire type. A real hothead!\n";
    cout << "2. Bulbasaur - The grass type. Calm and collected!\n";
    cout << "3. Squirtle - The water type. Cool as a cucumber!\n";

    cin >> choice;

    if (choice == 1) {
        chosen_pokemon = "Charmander";
        cout << "You chose Bulbasaur! A wise choice.\n";
    }
    else if (choice == 2) {
        chosen_pokemon = "Bulbasaur";
        cout << "You chose Charmander! A fiery choice.\n";
    }
    else if (choice == 3) {
        chosen_pokemon = "Squirtle";
        cout << "You chose Squirtle! A cool choice.\n";
    }
    else {
        cout << "Invalid choice. Please restart the game.\n";
    }

    cout << "Professor Oak: " << chosen_pokemon << " and you, " << name << ", are going to be the best of friends!\n";
    cout << "Professor Oak: Your journey begins now! Get ready to explore the vast world of Pokemon!\n";

    return 0;
}
