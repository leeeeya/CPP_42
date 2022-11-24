//
// Created by Claribel Stefany on 11/17/22.
//

#include "Bureaucrat.hpp"

int main(){
	try{
		Bureaucrat john("John", 151);
		std::cout << john;
	} catch( std::exception &e){
		std::cout << e.what();
	}

	std::cout << std::endl;

	try{
		Bureaucrat john("John", 0);
		std::cout << john;
	} catch( std::exception &e){
		std::cout << e.what();
	}

	std::cout << std::endl;

	try{
		Bureaucrat john("John", 150);
		std::cout << john;
		john.increment();
		std::cout << john;
	} catch( std::exception &e){
		std::cout << e.what();
	}

	std::cout << std::endl;

	try{
		Bureaucrat john("John", 1);
		std::cout << john;
		john.decrement();
		std::cout << john;
	} catch( std::exception &e){
		std::cout << e.what();
	}
}