//
// Created by Claribel Stefany on 11/18/22.
//

#ifndef CPP_42_PRESIDENTALPARDONFORM_HPP
#define CPP_42_PRESIDENTALPARDONFORM_HPP


#include "AForm.hpp"

class PresidentalPardonForm : public AForm{
public:
	PresidentalPardonForm();
	~PresidentalPardonForm();
	PresidentalPardonForm(PresidentalPardonForm const &f);
	PresidentalPardonForm& operator=(PresidentalPardonForm f);

	PresidentalPardonForm(const std::string& target);
	virtual void execute(Bureaucrat & exe) const;
};


#endif //CPP_42_PRESIDENTALPARDONFORM_HPP
