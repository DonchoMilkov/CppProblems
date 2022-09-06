#ifndef RemoveInvalid_H
#define RemoveInvalid_H

#include "Company.h"
#include <vector>
#include <algorithm>

void removeInvalid(std::list<Company*> & companies) {
	for (std::list<Company*>::iterator it = companies.begin(); it != companies.end();)
	{
		if ((*it)->getId()<0)
		{
			delete* it;
			it = companies.erase(it);
		}
		else
		{
			it++;
		}
	}
	return;
}
#endif
