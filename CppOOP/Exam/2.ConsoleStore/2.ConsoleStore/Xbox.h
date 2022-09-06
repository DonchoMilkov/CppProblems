#ifndef XBOX_H
#define XBOX_H
#include "Console.h"
class Xbox : Console
{
public:
	Xbox(int price, int quality) : Console(price, quality) {};

	void print() {
		std::cout << "Xbox with ";
		Console::print();
	}

	int getPrice() const {
		return Console::getPrice();
	}

	int getQuality() const {
		return Console::getQuality();
	}
};

#endif // !XBOX_H

