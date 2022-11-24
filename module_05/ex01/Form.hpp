//
// Created by Claribel Stefany on 11/18/22.
//

#ifndef CPP_42_FORM_HPP
#define CPP_42_FORM_HPP

#include <iostream>

class Bureaucrat;

class Form {
private:
	std::string _name;
	bool _isSigned;
	const int _gradeToSign;
	const int _gradeToExe;
public:
	Form();
	~Form();
	Form(Form const &f);
	Form& operator=(Form f);
	Form(const std::string& name, const int gradeS, const int gradeE);

	std::string getName();
	int getGradeToSign() const;
	int getGradeToExe() const;
	bool getIsSigned() const;

	void beSigned(Bureaucrat &b);

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

std::ostream & operator<<(std::ostream &out, Form &b);

#endif //CPP_42_FORM_HPP
