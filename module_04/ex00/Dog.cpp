//
// Created by Claribel Stefany on 11/15/22.
//

#include "Dog.hpp"

Dog::Dog() {
	setType("Dog");
	std::cout << "Dog is created!" << std::endl;
}

Dog::~Dog() {
	std::cout << "Dog is destructed" << std::endl;
}

Dog::Dog(const Dog &d) {
	std::cout << "<Dog> Copy constructor called" << std::endl;
	*this = d;
}

Dog &Dog::operator=(Dog d) {
	std::cout << "<Dog> Copy assignment operator called" << std::endl;
	if(this != &d){
		this->getType() = d.getType();
	}
	return *this;
}

void Dog::makeSound() const {
	std::cout << "Woof! Woof!" << std::endl;
}
