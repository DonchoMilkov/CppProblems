// 2.Rust.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void printMatrix(char m[10][10])
{
	for (size_t i = 0; i < 10; i++)
	{
		for (size_t j = 0; j < 10; j++)
			cout << m[i][j];
		cout << endl;
	}
}

void rustifyPlate(char m[10][10])
{
	bool visited[10][10] = { 0 };

	for (size_t i = 0; i < 10; i++)
	{
		for (size_t j = 0; j < 10; j++)
		{
			if (m[i][j] == '.' || m[i][j] == '#' || visited[i][j])
				continue;

			if (i < 9 && m[i + 1][j] == '.') {
				m[i + 1][j] = '!';
				visited[i + 1][j] = true;
			}

			if (i > 0 && m[i - 1][j] == '.') {
				m[i - 1][j] = '!';
				visited[i - 1][j] = true;
			}

			if (j < 9 && m[i][j + 1] == '.')
			{
				m[i][j + 1] = '!';
				visited[i][j + 1] = true;
			}

			if (j > 0 && m[i][j - 1] == '.')
			{
				m[i][j - 1] = '!';
				visited[i][j - 1] = true;
			}
		}
	}

}

int main()
{
	char matrix[10][10];

	for (size_t i = 0; i < 10; i++)
	{
		string line;
		cin >> line;
		for (size_t j = 0; j < 10; j++)
		{
			matrix[i][j] = line[j];
		}
	}

	int days;
	cin >> days;

	for (size_t i = 0; i < days; i++)
	{
		rustifyPlate(matrix);
	}

	printMatrix(matrix);

	return 0;
}
