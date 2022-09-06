// 2.Ranges.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
	int from, to, searchNum;
	string input;
	map<int, int> ranges;
	while (true)
	{
		cin >> input;
		if (input == ".")
			break;

		from = stoi(input);
		cin >> to;
		ranges[from] = to;
	}

	while (true)
	{
		cin >> input;
		if (input == ".")
			break;

		searchNum = stoi(input);

		map<int, int>::iterator it = ranges.lower_bound(searchNum);

		if ((*it).first == searchNum)
		{
			cout << "in" << endl;
			continue;
		}
		if (it == ranges.begin())
		{
			cout << "out" << endl;
			continue;
		}
		it--;
		if (searchNum <= (*it).second)
			cout << "in" << endl;
		else
			cout << "out" << endl;

	}
	return 0;
}
