// 04.TrainTheTrainers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
int main()
{
	int jury;
	cin >> jury;
	string input;
	double completeMarkSum = 0.0;
	double courseMarkSum;
	double mark;
	int courseCount = 0;
	cout.setf(ios::fixed);
	cout.precision(2);
	while (true)
	{
		getline(cin >> ws, input);
		if (input == "Finish")
		{
			cout << "Student's final assessment is "<< completeMarkSum /courseCount<<"."<<endl;
			return 0;
		}
		courseMarkSum = 0;
		for (int i = 0; i < jury; i++)
		{
			cin >> mark;
			courseMarkSum += mark;
		}

		cout << input << " - " << courseMarkSum * 1.0 / jury <<"."<<endl;
		completeMarkSum += courseMarkSum * 1.0 / jury;
		courseCount++;

	}
	return 0;
}
