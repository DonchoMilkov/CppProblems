// 01.Gauss'Trick.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <sstream>
#include <list>
#include <vector>
using namespace std;

void printVector(vector<int>& vec)
{
	for (int n : vec)
	{
		cout << n << " ";
	}
}

int main()
{
	string input;
	getline(cin, input);

	istringstream inputStream(input);

	vector<int> nums;
	int temp;
	while (inputStream >> temp)
	{
		nums.push_back(temp);
	}

	int size = nums.size();
	for (int i = 0; i < (size / 2); i++)
	{
		cout << nums[i] + nums[size - i - 1] << " ";
	}
	if (size%2 != 0)
	{
		cout << nums[size / 2];
	}

	cout << endl;

	return 0;
}
