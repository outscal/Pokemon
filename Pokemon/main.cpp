#include <iostream>
#include <string>
using namespace std;

//define an enum for pokemon choices
enum class PokemonChoice { CHARMANDER = 1, BULBASAUR, SQUIRTLE, PIKACHU };

//define an enum for pokemon types
enum class PokemonType { FIRE, ELECTRIC, WATER, EARTH, GRASS };

//creating a class (Pokemon)
class Pokemon
{
public:
    //Atributes
    string name;
    PokemonType type;
    int health;

    //creating 2 constructors
    Pokemon()
    {

    }

    Pokemon(string p_name, PokemonType p_type, int p_health)
    {
        name = p_name;
        type = p_type;
        health = p_health;
    }

    void attack() {
        cout << name << "attacks with a powerful move!" << endl;
    }
};

class Player
{
    //attributes
public:
    string name;
    Pokemon chosenPokemon;

    Player() {
        chosenPokemon = Pokemon();
    }

    Player(string p_name, Pokemon p_chosenPokemon) {
        name = p_name;
        chosenPokemon = p_chosenPokemon;
    }

    //function to choose a pokemon
    void choosePokemon(int choice)
    {
        // store the choice integer to respective pokemon
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

//creating a class for Professor Oak
class ProfessorOak
{
public:
    string name;


    ProfessorOak(string p_name)
    {
        name = p_name;
    }

    //greeting player
    void greetPlayer(Player& player)
    {
        cout << name << ": Hello there! Welcome to the world of Pokemon!" << endl;
        cout << name << ": My name is Oak. People call me the Pokemon Professor!" << endl;
        cout << name << ": But enough about me. Let's talk about you!" << endl;
    }


    // function to ask the player to choose a pokemon
    void offerPokemonChoices(Player& player)
    {
        //taking player name as input
        cout << name << ": First, tell me, what's your name?" << endl;
        getline(cin, player.name);
        cout << name << ": Ah, " << player.name << "! What a fantastic name!" << endl;
        cout << name << ": You must be eager to start your adventure. But first, you'll need a Pokemon of your own!" << endl;

        //presenting pokemon choices
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
    //Initialize Professor Oak and Player with default placehoder value
    ProfessorOak professor("Professor Oak");
    Pokemon placeholderPokemon("Placeholder", PokemonType::FIRE, 100);

    Player player("Trainer", placeholderPokemon);

    //greet the player and offer Pokemon
    professor.greetPlayer(player);
    professor.offerPokemonChoices(player);

    // Concluding the first chapter
    cout << "Professor Oak: " << player.chosenPokemon.name << " and you " << player.name << ", are going to be the best of friends!" << endl;
    cout << "Professor Oak: Your journey begins now! Get ready to explore the vast world of Pokemon!" << endl;
    
    return 0;
}