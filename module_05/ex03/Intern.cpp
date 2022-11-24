//
// Created by Claribel Stefany on 11/18/22.
//

#include "Intern.hpp"

Intern::Intern() {
	std::cout << "Intern is created!" << std::endl;
}

Intern::~Intern() {
	std::cout << "Intern is destructed!" << std::endl;
}

Intern::Intern(const Intern &i) {
	std::cout << "<Intern>> Copy constructor called" << std::endl;
	*this = i;
}

Intern &Intern::operator=(Intern i) {
	std::cout << "<Intern> Copy assignment operator called" << std::endl;
	if(this != &i){
		return *this;
	}
	return *this;
}

AForm *Intern::createPresidentalPardon(const std::string &target) {
	return new PresidentalPardonForm(target);
}

AForm *Intern::createRobotomyRequest(const std::string &target) {
	return new RobotomyRequestForm(target);
}

AForm *Intern::createShrubbery(const std::string &target) {
	return new ShrubberyCreationForm(target);
}

AForm *Intern::makeForm(const std::string& type, const std::string& target) {
	constructor[0] = &Intern::createPresidentalPardon;
	constructor[1] = &Intern::createRobotomyRequest;
	constructor[2] = &Intern::createShrubbery;

	std::string name[3] = {
			"presidential pardon",
			"robotomy request",
			"shrubbery creation"
	};
	int i = 0;
	for (; i < 3 && name[i] != type; i++);
	if (i == 3){
		throw InvalidTypeOfFormException("Error: No such type of form!\n");
	}
	std::cout << "Intern creates " << type << " form " << target << std::endl;
	return (this->*constructor[i])(target);
}
