// Zad5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
	int seaCount, mountainCount, profit = 0;
	cin >> seaCount >> mountainCount;
	string input;
	while (true)
	{
		cin >> input;
		if (input == "Stop")
		{
			break;
		}
		else if (input == "sea" && seaCount>0)
		{
			seaCount--;
			profit += 680;

		}
		else if (input == "mountain" && mountainCount>0)
		{
			mountainCount--;
			profit += 499;
		}

		if (mountainCount == 0 && seaCount == 0)
		{
			cout << "Good job! Everything is sold." << endl;
			break;
		}
	}

		cout << "Profit: " << profit << " leva." << endl;
	return 0;
}