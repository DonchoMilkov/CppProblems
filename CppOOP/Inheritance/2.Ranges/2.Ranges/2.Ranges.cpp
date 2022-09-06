// 2.Ranges.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <sstream>
#include <map>

using namespace std;

int main()
{
	string line;
	map<int, int> fromToDict;
	while (true)
	{
		int from, to;
		getline(cin, line);
		if (line == ".")
			break;
		istringstream input(line);
		input >> from >> to;
		fromToDict[from] = to;
	}

	string searchNum;
	while (true)
	{
		cin >> searchNum;
		if (searchNum == ".") break;

		int num = stoi(searchNum);

		map<int, int>::iterator upperBound = fromToDict.upper_bound(num);

		if (upperBound == fromToDict.begin()) {
			cout << "out" << endl;
			continue;
		}
		upperBound--;
		if (upperBound->second >= num) {
			cout << "in" << endl;
		}
		else {
			cout << "out" << endl;
		}
	}





}