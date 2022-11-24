//
// Created by Claribel Stefany on 11/17/22.
//

#ifndef CPP_42_BUREAUCRAT_HPP
#define CPP_42_BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>

#include "Form.hpp"

class Bureaucrat {
private:
	const std::string _name;
	int _grade;

public:
	Bureaucrat();
	~Bureaucrat();
	Bureaucrat(const std::string& name, int grade);

	int getGrade();
	std::string getName();
	void increment();
	void decrement();
	void signForm(Form &f);

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


std::ostream & operator<<(std::ostream &out, Bureaucrat &b);


#endif //CPP_42_BUREAUCRAT_HPP
