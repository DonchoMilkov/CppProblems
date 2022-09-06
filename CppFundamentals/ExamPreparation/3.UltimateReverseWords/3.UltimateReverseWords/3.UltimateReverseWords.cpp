// 3.UltimateReverseWords.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

int main()
{
	vector<vector<string>> text;
	bool isEnd = false;

	while (true)
	{
		string line;
		getline(cin, line);
		istringstream lineStream(line);
		vector<string> row;
		string val;
		while (lineStream >> val)
		{
			if (val == "end")
			{
				isEnd = true;
				break;
			}
			row.push_back(val);
		}
		if (isEnd)
			break;
		text.push_back(row);
	}

	for (size_t i = 0; i < text.size(); i++)
	{
		for (size_t j = 0; j < text[i].size(); j++)
		{
			int wordLenght = text[i][j].size();
			bool isFound = false;
			for (size_t bi = text.size() - 1; bi >= i; bi--)
			{
				for (size_t bj = text[bi].size() - 1; bj >= 0; bj--)
				{
					if (bi == i && bj <= j)
						break;
					if (text[bi][bj].size() == wordLenght)
					{
						string temp = text[i][j];
						text[i][j] = text[bi][bj];
						text[bi][bj] = temp;
						isFound = true;
						break;
					}
				}
				if (isFound)
					break;
			}
		}
	}


	for (size_t i = 0; i < text.size(); i++)
	{
		for (size_t j = 0; j < text[i].size(); j++)
		{
			cout << text[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}

