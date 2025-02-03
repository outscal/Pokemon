#include "WildPokemon.h"
#include "AllPokemon.h"
#include <iostream>

using namespace std;

WildPokemon::WildPokemon(PokemonSpecies species)
{
	
	switch (species) {
	case PokemonSpecies::Charmander:
	
		pokemon = new Charmander();
		break;
	case PokemonSpecies::Bulbasaur:
		pokemon = new Bulbasaur();
		break;
    case PokemonSpecies::Squirtle:
        pokemon = new Squirtle();
        break;
    case PokemonSpecies::Pikachu:
        pokemon = new Pikachu();
        break;
    case PokemonSpecies::Caterpie:
        pokemon = new Caterpie();
        break;
    case PokemonSpecies::Pidgey:
        pokemon = new Pidgey();
        break;
    case PokemonSpecies::Zubat:
        pokemon = new Zubat();
        break;
    default:
        cout << "Invalid Pokémon choice!" << endl;
        pokemon = nullptr;
        break;
	}
}

void WildPokemon::attack(Pokemon& target) {

}

