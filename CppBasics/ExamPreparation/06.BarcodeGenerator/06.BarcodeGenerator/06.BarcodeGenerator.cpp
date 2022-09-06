// 06.BarcodeGenerator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int start, end;
	cin >> start >> end;
	int currentNum,symbol;
	bool isValid = true;

	int start4 = start % 10;
	int end4 = end % 10;
	start /= 10;
	end /= 10;
	int start3 = start % 10;
	int end3 = end % 10;
	start /= 10;
	end /= 10;
	int start2 = start % 10;
	int end2 = end % 10;
	start /= 10;
	end /= 10;
	int start1 = start % 10;
	int end1 = end % 10;

	for (int i = start1; i <= end1; i++)
	{
		if (i %2 == 0)
		{
			continue;
		}
		for (int j = start2; j <=end2; j++)
		{
			if (j%2==0)
			{
				continue;
			}
			for (int k = start3; k <= end3; k++)
			{
				if (k%2 == 0)
				{
					continue;
				}
				for (int t = start4; t <= end4; t++)
				{
					if (t%2==0)
					{
						continue;
					}
					cout << i << j << k << t << " ";
				}
			}
		}
	}
	return 0;
}
