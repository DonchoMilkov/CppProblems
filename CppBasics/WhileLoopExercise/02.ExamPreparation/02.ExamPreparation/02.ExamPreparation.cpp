// 02.ExamPreparation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;
int main()
{
	int maxCount;
	cin >> maxCount;
	int sum = 0;
	int badCounter = 0,counter = 0;
	string problem,lastProblem;
	int mark;
	while (badCounter < maxCount)
	{
		getline(cin >> ws, problem);
		if (problem == "Enough")
		{
			cout.setf(ios::fixed);
			cout.precision(2);
			cout << "Average score: " << sum * 1.0 / counter << endl;
			cout << "Number of problems: " << counter << endl;
			cout << "Last problem: " << lastProblem << endl;
			return 0;
		}

		lastProblem = problem;

		cin >> mark;
		if (mark<=4)
		{
			badCounter++;
		}

		sum += mark;
		counter++;
	}

	cout << "You need a break, " << maxCount << " poor grades." << endl;
	return 0;
}
