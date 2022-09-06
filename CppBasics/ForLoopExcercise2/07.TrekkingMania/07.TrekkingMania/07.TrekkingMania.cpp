// 07.TrekkingMania.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
int main()
{
	int groupsNumber;
	cin >> groupsNumber;

	int people=0, musala=0, monblan=0, kili=0, k2=0, everest=0;
	int groupSize;

	for (int i = 0; i < groupsNumber; i++)
	{
		cin >> groupSize;
		people += groupSize;
		if (groupSize < 6)
		{
			musala += groupSize;
		}
		else if (groupSize<13)
		{
			monblan += groupSize;
		}
		else if (groupSize < 26)
		{
			kili += groupSize;
		}
		else if (groupSize < 41)
		{
			k2 += groupSize;
		}
		else
		{
			everest += groupSize;
		}
	}
	cout.setf(ios::fixed);
	cout.precision(2);
	cout << musala * 100.0 / people << "%" << endl;
	cout << monblan * 100.0 / people << "%" << endl;
	cout << kili * 100.0 / people << "%" << endl;
	cout << k2 * 100.0 / people << "%" << endl;
	cout << everest * 100.0 / people << "%" << endl;
	return 0;
}
