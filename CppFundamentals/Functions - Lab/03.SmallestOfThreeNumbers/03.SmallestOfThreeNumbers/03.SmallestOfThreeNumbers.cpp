// 03.SmallestOfThreeNumbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
using namespace std;
int GetMinInt(int n1, int n2, int n3) {
	int min = n1;
	if (n2 < min)
		min = n2;
	if (n3 < min)
		min = n3;
	return min;
}


int main()
{
	int num1, num2, num3;
	cin >> num1 >> num2 >> num3;
	cout << GetMinInt(num1, num2, num3) << endl;
	return 0;
}
