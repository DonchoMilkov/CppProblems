#ifndef Amazon_H
#define Amazon_H

#include "Hero.h"
class Amazon : public Hero
{
public:
	Amazon(VitalData vdata) {
		this->_vitalData = vdata;
		this->attacksCount = 0;
		this->_name = AMAZON_NAME;
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
		this->attacksCount++;
		int damage;
		if (this->_vitalData.currMana >= this->_spells[1].manaCost)
		{
			this->_vitalData.currMana -= this->_spells[1].manaCost;
			damage = this->_spells[1].damage;
			std::cout << this->_name <<" casting " << this->_spells[1].name << " for " << this->_spells[1].manaCost << " mana" << std::endl;

		}
		else
		{
			damage = this->_spells[0].damage;
			std::cout << this->_name <<" casting " << this->_spells[0].name << " for " << this->_spells[0].manaCost << " mana" << std::endl;
		}

		if (attacksCount % AMAZON_PASSIVE_ABILITY_COUNTER == 0)
			damage = damage + damage*AMAZON_DAMAGE_INCREASE_PERCENT/100;

		return damage;
	}

	virtual void takeDamage(int damage) {
		this->_vitalData.health -= damage;
		std::cout<<this->_name<<" took "<<damage<<" damage and is left with "<<this->_vitalData.health<<" health"<<std::endl;
	}

	virtual void regenerate() {
		int manaBefore = this->_vitalData.currMana;
		this->_vitalData.currMana += this->_vitalData.manaRegenRate;
		if (this->_vitalData.currMana > this->_vitalData.maxMana)
			this->_vitalData.currMana = this->_vitalData.maxMana;
		int regainedMana = this->_vitalData.currMana - manaBefore;
		std::cout << this->_name << " regained " << regainedMana << " mana for up to " << this->_vitalData.currMana<< std::endl;

	}

	virtual bool isDead() const {
		return this->_vitalData.health <= 0;
	}
private:
	int attacksCount;
};
#endif // !Amazon_H

