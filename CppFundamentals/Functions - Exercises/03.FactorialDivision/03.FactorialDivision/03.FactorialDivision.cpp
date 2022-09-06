// 03.FactorialDivision.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
using namespace std;

long factorial(int num)
{
	long result = 1;
	for (int i = 1; i <= num; i++)
	{
		result *= i;
	}
	return result;
}

int main()
{
	int a, b;
	cin >> a >> b;

	long factA, factB;

	factA = factorial(a);
	factB = factorial(b);
	cout << fixed;
	cout.precision(2);

	cout << factA * 1.0 / factB << endl;
	return 0;
}
