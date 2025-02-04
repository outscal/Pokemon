#include <iostream>
#include <string>
using namespace std;

enum class PokemonChoice {
	Charmander,
	Bulbasaur,
	Squirtle,
	Pikachu
};

enum class PokemonType {
	Fire,
	Grass,
	Water,
	Electric
};

class Pokemon {
public:
	//Attributes

	string name;
	PokemonType type;
	int health;

	Pokemon(string _name, PokemonType _type, int _health) :
		name(_name), type(_type), health(_health) {}
	
	Pokemon() : name(""), health(0) {}

	

	void attack() {
		cout << name << "attacks with a powerful move!\n";
	}
};

class Player {
public:
	//Attributes
	string name;
	Pokemon chosenPokemon;


	//Method to choose a Pokemon
	void choosePokemon(PokemonChoice choice) {
		switch (choice) {
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
			break;
		}
		cout << "Player " << name << " chose " << chosenPokemon.name << "!\n";
	}
};

class ProfessorOak {
	//Attributes
	public:
		string name;

		void greetPlayer(Player& player) {
			cout << name << ": Hello there! Welcome to the world of Pokemon!" << endl;
			cout << name << ": My name is Oak. People call me the Pokemon Professor!\n";
			cout << name << ": But enough about me. Let's talk about you!\n";
		}

		void offerPokemonChoices(Player& player) {
			cout << name << ": First, tell me, what’s your name?\n";
			getline(cin, player.name);
			cout << name << ": Ah, " << player.name << "! What a fantastic name!\n";
			cout << name << ": You must be eager to start your adventure. But first, you’ll need a Pokemon of your own!\n";

			// Presenting Pokemon choices 
			cout << name << ": I have three Pokemon here with me. They’re all quite feisty!\n";
			cout << name << ": Choose wisely...\n"; cout << "1. Charmander - The fire type. A real hothead!\n";
			cout << "2. Bulbasaur - The grass type. Calm and collected!\n";
			cout << "3. Squirtle - The water type. Cool as a cucumber!\n";

			int choice;
			cout << name << ": So, which one will it be? Enter the number of your choice: ";
			cin >> choice;
			
			
			
			player.choosePokemon(static_cast<PokemonChoice>(choice - 1));
		}
	
};



int main() {

	// Creating Objects of ProfessorOak, Pokemon and Player class
	ProfessorOak professor;
	Pokemon placeholderPokemon;
	Player player;

	// Values to placeholderPokemon attributes
	placeholderPokemon.name = "Pikachu";
	placeholderPokemon.type = PokemonType::Electric;
	placeholderPokemon.health = 40;


	player.name = "Trainer";

	professor.name = "Professor Oak";

	professor.greetPlayer(player);
	professor.offerPokemonChoices(player);

	cout << "Professor Oak: " << player.chosenPokemon.name << " and you, " << player.name << ", are going to be the best of friends!\n";

	cout << "Professor Oak: Your journey beigns now! Get ready to explore the vast world of Pokemon!\n";





	return 0;
}