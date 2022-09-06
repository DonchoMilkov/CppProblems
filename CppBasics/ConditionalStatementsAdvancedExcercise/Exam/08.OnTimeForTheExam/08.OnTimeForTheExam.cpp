// 08.OnTimeForTheExam.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int h, m, arrivalH, arrivalM;
	cin >> h >> m >> arrivalH >> arrivalM;

	int time = h * 60 + m;
	int arrivalTime = arrivalH * 60 + arrivalM;

	int delay = arrivalTime - time;

	if (delay == 0)
	{
		cout << "On time" << endl;
	}
	else if (delay > 0)
	{
		cout << "Late" << endl;
		if (delay >= 60)
		{
			cout << delay / 60 << ":" << setfill('0') << setw(2) << delay % 60 << " hours after the start";
		}
		else
		{
			cout << delay << " minutes after the start";
		}
	}
	else if (delay >= -30)
	{
		cout << "On time" << endl;

		cout << abs(delay) << " minutes before the start";

	}
	else
	{
		cout << "Early" << endl;

		if (delay <= -60)
		{
			cout << abs(delay) / 60 << ":" << setfill('0') << setw(2) << abs(delay) % 60 << " hours before the start";

		}
		else
		{
			cout << abs(delay) << " minutes before the start";
		}
	}
	return 0;
}