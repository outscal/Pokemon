#include <iostream>
using namespace std;

class Player;

class ProfessorOak {
public:
	string name;

	ProfessorOak(string p_name);
	void greetPlayer(Player& player);
	void offerPokemonChoices(Player& player);
	void explainMainQuest(Player& player);
};