#include <iostream>
#include <string>
#include <unordered_map>
#include "PokemonTypes.h"
#include "PokemonSpecies.h"
using std::string;
using std::unordered_map;
using namespace std;

void WaitForEnter() {
    cin.get();
}
void ClearConsole()
{
    #ifdef _WIN32
        system("cls");
    #else
        (void)system("clear");
    #endif
}




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
        WaitForEnter();
        getline(cin, player.p_name);
        std::cout << "Congratulations " << player.p_name << ", now you are almost ready for adventure!\n" << std::endl;

    }

    void offerPokemonChoices() {
        std::cout << "But one last thing, what every youth in Kanto dreams of, you must choose your partner pokemon!" << "\n" << std::endl;
        WaitForEnter();
        std::cout << "Will it be Charmander, Squirtle or Bulbasaur?" << "\n\n" << std::endl;
        std::cout << "Enter the name of the pokemon of your choice." << "\n\n" << std::endl;
        player.choosePokemon();
        WaitForEnter();
        ClearConsole();
        
    }
    void explainMainQuest(Player player) {
        cout << "Professor Oak: Oak-ay" << player.p_name << "!, I am about to explain you about your upcoming grand adventure.\n";
        WaitForEnter();
        cout << "Professor Oak: You see, becoming a Pokémon Master is no easy feat. It takes courage, wisdom, and a bit of luck!\n";
        WaitForEnter();
        cout << "Professor Oak: Your mission, should you choose to accept it—and trust me, you really don’t have a choice—is to collect all the Pokémon Badges and conquer the Pokémon League.\n";
        WaitForEnter();

        cout << "\n" << player.p_name << ": Wait... that sounds a lot like every other Pokémon game out there...\n";
        WaitForEnter();
        cout << "Professor Oak: Shhh! Don't break the fourth wall, " << player.p_name << "! This is serious business!\n";
        WaitForEnter();

        cout << "\nProfessor Oak: To achieve this, you’ll need to battle wild Pokémon, challenge gym leaders, and of course, keep your Pokémon healthy at the PokeCenter.\n";
        WaitForEnter();
        cout << "Professor Oak: Along the way, you'll capture new Pokémon to strengthen your team. Just remember—there’s a limit to how many Pokémon you can carry, so choose wisely!\n";
        WaitForEnter();

        cout << "\n" << player.p_name << ": Sounds like a walk in the park... right?\n";
        WaitForEnter();
        cout << "Professor Oak: Hah! That’s what they all say! But beware, young Trainer, the path to victory is fraught with challenges. And if you lose a battle... well, let’s just say you'll be starting from square one.\n";

        WaitForEnter();
        cout << "\nProfessor Oak: So, what do you say? Are you ready to become the next Pokémon Champion?\n";
        WaitForEnter();
        cout << "\n" << player.p_name << ": Ready as I’ll ever be, Professor!\n";

        WaitForEnter();
        cout << "\nProfessor Oak: That’s the spirit! Now, your journey begins...\n";
        WaitForEnter();
        cout << "ProfesWaitForEnter();sor Oak: But first... let's just pretend I didn't forget to set up the actual game loop... Ahem, onwards!\n";
        WaitForEnter();
        ClearConsole();
    }
};

void GameLoop(Player &player)
{
    bool keepPlaying = true;
    int choice;

    while (keepPlaying)
    {
        cout << "\nWhat would you like to do next, " << player.p_name << "?\n";
        cout << "1. Battle Wild Pokémon\n";
        cout << "2. Visit PokeCenter\n";
        cout << "3. Challenge Gyms\n";
        cout << "4. Enter Pokémon League\n";
        cout << "5. Quit\n";
        cout << "Enter your choice: ";
        cin >> choice;
    }

    switch (choice) {
    case 1:
        cout << "You look around... but all the wild Pokemon are on vacation. Maybe try again later?\\n" << endl;
        break;
    
    case 2:
        cout << "You head to the PokeCenter, but Nurse Joy is out on a coffee break. Guess your Pokemon will have to tough it out for now!\\n" << endl;
        break;
    
     case 3:
         cout <<"You march up to the Gym, but it's closed for renovations. Seems like even Gym Leaders need a break!\\n" << endl;
         break;
     case 4:
         cout << "You boldly step towards the Pokemon League... but the gatekeeper laughs and says, 'Maybe next time, champ!'\\n" << endl;
         break;
     case 5:
         cout << "You try to quit, but Professor Oak's voice echoes: 'There's no quitting in Pokemon training!\\n" << endl;
         break;
    }
}


unordered_map<PokemonSpecies, string>  Pokemon::pokemon_names;
unordered_map<PokemonSpecies, PokemonType>  Pokemon::pokemon_types;
int main() {

    Player player_object;
    ProfessorOak professor("Professor Oak", player_object);
    professor.greetPlayer();
    professor.offerPokemonChoices();
    professor.explainMainQuest(player_object);



    return 0;

}
