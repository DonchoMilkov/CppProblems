// 01.CompareArraysAgain.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
#include<sstream>
using namespace std;

const unsigned maxSize = 200;

bool getArray(int arr[], unsigned& arrSize, istringstream& stream) {

	int i = 0;
	while (i < maxSize && stream >> arr[i])
	{
		i++;
	}
	arrSize = i;

	return true;
}


bool areEqual(int arr[], int arrSize, int arr1[], int arrSize1)
{
	if (arrSize != arrSize1)
		return false;
	for (int i = 0; i < arrSize; i++)
	{
		if (arr[i] != arr1[i])
			return false;
	}

	return true;
}


int main()
{
	string input;

	getline(cin, input);
	istringstream line(input);

	unsigned arrSize;
	int arr[maxSize];

	if (getArray(arr, arrSize, line) == false)
		return -1;

	unsigned arrSize1;
	int arr1[maxSize];

	getline(cin, input);
	istringstream line1(input);

	if (getArray(arr1, arrSize1, line1) == false)
		return -1;

	if (areEqual(arr, arrSize, arr1, arrSize1))
		cout << "equal" << endl;
	else
		cout << "not equal" << endl;

	return 0;
}
