#ifndef ArrayOfPointers_H 
#define ArrayOfPointers_H

#include "ArrayOfPointers.h"
#include<vector>
#include<memory>
class ArrayOfPointers
{
private:
	std::vector<std::shared_ptr<Company>> companies;

public:
	ArrayOfPointers()
	{

	}

	void add(Company* & c) {
		std::shared_ptr<Company> sc(c);
		companies.push_back(sc);
	}

	int getSize(void) {
		return companies.size();
	}

	Company* get(int idx) {
		return companies[idx].get();;
	}
};

#endif // !

