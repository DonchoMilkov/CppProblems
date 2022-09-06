// 04.CleverLily.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int age, toyPrice;
	double washingMachinePrice;
	double budget =0.0;
	cin >> age >> washingMachinePrice >> toyPrice;

	for (int i = 1; i <= age; i++)
	{
		if (i%2==1)
		{
			budget += toyPrice;
		}
		else
		{
			budget += i * 5.0 - 1.0;
		}
	}

	double result = budget - washingMachinePrice;
	cout.setf(ios::fixed);
	cout.precision(2);
	if (result >= 0)
	{
		cout << "Yes! " << result << endl;
	}
	else
	{
		cout << "No! " << abs(result) << endl;
	}
	return 0;
}
