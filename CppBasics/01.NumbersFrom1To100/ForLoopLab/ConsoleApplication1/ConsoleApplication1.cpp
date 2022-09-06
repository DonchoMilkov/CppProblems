// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int n, temp, sumOdd = 0, sumEven = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		if (i%2==0)
		{
			sumOdd += temp;
		}
		else
		{
			sumEven += temp;
		}
	}
	if (sumOdd==sumEven)
	{
		cout << "Yes" << endl;
		cout << "Sum = " << sumOdd << endl;
	}
	else {
		cout << "No" << endl;
		cout << "Diff = " << abs(sumOdd - sumEven) << endl;
	}

	return 0;
}

