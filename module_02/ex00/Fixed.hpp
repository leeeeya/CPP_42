//
// Created by Claribel Stefany on 11/10/22.
//

#ifndef CPP_42_FIXED_HPP
#define CPP_42_FIXED_HPP

#include <iostream>

class Fixed {
private:
	int _fp;
	static const int _fractBits = 8;

public:
	Fixed();
	~Fixed();
	Fixed(Fixed const &F);
	Fixed &operator=(Fixed const &F);

	int getRawBits( void ) const;
	void setRawBits( int const raw );
};


#endif //CPP_42_FIXED_HPP
