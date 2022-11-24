//
// Created by Claribel Stefany on 11/18/22.
//

#include "RobotomyRequestForm.hpp"
#include <iostream>
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm() : AForm() {
	std::cout << "Default Robotomy Request form is created!" << std::endl;

}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << "Robotomy Request form is destructed!" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &f) {
	std::cout << "<RobotomyRequestForm> Copy constructor called" << std::endl;
	*this = f;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm f) {
	std::cout << "<RobotomyRequestForm> Copy assignment operator called" << std::endl;
	if(this != &f){
		return *this;
	}
	return *this;
}


RobotomyRequestForm::RobotomyRequestForm(const std::string& target) : AForm(target, 72, 45) {
	std::cout << this->getName() << " Robotomy Request form is created!" << std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat &exe) const{
	this->executeCheck(exe);
	std::cout << "Brrrrrrzzzrzzrzrrzrzzrzrzzrzrz..." << std::endl;
	srand(time(nullptr));
	int opt = rand();
	if (opt % 2 == 0)
	{
		std::cout << this->getName() << " has been robotomized!" << std::endl;
	} else{
		std::cout << "Robotomy failed..." << std::endl;
	}
}
