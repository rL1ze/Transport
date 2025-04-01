#include "Transport.h";

using namespace std;

Transport::Transport(int amountOfWheels, int amountOfPassengers, int speed)
	: _amountOfWheels(amountOfWheels), _amountOfPassengers(amountOfPassengers), _speed(speed) {};

Transport::~Transport() {};

Motorcycle::Motorcycle() : Transport(0, 0, 0), _isSport(0) {};

Motorcycle::Motorcycle(int amountOfWheels, int amountOfPassengers, int speed, bool isSport)
	: Transport(amountOfWheels, amountOfPassengers, speed), _isSport(isSport) {
};

Motorcycle::~Motorcycle() {};

void Motorcycle::printInfo(){
	cout << "\n������������ ���������� ��������:" << "��� - �� ����: "
		<< _amountOfWheels << "\n���-�� ����������:  " 
		<< _amountOfPassengers << "\n��������:  " << _speed 
		<< "\n������ ����������:  " << (_isSport ? "��" : "���")
		<< endl;
}

Scooter::Scooter() : Transport(0, 0, 0) {};

Scooter::Scooter(int amountOfWheels, int amountOfPassengers, int speed)
	:Transport(amountOfWheels, amountOfPassengers, speed) {
};

Scooter::~Scooter() {};

void Scooter::printInfo() const {
	cout << "\n������������ ���������� ������:" << "\n��� - �� ����: "
		<< _amountOfWheels <<  "\n���-�� ����������:  " << _amountOfPassengers 
		<< "\n��������:  " << _speed << endl;
};

Car::Car() : Transport(0, 0, 0), _isSport(0) {};

Car::Car(int amountOfWheels, int amountOfPassengers, int speed, bool isSport)
	:Transport(amountOfWheels, amountOfPassengers, speed), _isSport(isSport) {
};

Car::~Car() {};

void Car::printInfo() const {
	cout << "\n������������ ���������� �����������:" << "\n��� - �� ����: "
		<< _amountOfWheels << "\n���-�� ����������:  " << _amountOfPassengers
		<< "\n���������:  " << _speed << "\n������ ����������:  " << (_isSport ? "��" : "���")
		<< endl;
}

Bus::Bus() : Transport(0, 0, 0) {};

Bus::Bus(int amountOfWheels, int amountOfPassengers, int speed)
	:Transport(amountOfWheels, amountOfPassengers, speed) {
};

Bus::~Bus() {};

void Bus::printInfo() const {
	cout << "\n������������ ���������� �������:" << "\n��� - �� ����: "
		<< _amountOfWheels << "\n���-�� ����������:  " 
		<< _amountOfPassengers << "\n��������:  " << _speed 
		<< endl;
}
