// 04.Walking.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string command;

	int nextStep;

	int currentSteps = 0;

	while (currentSteps< 10000)
	{
		getline(cin >> ws, command);

		if (command == "Going home")
		{
			break;
		}

		nextStep = stoi(command);

		currentSteps += nextStep;

	}

	if (command == "Going home")
	{
		cin >> nextStep;

		currentSteps += nextStep;
		if (currentSteps >= 10000)
		{
			cout << "Goal reached! Good job!" << endl;
		}
		else
		{
			int stepsToTake = 10000 - currentSteps;
			cout << stepsToTake << " more steps to reach goal." << endl;
		}
	}
	else
	{
		cout << "Goal reached! Good job!" << endl;

	}


	return 0;
}
