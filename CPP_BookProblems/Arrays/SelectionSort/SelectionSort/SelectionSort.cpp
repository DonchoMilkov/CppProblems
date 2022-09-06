// SelectionSort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int a[100];
	int n;
	cin >> n;
	if (!cin || n < 1 || n>100)
	{
		cout << "Error! Bad Input!" << endl;
		return 0;
	}

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	int min,minIndex,temp;
	for (int i = 0; i < n; i++)
	{
		min = a[i];
		minIndex = i;
		for (int j = i + 1; j < n; j++)
		{
			if (a[j]<min)
			{
				min = a[j];
				minIndex = j;
			}
		}
		if (a[i]!=min)
		{
			temp = a[i];
			a[i] = a[minIndex];
			a[minIndex] = temp;
		}
	}

	cout << "Sorted:" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << endl;
	}
	
	/*for (const auto &i  : a)
	{
		cout << i << endl;
	}*/


	return 0;
}
