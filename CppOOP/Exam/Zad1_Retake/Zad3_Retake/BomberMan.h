#ifndef BomberMan_H
#define BomberMan_H

#include"Defines.h"

class BomberMan {
	
private:
	int _bombPower;
public:
	BomberMan()
	{
		this->_bombPower = 0;
	}
	void bombPowerUp() {
		this->_bombPower++;
	}

	void bombPowerDown() {
		this->_bombPower--;
	}

	int getBombPower() {
		return this->_bombPower;
	}

	int placeBomb(FieldData& fieldData, int bombRow, int bombCol) {
		int points = 0;
		int currentBombPower = this->_bombPower;
		int lastCol = fieldData[0].size() - 1;
		int lastRow = fieldData.size()-1;
	
		int leftCol = bombCol-1, rightCol = bombCol+1;
		int upperRow = bombRow-1, lowerRow= bombRow+1;

		if (leftCol < 0) leftCol = 0;
		if (upperRow < 0) upperRow = 0;
		if (rightCol > lastCol) rightCol = lastCol;
		if (lowerRow > lastRow) lowerRow = lastRow;

		while (currentBombPower != 0)
		{
			if (fieldData[bombRow][leftCol] != 'X')
			{
				int p = fieldData[bombRow][leftCol] - '0';
				fieldData[bombRow][leftCol] = 'X';
				points += p;
			}
			if (fieldData[bombRow][rightCol] != 'X')
			{
				int p = fieldData[bombRow][rightCol] - '0';
				fieldData[bombRow][rightCol] = 'X';
				points += p;
			}
			if (fieldData[upperRow][bombCol] != 'X')
			{
				int p = fieldData[upperRow][bombCol] - '0';
				fieldData[upperRow][bombCol] = 'X';
				points += p;
			}
			if (fieldData[lowerRow][bombCol] != 'X')
			{
				int p = fieldData[lowerRow][bombCol] - '0';
				fieldData[lowerRow][bombCol] = 'X';
				points += p;
			}

			leftCol--;
			upperRow--;
			rightCol++;
			lowerRow++;

			if (leftCol < 0) leftCol = 0;
			if (upperRow < 0) upperRow = 0;
			if (rightCol > lastCol) rightCol = lastCol;
			if (lowerRow > lastRow) lowerRow = lastRow;

			currentBombPower--;
		}
		if (fieldData[bombRow][bombCol] != 'X')
		{
			int p = fieldData[bombRow][bombCol] - '0';
			fieldData[bombRow][bombCol] = 'X';
			points += p;
		}
		return points;
	}
};
#endif // !BomberMan_H

