// 08.LunchBreak.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int main()
{
	string name;
	int episodeLength, breakLength;
	getline(cin, name);
	cin >>  episodeLength >> breakLength;

	double lunch = breakLength / 8.0;
	double rest = breakLength / 4.0;

	double restTime = breakLength - lunch - rest;

	double result = restTime - episodeLength;

	if (result < 0)
	{
		cout << "You don't have enough time to watch " << name << ", you need " << abs(floor(result)) << " more minutes." << endl;
	}
	else
	{
		cout << "You have enough time to watch " << name << " and left with " << ceil(result) << " minutes free time." << endl;

	}
	return 0;
}