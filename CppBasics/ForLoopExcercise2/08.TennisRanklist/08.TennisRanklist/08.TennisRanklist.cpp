// 08.TennisRanklist.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	int tournamentsCount,startingPoits;
	cin >> tournamentsCount>>startingPoits;

	int points = 0;
	string result;
	int titlesCount = 0;
	for (int i = 0; i < tournamentsCount; i++)
	{
		cin >> result;
		if (result == "W")
		{
			titlesCount++;
			points += 2000;
		}
		else if (result == "F")
		{
			points += 1200;
		}
		else if (result =="SF")
		{
			points += 720;
		}
	}

	int finalPoints = startingPoits + points;

	cout << "Final points: " << finalPoints << endl;
	cout << "Average points: " << points / tournamentsCount << endl;
	cout.setf(ios::fixed);
	cout.precision(2);
	cout << titlesCount * 100.0 / tournamentsCount << "%" << endl;

	return 0;
}