// 02.FamilyTrip.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>

using namespace std;
int main()
{
	double budget, dayPrice;
	int daysCount, percentage;

	cin >> budget >> daysCount >> dayPrice >> percentage;

	double spent;
	if (daysCount > 7)
	{
		dayPrice *= 0.95;
	}

	budget = budget * (100 - percentage) * 0.01;

	spent = daysCount * dayPrice;
	double result = budget - spent;
	cout.setf(ios::fixed);
	cout.precision(2);
	if (result < 0)
	{
		cout << abs(result) << " leva needed." << endl;
	}
	else
	{
		cout << "Ivanovi will be left with " << result << " leva after vacation." << endl;
	}

	return 0;
}
