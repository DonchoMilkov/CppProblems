// 07.Moving.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int width, height, length;

	cin >> width >> length >> height;
	string command;
	int freeSpace = width * length * height;
	int count;
	while (freeSpace > 0)
	{
		getline(cin >> ws, command);
		if (command=="Done")
		{
			cout << freeSpace << " Cubic meters left." << endl;
			return 0;
		}
		count = stoi(command);

		freeSpace -= count;
	}

	cout << "No more free space! You need " << abs(freeSpace) << " Cubic meters more." << endl;
	return 0;
}
