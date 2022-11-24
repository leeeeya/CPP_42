//
// Created by Claribel Stefany on 11/17/22.
//

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentalPardonForm.hpp"

int main(){

	Bureaucrat bure("Michael", 1);
	std::cout << bure;
	
	std::cout << std::endl << std::endl;
	
	try{
		ShrubberyCreationForm g("Garden");
		std::cout << g;
		std::cout << std::endl;

		bure.signForm(g);
		bure.executeForm(g);
		std::cout << std::endl;
	} catch( std::exception &e){
		std::cout << e.what();
	}

	std::cout << std::endl << std::endl;

	try{
		RobotomyRequestForm d("Dog");
		std::cout << d;
		std::cout << std::endl;

		bure.signForm(d);
		bure.executeForm(d);
		std::cout << std::endl;
	} catch( std::exception &e){
		std::cout << e.what();
	}

	std::cout << std::endl << std::endl;

	try{
		PresidentalPardonForm tril("Trillian");
		std::cout << tril;
		std::cout << std::endl;

		bure.signForm(tril);
		bure.executeForm(tril);
		std::cout << std::endl;
	} catch( std::exception &e){
		std::cout << e.what();
	}
}