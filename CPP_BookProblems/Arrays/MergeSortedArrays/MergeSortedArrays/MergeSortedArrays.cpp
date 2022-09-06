// MergeSortedArrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	const int sizeA = 8;
	const int sizeB = 11;
	const int sizeResult = sizeA + sizeB;
	int a[sizeA] = { 1,2,4,5,5,7 ,8,9 };
	int b[sizeB] = { 2,3,3,6,6,8,9,10,11,14,15 };
	int result[sizeResult];

	int pointerA = 0;
	int pointerB = 0;
	int pointerResult = 0;

	while (pointerA < sizeA && pointerB < sizeB)
	{
		if (a[pointerA] < b[pointerB])
		{
			result[pointerResult] = a[pointerA];
			pointerA++;
		}
		else {
			result[pointerResult] = b[pointerB];
			pointerB++;
		}
		pointerResult++;
	}

	if (pointerA < sizeA)
	{
		for (int i = pointerB; i < sizeB; i++)
		{
			result[pointerResult] = b[i];
			pointerResult++;
		}
	}

	if (pointerB < sizeB)
	{
		for (int i = pointerB; i < sizeB; i++)
		{
			result[pointerResult] = b[i];
			pointerResult++;
		}
	}

	for (int i = 0; i < sizeResult; i++)
	{
		cout << result[i] << " ";
	}
	cout << endl;

	return 0;
}
