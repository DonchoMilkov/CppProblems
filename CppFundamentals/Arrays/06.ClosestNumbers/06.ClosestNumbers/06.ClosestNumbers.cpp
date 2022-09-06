// 06.ClosestNumbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

const unsigned maxSize = 200;

bool getArray(int arr[], unsigned& arrSize) {

	cin >> arrSize;

	if (arrSize > maxSize)
		return false;

	for (int i = 0; i < arrSize; i++)
		cin >> arr[i];

	return true;
}
int main()
{
	unsigned arrSize;
	int arr[maxSize];

	if (getArray(arr, arrSize) == false)
		return -1;

	if (arrSize < 2)
		return -1;

	int minDiff = abs(arr[0] - arr[1]);
	int currendDiff;

	for (int i = 0; i < arrSize; i++)
	{
		for (int j = i + 1; j < arrSize; j++)
		{
			currendDiff = abs(arr[i] - arr[j]);
			if (currendDiff < minDiff)
				minDiff = currendDiff;
		}
	}
	cout << minDiff << endl;
	return 0;
}
