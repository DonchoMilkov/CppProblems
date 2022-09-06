// 05.CalculateRectangleArea.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
using namespace std;
int RectArea(int a, int b)
{
	int area = a * b;
	return area;
}
int main()
{
	int a, b;
	cin >> a >> b;

	cout << RectArea(a, b) << endl;
	return 0;
}
