#ifndef MakeCompany_H
#define MakeCompany_h

#include "Company.h"
#include <memory>
#include<vector>
std::shared_ptr<Company> makeCompany(const std::vector<std::string> & properties) {
	int id = std::stoi(properties[0]);
	std::string name = properties[1];
	std::vector<std::pair<char, char>> employees;
	for (size_t i = 2; i < properties.size(); i++)
	{
		std::pair<char, char> emp = { properties[i][0], properties[i][1] };
		employees.push_back(emp);
	}
	
	std::shared_ptr<Company> company(new Company(id, name, employees));
	return company;
}

#endif // !MakeCompany_H

