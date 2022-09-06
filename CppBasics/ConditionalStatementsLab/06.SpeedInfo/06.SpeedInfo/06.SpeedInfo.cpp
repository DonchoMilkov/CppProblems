// 06.SpeedInfo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	double speed;
	cin >> speed;
	
	if (speed <=10)
	{
		cout << "slow" << endl;
	}
	else if (speed<=50)
	{
		cout << "average" << endl;
	}
	else if (speed <=150)
	{
		cout << "fast" << endl;
	}
	else if (speed <=1000)
	{
		cout << "ultra fast" << endl;
	} 
	else
	{
		cout << "extremely fast" << endl;
	}
	return 0;

}
