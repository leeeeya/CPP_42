//
// Created by Claribel Stefany on 11/16/22.
//

#include "WrongCat.hpp"

WrongCat::WrongCat() {
	setType("WrongCat");
	std::cout << "WrongCat is created!" << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat is destructed" << std::endl;
}

WrongCat::WrongCat(const WrongCat &wc) {
	std::cout << "<WrongCat> Copy constructor called" << std::endl;
	*this = wc;
}

WrongCat &WrongCat::operator=(WrongCat wc) {
	std::cout << "<WrongCat> Copy assignment operator called" << std::endl;
	if(this != &wc){
		this->getType() = wc.getType();
	}
	return *this;
}

void WrongCat::makeSound() const {
	std::cout << "Meow meow" << std::endl;
}
