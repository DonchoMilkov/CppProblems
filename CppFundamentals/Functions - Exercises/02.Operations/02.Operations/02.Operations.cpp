// 02.Operations.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
using namespace std;

int Sum(int a, int b)
{
	return a + b;
}

int Sub(int a, int b)
{
	return a - b;
}

int Mult(int a, int b)
{
	return a * b;
}

int Div(int a, int b)
{
	return a / b;
}

int main()
{
	int a, b;
	cin >> a >> b;
	char symbol;
	cin >> symbol;
	int result;
	switch (symbol)
	{
	case '-':
		result = Sub(a, b);
		break;
	case '+':
		result = Sum(a, b);
		break;
	case '/':
	{
		if (b == 0)
		{
			cout << "Can't divide by zero." << endl;
			return 0;
		}
		result = Div(a, b);
		break;
	}
	case '*':
		result = Mult(a, b);
		default:
		break;
	}

	cout << result << endl;
	return 0;
}
