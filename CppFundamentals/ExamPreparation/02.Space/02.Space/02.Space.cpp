// 02.Space.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

int points, row, col;


void readMatrix(char matrix[][5], int n)
{
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			char a;
			cin >> a;
			if (a == 'K')
			{
				row = i;
				col = j;
			}
			matrix[i][j] = a;

		}
	}
}

void printMatrix(char matrix[][5], int n)
{
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n; j++)
		{

			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}

void processCell(char matrix[][5], int n)
{
	char symbol = matrix[row][col];
	if (symbol == 'V' || symbol == 'S' || symbol == 'U' || symbol == 'N')
	{
		points += int(symbol);
	}
	else
	{
		points /= 2;
	}
	matrix[row][col] = 'K';
}

void moveUp(char matrix[][5], int n)
{
	if (row == 0)
	{
		points -= points / 4;
	}
	else
	{
		matrix[row][col] = '-';
		row--;
		processCell(matrix, n);
	}
}
void moveDown(char matrix[][5], int n)
{
	if (row == n - 1)
	{
		points -= points / 4;
	}
	else
	{
		matrix[row][col] = '-';
		row++;
		processCell(matrix, n);
	}
}
void moveRight(char matrix[][5], int n)
{
	if (col == n - 1)
	{
		points -= points / 4;
	}
	else
	{
		matrix[row][col] = '-';
		col++;
		processCell(matrix, n);
	}
}
void moveLeft(char matrix[][5], int n)
{
	if (col == 0)
	{
		points -= points / 4;
	}
	else
	{
		matrix[row][col] = '-';
		col--;
		processCell(matrix, n);
	}
}




int main()
{
	int n;
	cin >> n;
	char matrix[5][5];
	readMatrix(matrix, n);

	cin >> points;

	while (true)
	{
		char move;
		cin >> move;
		if (move == 'S') break;
		switch (move)
		{
		case 'U':
			moveUp(matrix, n);
			break;
		case 'D':
			moveDown(matrix, n);
			break;
		case 'R':
			moveRight(matrix, n);
			break;
		case 'L':
			moveLeft(matrix, n);
			break;
		}
	}

	cout << "Space Dust Collected: " << points << endl;

	printMatrix(matrix, n);

	return 0;
}
