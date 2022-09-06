// 01.Cinema.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    string movieType;
    int rows, cols;
    cin >> movieType >> rows >> cols;

    double price;

    if (movieType == "Premiere")
    {
        price = 12.0;
    }
    else if (movieType=="Normal")
    {
        price = 7.5;
    }
    else {
        price = 5.0;
    }

    cout.setf(ios::fixed);
    cout.precision(2);
    cout << rows * cols * price <<" leva"<< endl;

    return 0;
}
