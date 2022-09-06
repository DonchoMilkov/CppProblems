// 07.AreaOfFigures.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	string figure;
	double a, b,result = 0.0;
	cin >> figure;

	if (figure == "square")
	{
		cin >> a;
		result = a * a;
	}

	else if (figure == "circle")
	{
		cin >> a;
		result = a * a * 3.14159265359;
	}

	else if (figure == "rectangle")
	{
		cin >> a>>b;
		result = a * b * 1.0;
	}
	else if (figure == "triangle")
	{
		cin >> a>>b;
		result = a * b * 0.5;
	}

	cout.setf(ios::fixed);
	cout.precision(3);
	cout << result << endl;

	return 0;
}
