// 06.OperationsBetweenNumbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int n1, n2;
	char sign;
	cin >> n1 >> n2 >> sign;

	cout.setf(ios::fixed);
	cout.precision(2);
	if (sign == '/')
	{
		if (n2 == 0)
		{
			cout << "Cannot divide " << n1 << " by zero" << endl;
		}
		else
		{
			cout << n1 << " " << sign << " " << n2 << " = "<< n1 * 1.0 / n2 << endl;
		}
	}
	else if (sign == '%')
	{
		if (n2 == 0)
		{
			cout << "Cannot divide " << n1 << " by zero" << endl;
		}
		else
		{
			cout << n1 << " " << sign << " " << n2 << " = " << n1 % n2 << endl;
		}
	}
	else
	{
		int result;
		if (sign == '+')
		{
			result = n1 + n2;
		}
		else if (sign == '-')
		{
			result = n1 - n2;
		}
		else
		{
			result = n1 * n2;
		}

		cout << n1 << " " << sign << " " << n2 << " = " << result<<" - ";

		if (result%2==0)
		{
			cout << "even" << endl;
		}
		else
		{
			cout << "odd" << endl;
		}
	}

	return 0;
}