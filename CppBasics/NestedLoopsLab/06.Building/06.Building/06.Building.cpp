// 06.Building.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{

	int floors, rooms;
	cin >> floors>> rooms;
	char letter;

	for (int i = 0; i < rooms; i++)
	{
		cout << "L" << floors * 10 + i;
		if (i==rooms-1)
		{
			cout << endl;
		}
		else
		{
			cout <<" ";
		}
	}

	if (floors ==1)
	{
		return 0;
	}

	for (int i = floors-1	; i >= 1; i--)
	{
		char letter;
		if (i%2 !=0)
		{
			letter = 'A';
		}
		else
		{
			letter = 'O';
		}
		for (int j = 0; j < rooms; j++)
		{
				cout << letter << i * 10 + j;
				if (j == rooms - 1)
				{
					cout << endl;
				}
				else
				{
					cout << " ";
				}
		}
	}
	return 0;
}