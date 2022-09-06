// 04.FoodForPets.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int days;
	double amount;
	cin >> days >> amount;
	int dogMeal, catMeal;
	int dogFood =0, catFood = 0;
	int biscuits = 0;
	for (int i = 0; i < days; i++)
	{
		cin >> dogMeal >> catMeal;
		dogFood += dogMeal;
		catFood += catMeal;
		if ((i+1)%3==0)
		{
			biscuits += round((dogMeal + catMeal) * 0.1);
		}
	}
	double percentageEaten = (dogFood + catFood) * 100.00 / amount*1.0;
	double percentageDogEaten = dogFood * 100.00 / (dogFood + catFood)*1.0;
	double percentageCatEaten = catFood * 100.00 / (dogFood + catFood)*1.0;
	cout.setf(ios::fixed);
	cout.precision(2);
	cout << "Total eaten biscuits: " <<biscuits << "gr." << endl;
	cout << percentageEaten << "% of the food has been eaten." << endl;
	cout << percentageDogEaten << "% eaten from the dog." << endl;
	cout << percentageCatEaten << "% eaten from the cat." << endl;

	return 0;
}