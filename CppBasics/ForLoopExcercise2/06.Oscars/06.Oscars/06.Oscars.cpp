// 06.Oscars.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;
int main()
{
	string name;
	double startingPoints;
	int evaluatorsNumber;

	string evaluatorName;
	double evaluatorPoints;

	getline(cin >> ws, name);
	cin >> startingPoints >> evaluatorsNumber;
	cout.setf(ios::fixed);
	cout.precision(1);
	for (int i = 0; i < evaluatorsNumber; i++)
	{
		getline(cin >> ws, evaluatorName);
		cin >> evaluatorPoints;

		startingPoints += evaluatorPoints * evaluatorName.length() * 0.5;

		if (startingPoints >= 1250.5)
		{
			cout << "Congratulations, " << name << " got a nominee for leading role with " << startingPoints << "!" << endl;
			return 0;
		}
	}


	cout << "Sorry, " << name << " you need "<<1250.5 - startingPoints<<" more!" << endl;

	return 0;
}