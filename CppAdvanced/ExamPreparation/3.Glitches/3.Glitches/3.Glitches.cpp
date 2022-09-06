// 3.Glitches.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <map>
using namespace std;

void printMatrix(char m[100][100], size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		for (size_t j = 0; j < size; j++)
			cout << m[i][j];
		cout << endl;
	}
}


int main()
{
	int size;
	cin >> size;

	char matrix[100][100];

	map<char, pair<int, int>> top;
	map<char, pair<int, int>> bottom;
	map<char, pair<int, int>> left;
	map<char, pair<int, int>> right;

	for (size_t i = 0; i < size; i++)
	{
		string line;
		cin >> line;
		for (size_t j = 0; j < size; j++)
		{
			char sym = line[j];
			pair<int, int> coords;
			coords.first = i;
			coords.second = j;

			if (line[j] != '.')
				if (top.find(line[j]) == top.end())
				{
					top[sym] = coords;
					bottom[sym] = coords;
					left[sym] = coords;
					right[sym] = coords;
				}
				else
				{
					if (top[sym].first > i)
						top[sym] = coords;
					if (bottom[sym].first < i)
						bottom[sym] = coords;
					if (left[sym].second > j)
						left[sym] = coords;
					if (right[sym].second < j)
						right[sym] = coords;
				}
			matrix[i][j] = '.';
		}
	}

	for (map<char,pair<int,int>>::iterator it = top.begin(); it != top.end(); it++)
	{
		int x, y;
		char key = it->first;
		if (top[key].second > bottom[key].second)
			y = top[key].second;
		else
			y = bottom[key].second;

		if (left[key].first > right[key].first)
			x = left[key].first;
		else
			x = right[key].first;

		matrix[x][y] = key;
	}

	printMatrix(matrix, size);

	return 0;
}
