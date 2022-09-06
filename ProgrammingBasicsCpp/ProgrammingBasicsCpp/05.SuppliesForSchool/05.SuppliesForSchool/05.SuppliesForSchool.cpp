// 05.SuppliesForSchool.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	const double penPrice = 5.8;
	const double markerPrice = 7.2;
	const double liquidPrice = 1.2;

	int packsOfPens;
	cin >> packsOfPens;

	int packsOfMarkers;
	cin >> packsOfMarkers;

	int boardCleaningLiquidAmount;
	cin >> boardCleaningLiquidAmount;

	int discount;
	cin >> discount;

	double rawPrice = packsOfPens * penPrice + packsOfMarkers * markerPrice + boardCleaningLiquidAmount * liquidPrice;

	double finalPrice = rawPrice - rawPrice * discount / 100.00;

	cout << finalPrice<< endl;


	return 0;
}

