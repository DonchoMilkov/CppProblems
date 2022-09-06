#ifndef PROFIT_REPORT_H
#define PROFIT_REPORT_H
#include "Company.h"
#include "ProfitCalculator.h"

#include<map>
#include<sstream>

std::string getProfitReport(Company* fromInclusive, Company* toInclusive, std::map<int, ProfitCalculator>& profitCalculatorsByCompany) {
	std::ostringstream result;

	Company* current = fromInclusive;
	if (current != toInclusive)
	{
		do
		{
			result << current->getName() << " = " << profitCalculatorsByCompany[current->getId()].calculateProfit(*current) << std::endl;
			current++;
		} while (current != toInclusive);
	}

	result << current->getName() << " = " << profitCalculatorsByCompany[current->getId()].calculateProfit(*current) << std::endl;

	return result.str();
}

#endif // !PROFIT_REPORT_H