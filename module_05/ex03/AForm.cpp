//
// Created by Claribel Stefany on 11/18/22.
//

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : _isSigned(false), _gradeToSign(1), _gradeToExe(1){
	std::cout << "Default form is created!" << std::endl;
}

AForm::AForm(const std::string &name, const int gradeS, const int gradeE) : _gradeToSign(gradeS), _gradeToExe(gradeE){
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

AForm::~AForm(){
	std::cout << "Form is destructed!" << std::endl;
}

std::string AForm::getName() const {
	return _name;
}

int AForm::getGradeToSign() const {
	return _gradeToSign;
}

int AForm::getGradeToExe() const {
	return _gradeToExe;
}

bool AForm::getIsSigned() const {
	return _isSigned;
}

void AForm::beSigned(Bureaucrat &b) {
	if (_isSigned){
		std::cout << "Form is already signed!" << std::endl;
		return;
	}
	if (b.getGrade() > this->_gradeToSign){
		throw GradeTooLowException("Error: Grade is too low!\n");
	}
	_isSigned = true;
}

void AForm::executeCheck(Bureaucrat &b) const {
	if (b.getGrade() > this->getGradeToExe()){
		throw GradeTooLowException("Error: Grade is too low!\n");
	}
	if (!this->_isSigned){
		throw GradeTooLowException("Error: Form not signed yet!\n");
	}
}

std::ostream & operator<<(std::ostream &out, AForm &f){
	out << f.getName() << " form, grade to sign - " << f.getGradeToSign() << ", grade to execute - "
						<< f.getGradeToExe() << ", signing status - " << f.getIsSigned() << std::endl;
	return out;
}