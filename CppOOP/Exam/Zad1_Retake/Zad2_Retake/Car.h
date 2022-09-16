#ifndef CAR_H
#define CAR_H

class Car
{
public:

	Car(int maxSpeed, int fuel)
		: _maxSpeed(maxSpeed), _fuel(fuel) {
		_currentSpeed = 0;
		_distanceTraveled = 0;
	}

	void virtual increaseSpeed(int speedIncrease, int fuelConsumtion) {};
	void virtual decreaseSpeed(int speedDecrease) {};

	int getDistance() const{
		return this->_distanceTraveled;
	}

	void setDistance(int dist) {
		this->_distanceTraveled = dist;
	}
	int getFuel() const {
		return this->_fuel;
	}
	int getSpeed() const {
		return this->_currentSpeed;
	}
protected:
	int _maxSpeed;
	int _fuel;
	int _currentSpeed;
	int _distanceTraveled;
};
#endif // !CAR_H

