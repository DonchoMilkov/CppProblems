// 04.ReplaceAll.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <sstream>

using namespace std;
int main()
{

	string input;
	getline(cin, input);

	string findString;
	getline(cin, findString);

	string replaceString;
	getline(cin, replaceString);


	ostringstream resultStream;
	int start = 0;
	int index = start;
	while (true)
	{
		start = index;
		index = input.find(findString,index);
		if (index == string::npos)
		{
			break;
		}

		string beforeFindString = input.substr(start, index-start);
		resultStream << beforeFindString;
		resultStream << replaceString;
		start = index;
		index += findString.length();
	}

	resultStream << input.substr(start);
	cout << resultStream.str() << endl;

	return 0;

}
