//
//Created by Claribel Stefany on 11/4/22.
//

#include "Contact.hpp"

Contact::Contact() {}

void Contact::setContact(std::string fn, std::string ln, std::string nn, std::string pn, std::string ds){
	this->firstName = fn;
	this->lastName = ln;
	this->nickname = nn;
	this->phoneNumber = pn;
	this->darkestSecret = ds;

	std::cout << "Contact is created" << std::endl;
	_count();
}

Contact::~Contact() {
	std::cout << "Contact is destructed" << std::endl;
}

void Contact::_count() {
	if (_idx < 8)
		_idx++;
}
