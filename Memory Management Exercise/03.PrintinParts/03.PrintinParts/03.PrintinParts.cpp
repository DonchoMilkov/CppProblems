// 03.PrintinParts.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{

	int rows, cols;
	cin >> rows >> cols;

	int* arr;

	arr = new int[rows * cols];

	for (int i = 0; i < rows*cols; i++)
	{
		cin >> arr[i];
	}


	int displayRows, displayCols;
	cin >> displayRows >> displayCols;


	for (int i = 0; i < displayRows; i++)
	{
		for (int j = 0; j < displayCols; j++)
		{
			cout << arr[i * cols + j]<<" ";
		}
		cout << endl;
	}

	delete[] arr;
	return 0;
}
