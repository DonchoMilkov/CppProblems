// 02.PositionsOf.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <sstream>
#include <climits>
using namespace std;


int readArray(int arr1[][100], int rows)
{
	int j;
	for (size_t i = 0; i < rows; i++)
	{
		j = 0;
		string line;
		int num;
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
	int arr1[100][100];
	cin >> ws;
	readArray(arr1, rows);

	int findNum;
	cin >> findNum;
	bool flag = false;
	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			if (arr1[i][j] == findNum)
			{
				cout << i << " " << j << endl;
				flag = true;
			}
		}
	}

	if (!flag)
		cout << "not found" << endl;
	return 0;
}