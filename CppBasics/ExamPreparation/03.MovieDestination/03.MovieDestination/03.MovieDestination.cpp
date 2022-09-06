// 03.MovieDestination.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	double budget;
	string dest,season;
	int daysCount;
	int dayPrice;
	cin >> budget >> dest >> season >> daysCount;


	if (season == "Winter")
	{
		if (dest=="Dubai")
		{
			dayPrice = 45000.00;
		}
		else if (dest=="Sofia")
		{
			dayPrice = 17000.00;

		}
		else if (dest == "London")
		{
			dayPrice = 24000.00;

		}
	}
	else if (season == "Summer")
	{
		if (dest == "Dubai")
		{
			dayPrice = 40000.00;

		}
		else if (dest == "Sofia")
		{
			dayPrice = 12500.00;

		}
		else if (dest == "London")
		{
			dayPrice = 20250.00;
		}
	}

	double price = dayPrice * daysCount;

	if (dest=="Dubai")
	{
		price *= 0.7;
	}
	else if (dest == "Sofia")
	{
		price *= 1.25;
	}

	double result = budget*1.0 - price;
	cout.setf(ios::fixed);
	cout.precision(2);
	if (result<0)
	{
		cout << "The director needs " << abs(result) << " leva more!" << endl;
	}
	else
	{
		cout << "The budget for the movie is enough! We have " << result << " leva left!" << endl;
	}
	return 0;
}
