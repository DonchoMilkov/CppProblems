// Zad1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{

	int fatPercentage, proteinPercentage, vyglPercentage, caloriesCount, waterPercentage;

	cin >> fatPercentage >> proteinPercentage >> vyglPercentage >> caloriesCount >> waterPercentage;

	cout.setf(ios::fixed);
	cout.precision(4);

	double calories, calPerGram;

	double fat, protein, vygl,food;

	fat = fatPercentage * 0.01 * caloriesCount/9.0;
	vygl = vyglPercentage* 0.01 * caloriesCount/4.0;
	protein = proteinPercentage * 0.01 * caloriesCount/4.0;

	food = fat + vygl + protein;
	calPerGram = caloriesCount / food;

	double result = (100 - waterPercentage) * calPerGram * 0.01;

	cout << result << endl;
	return 0;
}