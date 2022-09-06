// 02.LongestSequence.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int arr1[200];
	int currentStartIndex = 0;
	int startIndex = 0;
	int maxSequenceLenght = 1;
	int currentSequenceLength = 1;

	for (int i = 0; i < n; i++)
	{
		cin >> arr1[i];
	}

	for (int i = 1; i < n; i++)
	{
		if (arr1[i] == arr1[i - 1])
		{
			currentSequenceLength++;
		}
		else
		{
			if (currentSequenceLength >= maxSequenceLenght)
			{
				startIndex = currentStartIndex;
				maxSequenceLenght = currentSequenceLength;
				currentSequenceLength = 1;
			}
			currentStartIndex = i;
		}
	}


	if (maxSequenceLenght == 1)
		cout << arr1[n - 1] << endl;
	else
	{
		if (currentSequenceLength > maxSequenceLenght)
			maxSequenceLenght = currentSequenceLength;

			for (int i = 0; i < maxSequenceLenght; i++)
			{
				cout << arr1[startIndex] << " ";
			}
	}

	return 0;

}
