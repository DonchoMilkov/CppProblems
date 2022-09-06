// Zad3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
	int daysCount;
	string place, feedback;
	double pricePerNight;

	cin >> daysCount;
	getline(cin >> ws, place);
	cin >> feedback;

	daysCount--;

	double factor = 1.0;
	pricePerNight = 18.00;

	if (place == "apartment")
	{
		pricePerNight = 25.00;
		if (daysCount<10)
		{
			factor = 0.7;
		}
		else if (daysCount<=15)
		{
			factor = 0.65;
		}
		else
		{
			factor = 0.5;
		}
	}
	else if (place == "president apartment")
	{
		pricePerNight = 35.00;
		if (daysCount < 10)
		{
			factor = 0.9;
		}
		else if (daysCount <= 15)
		{
			factor = 0.85;
		}
		else
		{
			factor = 0.8;
		}
	}

	if (feedback == "positive")
	{
		factor *= 1.25;
	}
	else if (feedback =="negative")
	{
		factor *= 0.9;
	}

	double sum = daysCount * pricePerNight * factor;

	cout.setf(ios::fixed);
	cout.precision(2);
	cout << sum << endl;

	return 0;
}