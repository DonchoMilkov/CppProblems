// 01.CompareMatrices.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

bool compareArrays(int arr1[][10], int arr2[][10], int rows, int cols)
{
	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			if (arr1[i][j] != arr2[i][j])
				return false;
		}
	}
	return true;
}

int readArray(int arr1[][10], int rows)
{
	int j;
	for (size_t i = 0; i < rows; i++)
	{
		j = 0;
		string line;
		int num;
		getline(cin,line);
		istringstream rowStream(line);
		while (rowStream >> num)
		{
			arr1[i][j] = num;
			j++;
		}
	}
	return j;
}

int main()
{
	int rows1,rows2;
	cin >> rows1;
	int arr1[10][10], arr2[10][10];
	cin >> ws;
	int cols1 = readArray(arr1, rows1);
	cin >> rows2;
	cin >> ws;
	int cols2 = readArray(arr2, rows2);

	if (rows1 != rows2 || cols1 != cols2)
	{
		cout << "not equal"<< endl;
		return 0;
	}

	bool isEqual = compareArrays(arr1, arr2, rows1, cols1);

	if (isEqual)
		cout << "equal" << endl;
	else
		cout << "not equal"<< endl;
	return 0;
}