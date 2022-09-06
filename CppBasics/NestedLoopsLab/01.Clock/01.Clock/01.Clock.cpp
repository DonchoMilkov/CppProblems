// 01.Clock.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>

using namespace std;
int main()
{
	int n;
	int counter = 0;
	cin >> n;
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n-i; j++)
		{
			for (int k  = 0; k <= n-i-j; k++)
			{
				if (i+j+k == n)
				{
					counter++;
					break;
				}
			}
		}
	}
	cout << counter << endl;
	return 0;
}
