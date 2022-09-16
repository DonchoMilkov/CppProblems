#include "ManualCar.h"

ManualCar::ManualCar(const std::vector<int>& shiftSpeeds, int maxSpeed, int fuel): Car(maxSpeed, fuel) {
	this->_shiftSpeeds = shiftSpeeds;
}

void ManualCar::increaseSpeed(int speedIncrease, int fuelConsumtion) {
	int oldShift = findShiftIdx();
	this->_currentSpeed += speedIncrease;
	if (this->_currentSpeed > this->_maxSpeed)
		this->_currentSpeed = this->_maxSpeed;
	int newShift = findShiftIdx();
	if (oldShift != newShift)
		fuelConsumtion *= 2;
	this->_fuel -= fuelConsumtion;
	if (this->_fuel < 0)
		this->_fuel = 0;
}

void ManualCar::decreaseSpeed(int speedDecrease) {
	this->_currentSpeed -= speedDecrease;
	if (this->_currentSpeed < 0)
		this->_currentSpeed = 0;
}

size_t ManualCar::findShiftIdx() const {
	size_t shiftIndex = 0;
	for (int i = 0; i < this->_shiftSpeeds.size(); i++)
	{
		if (this->_currentSpeed < this->_shiftSpeeds[i])
			shiftIndex = i;
		else
			break;
	}
	return shiftIndex;
}
