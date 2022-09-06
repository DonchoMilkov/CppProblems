// 03.SumNumbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int num;
	cin >> num;
	int sum;
	cin >> sum;
	if (sum >= num)
	{
		cout << sum << endl;
		return 0;
	}
	int temp;
	while (sum < num)
	{
		cin >> temp;
		sum += temp;
	}

	cout << sum << endl;
	return 0;
}