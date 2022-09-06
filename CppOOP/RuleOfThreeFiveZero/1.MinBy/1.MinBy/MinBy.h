#ifndef MinBy_H
#define MinBy_H

#include <vector>

std::string minBy(const std::vector<std::string>& values, bool rule(const std::string&, const std::string&)) {

	std::string min = values[0];
	for (std::string word : values)
		if (rule(word, min))
			min = word;

	return min;
}


#endif
