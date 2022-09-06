// 05.Number100_200.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int input;
	cin >> input;

	if (input < 100)
	{
		cout << "Less than 100" << endl;
	}
	else if (input <= 200)
	{
		cout << "Between 100 and 200" << endl;

	}
	else
	{
		cout << "Greater than 200" << endl;

	}
	return 0;
}
