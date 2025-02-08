#include <iostream>
#include <string>
using namespace std;


enum class PokemonChoice {
    Charmander = 1,
    Bulbasaur,
    Squirtle,
    Pikachu //default
};

enum class PokemonType {
    Fire,
    Grass,
    Water,
    Electric,
    Normal // default
};

class Pokemon {
public:
    string name;
    PokemonType type;
    int health;


    //constructor
    Pokemon() {
        name = "Unknown";
        type = PokemonType::Normal;
        health = 50;
        cout << "A new Pokemon has been created with the default constructor!\n" << endl;
    }


    //parameterised constructor
    Pokemon(string p_name, PokemonType p_type, int p_health) {
        name = p_name;
        type = p_type;
        health = p_health;
        cout << "A new Pokemon named " << name << " has been created!\n";
    }

    //Copy Constructor
    Pokemon(const Pokemon& other) {
        name = other.name;
        type = other.type;
        health = other.health;
        cout << "A new Pokemon has been copied from " << other.name << "!\n";
    }

    //destructor
    ~Pokemon() {
        cout << name << " has been released.\n";
    }

    void attack() {
        cout << name << " attacks with a powerful move!\n";
    }
};

class Player {
public:
    //attributes
    string name;
    Pokemon chosenPokemon;

    //default constructor
    Player() {
        name = "Trainer";
        chosenPokemon = Pokemon();
        cout << "A new player named " << name << " has been created!\n";
    }

    //parameterised constructor
    Player(string p_name, Pokemon p_chosenPokemon) {
        name = p_name;
        chosenPokemon = p_chosenPokemon;
        cout << "Player " << name << " has been created!\n";
    }


    void choosePokemon(int choice) {
        switch ((PokemonChoice)choice) {

        case PokemonChoice::Charmander:
            chosenPokemon = Pokemon("Charmander", PokemonType::Fire, 100);
            break;
        case PokemonChoice::Bulbasaur:
            chosenPokemon = Pokemon("Bulbasaur", PokemonType::Grass, 100);
            break;
        case PokemonChoice::Squirtle:
            chosenPokemon = Pokemon("Squirtle", PokemonType::Water, 100);
            break;
        default:
            chosenPokemon = Pokemon("Pikachu", PokemonType::Electric, 100);
        }

        cout << "Player " << name << " chose " << chosenPokemon.name << "!\n";
    }
};

class ProfessorOak {

public:
    string name;


    //parameterised constructor
    ProfessorOak(string p_name) {
        name = p_name;
    }

    //method to greet player
    void greetPlayer(Player& player) {
        cout << name << ": Hello there! Welcome to the world of Pokemon!\n";
        cout << name << ": My name is Oak. People call me the Pokemon Professor!\n";
        cout << name << ": But enough about me. Let's talk about you!\n";
    }

    // Method to ask the player to choose a Pokemon
    void offerPokemonChoices(Player& player) {
        cout << name << ": First, tell me, what’s your name?\n";
        getline(std::cin, player.name);
        cout << name << ": Ah, " << player.name << "! What a fantastic name!\n";
        cout << name << ": You must be eager to start your adventure. But first, you’ll need a Pokemon of your own!\n";

        // Presenting Pokemon choices
        cout << name << ": I have three Pokemon here with me. They’re all quite feisty!\n";
        cout << name << ": Choose wisely...\n";
        cout << "1. Charmander - The fire type. A real hothead!\n";
        cout << "2. Bulbasaur - The grass type. Calm and collected!\n";
        cout << "3. Squirtle - The water type. Cool as a cucumber!\n";

        int choice;
        cout << name << ": So, which one will it be? Enter the number of your choice: ";
        cin >> choice;

        player.choosePokemon(choice);
    }

};

int main() {

    //1. default and parameterised constructors
    Pokemon defaultPokemon; //using default constructor
    Pokemon charmander("Charmander", PokemonType::Fire, 100); //using parameterised const

    cout << "Pokemon Details:\n";
    cout << "Name: " << defaultPokemon.name << "\nType: " << (int)defaultPokemon.type << "\nHealth: " << defaultPokemon.health << "\n";
    cout << "Name: " << charmander.name << "\nType: " << (int)charmander.type << "\nHealth: " << charmander.health << "\n";

    //2: Test the copy constructor 
    Pokemon bulbasaur("Bulbasaur", PokemonType::Grass, 100);
    Pokemon bulbasaurCopy = bulbasaur; //Copy the pokemon
    cout << "Original Pokemon Health: " << bulbasaur.health << "\n";
    cout << "Copied Pokemon Health: " << bulbasaurCopy.health << "\n";


    //3. destructor
    {
        Pokemon squirtle("Squirtle", PokemonType::Water, 100); //Pokemon will be destroyed
    }


    ProfessorOak professor("Professor Oak");
    Player player("Ash", charmander);


    professor.greetPlayer(player);
    professor.offerPokemonChoices(player);


    cout << "Professor Oak: " << player.chosenPokemon.name << " and you, " << player.name << ", are going to be BFF!\n";
    cout << "Professor Oak: Your journey begins now! Get ready to explore the vast world of Pokemon!\n";

    return 0;
}