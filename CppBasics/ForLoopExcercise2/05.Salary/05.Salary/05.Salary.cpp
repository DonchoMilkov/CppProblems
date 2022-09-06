// 05.Salary.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int n, salary;
	cin >> n>>salary;

	for (int i = 0; i < n; i++)
	{
		string site;
		cin >> site;
		if (site == "Facebook")
		{
			salary -= 150;
		}
		else if (site =="Instagram")
		{
			salary -= 100;
		}
		else if (site == "Reddit")
		{
			salary -= 50;
		}

		if (salary <=0)
		{
			cout << "You have lost your salary." << endl;
			return 0;
		}
	}

	cout << salary << endl;

	return 0;
}