// 01.ReadText.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;
int main()
{
    string user;
	cin >> user;
	string pass;
	cin >> pass;
	string passTry;
	while (true)
	{
		cin >> passTry;
		if (passTry == pass)
		{
			cout << "Welcome " << user << "!"<< endl;
			return 0;
		}
	}
    return 0;
}