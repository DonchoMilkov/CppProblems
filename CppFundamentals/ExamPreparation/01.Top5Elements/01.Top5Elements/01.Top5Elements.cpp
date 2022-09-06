// 01.Top5Elements.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int arr[50];
	int temp;
	int avg;
	int sum = 0;

	for (size_t i = 0; i < n; i++)
	{
		cin >> arr[i];
		sum += arr[i];
	}
	bool found = false;
	avg = sum / n;
	for (size_t i = 0; i < n; i++)
	{
		if (i==5)
			break;
		for (size_t j = i+1; j < n; j++)
		{
			if (arr[j]>arr[i])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
		if (arr[i] > avg)
		{
			cout << arr[i] << " ";
			found = true;
		}
	}
	if (!found)
	{
		cout << "No" << endl;
	}

	return 0;
}
