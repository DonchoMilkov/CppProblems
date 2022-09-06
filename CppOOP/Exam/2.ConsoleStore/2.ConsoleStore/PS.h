#ifndef PS_H
#define PS_H
#include "Console.h"

class PS : Console
{
private:
	int _gen;
public:
	PS(int price, int quality, int gen) : Console(price, quality) { this->_gen = gen; };

	void print() {
		std::cout << "PS with generation "<<this->_gen<<", ";
		Console::print();
	}

	int getPrice() const {
		return Console::getPrice();
	}

	int getQuality() const {
		return Console::getQuality();
	}
};
#endif // !PS_H

