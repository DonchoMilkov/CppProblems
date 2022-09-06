// 06.MathPower.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
using namespace std;
long Power(int a, int b)
{
	if (b == 0 || a == 1)
	{
		return 1;
	}
	if (a == 0)
	{
		return 0;
	}

	long result = 1;
	for (int i = 0; i < b; i++)
	{
		result *= a;
	}
	return result;
}
int main()
{
	int a, b;
	cin >> a >> b;
	cout << Power(a, b) << endl;
	return 0;
}
