// YardGreening.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	double greenyardArea;
	cin >> greenyardArea;

	double rawPrice = greenyardArea * 7.61;
	double discount = rawPrice * 0.18;
	double finalPrice = rawPrice - discount;

	cout << "The final price is: " << finalPrice << " lv." << endl;
	cout << "The discount is: " << discount << " lv." << endl;
	return 0;
}

