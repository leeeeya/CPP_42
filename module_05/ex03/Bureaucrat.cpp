//
// Created by Claribel Stefany on 11/17/22.
//

#include "Bureaucrat.hpp"
#include "AForm.hpp"

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

void Bureaucrat::signForm(AForm &f) {
	try {
		f.beSigned(*this);
		std::cout << "Bureaucrat " << this->_name << " signed " << f.getName() << " form" << std::endl;
	}
	catch (const std::exception &e) {
		std::cout << "Bureaucrat " << this->_name << " couldn't sign " << f.getName() << " form because of " <<
		e.what();
	}
}

void Bureaucrat::executeForm(AForm &form) {
	try{
		std::cout << "Bureaucrat " << this->_name << " executed " << form.getName() << " form" << std::endl;
		form.execute(*this);
	} catch (const std::exception &e) {
		std::cout << "Bureaucrat " << this->_name << " couldn't execute " << form.getName() << " form because of " <<
				  e.what();
	}
}

std::ostream &operator<<(std::ostream &out, Bureaucrat &b) {
	out << b.getName() << ", bureaucrat grade " << b.getGrade() << std::endl;
	return out;
}

