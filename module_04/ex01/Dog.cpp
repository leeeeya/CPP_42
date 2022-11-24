//
// Created by Claribel Stefany on 11/15/22.
//

#include "Dog.hpp"

Dog::Dog() {
	setType("Dog");
	_brain = new(Brain);
	std::cout << "Dog is created!" << std::endl;
}

Dog::~Dog() {
	delete(_brain);
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
		this->_brain = d._brain;
	}
	return *this;
}

void Dog::makeSound() const {
	std::cout << "Woof! Woof!" << std::endl;
}
