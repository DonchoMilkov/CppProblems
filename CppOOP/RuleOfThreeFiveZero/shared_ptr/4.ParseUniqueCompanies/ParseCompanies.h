#ifndef ParseCompanies_H
#define ParseCompanies_H

#include"Company.h"
#include<string>
#include<sstream>
#include <vector>
#include <set>
Company* parseUniqueCompanies(const std::string& input, int& numCompanies, std::string getIdentifier(const Company&)) {

	std::vector<Company> companies;
	std::set<std::string> dict;
	std::istringstream inputStream(input);
	std::string line;
	while (std::getline(inputStream, line))
	{
		int id;
		std::string name;
		std::istringstream lineStream(line);
		lineStream >> id >> name;
		Company temp(id, name);
		std::string identifier = getIdentifier(temp);
		if (dict.find(identifier) == dict.end())
		{
			dict.insert(identifier);
			companies.push_back(temp);
		}
	}



	numCompanies = companies.size();

	Company* companiesAloc = new Company[numCompanies];

	for (size_t i = 0; i < numCompanies; i++)
	{
		companiesAloc[i] = companies[i];
	}
	return companiesAloc;
}


#endif // !ParseCompanies_H

