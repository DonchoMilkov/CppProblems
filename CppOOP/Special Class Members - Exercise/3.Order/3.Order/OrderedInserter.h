#ifndef ORDERED_INSERTER_H
#define ORDERED_INSERTER_H
#include "Company.h"
#include <map>
#include <vector>
using namespace std;

class OrderedInserter
{
private:
	vector<const Company*> & _companies;


public:
	OrderedInserter(vector<const Company*> & companies) : _companies(companies)
	{
	}

	void insert(const Company* c) {
		vector<const Company*>::iterator it = _companies.begin();
		for (; it != _companies.end(); it++)
			if (c->getId() < (*it)->getId())
				break;

		_companies.insert(it, c);
		return;
	}
};



#endif // !ORDERED_INSERTER_H