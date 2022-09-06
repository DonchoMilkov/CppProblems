// 04.PasswordGuess.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int main()
{
	string pass;
	cin >> pass;

	if (pass == "s3cr3t!P@ssw0rd")
	{
		cout << "Welcome" << endl;

	}
	else
	{
		cout << "Wrong password!" << endl;
	}
	return 0;

}

