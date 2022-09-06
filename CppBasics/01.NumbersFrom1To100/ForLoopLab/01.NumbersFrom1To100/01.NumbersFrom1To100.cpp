// 01.NumbersFrom1To100.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int n, temp,
		sum1 = 0,
		sum2 = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		sum1 += temp;
	}
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		sum2 += temp;
	}

	if (sum1 == sum2)
	{
		cout << "Yes, sum = " << sum1 << endl;
	}
	else {
		cout << "No, diff = " << abs(sum1 - sum2) << endl;
	}
	return 0;
}