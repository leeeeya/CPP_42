//
// Created by Claribel Stefany on 11/18/22.
//

#ifndef CPP_42_INTERN_HPP
#define CPP_42_INTERN_HPP

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentalPardonForm.hpp"

class Intern {
private:
	AForm *(Intern::*constructor[3])(const std::string &);

	AForm	*createPresidentalPardon(std::string const &target);
	AForm	*createRobotomyRequest(std::string const &target);
	AForm	*createShrubbery(std::string const &target);

public:
	Intern();
	~Intern();
	Intern(Intern const &i);
	Intern& operator=(Intern i);
	
	AForm *makeForm(const std::string& type, const std::string& target);

	class InvalidTypeOfFormException : public std::exception{
	private:
		std::string _msg;
	public:
		InvalidTypeOfFormException(std::string error) : _msg(error){}
		~InvalidTypeOfFormException()throw(){};
		const char* what() const throw(){
			return _msg.c_str();
		}
	};
};


#endif //CPP_42_INTERN_HPP
