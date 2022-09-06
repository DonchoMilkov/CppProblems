// 02.MathematicalExpression.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
int main()
{
	string expression;

	cin >> expression;
	int bracket = 0;
	for (int i = 0; i < expression.length(); i++)
	{
		if (expression[i] == '(')
		{
			bracket++;
		}
		else if (expression[i] ==')')
		{
			bracket--;
		}
		if (bracket < 0)
		{
			cout << "incorrect" << endl;
			return 0;
		}
	}

	if (bracket == 0)
		cout << "correct" << endl;
	else
		cout << "incorrect" << endl;
		return 0;
}
