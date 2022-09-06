// 05.GodzillaVsKong.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    double budget, costumePrice;
    int peopleCount;
    cin >> budget >> peopleCount >> costumePrice;

    budget = budget * 0.9;

    if (peopleCount > 150)
    {
        costumePrice = costumePrice * 0.9;
    }

    double result = budget - peopleCount * costumePrice;
    cout.setf(ios::fixed);
    cout.precision(2);
    if (result < 0)
    {
        cout << "Not enough money!" << endl <<
            "Wingard needs " << abs(result) << " leva more." << endl;
    }
    else
    {
        cout << "Action!" << endl << "Wingard starts filming with " << result << " leva left." << endl;
    }
    return 0;
}