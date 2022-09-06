#include "Matrix.h"


Matrix& Matrix::operator=(const std::vector<std::vector<int>> &data) {
	this->_data = data;
	return *this;
}
Matrix& Matrix::operator+=(const Matrix& other) {

	for (size_t row = 0; row < this->_data.size(); row++)
	{
		for (size_t col = 0; col < this->_data[row].size(); col++)
		{
			if (row < other._data.size() && col < other._data[row].size())
			{
				this->_data[row][col] += other._data[row][col];
			}
		}
	}
	return *this;
}
Matrix& Matrix::operator-=(const Matrix& other) {
	for (size_t row = 0; row < this->_data.size(); row++)
	{
		for (size_t col = 0; col < this->_data[row].size(); col++)
		{
			if (row < other._data.size() && col < other._data[row].size())
			{
				this->_data[row][col] -= other._data[row][col];
			}
		}
	}
	return *this;
}
Matrix& Matrix::operator*=(const Matrix& other) {
	for (size_t row = 0; row < this->_data.size(); row++)
	{
		for (size_t col = 0; col < this->_data[row].size(); col++)
		{
			if (row < other._data.size() && col < other._data[row].size())
			{
				this->_data[row][col] *= other._data[row][col];
			}
		}
	}
	return *this;
}
Matrix& Matrix::operator/=(const Matrix& other) {

	for (size_t row = 0; row < this->_data.size(); row++)
	{
		for (size_t col = 0; col < this->_data[row].size(); col++)
		{
			if (row < other._data.size() && col < other._data[row].size())
			{
				if (other._data[row][col] == 0)
					this->_data[row][col] = 0;
				else
				this->_data[row][col] /= other._data[row][col];
			}
		}
	}
	return *this;
}

std::ostream& operator<<(std::ostream & os, const Matrix & matrix) {
	for (size_t row = 0; row < matrix._data.size(); row++)
	{
		for (size_t col = 0; col < matrix._data[row].size(); col++)
		{
			os << matrix._data[row][col];
			if (col != matrix._data[row].size()-1)
				os << " ";
		}
		os << std::endl;
	}
	return os;
}
