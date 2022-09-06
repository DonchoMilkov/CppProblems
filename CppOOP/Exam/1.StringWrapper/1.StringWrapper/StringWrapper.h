#ifndef StringWrapper_H
#define StringWrapper_H

#include<string>
#include <sstream>
#include<iostream>
class StringWrapper
{
private:
	std::ostringstream _data;
public:
	StringWrapper() {};

	StringWrapper(std::string line) {
		_data << line;
	}
	StringWrapper(char letter, int repet) {
		_data << std::string(repet, letter);
	}

	StringWrapper & append(std::string addition) {
		this->_data << addition;
		return *this;
	}

	std::string getContent() const {
		return this->_data.str();
	}

	void printContent() const{
		std::cout << this->getContent() << std::endl;
	}

};
#endif // !StringWrapper_H

