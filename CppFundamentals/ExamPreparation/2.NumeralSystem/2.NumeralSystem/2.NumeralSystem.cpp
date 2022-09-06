// 2.NumeralSystem.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <list>
using namespace std;
int main()
{
	string system,firstNumT,secondNumT;
	cin >> system>>firstNumT>>secondNumT;
	int firstNum = 0,
		secondNum = 0;
	for (char sym : firstNumT)
	{
		int digit = system.find(sym);
		firstNum = firstNum * 10 + digit;
	}
	for (char sym : secondNumT)
	{
		int digit = system.find(sym);
		secondNum = secondNum * 10 + digit;
	}

	int result = firstNum + secondNum;
	list<char> output;
	while (result>0)
	{
		int index = result % 10;
		output.insert(output.begin(), system[index]);
		result /= 10;
	}

	for (char c : output)
	{
		cout << c;
	}
	cout << endl;
	
	return 0;
}
