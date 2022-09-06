// 08.Graduation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	string name;
	cin >> name;
	double mark, sum = 0.0;
	int counter = 1;
	bool failed = false;
	while (counter<=12)
	{
		cin >> mark;
		if (mark<4.0)
		{
			if (failed)
			{
				cout << name << " has been excluded at " << counter-1 << " grade" << endl;
				return 0;
			}
			else
			{
				failed = true;
			}
		}
		else
		{
			failed = false;
		}
		
		sum += mark;
		counter++;
	}
	cout.setf(ios::fixed);
	cout.precision(2);

	cout << name << " graduated. Average grade: " << sum / 12.0 << endl;

	return 0;
}
