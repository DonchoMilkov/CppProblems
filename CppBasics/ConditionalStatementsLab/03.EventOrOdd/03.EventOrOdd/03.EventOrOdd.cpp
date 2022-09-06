// 03.EventOrOdd.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;

	if (num % 2 == 0)
	{
		cout << "even" << endl;
	}
	else 
	{
		cout << "odd" << endl;
	}

	return 0;
}