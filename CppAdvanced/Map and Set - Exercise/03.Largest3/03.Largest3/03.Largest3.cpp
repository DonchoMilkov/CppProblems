// 03.Largest3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <set>
#include <sstream>
using namespace std;

int main()
{
	string input;
	getline(cin, input);

	istringstream inputStream(input);
	set<double, greater<double>> numSet;
	double num;
	while (inputStream>>num)
	{
		numSet.insert(num);
	}
	
	set<double>::iterator it = numSet.begin();
	for (size_t i = 0; i < 3; i++)
	{
		cout << *it << " ";
		it++;

		if (it == numSet.end())
			break;
	}
	return 0;

}
