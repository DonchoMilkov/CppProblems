#ifndef BattleField_H
#define BattleField_H

#include "Hero.h"
#include <vector>
#include <memory>

class BattleField {
private:
	std::vector<std::unique_ptr<Hero>> _heroes;
public:
	void createHeroes();
	void createSpells();
	void startBattle();
	void printWinner(const std::unique_ptr<Hero>& hero);
};

#endif // !BattleField_H

