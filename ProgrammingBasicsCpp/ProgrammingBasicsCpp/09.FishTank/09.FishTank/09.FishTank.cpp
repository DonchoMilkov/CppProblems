// 09.FishTank.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int length;
	cin >> length;

	int width;
	cin >> width;

	int height;
	cin >> height;

	double percentage;
	cin >> percentage;

	double volume = 1.0 * length * width * height;
	double volumnLiters = volume / 1000.000;
	double filled = percentage / 100.000;


	cout << volumnLiters*(1-filled) << endl;

	return 0;
}