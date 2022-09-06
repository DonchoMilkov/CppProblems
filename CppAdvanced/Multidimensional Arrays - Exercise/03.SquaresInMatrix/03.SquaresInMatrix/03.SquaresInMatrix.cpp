// 03.SquaresInMatrix.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <sstream>
#include <climits>
using namespace std;

bool isSquare(char arr[][100], int i, int j)
{
	if (arr[i][j] == arr[i + 1][j] && arr[i][j] == arr[i][j + 1] && arr[i][j] == arr[i + 1][j + 1])
	{
		return true;
	}
	return false;
}

int readArray(char arr1[][100], int rows)
{
	int j;
	for (size_t i = 0; i < rows; i++)
	{
		j = 0;
		string line;
		char num;
		getline(cin, line);
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
	int rows, cols;
	cin >> rows >> cols;
	char arr1[100][100];
	cin >> ws;
	readArray(arr1, rows);

	int counter = 0;
	for (int i = 0; i < rows - 1; i++)
	{
		for (int j = 0; j < cols - 1; j++)
		{
			if (isSquare(arr1, i, j))
			{
				counter++;
			}
		}
	}

	cout << counter << endl;
	return 0;
}