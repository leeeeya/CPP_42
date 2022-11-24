//
// Created by Claribel Stefany on 11/17/22.
//

#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main(){
	Intern bob;

	try{
		bob.makeForm("some other form", "without name");
	} catch( std::exception &e){
		std::cout << e.what();
	}

	std::cout << std::endl;

	Bureaucrat bure("Michael", 1);
	std::cout << bure;

	std::cout << std::endl;

	try{
		AForm *pardon = bob.makeForm("presidential pardon", "Arthur");
		bure.signForm(*pardon);
		bure.executeForm(*pardon);
		delete pardon;
		std::cout << std::endl;
	} catch( std::exception &e){
		std::cout << e.what();
	}
}