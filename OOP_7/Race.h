#pragma once
#include<iostream>

class Motorcycle {
public:
	Motorcycle(int speed, const std::string& name): _speed(speed), _name(name){}

	int getSpeed() {
		return _speed;
	}

	const std::string& getName() {
		return _name;
	}

private:
	int _speed;
	std::string _name;
};

class Car {
public:
	Car(int speed, const std::string& name) : _speed(speed), _name(name) {}

	int getSpeed() {
		return _speed;
	}

	const std::string& getName() {
		return _name;
	}

private:
	int _speed;
	std::string _name;
};



template<typename T>
class Race {
public:
	void race(T& lhs, T& rhs) {
		if (rhs.getSpeed() > lhs.getSpeed()) {
			std::cout << rhs.getName() << " has won!\n";
		}
		else if (rhs.getSpeed() == lhs.getSpeed()) {
			std::cout << rhs.getName() << " and " << lhs.getName() << " went draw!\n";
		}
		else {
			std::cout << lhs.getName() << " has won!\n";
		}
	}

};

