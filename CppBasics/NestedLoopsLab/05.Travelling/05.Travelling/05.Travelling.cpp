// 05.Travelling.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	string command;
	double finalPrice;
	double onePay;
	while (true)
	{
		cin >> command;

		if (command == "End")
		{
			return 0;
		}

		cin >> finalPrice;

		while (finalPrice > 0)
		{
			cin >> onePay;
			finalPrice -= onePay;
		}
		cout << "Going to " << command << "!"<<endl;

	}
	return 0;
}