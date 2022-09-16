#include "InputParser.h"
#include <iostream>
#include <string>
#include <sstream>

FieldData InputParser::readField() const {
	int rows, cols;
	std::cin >> rows >> cols;
	FieldData fieldData;
	std::string line;
	for (size_t i = 0; i < rows; i++)
	{
		std::cin >> line;
		fieldData.push_back(line);
	}
	return fieldData;
}

std::vector<Command> InputParser::readCommands() const {
	int commandsCount;
	std::cin >> commandsCount;
	std::vector<Command> commands;
	std::string line;
	for (size_t i = 0; i < commandsCount; i++)
	{
		getline(std::cin >> std::ws, line);
		Command com;
		if (line == "power up")
		{
			com.type = CommandType::POWER_UP;
		}
		else if (line == "power down")
		{
			com.type = CommandType::POWER_DOWN;
		}
		else
		{
			std::istringstream a (line);
			std::string sth;
			int row, col;
			a >> sth >> row >> col;
			com.type = CommandType::PLACE_BOMB;
			com.bombRow = row;
			com.bombCol = col;
		}
		commands.push_back(com);
	}

	return commands;
}
