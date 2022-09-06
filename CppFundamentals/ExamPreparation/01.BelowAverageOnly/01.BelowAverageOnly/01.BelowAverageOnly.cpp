// 01.BelowAverageOnly.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<int> nums, pickedOnes;
	int temp;
	int sum = 0, sumEven = 0, sumOdd=0;
	for (size_t i = 0; i < n; i++)
	{
		cin >> temp;
		sum += temp;
		nums.push_back(temp);
	}

	int avg = sum / n;
	bool isOdd = false;

	for (size_t i = 0; i < n; i++)
	{
		if (nums[i]<=avg)
		{
			if (isOdd)
			{
				sumOdd += nums[i];
			}
			else
			{
				sumEven += nums[i];
			}
			isOdd = !isOdd;
		}
	}

	cout << sumEven * sumOdd << endl;

	return 0;
}
