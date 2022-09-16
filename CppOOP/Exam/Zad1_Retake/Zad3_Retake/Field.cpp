#include "Field.h"

void Field::populateField(const FieldData& fieldData) {
	this->_data = fieldData;
};

FieldData & Field::getFieldData() {
	return this->_data;
};