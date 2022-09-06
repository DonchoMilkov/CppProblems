// 04.ToyShop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int main()
{
 
	double targetPrice;
	int puzzlesCount, dollsCount, teddyBearsCount, minionsCount, trucksCount;

	cin >> targetPrice >> puzzlesCount >> dollsCount >> teddyBearsCount >> minionsCount >> trucksCount;

	double rawPrice = puzzlesCount * 2.6 + dollsCount * 3.0 + teddyBearsCount * 4.1 + minionsCount * 8.2 + trucksCount * 2.0;

	int toysCount = puzzlesCount + dollsCount + teddyBearsCount + minionsCount + trucksCount;
	double discount = 0.0;
	if (toysCount >= 50)
	{
		discount = 0.25 * rawPrice;
	}

	double total = (rawPrice - discount) * 0.9;

	cout.setf(ios::fixed);
	cout.precision(2);

	if (total < targetPrice)
	{
		cout << "Not enough money! " << targetPrice - total << " lv needed." << endl;
	}
	else
	{
		cout << "Yes! " << total - targetPrice << " lv left." << endl;
	}

	return 0;
}
