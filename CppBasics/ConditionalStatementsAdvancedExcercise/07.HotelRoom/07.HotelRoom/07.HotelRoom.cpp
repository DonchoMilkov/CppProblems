// 07.HotelRoom.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	string month;
	int days;
	cin >> month >> days;

	double studio = 0.0,
		appartment = 0.0;

	double studioFactor = 1.0,
		appFactor = 1.0;

	if (month == "May" || month == "October")
	{
		studio = 50.0;
		appartment = 65.0;
		if (days > 14)
		{
			studioFactor = 0.7;
		}
		else if (days > 7)
		{
			studioFactor = 0.95;
		}
	}
	else if (month == "June" || month == "September")
	{
		studio = 75.2;
		appartment = 68.7;
		if (days > 14)
		{
			studioFactor = 0.8;
		}
	}
	else if (month == "July" || month == "August")
	{
		studio = 76.0;
		appartment = 77.0;
	}

	if (days>14)
	{
		appFactor = 0.9;
	}
	cout.setf(ios::fixed);
	cout.precision(2);

	cout << "Apartment: " << days*appartment * appFactor << " lv." << endl;
	cout << "Studio: " << days*studio * studioFactor<< " lv." << endl;

	return 0;
}