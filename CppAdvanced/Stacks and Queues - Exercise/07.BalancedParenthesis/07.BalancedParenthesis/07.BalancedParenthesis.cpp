// 07.BalancedParenthesis.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <stack>
#include <sstream>
using namespace std;

int main()
{
	string input;
	cin >> input;
	stack<char> brackets;

	for (size_t i = 0; i < input.length(); i++)
	{
		if (brackets.empty())
			brackets.push(input[i]);
		else
		{
			if (input[i] == ')' && brackets.top() =='(' ||
				input[i] == ']' && brackets.top() == '[' || 
				input[i] == '}' && brackets.top() == '{'  )
				brackets.pop();
			else
				brackets.push(input[i]);
		}
	}

	if (brackets.empty())
		cout << "YES" << endl;
	else
		cout << "NO" << endl;

	return 0;
}