#include <iostream>
#include <string>
#include <unordered_map>
using std::string;
using std::unordered_map;
using namespace std;

enum class PokemonSpecies {
    Charmander,
    Bulbasaur,
    Squirtle,
    Pikachu,
    InvalidChoice
};
enum class PokemonType {
    Fire,
    Water,
    Grass,
    Electric,
    Ground,
    Dark,
    Flying,
    Ghost,
    Psychic,
    Fighting,
    Steel,
    Dragon,
    Ice,
    Fairy,
    Normal,
    Rock,
    Poison,
    Bug,
};

class Pokemon {
public:
    static unordered_map<PokemonSpecies, string>  pokemon_names;
    static unordered_map<PokemonSpecies, PokemonType>  pokemon_types;
    PokemonSpecies species;
    PokemonType type;
    int health;
    string name;

    Pokemon() {
        constructNameDictionary();
        constructTypeDictionary();
        species = PokemonSpecies::Pikachu;
        name = pokemon_names[species];
        health = 15;
        type = pokemon_types[species];
    };
    Pokemon(PokemonSpecies p_species, int p_health) {
        constructNameDictionary();
        constructTypeDictionary();
        species = p_species;
        type = pokemon_types[species];
        health = p_health;
        name = pokemon_names[p_species];
    };
    Pokemon(const Pokemon& other)
    {
        name = other.name;
        type = other.type;
        health = other.health;
    }
    ~Pokemon() {
        cout << name << " has been released.\n";
    }
    void attack() { cout << name << "attacks with a powerful move!\n"; }
    void constructNameDictionary() {
        if (pokemon_names.empty())
        {
            pokemon_names = { {PokemonSpecies::Charmander, "Charmander"},
                              {PokemonSpecies::Bulbasaur, "Bulbasaur"},
                              {PokemonSpecies::Squirtle, "Squirtle"},
                              {PokemonSpecies::Pikachu, "Pikachu"}
                              };
        }
    }
    void constructTypeDictionary() {
        pokemon_types = { {PokemonSpecies::Charmander, PokemonType::Fire},
                              {PokemonSpecies::Bulbasaur, PokemonType::Grass},
                              {PokemonSpecies::Squirtle, PokemonType::Water},
                              {PokemonSpecies::Pikachu, PokemonType::Electric } };
        
    }
};
class Player {
public:
    string p_name;
    Pokemon p_chosenPokemon;
    Player() {
        p_name = "Trainer";
        p_chosenPokemon = Pokemon();
        cout << "A new player named " << p_name << " has been created!\n";
    };
    Player() 
    {

    }
    void choosePokemon()
    {
        PokemonSpecies firstPokemon = PokemonSpecies::InvalidChoice;
        string choice;
        while (firstPokemon == PokemonSpecies::InvalidChoice)
        {
            std::cin >> choice;

            if (choice == "Charmander")
            {
                std::cout << "Charmander it is! Take care to not burn down Viridian forest.\n" << std::endl;
                firstPokemon = PokemonSpecies::Charmander;
                p_chosenPokemon = Pokemon(firstPokemon, 20);
            }
            else if (choice == "Squirtle")
            {
                std::cout << "You chose Squirtle! Ever wondered what's within its shell?\n" << std::endl;
                firstPokemon = PokemonSpecies::Squirtle;
                p_chosenPokemon = Pokemon(firstPokemon, 20);
            }
            else if (choice == "Bulbasaur")
            {
                std::cout << "Bulbasaur should make a great partner! It is speculated that these pokemon are the descendants of ancient monsters.\n" << std::endl;
                firstPokemon = PokemonSpecies::Bulbasaur;
                p_chosenPokemon = Pokemon(firstPokemon, 20);
            }
            else {
                std::cout << "Unfortunately we do not have that pokemon available currently, please choose one of the three I have listed above." << "\n\n" << std::endl;
            }
        }
    }
        
};

class ProfessorOak {
public:
    string p_name;
    Player player;

    ProfessorOak(string profName, Player& playerRef)
    {
        p_name = profName;
        player = playerRef;
    }

    void greetPlayer() {
        std::cout << "Welcome to the wonderous world of Pokemon, young trainer." << "\n" << "By what name should I address you?" << "\n" << std::endl;
        getline(cin, player.p_name);
        std::cout << "Congratulations " << player.p_name << ", now you are almost ready for adventure!\n" << std::endl;
    }

    void offerPokemonChoices() {
        std::cout << "But one last thing, what every youth in Kanto dreams of, you must choose your partner pokemon!" << "\n" << std::endl;
        std::cout << "Will it be Charmander, Squirtle or Bulbasaur?" << "\n\n" << std::endl;
        std::cout << "Enter the name of the pokemon of your choice." << "\n\n" << std::endl;
        player.choosePokemon();
    }
};
unordered_map<PokemonSpecies, string>  Pokemon::pokemon_names;
unordered_map<PokemonSpecies, PokemonType>  Pokemon::pokemon_types;
int main() {
    
    Player player_object;
    ProfessorOak professor("Professor Oak", player_object);
    professor.greetPlayer();
    professor.offerPokemonChoices();

    Pokemon default_pokemon = Pokemon();
    Pokemon charmander = Pokemon(PokemonSpecies::Charmander, 100);
    Pokemon bulbasaur = Pokemon(PokemonSpecies::Bulbasaur, 100);
    Pokemon bulbasaurCopy = bulbasaur;
    bulbasaurCopy.health = 80;

    cout << "This is the bulbasaur copy's health: " << bulbasaurCopy.health << endl;
    cout << "And this is the original's health" << bulbasaur.health;


    return 0;

}
