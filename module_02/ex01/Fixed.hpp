//
// Created by Claribel Stefany on 11/10/22.
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

	int getRawBits() const;
	void setRawBits( int const raw );

	float toFloat() const;
	int toInt() const;

};

std::ostream & operator<<(std::ostream &out, const Fixed &F);


#endif //CPP_42_FIXED_HPP
