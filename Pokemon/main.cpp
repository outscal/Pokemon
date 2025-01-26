#include <iostream>
using namespace std;

int main() 
{
    cout << "Welcome to the world of Pokemon! I am Professor Oak.\n";
    cout << "You can choose one of the following Pokemon:\n";
    cout << "1. Bulbasaur\n2. Charmander\n3. Squirtle\n";
    cout << "Which Pokemon would you like to choose? Enter the number: ";

    int choice;
    cin >> choice;

    if (choice == 1) {
        cout << "You chose Bulbasaur! A wise choice!\n";
    }
    else if (choice == 2) {
        cout << "You chose Charmander! A fiery choice!\n";
    }
    else if (choice == 3) {
        cout << "You chose Squirtle! A cool choice!\n";
    }
    else {
        cout << "Invalid choice. Please restart the game.\n";
    }

    return 0;
}
