#include "Pokemon.h"
#include <iostream>
#include "Utility.h"
#include "BattleManager.h"

using namespace N_Utility;


// Static member initialization
std::unordered_map<PokemonSpecies, std::string> Pokemon::pokemon_names;
std::unordered_map<PokemonSpecies, PokemonType> Pokemon::pokemon_types;

// Default constructor
Pokemon::Pokemon() {
    constructNameDictionary();
    constructTypeDictionary();
    species = PokemonSpecies::Pikachu;
    name = pokemon_names[species];
    maxHealth = 15;
    health = maxHealth;
    type = pokemon_types[species];
}

// Parameterized constructor
Pokemon::Pokemon(PokemonSpecies p_species, int p_health) {
    constructNameDictionary();
    constructTypeDictionary();
    species = p_species;
    type = pokemon_types[species];
    maxHealth = p_health;
    health = maxHealth;
    name = pokemon_names[p_species];
}

// Copy constructor
Pokemon::Pokemon(const Pokemon& other) {
    name = other.name;
    type = other.type;
    maxHealth = other.maxHealth;
    health = other.health;
}

// Destructor
Pokemon::~Pokemon() {
    
}

bool Pokemon::canAttack()
{
    if (appliedEffect == nullptr)
        return true;
    else
        return appliedEffect->turnEndEffect(this);
}

void Pokemon::applyEffect(StatusEffectType effectToApply)
{
    switch (effectToApply)
    {
    case StatusEffectType::PARALYZED:
        appliedEffect = new ParalyzedEffect();
        appliedEffect->applyEffect(this);
        break;
    default:
        appliedEffect = nullptr;
    }
}

bool Pokemon::canApplyEffect() { return appliedEffect == nullptr; }

void Pokemon::applyEffect(StatusEffectType effectToApply)
{
    switch (effectToApply)
    {
    case StatusEffectType::PARALYZED:
        appliedEffect = new ParalyzedEffect();
        appliedEffect->applyEffect(this);
        break;
    default:
        appliedEffect = nullptr;
    }
}

void Pokemon::clearEffect() { appliedEffect = nullptr; }

void Pokemon::changeAttackPower(int modifier)
{
    if (modifier <= 1 && modifier >= 0) {
        attackPower += modifier * 1;
    }
    else
    {
        cout << "invalid value passed into changeAttackPower" << endl;
    }
}

void Pokemon::printAvailableMoves() {
    cout << name << "'s available moves:\n";

    // List out all moves for the player to choose from
    for (size_t i = 0; i < moves.size(); ++i) {
        cout << i + 1 << ": " << moves[i].name << " (Power: " << moves[i].power << ")\n";
    }
}

int Pokemon::selectMove() {
    // Ask the player to select a move
    int choice;
    cout << "Choose a move: ";
    cin >> choice;

    // Validate the choice
    while (choice < 1 || choice > static_cast<int>(moves.size())) {
        cout << "Invalid choice. Try again: ";
        cin >> choice;
    }

    return choice;
}

void Pokemon::useMove(Move selectedMove, Pokemon* target) {
    cout << name << " used " << selectedMove.name << "!\n";
    if (selectedMove.name == "LEECH LIFE") {
        leechLife(selectedMove, target);
    }
    else if (selectedMove.name == "RAPID SPIN")
    {
        rapidSpin(selectedMove, target);
    }
    else if (selectedMove.name == "THUNDER BOLT")
    {
        thunderbolt(selectedMove, target);
    }
    else if (selectedMove.name == "GUST")
    {
        gust(selectedMove, target);
    }
    else if (selectedMove.name == "BLAZING CHARGE")
    {
        blazingCharge(selectedMove, target);
    }
    else if (selectedMove.name == "STICKY WEB")
    {
        stickyWeb(selectedMove, target);
    }
    else if (selectedMove.name == "VINE WHIP")
    {
        vineWhip(selectedMove, target);
    }


    Utility::waitForEnter();

    cout << "...\n";
    N_Utility::Utility::waitForEnter();

    if (target->isFainted())
        cout << target->name << " fainted!\n";
    else
        cout << target->name << " has " << target->health << " HP left.\n";
}

