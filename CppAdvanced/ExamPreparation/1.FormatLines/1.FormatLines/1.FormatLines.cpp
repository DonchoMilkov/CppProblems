// 1.FormatLines.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <sstream>

using namespace std;
int main()
{
	string line;
	ostringstream input;
	while (true)
	{
		getline(cin, line);
		if (line == "###")
			break;
		input << line<<" ";
	}

	int width;
	cin >> ws;
	cin >> width;


	istringstream text(input.str());
	int tempWidth = width;
	string word;
	bool isFirstOnLine = true;
	while (text >> word)
	{
		int wlength = word.length();

		if (isFirstOnLine)
		{
			cout << word;
			tempWidth -= wlength;
			isFirstOnLine = false;
			continue;
		}

		if (wlength <= tempWidth-1)
		{
			cout <<" "<< word;
			tempWidth = tempWidth - wlength-1;
		}
		else
		{
			cout << endl << word;
			tempWidth = width - wlength;
		}
	}
	return 0;
}
