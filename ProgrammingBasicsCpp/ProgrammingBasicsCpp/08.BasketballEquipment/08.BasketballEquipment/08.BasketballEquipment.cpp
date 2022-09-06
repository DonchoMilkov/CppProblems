// 08.BasketballEquipment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int anualTax;
	cin >> anualTax;

	double sneakers = anualTax * 0.6;
	double outfit = sneakers * 0.8;
	double ball = outfit * 0.25;
	double accessories = ball * 0.2;
	double fullPrice = anualTax + sneakers + outfit + ball + accessories;

	cout << fullPrice;

	return 0;
}
