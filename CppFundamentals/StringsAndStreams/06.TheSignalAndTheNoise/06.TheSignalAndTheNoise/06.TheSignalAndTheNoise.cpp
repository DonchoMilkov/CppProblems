// 06.TheSignalAndTheNoise.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int getNumber(string word)
{
	int num = -1;
	ostringstream numStream;

	for (char i : word)
	{
		if (isdigit(i))
		{
			numStream << i;
		}
	}

	string numStr = numStream.str();

	if (!numStr.empty())
	{
		num = stoi(numStr);
	}
	return num;
}

int main()
{
	string input;
	getline(cin, input);
	int max = -1;
	string current = "";
	int temp;

	istringstream iss(input);
	while (iss >> current)
	{
		temp = getNumber(current);
		if (temp > max)
			max = temp;
	}

	cout << max << endl;

	return 0;
}

