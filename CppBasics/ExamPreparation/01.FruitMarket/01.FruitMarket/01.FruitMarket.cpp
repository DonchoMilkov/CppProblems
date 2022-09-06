// 01.FruitMarket.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    
    double strawberryPrice, bannanasAmount, orangesAmount, berriesAmount,strawberriesAmount, bannanasPrice,orangesPrice,berrriesPrice;
    cin >> strawberryPrice>>bannanasAmount>>orangesAmount>>berriesAmount>>strawberriesAmount;
    berrriesPrice = strawberryPrice * 0.5;
    orangesPrice = 0.6 * berrriesPrice;
    bannanasPrice = 0.2 * berrriesPrice;
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << strawberryPrice * strawberriesAmount + orangesPrice * orangesAmount + berrriesPrice * berriesAmount + bannanasAmount * bannanasPrice << endl;


    return 0;
}