// list of methods for all moves
void Pokemon::vineWhip(Move selectedMove, Pokemon* target) {
    int secondHitChance = rand() % 2;
    target->takeDamage(selectedMove.power * attackPower);
    if (secondHitChance == 1) {
        target->takeDamage(selectedMove.power * attackPower);
        std::cout << name << " hits again with a second " << selectedMove.name << "!\n";
    }
    else
        std::cout << target->name << " dodged the second hit!\n";
}
void Pokemon::stickyWeb(Move selectedMove, Pokemon* target) {
    // Reduce the target's next attack damage (for simplicity, reducing by a fixed value)
    target->takeDamage(selectedMove.power * attackPower);
    target->changeAttackPower(0.8);
    std::cout << target->name << "'s next attack will be reduced by 20%\n";
}
void Pokemon::blazingCharge(Move selectedMove, Pokemon* target) {
    // Recoil effect: Charmander takes recoil damage
    target->takeDamage(selectedMove.power * attackPower);
    this->takeDamage(10); // Fixed recoil damage
    std::cout << name << " takes 10 recoil damage from the Blazing Charge!\n";
    N_Utility::Utility::waitForEnter();
}
void Pokemon::gust(Move selectedMove, Pokemon* target) {
    // 20% chance to blow the opponent away
    if (rand() % 100 < 20)
    {
        target->takeDamage(selectedMove.power * attackPower);
        std::cout << "... and blew the opponent away!\n";
        BattleManager::stopBattle();
        N_Utility::Utility::waitForEnter();
    }
}
void Pokemon::thunderbolt(Move selectedMove, Pokemon* target) {
    // 80% chance to hit
    if (rand() % 100 < 80)
    {
        target->takeDamage(selectedMove.power * attackPower);
        std::cout << "... and it hit successfully!\n";
        if (target->canApplyEffect())
        {
            target->applyEffect(StatusEffectType::PARALYZED);
        }
    }
    else
        std::cout << "... but it missed!\n";
}

void Pokemon::rapidSpin(Move selectedMove, Pokemon* target) {
    // Random number of hits between 2 and 5
    int hits = (rand() % 4) + 2;

    // Split damage across hits
    for (int i = 0; i < hits; ++i) {
        target->takeDamage(selectedMove.power * attackPower);
    }

    std::cout << "... and hit " << hits << " times!\\n";

}
void Pokemon::leechLife(Move selectedMove, Pokemon* target)
{
    // Restore 50% of the damage dealt
    this->health += selectedMove.power * 0.5;

    // Ensure health does not exceed maxHealth
    if (this->health > this->maxHealth)
        this->health = this->maxHealth;
    target->takeDamage(selectedMove.power * attackPower);
    std::cout << "... and regained health!\n";
}




void Pokemon::selectAndUseMove(Pokemon* target) {
    // Show all the available moves
    printAvailableMoves();

    // Input player's choice
    int choice = selectMove();
    Move selectedMove = moves[choice - 1];

    // Execute the move
    useMove(selectedMove, target);
}






void Pokemon::takeDamage(int damage) {
    health -= damage; // Reduce HP by the damage amount
    cout << this->name << " took " << damage << " damage." << endl;
    if (health < 0) {
        health = 0; // Ensure HP doesn't go below 0
    }
}

bool Pokemon::isFainted() {
    return health <= 0;
}

void Pokemon::healToFullHealth() {
    health = maxHealth; // Restore health to full
}

// Helper function to construct the name dictionary
void Pokemon::constructNameDictionary() {
    if (pokemon_names.empty()) {
        pokemon_names = {
            {PokemonSpecies::Charmander, "Charmander"},
            {PokemonSpecies::Bulbasaur, "Bulbasaur"},
            {PokemonSpecies::Squirtle, "Squirtle"},
            {PokemonSpecies::Pikachu, "Pikachu"},
            {PokemonSpecies::Geodude, "Geodude" },
            {PokemonSpecies::Zubat, "Zubat"},
            {PokemonSpecies::Caterpie, "Caterpie"},
            {PokemonSpecies::Goldeen, "Goldeen"}
        };
    }
}

// Helper function to construct the type dictionary
void Pokemon::constructTypeDictionary() {
    if (pokemon_types.empty()) {
        pokemon_types = {
            {PokemonSpecies::Charmander, PokemonType::Fire},
            {PokemonSpecies::Bulbasaur, PokemonType::Grass},
            {PokemonSpecies::Squirtle, PokemonType::Water},
            {PokemonSpecies::Pikachu, PokemonType::Electric},
            {PokemonSpecies::Geodude, PokemonType::Rock },
            {PokemonSpecies::Zubat, PokemonType::Poison},
            {PokemonSpecies::Caterpie, PokemonType::Bug},
            {PokemonSpecies::Goldeen, PokemonType::Water}
        };
    }
}