#ifndef FIND_H
#define FIND_H

#include "Company.h"
#include <vector>

using namespace std;


Company* find(vector<Company*> companies, int searchId)
{
	vector<Company*>::iterator it = companies.begin();
	for (;it!=companies.end(); it++)
	{
		if ((*it)->getId() == searchId)
		{
			return *it;
		}
	}

	return nullptr;
}

#endif // !FIND_H