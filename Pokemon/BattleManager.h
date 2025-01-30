#pragma once
#ifndef BATTLEMANAGER_H
#define BATTLEMANAGER_H

#include "WildPokemon.h"
#include "Player.h"






class BattleManager {
public:
	void startBattle(Player& player, Pokemon& opposingPokemon);
	void battle(Pokemon& playerPokemon, Pokemon& opposingPokemon);
	void handleBattleOutcome(Player& player, bool playerWon);
};



#endif // !BATTLEMANAGER_H


