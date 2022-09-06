// 02.SpecialItems.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

bool isSpecialChar(char sym)
{
	bool isSpecial = false;
	switch (sym)
	{
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u': isSpecial = true;
		break;
	}
	return isSpecial;
}

int main()
{
	string input;

	getline(cin, input);

	ostringstream outputStream;

	char lastChar = input[0];
	outputStream << lastChar;
	for (size_t i = 1; i < input.size(); i++)
	{
		if (input[i] != lastChar || isSpecialChar(input[i]))
		{
			outputStream << input[i];
		}
		lastChar = input[i];
	}

	cout << outputStream.str() << endl;

	return 0;
}
