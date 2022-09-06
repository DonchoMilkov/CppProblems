// 06.Minesweeper.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void readMatrix(char*& matrix, size_t sizeM)
{
	for (size_t i = 0; i < sizeM; i++)
	{
		cin >> matrix[i];
	}
}

void transformCell(char*& matrix, int rows, int cols, int index, char * matrix2)
{
	int counter = 0;
	int rowIndex = index / cols;
	int colIndex = index % cols;

	if (matrix[index] == '!')
		counter++;

	//current row
	if (colIndex > 0 && matrix[index - 1] == '!')
		counter++;
	if (colIndex < cols-1 && matrix[index + 1] == '!')
		counter++;

	//row above
	if (rowIndex > 0)
	{
		if (colIndex > 0 && matrix[index - cols - 1] == '!')
			counter++;
		if (matrix[index - cols] == '!')
			counter++;
		if (colIndex < cols-1 && matrix[index - cols + 1] == '!')
			counter++;
	}

	//row below
	if (rowIndex < rows-1)
	{
		if (colIndex > 0 && matrix[index + cols - 1] == '!')
			counter++;
		if (matrix[index + cols] == '!')
			counter++;
		if (colIndex < cols-1 && matrix[index + cols + 1] == '!')
			counter++;
	}

	char mines = counter;
	matrix2[index] = '0' + mines;
}

void printMatrix(char* const& matrix, size_t rows, size_t cols)
{
	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
			cout << matrix[i * cols + j];
		cout << endl;
	}
}


int main()
{
	int n, m;
	cin >> m >> n;

	size_t mSize = m * n;

	char* matrix = new char[mSize];
	char* matrixResult = new char[mSize];

	readMatrix(matrix, mSize);

	for (size_t i = 0; i < mSize; i++)
	{
		transformCell(matrix, m, n, i, matrixResult);
	}

	printMatrix(matrixResult, m, n);

	return 0;
}
/*
5 5
.....
...!.
.....
.....
.....

*/
