// 04.FishingBoat.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int budget, count;
	string season;

	cin >> budget >> season >> count;

	double price = 0.0;
	if (season == "Spring")
		price = 3000;
	else if (season == "Summer" || season == "Autumn")
		price = 4200;
	else price = 2600;

	double factor = 1.0;
	if (count <= 6)
		factor = 0.9;
	else if (count <= 11)
		factor = 0.85;
	else factor = 0.75;

	if (count % 2 == 0 && season != "Autumn") factor = factor * 0.95;

	double result = budget - price * factor;
	cout.setf(ios::fixed);
	cout.precision(2);
	if (result < 0)
	{
		cout << "Not enough money! You need " << abs(result) << " leva." << endl;
	}
	else
	{
		cout << "Yes! You have " << result << " leva left." << endl;
	}
	return 0;
}

