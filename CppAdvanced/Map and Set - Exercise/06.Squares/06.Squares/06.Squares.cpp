// 06.Squares.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <sstream>
#include <set>
#include<vector>
#include<algorithm>
#include <math.h>
using namespace std;
int main()
{
	string input;
	getline(cin, input);
	istringstream numbers(input);
	//set<int, greater<int>> sortedNums;
	vector<int> sortedNums;
	double num;
	while (numbers >> num)
	{
		double root = sqrt(num);
		if (root == (int)root)
		{
			sortedNums.push_back(num);
		}
	}
	
	sort(sortedNums.begin(), sortedNums.end(),greater<int>());
	ostringstream output;

	for (vector<int>::iterator it = sortedNums.begin(); it != sortedNums.end(); it++)
	{
		output << *it << " ";
	}


	string result = output.str();

	cout << result << endl;
	return 0;
}
