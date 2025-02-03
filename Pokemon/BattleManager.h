#pragma once
#ifndef BATTLEMANAGER_H
#define BATTLEMANAGER_H

#include "WildPokemon.h"
#include "Player.h"
#include "BattleState.h"





class BattleManager {
public:
	void startBattle(Player& player, Pokemon& opposingPokemon);
	void battle(Pokemon& playerPokemon, Pokemon& opposingPokemon);
	void handleBattleOutcome();
	void updateBattleState();
	static void stopBattle();
private:
	static BattleState battleState;  // New BattleState object to track the battle
	static BattleManager* instance;
};



#endif // !BATTLEMANAGER_H


