// 04.Sequence2k1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;
	int temp = 1;
	while (temp<=num)
	{	
		cout << temp<< endl;
		temp = temp * 2 + 1;
	}

	return 0;

}
