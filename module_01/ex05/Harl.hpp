//
// Created by Claribel Stefany on 11/9/22.
//

#ifndef CPP_42_HARL_HPP
#define CPP_42_HARL_HPP

#include <iostream>

class Harl {
private:
	void (Harl::*_method[4])(void);
	std::string _level[4];

private:
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );

public:
	Harl();
	~Harl();
	void complain( std::string level );
};


#endif //CPP_42_HARL_HPP
