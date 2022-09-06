// 01.NumberPyramid.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int num;
	cin >> num;
	int counter = 1;
	int n = 1;
	int rowLength = counter;

	while (n<=num)
	{
		cout << n;
		n++;
		if (rowLength == counter)
		{
			cout << endl;
			rowLength++;
			counter = 1;
		}
		else
		{
			cout << " ";
			counter++;
		}
	}
	return 0;
}
