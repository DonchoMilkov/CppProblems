// 02.SummerOutfit.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int degrees;
    string timeOfDay,outfit,shoes;

    cin >> degrees >> timeOfDay;

    if (degrees < 10 || degrees >42)
    {
        return 0;
    }
    else if (degrees <=18)
    {
        if (timeOfDay == "Morning")
        {
            outfit = "Sweatshirt";
            shoes = "Sneakers";
        }
        else if (timeOfDay == "Afternoon")
        {
            outfit = "Shirt";
            shoes = "Moccasins";
        }
        else {
            outfit = "Shirt";
            shoes = "Moccasins";
        }
    }
    else if (degrees<=24)
    {
        if (timeOfDay == "Morning")
        {
            outfit = "Shirt";
            shoes = "Moccasins";
        }
        else if (timeOfDay == "Afternoon")
        {
            outfit = "T-Shirt";
            shoes = "Sandals";
        }
        else {
            outfit = "Shirt";
            shoes = "Moccasins";
        }
    }
    else {
        if (timeOfDay == "Morning")
        {
            outfit = "T-Shirt";
            shoes = "Sandals";
        }
        else if (timeOfDay == "Afternoon")
        {
            outfit = "Swim Suit";
            shoes = "Barefoot";
        }
        else {
            outfit = "Shirt";
            shoes = "Moccasins";
        }
    }

    cout << "It's " << degrees << " degrees, get your " << outfit << " and " << shoes << "." << endl;
    return 0;
}