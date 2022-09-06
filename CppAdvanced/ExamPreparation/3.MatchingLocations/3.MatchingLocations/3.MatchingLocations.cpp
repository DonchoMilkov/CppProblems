// 3.MatchingLocations.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

void readEntry(string input, string& name, double& x, double& y)
{
	size_t idx = input.find(',');
	name = input.substr(0, idx);
	input = input.substr(idx + 1, input.length());

	idx = input.find(',');
	x = stod(input.substr(0, idx));
	input = input.substr(idx + 1, input.length());

	y = stod(input);
}

int main()
{
	string name, input;
	double x, y;

	map<string, string> entries;
	map<string, vector<string>> entriesByCoords;

	while (true)
	{
		getline(cin, input);
		cin >> ws;
		if (input == ".")
			break;

		readEntry(input, name, x, y);

		entries[name] = input;

		string key = to_string(x) + ";" + to_string(y);
		entriesByCoords[key].push_back(input);
	};

	while (true)
	{
		cin >> input;
		if (input == ".")
			break;

		if (!isdigit(input[0]))
		{
			if (entries.find(input) != entries.end())
				cout << entries[input] << endl;
		}
		else
		{
			double x = stod(input);
			double y;
			cin >> y;
			string key = to_string(x) + ";" + to_string(y);
			if (entriesByCoords.find(key) != entriesByCoords.end())
				for (string entry: entriesByCoords[key])
					cout << entry << endl;
		}
	};

	return 0;
}
