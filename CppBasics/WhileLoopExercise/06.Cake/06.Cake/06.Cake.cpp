// 06.Cake.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
int main()
{
	int width, length;

	cin >> width >> length;
	int area = width * length;
	int count;
	string command;
	while (area > 0)
	{
		getline(cin >> ws, command);
		if (command == "STOP")
		{
			cout << area << " pieces are left." << endl;
			return 0;
		}
		count = stoi(command);
		area -= count;
	}

	cout << "No more cake left! You need " <<abs(area)<< " pieces more." << endl;
	return 0;
}
