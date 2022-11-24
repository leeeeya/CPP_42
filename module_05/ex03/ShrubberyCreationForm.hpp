//
// Created by Claribel Stefany on 11/18/22.
//

#ifndef CPP_42_SHRUBBERYCREATIONFORM_HPP
#define CPP_42_SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm{
public:
	ShrubberyCreationForm();
	~ShrubberyCreationForm();
	ShrubberyCreationForm(ShrubberyCreationForm const &f);
	ShrubberyCreationForm& operator=(ShrubberyCreationForm f);

	ShrubberyCreationForm(const std::string& target);
	virtual void execute(Bureaucrat & executor) const;
};



#endif //CPP_42_SHRUBBERYCREATIONFORM_HPP
