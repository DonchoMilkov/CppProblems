#ifndef Barbarian_H
#define Barbarian_H

#include "Hero.h"
#include "Defines.h"
class Barbarian : public Hero
{
public:
	Barbarian(VitalData vdata) {
		this->_vitalData = vdata;
		this->_defendsCount = 0;
		this->_name = BARBARIAN_NAME;
	}

	virtual void readSpellFromInput(SpellType spellType) {
		SpellData data;
		std::string line;
		getline(std::cin, line);
		std::istringstream istr(line);
		if (spellType == SpellType::Weak)
		{
			istr >> data.name >> data.damage;
			this->_spells[0] = data;
		}
		else
		{
			istr >> data.name >> data.damage >> data.manaCost;
			this->_spells[1] = data;
		}
	}

	//returns the produced damage
	virtual int castSpell() {
		int damage;
		if (this->_vitalData.currMana >= this->_spells[1].manaCost)
		{
			this->_vitalData.currMana -= this->_spells[1].manaCost;
			damage = this->_spells[1].damage;
			std::cout <<this->_name<<" casting " << this->_spells[1].name << " for " << this->_spells[1].manaCost << " mana" << std::endl;

		}
		else
		{
			damage = this->_spells[0].damage;
			std::cout <<this->_name<<" casting " << this->_spells[0].name << " for " << this->_spells[0].manaCost << " mana" << std::endl;
		}

		return damage;
	}

	virtual void takeDamage(int damage) {
		this->_defendsCount++;
		int finalDamage;
		if (this->_defendsCount % BARBARIAN_PASSIVE_ABILITY_COUNTER == 0)
			finalDamage = damage * BARBARIAN_DAMAGE_BLOCK_PERCENT/100;
		else
			finalDamage = damage;
		this->_vitalData.health -= finalDamage;

		std::cout<<this->_name<<" took "<<finalDamage<<" damage and is left with "<<this->_vitalData.health<<" health" << std::endl;
	}

	virtual void regenerate() {
		int manaBefore = this->_vitalData.currMana;
		this->_vitalData.currMana += this->_vitalData.manaRegenRate;
		if (this->_vitalData.currMana > this->_vitalData.maxMana)
			this->_vitalData.currMana = this->_vitalData.maxMana;
		int regainedMana = this->_vitalData.currMana - manaBefore;
		std::cout << this->_name << " regained " << regainedMana << " mana for up to " << this->_vitalData.currMana << std::endl;
	}

	virtual bool isDead() const {
		return this->_vitalData.health <= 0;
	}
private:
	int _defendsCount;
};
#endif // !Barbarian_H

