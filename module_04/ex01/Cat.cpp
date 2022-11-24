//
// Created by Claribel Stefany on 11/15/22.
//

#include "Cat.hpp"

Cat::Cat() {
	setType("Cat");
	_brain = new(Brain);
	std::cout << "Cat is created!" << std::endl;
}

Cat::~Cat() {
	delete(_brain);
	std::cout << "Cat is destructed" << std::endl;
}

Cat::Cat(const Cat &c) {
	std::cout << "<Cat> Copy constructor called" << std::endl;
	*this = c;
}

Cat &Cat::operator=(Cat c) {
	std::cout << "<Cat> Copy assignment operator called" << std::endl;
	if(this != &c){
		this->getType() = c.getType();
		this->_brain = c._brain;
	}
	return *this;
}

void Cat::makeSound() const {
	std::cout << "Meow meow" << std::endl;
}



