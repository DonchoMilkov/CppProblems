// 04.EasterEggsBattle.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
int main()
{
	int eggsPlayer1, eggsPlayer2;
	cin >> eggsPlayer1 >> eggsPlayer2;

	string input;
	while (true)
	{
		getline(cin >> ws, input);
		if (input == "End of battle")
		{
			cout << "Player one has " << eggsPlayer1 << " eggs left." << endl;

			cout << "Player two has " << eggsPlayer2 << " eggs left." << endl;

			return 0;
		}
		if (input == "one")
		{
			eggsPlayer2--;
			if (eggsPlayer2==0)
			{
				cout << "Player two is out of eggs. Player one has " << eggsPlayer1 << " eggs left." << endl;
				return 0;
			}
		}
		else if (input == "two")
		{
			eggsPlayer1--;
			if (eggsPlayer1 == 0)
			{
				cout << "Player one is out of eggs. Player two has " << eggsPlayer2 << " eggs left." << endl;
				return 0;
			}
		}

	}
	return 0;
}
