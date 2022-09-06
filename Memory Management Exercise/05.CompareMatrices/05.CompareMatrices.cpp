// 05.CompareMatrices.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <sstream>
using namespace std;
void readMatrix(int**& arr, int& rows, int& cols)
{
	for (size_t i = 0; i < rows; i++)
	{
		arr[i] = new int[10];
		string line;
		getline(cin >> ws, line);
		istringstream lineStream(line);
		int num;
		cols = 0;
		while (lineStream >> num)
		{
			arr[i][cols] = num;
			cols++;
		}
	}
	return;
}

bool compareArrays(int** arr1, size_t rows1, size_t cols1, int** arr2, size_t rows2, size_t cols2)
{
	if (rows1 != rows2 || cols1 != cols2)
		return false;

	for (size_t i = 0; i < rows1; i++)
		for (size_t j = 0; j < cols1; j++)
			if (arr1[i][j] != arr2[i][j])
				return false;

	return true;
}

void disposeMatrix(int** arr, int rows)
{
	for (size_t i = 0; i < rows; i++)
		delete[] arr[i];
	delete[] arr;
}

int main()
{
	int rows1, rows2, cols1, cols2;
	cin >> rows1;

	int** matrix1  = new int* [rows1];

	readMatrix(matrix1, rows1, cols1);

	cin >> rows2;

	int** matrix2 = new int* [rows2];

	readMatrix(matrix2, rows2, cols2);

	bool areEqual = compareArrays(matrix1, rows1, cols1, matrix2, rows2, cols2);

	if (areEqual)
		cout << "equal" << endl;
	else
		cout << "not equal" << endl;


	disposeMatrix(matrix1, rows1);
	disposeMatrix(matrix2, rows2);
	return 0;
}
 