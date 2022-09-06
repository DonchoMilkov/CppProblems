// 04.SumOfTwoNumbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int firstNum, lastNum, magicNum ;
	cin >> firstNum >> lastNum >> magicNum;
	int max = lastNum;
	int counter = 0;
	if (magicNum < lastNum) max = magicNum;

	for (int i = firstNum; i <= lastNum; i++)
	{
		for (int j = firstNum; j <= lastNum; j++)
		{
			counter++;
			if (i+j == magicNum)
			{
				cout << "Combination N:" << counter <<" ("<<i<<" + "<<j<<" = "<<magicNum<<")" << endl;
				return 0;
			}
		}
	}
	cout << counter << " combinations - neither equals " << magicNum << endl;

	return 0;
}
