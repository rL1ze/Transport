#pragma once
#include "Transport.h";
#include <iostream>

using namespace std;

class Factory {
public:
	Factory();
	~Factory();

	static Transport* createTransport(int type = 0, int amountOfWheels = 0,int amountOfPassengers = 0, int _speed = 0, bool isSport = false);
	static Transport* createTransport(int type = 0, int amountOfWheels = 0, int amountOfPassengers = 0, int _speed = 0);

};






