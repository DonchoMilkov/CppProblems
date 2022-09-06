// 02.RemoveNegativesandReverse.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <sstream>
#include <stack>
using namespace std;

int main()
{
	string input;
	getline(cin, input);

	istringstream inputStream(input);

	stack<int> nums;
	int temp;
	while (inputStream >> temp)
	{
		nums.push(temp);
	}

	bool flag = false;

	while (!nums.empty())
	{
		if (nums.top()>0)
		{
			cout << nums.top() << " ";
			flag = true;
		}
		nums.pop();
	}

	if (!flag)
	{
		cout << "empty";
	}
	cout << endl;

	return 0;

}
