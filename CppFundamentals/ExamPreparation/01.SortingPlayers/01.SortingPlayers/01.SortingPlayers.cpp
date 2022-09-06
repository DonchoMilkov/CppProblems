// 01.SortingPlayers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<string> names;
	vector<int> result;
	string name;
	int wins, loses;
	while (true)
	{
		cin >> name;
		if (name == "End")
			break;

		cin >> wins >> loses;

		names.push_back(name);
		result.push_back(wins - loses);
	}

	for (size_t i = 0; i < names.size(); i++)
	{
		for (size_t j = i + 1; j < names.size(); j++)
		{
			if (names[j] < names[i])
			{
				string temp = names[i];
				names[i] = names[j];
				names[j] = temp;
				int tempRes = result[i];
				result[i] = result[j];
				result[j] = tempRes;
			}
		}
	}
	int i = 0;
	while (i < names.size())
	{
		cout << names[i];
		int j = i + 1;
		while (j < names.size())
		{
			if (names[i] != names[j])
			{
				cout << " " << result[i] << endl;
				i = j - 1;
				break;
			}
			else
			{
				result[i] += result[j];
			}
			j++;
		}
		if (j >= names.size())
			break;
		i++;
	}
	cout << " " << result[i] << endl;


	return 0;
}
