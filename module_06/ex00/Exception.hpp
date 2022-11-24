//
// Created by Claribel Stefany on 11/20/22.
//

#ifndef CPP_42_EXCEPTION_HPP
#define CPP_42_EXCEPTION_HPP

#include <exception>
#include <iostream>

class ImpossibleException : public std::exception{
private:
	std::string _msg;
public:
	ImpossibleException(std::string error) : _msg(error){}
	~ImpossibleException()throw(){};
	const char* what() const throw(){
		return _msg.c_str();
	}
};


#endif //CPP_42_EXCEPTION_HPP
