#include "Register.h"


//size_t numAdded;
//Company* companiesArray;

Register::Register(size_t numCompanies) {
	numAdded = 0;
	companiesArray = new Company[numCompanies];
}

void Register::add(const Company& c) {
	companiesArray[numAdded] = c;
	numAdded++;
}

Company Register::get(int companyId) const
{
	for (size_t i = 0; i < numAdded; i++)
	{
		if (companiesArray[i].getId() == companyId)
			return companiesArray[i];
	}
}

Register::~Register() {
	delete[] companiesArray;
	companiesArray = nullptr;
}

Register& Register::operator=(const Register& other) {
	this->numAdded = other.numAdded;
	if (this->numAdded)
		this->companiesArray = new Company[numAdded];
	else this->companiesArray = nullptr;

	std::copy(other.companiesArray, other.companiesArray + numAdded, this->companiesArray);
	return *this;
}

Register::Register(const Register& other) {
	this->numAdded = other.numAdded;
	if (this->numAdded)
		this->companiesArray = new Company[numAdded];
	else this->companiesArray = nullptr;

	std::copy(other.companiesArray, other.companiesArray + numAdded, this->companiesArray);
}