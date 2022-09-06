// 02.EqualSumsEvenOddPosition.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int firstNum, secondNum;

	cin >> firstNum >> secondNum;

	for (int i = firstNum; i <= secondNum; i++)
	{
		int evenSum = i % 10 + (i / 100) % 10 + (i / 10000) % 10;
		int oddSum = (i / 10) % 10 + (i / 1000) % 10 + (i / 100000) % 10;
		if (evenSum == oddSum)
		{
			cout << i << " ";
		}
	}
	return 0;
}
