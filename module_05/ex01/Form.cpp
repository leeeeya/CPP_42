//
// Created by Claribel Stefany on 11/18/22.
//

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : _isSigned(false), _gradeToSign(1), _gradeToExe(1){
	std::cout << "Default form is created!" << std::endl;
}

Form::~Form() {
	std::cout << "Form is destructed!" << std::endl;
}

Form::Form(const Form &f) : _gradeToSign(0), _gradeToExe(0) {
	std::cout << "<Form> Copy constructor called" << std::endl;
	*this = f;
}

Form &Form::operator=(Form f) {
	std::cout << "<Form> Copy assignment operator called" << std::endl;
	if(this != &f){
		return *this;
	}
	return *this;
}

Form::Form(const std::string &name, const int gradeS, const int gradeE) : _gradeToSign(gradeS),  _gradeToExe(gradeE){
	if (gradeE > 150 || gradeS > 150){
		throw GradeTooLowException("Error: Can't assign grade < 150!\n");
	}
	if (gradeE < 1 || gradeS < 1){
		throw GradeTooHighException("Error: Can't assign grade > 1!\n");
	}
	_name = name;
	_isSigned = false;
	std::cout << "Form is created!" << std::endl;
}

std::string Form::getName() {
	return _name;
}

int Form::getGradeToSign() const {
	return _gradeToSign;
}

int Form::getGradeToExe() const {
	return _gradeToExe;
}

bool Form::getIsSigned() const {
	return _isSigned;
}

void Form::beSigned(Bureaucrat &b) {
	if (_isSigned){
		std::cout << "Form is already signed!" << std::endl;
		return;
	}
	if (b.getGrade() > this->_gradeToSign){
		throw GradeTooLowException("Error: Grade is too low!\n");
	}
	_isSigned = true;
}

std::ostream & operator<<(std::ostream &out, Form &f){
	out << f.getName() << " form, grade to sign - " << f.getGradeToSign() << ", grade to execute - "
						<< f.getGradeToExe() << ", signing status - " << f.getIsSigned() << std::endl;
	return out;
}