#include "AutomaticCar.h"


AutomaticCar::AutomaticCar(int maxSpeed, int fuel): Car(maxSpeed,fuel){
	
}
void AutomaticCar::increaseSpeed(int speedIncrease, int fuelConsumtion) {
	this->_currentSpeed += speedIncrease;
	if (this->_currentSpeed > this->_maxSpeed)
		this->_currentSpeed = this->_maxSpeed;
	this->_fuel -= fuelConsumtion;
	if (this->_fuel < 0)
		this->_fuel = 0;
}

void AutomaticCar::decreaseSpeed(int speedDecrease) {
	this->_currentSpeed -= speedDecrease * 2;
	if (this->_currentSpeed < 0)
		this->_currentSpeed = 0;
}
