//
// Created by Claribel Stefany on 11/12/22.
//

#include "Fixed.hpp"

Fixed::Fixed() {
	_fixedNum = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(int i) {
	_fixedNum = i * (1 << _fractBits);
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float f) {
	_fixedNum =(int)roundf(f * (1 << _fractBits));
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &F) {
	std::cout << "Copy constructor called" << std::endl;
	*this = F;
}

Fixed &Fixed::operator=(const Fixed &F) {
	std::cout << "Copy assignment operator called" << std::endl;
	if(this != &F)
		this->_fixedNum = F.getRawBits();
	return *this;
}

std::ostream &operator<<(std::ostream &out, const Fixed &F) {
	out << F.toFloat();
	return out;
}


bool Fixed::operator<(const Fixed& cmp) const {
	return this->_fixedNum < cmp.getRawBits();
}

bool Fixed::operator>(const Fixed& cmp) const {
	return this->_fixedNum > cmp.getRawBits();
}

bool Fixed::operator==(const Fixed& cmp) const {
	return this->_fixedNum == cmp.getRawBits();
}

bool Fixed::operator!=(const Fixed& cmp) const {
	return this->_fixedNum != cmp.getRawBits();
}

bool Fixed::operator<=(const Fixed& cmp) const {
	return this->_fixedNum <= cmp.getRawBits();
}

bool Fixed::operator>=(const Fixed& cmp) const {
	return this->_fixedNum >= cmp.getRawBits();
}



Fixed Fixed::operator+(const Fixed& f) const {
	return this->toFloat() + f.toFloat();
}

Fixed Fixed::operator-(const Fixed& f) const {
	return this->toFloat() - f.toFloat();
}

Fixed Fixed::operator*(const Fixed& f) const {
	return this->toFloat() * f.toFloat();
}

Fixed Fixed::operator/(const Fixed& f) const {
	return this->toFloat() / f.toFloat();
}



Fixed &Fixed::operator++() {
	_fixedNum++;
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed newF(*this);
	newF._fixedNum++;
	return *this;
}

Fixed &Fixed::operator--() {
	_fixedNum--;
	return *this;
}

Fixed Fixed::operator--(int) {
	Fixed newF(*this);
	newF._fixedNum--;
	return *this;
}



Fixed& Fixed::max(Fixed &f1, Fixed &f2) {
	if (f1 > f2)
		return f1;
	return f2;
}

Fixed& Fixed::min(Fixed &f1, Fixed &f2) {
	if (f1 < f2)
		return f1;
	return f2;
}

const Fixed& Fixed::max(const Fixed &f1, const Fixed &f2) {
	if (f1 > f2)
		return f1;
	return f2;
}



const Fixed& Fixed::min(const Fixed &f1, const Fixed &f2) {
	if (f1 < f2)
		return f1;
	return f2;
}

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_fixedNum;
}

void Fixed::setRawBits(const int raw) {
	this->_fixedNum= raw;
}

int Fixed::toInt() const {
	return (_fixedNum / (1 << _fractBits));
}

float Fixed::toFloat() const {
	return ((float)_fixedNum / (1 << _fractBits));
}
