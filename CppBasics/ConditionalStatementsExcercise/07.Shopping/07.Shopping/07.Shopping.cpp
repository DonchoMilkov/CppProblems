// 07.Shopping.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	double budget;
	int graphicsCardCount, CPUsCount, RAMsCount;
	cin >> budget >> graphicsCardCount >> CPUsCount >> RAMsCount;

	double price = graphicsCardCount * 250.0;

	price = price + (price * 0.35)*CPUsCount + (price*0.10)*RAMsCount ;

	if (graphicsCardCount > CPUsCount)
	{
		price = price * 0.85;
	}

	double result = budget - price;
	cout.setf(ios::fixed);
	cout.precision(2);
	if (result>=0)
	{
		cout << "You have " << result << " leva left!" << endl;
	}
	else
	{
		cout << "Not enough money! You need " << abs(result) << " leva more!" << endl;
	}

	return 0;
}
