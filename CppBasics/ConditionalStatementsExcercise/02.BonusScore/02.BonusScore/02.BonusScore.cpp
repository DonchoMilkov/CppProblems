// 02.BonusScore.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int num;
	double bonus = 0.0;
	cin >> num;

	if (num <= 100)
	{
		bonus = 5;
	}
	else if (num > 1000)
	{
		bonus = num * 0.1;
	}
	else
	{
		bonus = num * 0.2;
	}

	if (num % 2 == 0)
	{
		bonus++;
	}

	else if (num % 10 == 5)
	{
		bonus += 2;
	}

	cout << bonus << endl << num + bonus << endl;
	return 0;
}
