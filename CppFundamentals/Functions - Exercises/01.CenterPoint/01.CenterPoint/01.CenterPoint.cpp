// 01.CenterPoint.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void GetCloserPointCoords(double x1, double y1, double x2, double y2)
{
	long distance1 = x1*x1 + y1*y1;
	long distance2 = x2*x2 + y2*y2;
	if (distance1 <= distance2)
	{
		cout << "(" << x1 << ", " << y1 <<")"<< endl;
	}
	else
	{
		cout << "(" << x2 << ", " << y2 <<")" << endl;
	}
	return;
}


int main()
{
	double x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	GetCloserPointCoords(x1, y1, x2, y2);
	return 0;
}
