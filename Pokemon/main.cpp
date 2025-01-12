#include <iostream>
#include <string>
using namespace std;

//Define an enum for pokemon choices
enum class PokemonChoice { CHARMANDER = 1, BULBASAUR, SQUIRTLE, PIKACHU/*Default choice*/ };

//Define an enum for pokemon types
enum class PokemonType { FIRE, ELECTRIC, WATER, EARTH, GRASS, NORMAL/*Default choice*/ };

//Creating a class (Pokemon)
class Pokemon
{
public:
    //Atributes
    string name;
    PokemonType type;
    int health;

    //Default constructor
    Pokemon()
    {
        name = "Unknown";
        type = PokemonType::NORMAL;
        health = 50;
        cout << "A new Pokemon has been created with the default constructor!" << endl;
    }

    //Parameterized constructor
    Pokemon(string p_name, PokemonType p_type, int p_health)
    {
        name = p_name;
        type = p_type;
        health = p_health;
        cout << "A new Pokemon named " << name << " has been created!" << endl;
    }

    //Copy constructor
    Pokemon(const Pokemon& other)
    {
        name = other.name;
        type = other.type;
        health = other.health;
        cout << "A new Pokemon has been copied from " << other.name << "!" << endl;
    }


    //Destructor
    ~Pokemon()
    {
        cout << name << " has been released" << endl;
    }

    // Function to demonstrate attack
    void attack() {
        cout << name << "attacks with a powerful move!" << endl;
    }
};

//Creating a class (player)
class Player
{
    //Attributes
public:
    string name;
    Pokemon chosenPokemon;

    //Default constructor
    Player() {
        name = "Trainer";
        chosenPokemon = Pokemon();//Using the default Pokemon constructor
        cout << "A new player named " << name << " has been created!" << endl;
    }


    //Parameterized constructor
    Player(string p_name, Pokemon p_chosenPokemon) {
        name = p_name;
        chosenPokemon = p_chosenPokemon;
        cout << "Player " << name << " has been created!" << endl;
    }

    //Function to choose a pokemon
    void choosePokemon(int choice)
    {
        //Store the choice integer to respective pokemon
        switch ((PokemonChoice)choice)
        {
        case PokemonChoice::CHARMANDER:
            chosenPokemon = Pokemon("Charmander", PokemonType::FIRE, 100);
            break;
        case PokemonChoice::BULBASAUR:
            chosenPokemon = Pokemon("Bulbasaur", PokemonType::GRASS, 100);
            break;
        case PokemonChoice::SQUIRTLE:
            chosenPokemon = Pokemon("Squirtle", PokemonType::WATER, 100);
            break;
        default:
            chosenPokemon = Pokemon("Pikachu", PokemonType::ELECTRIC, 100);
        }
        cout << "Player " << name << " chose " << chosenPokemon.name << "!" << endl;
    }
};

//Creating a class for Professor Oak
class ProfessorOak
{
public:
    //Atributes
    string name;

    //Parameterized constructor
    ProfessorOak(string p_name)
    {
        name = p_name;
    }

    //Function to greeting the player
    void greetPlayer(Player& player)
    {
        cout << name << ": Hello there! Welcome to the world of Pokemon!" << endl;
        cout << name << ": My name is Oak. People call me the Pokemon Professor!" << endl;
        cout << name << ": But enough about me. Let's talk about you!" << endl;
    }


    //Function to ask the player to choose a pokemon
    void offerPokemonChoices(Player& player)
    {
        //Taking player name as input
        cout << name << ": First, tell me, what's your name?" << endl;
        getline(cin, player.name);
        cout << name << ": Ah, " << player.name << "! What a fantastic name!" << endl;
        cout << name << ": You must be eager to start your adventure. But first, you'll need a Pokemon of your own!" << endl;

        //Presenting pokemon choices
        cout << name << ": I have three Pokemon here with me. They're all quite feisty!" << endl;
        cout << name << ": Choose wisely..." << endl;
        cout << "1. Charmander - The fire type. A real hothead!" << endl;
        cout << "2. Bulbasaur - The grass type. Calm and collected!" << endl;
        cout << "3. Squirtle - The water type. Cool as a cucumber!" << endl;

        int choice;
        cout << name << ": So, which one will it be? Enter the number of your choice: ";
        cin >> choice;

        player.choosePokemon(choice);
    }
};


int main() {
    //First task
    //Creating pokemon object with default constructor
    Pokemon defaultPokemon;
    //Creating pokemon object withparameterized constructor
    Pokemon charmander("Charmander", PokemonType::FIRE, 100);

    //Showing details of created object with default constructor
    cout << "Details:" << endl;
    cout << "DefaultPokemon with default constructor." << endl;
    cout << "Name: " << defaultPokemon.name << endl;
    cout << "Pokemon Type: " << (int)defaultPokemon.type << endl;
    cout << "Health: " << defaultPokemon.health << endl;
    cout << endl;
    //Showing details of created object with parameterized constructor
    cout << "Charmander with parameterized constructor." << endl;
    cout << "Name: " << charmander.name << endl;
    cout << "Pomemon Type: " << (int)charmander.type << endl;
    cout << "Health: " << charmander.health << endl;
    cout << endl;

    //Second task
    //Creating pokemon with parameterized constructor
    Pokemon bulbasaur("Bulbasaur", PokemonType::GRASS, 100);
    //Creating pokemon with copy constructor
    Pokemon bulbasaurCopy = bulbasaur;

    //Showing details of created object with parameterized constructor
    cout << "Details:" << endl;
    cout << "Bulbasaur with parameterized constructor." << endl;
    cout << "Name: " << bulbasaur.name << endl;
    cout << "Pokemon Type: " << (int)bulbasaur.type << endl;
    cout << "Health: " << bulbasaur.health << endl;
    cout << endl;
    //Showing details of created object with copy constructor
    cout << "BulbasaurCopy with copy constructor." << endl;
    cout << "Name: " << bulbasaurCopy.name << endl;
    cout << "Pomemon Type: " << (int)bulbasaurCopy.type << endl;
    cout << "Health: " << bulbasaurCopy.health << endl;
    cout << endl;

    //modifying health of coppied object
    bulbasaurCopy.health = 80;

    //Showing details of created object with parameterized constructor after modification
    cout << "Bulbasur with parameterized constructor." << endl;
    cout << "Name: " << bulbasaur.name << endl;
    cout << "Pokemon Type: " << (int)bulbasaur.type << endl;
    cout << "Health: " << bulbasaur.health << endl;
    cout << endl;
    //Showing details of created object with copy constructor after modification
    cout << "BulbasaurCopy with copy constructor." << endl;
    cout << "Name: " << bulbasaurCopy.name << endl;
    cout << "Pomemon Type: " << (int)bulbasaurCopy.type << endl;
    cout << "Health: " << bulbasaurCopy.health << endl;

    //Third task
    {
        Pokemon squirtel("Squirtle", PokemonType::WATER, 100)
    }

    //Initialize Professor Oak 
    ProfessorOak professor("Professor Oak");

    //Intialize Player Ash
    Player player("Ash", charmander);

    //Greet the player and offer Pokemon
    professor.greetPlayer(player);
    professor.offerPokemonChoices(player);

    //Concluding the first chapter
    cout << "Professor Oak: " << player.chosenPokemon.name << " and you " << player.name << ", are going to be the best of friends!" << endl;
    cout << "Professor Oak: Your journey begins now! Get ready to explore the vast world of Pokemon!" << endl;

    return 0;
}