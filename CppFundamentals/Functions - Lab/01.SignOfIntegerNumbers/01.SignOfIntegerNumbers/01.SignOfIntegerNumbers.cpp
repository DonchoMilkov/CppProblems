// 01.SignOfIntegerNumbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void PrintSign(int num) {
	if (num<0)
	{
		cout << "The number " << num << " is negative." << endl;
	}
	else if (num >0)
	{
		cout << "The number " << num << " is positive." << endl;
	}
	else
	{
		cout << "The number " << num << " is zero." << endl;
	}
}

int main()
{
	int n;
	cin >> n;
	PrintSign(n);

	return 0;
}
