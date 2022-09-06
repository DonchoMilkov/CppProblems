// Zad1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <map>
#include <queue>
using namespace std;

bool isPrime(int n)
{
	int m = n / 2;
	for (int i = 2; i <= m; i++)
		if (n % i == 0)
			return false;
	return true;
}

int main()
{
	int n;
	cin >> n;
	int start = n / 2 + 1;
	//int * arr = new int [n*n];
	int sum = 0;
			int temp;

	for (size_t i = 0; i < start; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			cin >> temp;
		}
	}

	for (size_t i = start; i < n; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			cin >> temp;
			if (j < i && j > n - i -1 )
				//cout << temp<<" ";
				if (isPrime(temp))
					sum += temp;
		}
	}
	cout << sum << endl;

	return 0;
}
