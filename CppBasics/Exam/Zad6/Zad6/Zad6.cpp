// Zad6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
	int studentsCount;
	double mark,sum=0.0;

	int aCount=0, bCount=0, cCount=0, dCount=0;

	cin >> studentsCount;
	for (int i = 0; i < studentsCount; i++)
	{
		cin >> mark;
		sum += mark;
		if (mark>=5.00)
		{
			aCount++;
		}
		else if (mark>=4.00)
		{
			bCount++;
		}
		else if (mark>=3.00)
		{
			cCount++;
		}
		else if (mark >= 2.00)
		{
			dCount++;
		}
	}

	cout.setf(ios::fixed);
	cout.precision(2);

	cout << "Top students: " << aCount * 100.00 / studentsCount * 1.0 << "%" << endl;
	cout << "Between 4.00 and 4.99: " << bCount * 100.00 / studentsCount * 1.0 << "%" << endl;
	cout << "Between 3.00 and 3.99: " << cCount * 100.00 / studentsCount * 1.0 << "%" << endl;
	cout << "Fail: " << dCount * 100.00 / studentsCount * 1.0 << "%" << endl;
	cout << "Average: " << sum * 1.0 / studentsCount * 1.0 << endl;
	return 0;
}