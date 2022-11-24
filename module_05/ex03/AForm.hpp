//
// Created by Claribel Stefany on 11/18/22.
//

#ifndef CPP_42_AFORM_HPP
#define CPP_42_AFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
private:
	std::string _name;
	bool _isSigned;
	const int _gradeToSign;
	const int _gradeToExe;
public:
	AForm();
	virtual ~AForm();

	AForm(const std::string& name, const int gradeS, const int gradeE);

	std::string getName() const;
	int getGradeToSign() const;
	int getGradeToExe() const;
	bool getIsSigned() const;
	void beSigned(Bureaucrat &b);
	void executeCheck(Bureaucrat &b) const;
	virtual void execute(Bureaucrat & executor) const = 0;

	class GradeTooHighException : public std::exception{
	private:
		std::string _msg;
	public:
		GradeTooHighException(std::string error) : _msg(error){}
		~GradeTooHighException()throw(){};
		const char* what() const throw(){
			return _msg.c_str();
		}
	};

	class GradeTooLowException : public std::exception{
	private:
		std::string _msg;
	public:
		GradeTooLowException(std::string error) : _msg(error){}
		~GradeTooLowException()throw(){};
		const char* what() const throw(){
			return _msg.c_str();
		}
	};
};

std::ostream & operator<<(std::ostream &out, AForm &b);

#endif //CPP_42_AFORM_HPP
