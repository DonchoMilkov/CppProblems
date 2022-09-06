// 01.OrderTwoNumbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int a, b,temp;
	cin >> a >> b;
	if (a<b)
	{
		temp = a;
		a = b;
		b = temp;
	}

	if (b==0)
	{
		cout << a << endl;
		return 0;
	}
	while (b!=0)
	{
		temp = b;
		b = a % b;
		a = temp;
	}

	cout << a << endl;
	return 0;
}

