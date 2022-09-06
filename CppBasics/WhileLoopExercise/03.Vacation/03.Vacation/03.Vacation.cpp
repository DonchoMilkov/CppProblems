#include <iostream>
#include <string>

using namespace std;

int main()
{
	double price,budget;
	cin >> price>>budget;

	int counter = 0, badCounter = 0;
	double amount;
	string action;

	while (true)
	{
		cin >> action >> amount;
		counter++;

		if (action == "spend")
		{
			badCounter++;

			if (badCounter == 5)
			{
				cout << "You can't save the money." << endl << counter << endl;
				return 0;
			}

			budget -= amount;
			if (budget < 0)
			{
				budget = 0;
			}
		}
		else if (action == "save")
		{
			badCounter = 0;
			budget += amount;
			if (budget >= price)
			{
				cout << "You saved the money for " << counter << " days." << endl;
				return 0;
			}
		}
	}
	return 0;
}
