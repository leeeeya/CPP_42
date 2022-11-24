//
// Created by Claribel Stefany on 11/18/22.
//

#include "PresidentalPardonForm.hpp"
#include <iostream>

PresidentalPardonForm::PresidentalPardonForm() : AForm() {
	std::cout << "Default Presidental Pardon form is created!" << std::endl;

}

PresidentalPardonForm::~PresidentalPardonForm() {
	std::cout << "Presidental Pardon form is destructed!" << std::endl;
}

PresidentalPardonForm::PresidentalPardonForm(const PresidentalPardonForm &f) {
	std::cout << "<PresidentalPardonForm> Copy constructor called" << std::endl;
	*this = f;
}

PresidentalPardonForm &PresidentalPardonForm::operator=(PresidentalPardonForm f) {
	std::cout << "<PresidentalPardonForm> Copy assignment operator called" << std::endl;
	if(this != &f){
		return *this;
	}
	return *this;
}


PresidentalPardonForm::PresidentalPardonForm(const std::string& target) : AForm(target, 25, 5) {
	std::cout << this->getName() << " Presidental Pardon form is created!" << std::endl;
}

void PresidentalPardonForm::execute(Bureaucrat &exe) const {
	this->executeCheck(exe);
	std::cout << this->getName() << " has been pardoned by Zaphod Beeblebrox!" << std::endl;
}


