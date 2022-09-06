// 03.SumPrimeNonPrime.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

bool IsNumberPrime(int num)
{
	if (num < 0)
	{
		return false;
	}

	if (num == 1 || num == 2 || num == 3)
	{
		return true;
	}

	bool isPrime = true;
	for (int i = 2; i < num / 2 + 1; i++)
	{
		if (num % i == 0)
		{
			isPrime = false;
			break;
		}
	}

	return isPrime;
}

int main()
{
	string input;
	int primeSum = 0;
	int nonPrimeSum = 0;
	while (true)
	{
		cin >> input;
		if (input == "stop")
		{
			cout << "Sum of all prime numbers is: " << primeSum << endl;
			cout << "Sum of all non prime numbers is: " << nonPrimeSum << endl;
			return 0;
		}

		int inputNum = stoi(input);
		if (inputNum<0)
		{
			cout << "Number is negative." << endl;
			continue;
		}

		if (IsNumberPrime(inputNum))
		{
			primeSum += inputNum;
		}
		else
		{
			nonPrimeSum += inputNum;
		}

	}
	
	return 0;
}
