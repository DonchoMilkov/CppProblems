// ProjectsCreation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	string name;
	cin >> name;

	int count;
	cin >> count;

	cout << "The architect " << name << " will need " << count * 3 << " hours to complete " << count << " project/s." << endl;
	return 0;
}

