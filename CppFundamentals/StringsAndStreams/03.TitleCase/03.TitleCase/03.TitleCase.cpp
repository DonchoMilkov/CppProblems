// 03.TitleCase.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string input;
	getline(cin, input);
	bool shouldCapitalize = true;
	for (int i = 0; i < input.length(); i++)
	{
		if (input[i] >= 'a' && input[i] <= 'z')
		{
			if (shouldCapitalize)
			{
				shouldCapitalize = false;
				input[i] -= 'a' - 'A';
			}
		}
		else if (input[i] >= 'A' && input[i] <= 'Z')
			shouldCapitalize = false;
		else
			shouldCapitalize = true;
	}
	cout << input << endl;
	return 0;
}
