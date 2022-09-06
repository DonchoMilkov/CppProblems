// 01.MergeTrains.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;


int main()
{
	vector<int> railcarsA;
	vector<int> railcarsB;

	string lineA,lineB;

	getline(cin, lineA);
	getline(cin, lineB);

	istringstream streamA(lineA);
	int num;
	while (streamA >> num)
	{
		railcarsA.push_back(num);
	}

	istringstream streamB(lineB);
	while (streamB >> num)
	{
		railcarsB.push_back(num);
	}

	vector<int> merged;
	vector<int>::iterator itA = railcarsA.begin();
	vector<int>::iterator itB = railcarsB.begin();
	
	ostringstream resultStream;

	while (itA!=railcarsA.end() && itB!=railcarsB.end())
	{
		if (*itA>=*itB)
		{
			merged.push_back(*itA);
			itA++;
			resultStream << "A";
		}
		else
		{
			merged.push_back(*itB);
			itB++;
			resultStream << "B";
		}
	}

	while (itA!=railcarsA.end())
	{
		merged.push_back(*itA);
		itA++;
		resultStream << "A";
	}

	while (itB != railcarsB.end())
	{
		merged.push_back(*itB);
		itB++;
		resultStream << "B";
	}

	string result = resultStream.str();

	for (int i = result.length()-1; i >= 0; i--)
	{
		cout << result[i];
	}
	cout << endl;

	for(int k : merged)
	{
		cout << k << " ";
	}
	cout << endl;

	return 0;
}
