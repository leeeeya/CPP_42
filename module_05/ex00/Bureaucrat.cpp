//
// Created by Claribel Stefany on 11/17/22.
//

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {
	std::cout << "Default Bureaucrat is created!" << std::endl;
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Bureaucrat is destructed!" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : _name(name) {
	if (grade < 1){
		throw GradeTooHighException("Error: Grade too high!\n");
	}
	if (grade > 150){
		throw GradeTooLowException("Error: Grade too low!\n");
	}
	_grade = grade;
	std::cout << "Bureaucrat is created!" << std::endl;
}

int Bureaucrat::getGrade() {
	return _grade;
}

std::string Bureaucrat::getName() {
	return _name;
}

void Bureaucrat::increment() {
	if (_grade == 150){
		throw GradeTooLowException("Error: Can't decrease grade because it's already the lowest!\n");
	}
	_grade++;
}

void Bureaucrat::decrement() {
	if (_grade == 1){
		throw GradeTooHighException("Error: Can't increase grade because it's already the highest!\n");
	}
	_grade--;
}

std::ostream &operator<<(std::ostream &out, Bureaucrat &b) {
	out << b.getName() << ", bureaucrat grade " << b.getGrade() << std::endl;
	return out;
}

