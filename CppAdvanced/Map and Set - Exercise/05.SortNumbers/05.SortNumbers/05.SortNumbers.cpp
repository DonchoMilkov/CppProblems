// 05.SortNumbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <sstream>
#include <set>
using namespace std;
int main()
{
	string input;
	getline(cin, input);
	istringstream numbers(input);
	set<double, less<double>> sortedNums;
	double num;
	while (numbers>>num)
	{
		sortedNums.insert(num);
	}
	ostringstream output;

	for (set<double>::iterator it = sortedNums.begin(); it != sortedNums.end(); it++)
	{
		output << *it << " <= ";
	}


	string result = output.str();
	result.erase(result.length() - 4, string::npos);

	cout << result << endl;
	return 0;
}
