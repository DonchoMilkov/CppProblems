// 04.VacationBooksList.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int pagesCount;
	cin >> pagesCount;

	int pagesPerHour;
	cin >> pagesPerHour;

	int days;
	cin >> days;

	int requiredTime = pagesCount / pagesPerHour;
	int dailyTarget = requiredTime / days;
	
	cout << dailyTarget << endl;

	return 0;
}

