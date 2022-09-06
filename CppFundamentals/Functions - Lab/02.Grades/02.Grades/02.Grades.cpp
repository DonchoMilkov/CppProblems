// 02.Grades.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

string GetGrade(double mark)
{
	string grade = "Excellent";
	if (mark <= 2.99)
		grade = "Fail";
	else if (mark <= 3.49)
		grade = "Poor";
	else if (mark <= 4.49)
		grade = "Good";
	else if (mark <= 5.49)
		grade = "Very good";
	
	return grade;
}

int main()
{
	double mark;
	cin >> mark;

	cout << GetGrade(mark) << endl;
	return 0;
}
