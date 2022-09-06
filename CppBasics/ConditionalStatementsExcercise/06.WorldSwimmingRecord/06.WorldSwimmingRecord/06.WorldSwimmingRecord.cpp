// 06.WorldSwimmingRecord.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<math.h>
using namespace std;

int main()
{
	double record, distance, speed;

	cin >> record >> distance >> speed;

	double rawTime = speed * distance;

	int checkpoints = (int)round(distance) / 15;
	double delay = checkpoints * 12.5;

	double finalResult = rawTime + delay;

	double result = finalResult - record;
	cout.setf(ios::fixed);
	cout.precision(2);
	if (result < 0)
	{
		cout << "Yes, he succeeded! The new world record is "<< finalResult <<" seconds." << endl;
	}
	else
	{
		cout << "No, he failed! He was " << result << " seconds slower.";
	}
	return 0;
}
