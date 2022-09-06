// 09.SkiTrip.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int days;
	string room;
	string feedback;

	cin >> days;
	getline(cin >> ws, room);
	cin >> feedback;
	days--;

	double factor = 1.0;
	double price = 18.0;

	if (room == "apartment")
	{
		price = 25.0;
		if (days < 10)
		{
			factor = 0.7;
		}
		else if (days<=15)
		{
			factor = 0.65;
		}
		else
		{
			factor = 0.5;
		}
	}
	else if (room == "president apartment")
	{
		price = 35.0;
		if (days < 10)
		{
			factor = 0.9;
		}
		else if (days <= 15)
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
		factor = factor * 1.25;
	}
	else
	{
		factor = factor * 0.9;
	}

	cout.setf(ios::fixed);
	cout.precision(2);

	cout << days * price * factor << endl;

	return 0;
}