// 05.Coins.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	double sum;
	cin >> sum;
	int sumRound = sum * 100;
	int counter = 0;
	while (sumRound > 0)
	{
		counter++;
		if (sumRound >= 200)
		{
			sumRound -= 200;
		}
		else if (sumRound >= 100)
		{
			sumRound -= 100;
		}
		else if (sumRound >= 50)
		{
			sumRound -= 50;
		}
		else if (sumRound >= 20)
		{
			sumRound -= 20;
		}
		else if (sumRound >= 10)
		{
			sumRound -= 10;
		}
		else if (sumRound >= 5)
		{
			sumRound -= 5;
		}
		else if (sumRound >= 2)
		{
			sumRound -= 2;
		}
		else
		{
			sumRound -= 1;
		}
	}

	cout << counter << endl;
	return 0;
}
