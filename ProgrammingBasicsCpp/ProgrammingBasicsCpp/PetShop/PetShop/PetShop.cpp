// PetShop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int bagsDogfood;
	cin >> bagsDogfood;

	int bagsCatFood;
	cin >> bagsCatFood;

	cout << bagsDogfood * 2.5 + bagsCatFood * 4.0 << " lv." << endl;

	return 0;
}

