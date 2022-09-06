#ifndef SORT_BY_H
#define SORT_BY_H
#include "Company.h"
#include<algorithm>

void sortBy(Company** begin, Company** end, bool (&lessThanFunc)(const Company& a, const Company& b))
{
    std::sort(begin, end, [&](Company* const & a, Company* const & b) {
        return lessThanFunc(*a, *b);
        });
}

#endif // !SORT_BY_H