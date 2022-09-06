// 03.DepositCalculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
int main()
{
	double deposit;
	cin >> deposit;

	int period;
	cin >> period;

	double interestRate;
	cin >> interestRate;

	double anualInterest = deposit * interestRate / 100;
	double montlyInterest = anualInterest / 12;
	double result = deposit + period * montlyInterest;

	cout << result << endl;

	return 0;
}
