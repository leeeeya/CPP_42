//
// Created by Claribel Stefany on 11/18/22.
//

#ifndef CPP_42_ROBOTOMYREQUESTFORM_HPP
#define CPP_42_ROBOTOMYREQUESTFORM_HPP

#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"

class RobotomyRequestForm : public AForm{
public:
	RobotomyRequestForm();
	~RobotomyRequestForm();
	RobotomyRequestForm(RobotomyRequestForm const &f);
	RobotomyRequestForm& operator=(RobotomyRequestForm f);
	
	RobotomyRequestForm(const std::string& target);
	virtual void execute(Bureaucrat & executor) const;
};


#endif //CPP_42_ROBOTOMYREQUESTFORM_HPP
