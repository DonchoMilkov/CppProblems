// 01.OldBooks.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string mybook;
	getline(cin >> ws, mybook);

	string book;
	int counter = 0;
	while (true)
	{
		getline(cin >> ws, book);
		if (book == mybook)
		{
			cout << "You checked " << counter << " books and found it." << endl;
			return 0;
		}
		else if (book == "No More Books")
		{
			cout << "The book you search is not here!" << endl << "You checked " << counter << " books." << endl;
			return 0;
		}
		counter++;
	}

	return 0;
}
