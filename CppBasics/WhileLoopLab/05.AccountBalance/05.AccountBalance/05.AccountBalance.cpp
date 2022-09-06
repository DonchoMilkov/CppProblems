// 05.AccountBalance.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string input;
	cin >> input;
	int min = INT32_MAX;
	int num;
	while (input != "Stop")
	{
		num = stoi(input);
		if (num<min)
		{
			min = num;
		}
		cin >> input;
	}
	cout << min << endl;
	return 0;
}