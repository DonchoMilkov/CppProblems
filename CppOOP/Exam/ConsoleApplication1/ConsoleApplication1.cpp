// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include<sstream>
#include <iostream>
using namespace std;


class Building {
public:
	void print() {
		std::cout << "Base";
	}
};


int main() {
	for (int i = 0; i < 1000000; ++i) {
		std::unique_ptr<Building>buildingOne(new Building());
		std::unique_ptr<Building>buildingTwo(new Building());
	}
}