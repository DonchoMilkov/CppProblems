// 07.FoodDelivery.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int chickenMenus;
	cin >> chickenMenus;

	int fishMenus;
	cin >> fishMenus;

	int vegMenus;
	cin >> vegMenus;

	double chickenMenusPrice = chickenMenus * 10.35;
	double fishMenusPrice = fishMenus * 12.4;
	double vegMenusPrice = vegMenus * 8.15;

	double rawSum = chickenMenusPrice + fishMenusPrice + vegMenusPrice;
	double desertPrice = rawSum * 0.2;

	double finalSum = rawSum + desertPrice + 2.5;
	cout << finalSum;

	return 0;
}
