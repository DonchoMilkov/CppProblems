// 03.NewHouse.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	string flower;
	int count;
	double budget;

	cin >> flower >> count >> budget;

	double price = 0.0, factor = 1.0;

	if (flower == "Roses")
	{
		price = 5.0;
		if (count > 80) factor = 0.9;
	}
	else if (flower == "Dahlias")
	{
		price = 3.8;
		if (count > 90) factor = 0.85;
	}
	else if (flower == "Tulips")
	{
		price = 2.8;
		if (count > 80) factor = 0.85;
	}
	else if (flower == "Narcissus")
	{
		price = 3.0;
		if (count < 120) factor = 1.15;
	}
	else
	{
		price = 2.5;
		if (count < 80) factor = 1.2;
	}

	double finalPrice = price * count * factor;
	double result = budget - finalPrice;
	cout.setf(ios::fixed);
	cout.precision(2);
	if (result<0)
	{
		cout << "Not enough money, you need " << abs(result) << " leva more." << endl;
	}
	else
	{
		cout << "Hey, you have a great garden with " << count << " " << flower << " and " << result << " leva left." << endl;
	}
	return 0;
}