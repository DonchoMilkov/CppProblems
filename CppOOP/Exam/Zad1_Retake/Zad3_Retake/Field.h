#ifndef Field_H
#define Field_H

#include "Defines.h"
#include "InputParser.h"
#include <vector>

class Field {
public:
	void populateField(const FieldData& fieldData);
	FieldData & getFieldData();
private:
	FieldData _data;
};
#endif // !Field_H

