// 3.CitiesbyContinentandCountry.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <map>
#include <string>
#include <sstream>
#include <vector>
#include <queue>
using namespace std;

queue<pair<string, queue<pair<string, queue<string>>>>> ordered;


map < string, map<string, vector<string>>> dict;


map<string, int> countryOrder;
map<string, int> cityOrder;

void processEntry(string continent, string country, string city)
{
	if (dict.find(continent) == dict.end())
	{
		dict[continent].insert(pair<string, vector<string>>{ country, { city } });
		continentOrder[]
	}
}

int main()
{
	int n;
	cin >> n;
	cin >> ws;
	string line;

	
	for (size_t i = 0; i < n; i++)
	{
		getline(cin, line);
		istringstream lineStream(line);
		string continent, country, city;
		lineStream >> continent >> country >> city;

		processEntry(continent, country, city);
	}
	return 0;
}
