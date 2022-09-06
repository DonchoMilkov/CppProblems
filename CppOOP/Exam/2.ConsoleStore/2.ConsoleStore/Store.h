#ifndef Store_H
#define Store_H

#include "Xbox.h"
#include "PS.h"
#include "Defines.h"
#include <vector>
#include <memory>
#include <iostream>
#include <algorithm>
#include <functional>


class Store {
private:
	std::vector<std::shared_ptr<Xbox>> _Xboxes;
	std::vector<std::shared_ptr<PS>> _PSs;
public:
	void addXbox(int _price, int _quality) {
		std::shared_ptr<Xbox> newConsole(new Xbox(_price, _quality));
		_Xboxes.push_back(newConsole);
		std::cout << "Adding: ";
		newConsole->print();
	}

	void addPs(int _price, int _quality, int _gen) {
		std::shared_ptr<PS> newConsole(new PS(_price, _quality, _gen));
		_PSs.push_back(newConsole);
		std::cout << "Adding: ";
		newConsole->print();
	}

	void remove(ConsoleType ctype) {
		std::cout << "Removing: ";
		if (ctype == ConsoleType::XBOX)
		{
			_Xboxes.back()->print();
			_Xboxes.pop_back();
		}
		else if (ctype == ConsoleType::PS)
		{
			_PSs.back()->print();
			_PSs.pop_back();
		}
	}

	void print(ConsoleType ctype) {
		if (ctype == ConsoleType::XBOX)
		{
			std::cout << "Printing all Xbox data" << std::endl;
			for (size_t i = 0; i < _Xboxes.size(); i++)
			{
				_Xboxes[i]->print();
			}
		}
		else if (ctype == ConsoleType::PS)
		{
			std::cout << "Printing all PS data " << std::endl;
			for (size_t i = 0; i < _PSs.size(); i++)
			{
				_PSs[i]->print();
			}
		}
	}

	void sortByPrice(ConsoleType ctype) {

		if (ctype == ConsoleType::XBOX)
		{
			std::cout << "Sorting all Xbox by price " << std::endl;
			std::sort(_Xboxes.begin(), _Xboxes.end(), compareByPrice);
		}
		else if (ctype == ConsoleType::PS)
		{
			std::cout << "Sorting all PS by price " << std::endl;
			std::sort(_PSs.begin(), _PSs.end(), comparePSByPrice);
		}

	}

	void sortByQuality(ConsoleType ctype) {

		if (ctype == ConsoleType::XBOX)
		{
			std::cout << "Sorting all Xbox by quality " << std::endl;
			std::sort(_Xboxes.begin(), _Xboxes.end(), compareByQuality);
		}
		else if (ctype == ConsoleType::PS)
		{
			std::cout << "Sorting all PS by quality " << std::endl;
			std::sort(_PSs.begin(), _PSs.end(), comparePSByQuality);
		}
	
	}

	static bool compareByPrice(const std::shared_ptr<Xbox>& a, const std::shared_ptr<Xbox>& b) {
		return (a->getPrice() > b->getPrice());
	}
	static bool compareByQuality(const std::shared_ptr<Xbox>& a, const std::shared_ptr<Xbox>& b) {
		return (a->getQuality() > b->getQuality());
	}
	static bool comparePSByPrice(const std::shared_ptr<PS>& a, const std::shared_ptr<PS>& b) {
		return (a->getPrice() > b->getPrice());
	}
	static bool comparePSByQuality(const std::shared_ptr<PS>& a, const std::shared_ptr<PS>& b) {
		return (a->getQuality() > b->getQuality());
	}
};
#endif // !Store_H

