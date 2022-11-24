//
// Created by Claribel Stefany on 11/17/22.
//

#include "Bureaucrat.hpp"

int main(){
	try{
		Form gr("Green", 0, 50);
		std::cout << gr;
	} catch( std::exception &e){
		std::cout << e.what();
	}

	std::cout << std::endl;

	try{
		Form gr("Black", 50, 5678);
		std::cout << gr;
	} catch( std::exception &e){
		std::cout << e.what();
	}

	std::cout << std::endl;

	try{
		Form ye("Yellow", 20, 5);
		std::cout << ye;
		Bureaucrat john("John", 150);
		std::cout << john;
		john.signForm(ye);
	} catch( std::exception &e){
		std::cout << e.what();
	}

	std::cout << std::endl;


	try{
		Form ye("Blue", 35, 10);
		std::cout << ye;
		Bureaucrat john("Michael", 10);
		std::cout << john;
		john.signForm(ye);

	} catch( std::exception &e){
		std::cout << e.what();
	}


}