// Zad4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
	int firstMax, secondMax, thirdMax;
	cin >> firstMax >> secondMax >> thirdMax;

	for (int i = 2; i <= firstMax; i += 2)
	{
		for (int j = 2; j <= secondMax; j++)
		{
			if (j == 4 || j == 6 || j > 7)
			{
				continue;
			}
			for (int k = 2; k <= thirdMax; k += 2)
			{
				cout << i << " " << j << " " << k << endl;
			}
		}
	}
	return 0;
}