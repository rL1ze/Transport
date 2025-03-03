#include "Factory.h";

Factory::Factory() {};
Factory::~Factory() {};

Transport* Factory::createTransport(int type, int amountOfWheels, int amountOfPassengers, int _speed) {
	switch (type)
	{
	case 0:
		return new Motorcycle(amountOfWheels, amountOfPassengers, _speed);
		break;
	case 1:
		return new Scooter(amountOfWheels, amountOfPassengers, _speed);
		break;
	case 2:
		return new Car(amountOfWheels, amountOfPassengers, _speed);
		break;
	case 3:
		return new Bus(amountOfWheels, amountOfPassengers, _speed);
		break;
	default:
		return nullptr;
		break;
	}
};

Transport* Factory::createTransport(int type, int amountOfWheels, int amountOfPassengers, int _speed, bool isSport) {
	switch (type)
	{
	case 0:
		return new Motorcycle(amountOfWheels, amountOfPassengers, _speed, isSport);
		break;
	case 1:
		return new Scooter(amountOfWheels, amountOfPassengers, _speed);
		break;
	case 2:
		return new Car(amountOfWheels, amountOfPassengers, _speed, isSport);
		break;
	case 3:
		return new Bus(amountOfWheels, amountOfPassengers, _speed);
		break;
	default:
		return nullptr;
		break;
	}
};





