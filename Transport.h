#pragma once

class Transport
{
public: 
	Transport(int amountOfWheels = 0, int amountOfPassengers = 0, int speed = 0);
	virtual ~Transport();
	virtual void printInfo() const = 0;
protected:
	int _amountOfWheels = 0;
    int _amountOfPassengers = 0;
	int _speed = 0;
};

class Motorcycle : public Transport {

public:
	Motorcycle();
	Motorcycle(int amountOfWheels = 0, int amountOfPassengers = 0, int speed = 0, bool isSport = false);
	~Motorcycle();
	void printInfo() const override;
private:
	bool _isSport = false;
};

class Scooter : public Transport {

public:
	Scooter();
	Scooter(int amountOfWheels = 0, int amountOfPassengers = 0, int speed = 0);
	~Scooter();
	void printInfo() const override;
private:
};

class Car : public Transport {

public:
	Car();
	Car(int amountOfWheels = 0, int amountOfPassengers = 0, int speed = 0, bool _isSport = false);
	~Car();
	void printInfo() const override;

private:
	bool _isSport = false;
};

class Bus : public Transport {

public:
	Bus();
	Bus(int amountOfWheels = 0, int amountOfPassengers = 0, int speed = 0);
	~Bus();
	void printInfo() const override;
private:
};