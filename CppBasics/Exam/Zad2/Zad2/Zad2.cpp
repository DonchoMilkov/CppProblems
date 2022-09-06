// Zad2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{

	double shirtPrice, finalSum;
	cin >> shirtPrice >> finalSum;

	double shortsPrice = 0.75 * shirtPrice;
	double socksPrice = 0.2 * shortsPrice;
	double trainersPrice = (shortsPrice + shirtPrice) * 2.0;

	double rawPrice = shortsPrice + shirtPrice + socksPrice + trainersPrice;

	double finalPrice = rawPrice * 0.85;
	cout.setf(ios::fixed);
	cout.precision(2);
	if (finalPrice >= finalSum)
	{
		cout << "Yes, he will earn the world-cup replica ball!" << endl;
		cout << "His sum is " << finalPrice << " lv." << endl;
	}
	else
	{
		cout << "No, he will not earn the world-cup replica ball." << endl;
		cout << "He needs " << finalSum - finalPrice << " lv. more." << endl;
	}

	return 0;
}