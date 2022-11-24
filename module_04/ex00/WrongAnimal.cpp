//
// Created by Claribel Stefany on 11/16/22.
//

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << "WrongAnimal is created!" << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal is destructed" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &wa) {
	std::cout << "<WrongAnimal> Copy constructor called" << std::endl;
	*this = wa;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal wa) {
	std::cout << "<WrongAnimal> Copy assignment operator called" << std::endl;
	if(this != &wa){
		_type = wa._type;
	}
	return *this;
}

void WrongAnimal::makeSound() const{
	std::cout << "*unidentified wrong animal sounds*" << std::endl;
}

std::string WrongAnimal::getType() const {
	return _type;
}

void WrongAnimal::setType(const std::string& type) {
	_type = type;
}