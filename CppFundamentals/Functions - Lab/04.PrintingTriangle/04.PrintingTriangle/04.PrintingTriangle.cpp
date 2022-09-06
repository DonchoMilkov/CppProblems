// 04.PrintingTriangle.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
using namespace std;
void PrintTriangle(int n) {
	int j = 1;
	bool flag = true;
	while (j>0)
	{
		for (int i = 1; i <= j; i++)
		{
			cout << i << " ";
		}
		cout << endl;
		if (j == n)
			flag = false;

		if (flag)
			j++;
		else
			j--;
	}

}
int main()
{
	int n;
	cin >> n;

	PrintTriangle(n);
	return 0;
}
