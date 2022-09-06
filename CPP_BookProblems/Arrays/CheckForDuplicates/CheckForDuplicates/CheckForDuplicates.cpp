// CheckForDuplicates.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	int a[100];
	int n;
	cin >> n;
	if (!cin || n < 1 || n>100)
	{
		cout << "Error! Bad Input!" << endl;
		return 0;
	}

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (a[i]==a[j])
			{
				cout << "Duplicate found: " << a[i] << endl;
				return 0;
			}
		}
	}

	cout << "No duplicates found!" << endl;

	return 0;
}
