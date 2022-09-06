// 01.CountRealNumbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <map>
#include <set>
#include <string>
#include <sstream>

using namespace std;
int main()
{
	string input;
	getline(cin, input);

	istringstream inputStream(input);

	double num;
	map<double, int> dict;

	while (inputStream >> num)
	{
		if (dict.find(num) == dict.end())
		{
			dict[num] = 1;
		}
		else
		{
			dict[num]++;
		}
	}

	

	for (map<double, int>::iterator it = dict.begin(); it != dict.end(); it++)
	{
		cout << it->first << " -> " << it->second << endl;
	}
	return 0;
}
