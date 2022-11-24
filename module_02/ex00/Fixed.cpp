//
// Created by Claribel Stefany on 11/10/22.
//

#include "Fixed.hpp"

Fixed::Fixed() {
	_fp = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &F) {
	std::cout << "Copy constructor called" << std::endl;
	*this = F;
}

Fixed &Fixed::operator=(const Fixed &F) {
	std::cout << "Copy assignment operator called" << std::endl;
	if(this != &F)
		this->_fp = F.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_fp;
}

void Fixed::setRawBits(const int raw) {
	this->_fp = raw;
}
