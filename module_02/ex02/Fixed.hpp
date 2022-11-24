//
// Created by Claribel Stefany on 11/12/22.
//

#ifndef CPP_42_FIXED_HPP
#define CPP_42_FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
private:
	int _fixedNum;
	static const int _fractBits = 8;

public:
	Fixed();
	~Fixed();
	Fixed(int i);
	Fixed(float f);
	Fixed(Fixed const &F);
	Fixed &operator=(Fixed const &F);

	bool operator<(const Fixed& cmp) const;
	bool operator>(const Fixed& cmp) const;
	bool operator==(const Fixed& cmp) const;
	bool operator!=(const Fixed& cmp) const;
	bool operator>=(const Fixed& cmp) const;
	bool operator<=(const Fixed& cmp) const;

	Fixed operator+(const Fixed& f) const;
	Fixed operator-(const Fixed& f) const;
	Fixed operator*(const Fixed& f) const;
	Fixed operator/(const Fixed& f) const;

	Fixed &operator++();
	Fixed operator++(int);
	Fixed &operator--();
	Fixed operator--(int);

	// todo  4 increment/decrement

	static Fixed &max(Fixed &f1, Fixed &f2);
	static Fixed &min(Fixed &f1, Fixed &f2);
	static const Fixed &max(const Fixed &f1, const Fixed &f2);
	static const Fixed &min(const Fixed &f1, const Fixed &f2);

	int getRawBits() const;
	void setRawBits( int const raw );

	float toFloat() const;
	int toInt() const;

};

std::ostream & operator<<(std::ostream &out, const Fixed &F);


#endif //CPP_42_FIXED_HPP
