// 05.InvalidInput.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

bool isNumber(string input)
{
	bool isNumber = true;

	if (!isdigit(input[0]) && input[0] != '-')
	{
		return false;
	}

	for (int i = 1; i < input.length(); i++)
	{
		if (!isdigit(input[i]))
		{
			isNumber = false;
			break;
		}
	}

	return isNumber;
}

int main()
{
	string input;
	getline(cin, input);
	int sum = 0;
	string current;
	ostringstream noiseStream;

	istringstream iss(input);
	while (iss >> current)
	{
		if (isNumber(current))
		{
			sum += stoi(current);
		}
		else
		{
			noiseStream << current<<" ";
		}
	}

	cout << sum << endl;
	cout << noiseStream.str() << endl;

	return 0;
}

