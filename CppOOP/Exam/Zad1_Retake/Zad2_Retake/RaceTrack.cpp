#include "RaceTrack.h"
#include "ManualCar.h"
#include "Car.h"
#include "AutomaticCar.h"
#include <iostream>
#include <memory>

bool RaceTrack::isRaceRunning() const {
	for (auto& car : this->_cars)
	{
		if (car.get()->getFuel() == 0)
			return false;
	}
	return true;
}

void RaceTrack::printWinner() {
	int winIndex = -1;
	if (this->_cars[0].get()->getFuel() == 0)
	{
		winIndex = 1;
	}
	else if (this->_cars[1].get()->getFuel() == 0)
	{
		winIndex = 0;
	}
	else {
		if (this->_cars[0].get()->getDistance() > this->_cars[1].get()->getDistance())
		{
			winIndex = 0;
		}
		else if (this->_cars[0].get()->getDistance() < this->_cars[1].get()->getDistance())
		{
			winIndex = 1;
		}
	}
	if (winIndex < 0)
		std::cout << "No winner" << std::endl;
	else
		std::cout << "Car with index: "<<winIndex<<" won!" << std::endl;
}

void RaceTrack::createManualCar(const std::vector<int>& shifts, int maxSpeed, int startFuel) {
	this->_cars.push_back(std::unique_ptr<Car> (new ManualCar(shifts, maxSpeed, startFuel)));
}

void RaceTrack::createAutomaticCar(int maxSpeed, int startFuel) {
	this->_cars.push_back(std::unique_ptr<Car> (new AutomaticCar(maxSpeed, startFuel)));
}

void RaceTrack::increaseSpeed(int speedIncrease, int fuelConsumtion) {
	for (auto& car : this->_cars)
	{
		car.get()->increaseSpeed(speedIncrease,fuelConsumtion);
	}
}

void RaceTrack::decreaseSpeed(int speedDecrease) {
	for (auto& car : this->_cars)
	{
		car.get()->decreaseSpeed(speedDecrease);
	}
}

void RaceTrack::advance() {
	for (auto& car : this->_cars)
	{
		int newDist = car.get()->getDistance() + car.get()->getSpeed();
		car.get()->setDistance(newDist);
	}
}

void RaceTrack::printInfo() const {
	for (size_t i = 0; i < this->_cars.size(); i++)
	{
		std::cout << "Car with index: " << i << " has totalDistance: "<<this->_cars[i].get()->getDistance()<<", is running with "<< this->_cars[i].get()-> getSpeed()<<" speed, has "<< this->_cars[i].get()-> getFuel()<<" fuel left" << std::endl;
	}
}