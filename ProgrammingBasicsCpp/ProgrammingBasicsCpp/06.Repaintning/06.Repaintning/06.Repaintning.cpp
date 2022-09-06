// 06.Repaintning.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int nylonAmount;
	cin >> nylonAmount;

	int paintAmount;
	cin >> paintAmount;

	int diluentAmount;
	cin >> diluentAmount;

	int timeAllowed;
	cin >> timeAllowed;

	double nylonPrice = (nylonAmount + 2.0) * 1.5;
	double paintPrice = 1.1 * paintAmount * 14.5;
	double diluentPrice = diluentAmount * 5.00;

	double materialPrice = nylonPrice + paintPrice + diluentPrice + 0.4;

	double wage = materialPrice * 0.3 * timeAllowed;

	double finalOffer = materialPrice + wage;

	cout << finalOffer;

	return 0;
}