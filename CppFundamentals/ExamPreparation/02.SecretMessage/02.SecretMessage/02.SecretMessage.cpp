// 02.SecretMessage.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
int main()
{
	string input;
	getline(cin, input);
	int sum = 0;

	for (char sym : input)
	{
		if (isdigit(sym))
		{
			sum += sym - '0';
		}
	}

	if ((sum >= 'a' && sum <= 'z') ||
		(sum >= 'A' && sum <= 'Z'))
	{
		cout << (char)sum << endl;
	}
	else
		cout << sum << endl;
	return 0;
}
