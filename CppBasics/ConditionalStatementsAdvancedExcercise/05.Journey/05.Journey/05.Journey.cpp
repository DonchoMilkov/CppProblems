// 05.Journey.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	double budget;
	string season, dest;
	cin >> budget >> season;

	string place = "Camp";

	double factor = 1.0;
	if (budget<=100)
	{
		dest = "Bulgaria";
		if (season == "summer") factor = 0.3;
		else factor = 0.7;
	}
	else if (budget <= 1000)
	{
		dest = "Balkans";

		if (season == "summer") factor = 0.4;
		else factor = 0.8;
	}
	else {
		dest = "Europe";
		factor = 0.9;
	}

	if (factor > 0.5) place = "Hotel";
	cout.setf(ios::fixed);
	cout.precision(2);

	cout<< "Somewhere in " << dest << endl;
	cout << place << " - " << budget * factor << endl;
	return 0;
}
