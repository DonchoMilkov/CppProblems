#include "InputParser.h"

#include<iostream>

Input readInput()
{
	std::string _line;
	char _letter;
	int _repetitions;

	std::cin >> _line >> _letter >> _repetitions;

	Input myInput;
	myInput.line = _line;
	myInput.letter = _letter;
	myInput.repetitions = _repetitions;
	return myInput;
}