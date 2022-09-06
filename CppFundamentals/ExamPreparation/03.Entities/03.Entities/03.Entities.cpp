// 03.Entities.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int main()
{
	vector<vector<string>> table;
	string headerLine;
	getline(cin, headerLine);
	istringstream headerStream(headerLine);
	string fieldHeader;
	while (headerStream>>fieldHeader)
	{
		vector<string> column = { fieldHeader };
		table.push_back(column);
	}
	bool flag = false;
	while (true)
	{
		string line;
		getline(cin, line);
		istringstream lineStream(line);
		string val;
		vector<vector<string>>::iterator colIt = table.begin();

		while (lineStream >> val && colIt!=table.end())
		{
			if (val == "end")
			{
				flag = true;
				break;
			}
			colIt->push_back(val);
			colIt++;
		}
		if (flag)
			break;
	}

	string searchField;
	cin >> searchField;
	int index;

	for (size_t i = 0; i < table.size(); i++)
	{
		if (table[i][0] == searchField)
		{
			index = i;
			break;
		}

	}
	string mostCommonVal = table[index][1];
	int counter=1;
	int maxCounter = 1;
	for (size_t i = 0; i < table[index].size(); i++)
	{
		counter = 1;
		for (size_t j = i+1; j < table[index].size(); j++)
		{
			if (table[index][i]==table[index][j])
			{
				counter++;
			}
		}
		if (counter>maxCounter)
		{
			maxCounter = counter;
			mostCommonVal = table[index][i];
		}
	}

	cout << mostCommonVal << " " << maxCounter << endl;


	/*vector<vector<string>> table;
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
		table.push_back(row);
	}

	string searchField;
	cin >> searchField;*/

	return 0;
}
