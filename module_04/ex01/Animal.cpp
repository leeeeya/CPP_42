//
// Created by Claribel Stefany on 11/15/22.
//

#include "Animal.hpp"

Animal::Animal() {
	std::cout << "Animal is created!" << std::endl;
}

Animal::~Animal() {
	std::cout << "Animal is destructed" << std::endl;
}

Animal::Animal(const Animal &a) {
	std::cout << "<Animal> Copy constructor called" << std::endl;
	*this = a;
}

Animal &Animal::operator=(Animal a) {
	std::cout << "<Animal> Copy assignment operator called" << std::endl;
	if(this != &a){
		_type = a._type;
	}
	return *this;
}

void Animal::makeSound() const{
	std::cout << "*unidentified animal sounds*" << std::endl;
}

std::string Animal::getType() const {
	return _type;
}

void Animal::setType(const std::string& type) {
	_type = type;
}

