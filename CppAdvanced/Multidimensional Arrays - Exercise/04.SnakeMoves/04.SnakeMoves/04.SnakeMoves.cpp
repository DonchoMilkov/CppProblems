// 04.SnakeMoves.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int rows, cols;
	cin >> rows >> cols;
	string snake;
	cin >> snake;
	int snakePointer = 0;
	int snakeTail = snake.length();

	char arr[12][12];

	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			if (i % 2 == 0)
				arr[i][j] = snake[snakePointer];
			else
				arr[i][cols - j-1] = snake[snakePointer];

			snakePointer++;
			if (snakePointer == snakeTail)
				snakePointer = 0;
		}
	}


	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			cout << arr[i][j];
		}
		cout << endl;
	}

	return 0;
}
