// 03.TimePlus15Minutes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int h, m;
    cin >> h >> m;

    int resultMin = m + 15;

    if (resultMin > 59)
    {
        h++;
        if (h==24)
        {
            h = 0;
        }
        resultMin -= 60;
    }
   

    cout << h << ":" << setfill('0') << setw(2) << resultMin << endl;

    return 0;
}
