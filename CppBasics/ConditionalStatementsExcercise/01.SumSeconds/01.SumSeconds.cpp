// 01.SumSeconds.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int timeFirst, timeSecond, timeThird;
	cin >> timeFirst >> timeSecond >> timeThird;

	int sum = timeFirst + timeSecond + timeThird;

	int minutes = sum / 60;
	int seconds = sum % 60;

	cout << minutes << ":"<<setfill('0')<<setw(2)<<seconds<<endl;

	return 0;
}
