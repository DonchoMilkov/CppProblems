// 3.Sales.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <map>
#include <string>
#include <sstream>

using namespace std;

class Sale
{
private:
	string _town;
	string _product;
	double _price;
	double _quantity;

public:
	Sale(string, string, double, double);

	string getTown();
};

Sale::Sale(string town, string product, double price, double quantity)
{
	this->_town = town;
	this->_product = product;
	this->_price= price;
	this->_quantity= quantity;
}

string Sale::getTown()
{
	return this->_town;
}

int main()
{
	int num;
	cin >> num;

	typedef map<string, double> SalesList;

	SalesList Sales;

	string town, product;
	double price,quantity;
	for (size_t i = 0; i < num; i++)
	{
		cin >> town >> product >> price >> quantity;

		Sale currentSale(town, product, price, quantity);
		string currTown = currentSale.getTown();

		if (Sales.find(currTown) != Sales.end())
		{
			Sales[currTown] += price * quantity;
		}
		else
		{
			Sales[currTown] = price * quantity;
		}
	}

	cout.setf(ios::fixed);
	cout.precision(2);

	for (SalesList::iterator it = Sales.begin(); it != Sales.end(); it++)
	{
		cout << it->first << " -> " << it->second << endl;
	}
	return 0;
}
