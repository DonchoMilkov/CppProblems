// 02.HalfSumElement.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int n,max,sum;
	cin >> n;
	cin >> max;
	sum = max;
	for (int i = 0; i < n-1; i++)
	{
		int temp;
		cin >> temp;
		sum += temp;
		if (temp > max)
		{
			max = temp;
		}
	}

	if (sum - max == max)
	{
		cout << "Yes" << endl;
		cout << "Sum = " << sum << endl;
	}
	else
	{
		cout << "No" << endl;
		cout << "Diff = " << abs(2 * max - sum) << endl;
	}
	return 0;
}
