// 05.SpeciaNumbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int number;
	cin >> number;
	int symbol,num;
	bool flag = true;
	for (int i = 1111; i <= 9999; i++)
	{
		flag = true;
		num = i;
		for (int j = 0; j < 4; j++)
		{
			symbol = num % 10;
			if (symbol ==0 || number % symbol != 0)
			{
				flag = false;
				break;
			}
			num /= 10;
		}
		if (flag)
		{
			cout << i << " ";
		}
	}
	return 0;
}
