#include <iostream>
using namespace std;

int main() {

    string player_name;

    cout << "Enter your name: ";
    cin >> player_name;
    cout << "Ah," << player_name << "!" << endl;
    cout << "Welcome to the world of Pokémon! I am Professor Oak." << endl;
    cout << "Today is a momentous day—-you’ll be choosing your very first Pokémon." << endl;
    cout << "Every great Trainer remembers this moment for the rest of their lives." << endl;
    cout << "So, choose wisely, young one!" << endl;
    cout << "You can choose one of the following Pokémon:" << endl;
    cout << "1. Bulbasaur\n2. Charmander\n3. Squirtle\n";
    cout << "Which Pokémon would you like to choose? Enter the number: ";

    int choice;
    cin >> choice;

    cout << "Well done, Trainer!" << endl;
    cout << "But… wait, you think your journey ends with just choosing a Pokémon?" << endl;
    cout << "No, no, no!" << endl;
    cout << "You need to confirm your choice (Y/N): ";
    char confirmation;
    cin >> confirmation;

    if (confirmation == 'Y' || confirmation == 'y')
    {
        if (choice == 1)
        {
            cout << "You chose Bulbasaur! A wise choice." << endl;
        }
        else if (choice == 2)
        {
            cout << "You chose Charmander! A fiery choice." << endl;
        }
        else if (choice == 3)
        {
            cout << "You chose Squirtle! A cool Choice." << endl;
        }
        else
        {
            cout << "Invalid choice. Please restart the game." << endl;
        }
    }
    else if (confirmation == 'N' || confirmation == 'n')
    {
        cout << "Which Pokémon would you like to choose? Enter the number: ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "You chose Bulbasaur! A wise choice." << endl;
        }
        else if (choice == 2)
        {
            cout << "You chose Charmander! A fiery choice." << endl;
        }
        else if (choice == 3)
        {
            cout << "You chose Squirtle! A cool Choice." << endl;
        }
        else
        {
            cout << "Invalid choice. Please restart the game." << endl;
        }
    }

    cout << "Ah, an excellent choice!" << endl;
    cout << "But beware, Trainer," << endl;
    cout << "this is only the beginning." << endl;
    cout << "Your journey is about to unfold." << endl;
    cout << "Now let’s see if you’ve got what it takes to keep going!" << endl;
    cout << "Good luck, and remember… Choose wisely!" << endl;


    return 0;
}
