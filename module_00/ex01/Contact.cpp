//
//Created by Claribel Stefany on 11/4/22.
//

#include "Contact.hpp"

Contact::Contact() {}

void Contact::setContact(int i, std::string fn, std::string sn, std::string nn, std::string pn, std::string ds){
	idx = i;
	firstName = fn;
	secondName = sn;
	nickname = nn;
	phoneNumber = pn;
	darkestSecret = ds;

	std::cout << "Contact is created" << std::endl;
}

Contact::~Contact() {
	std::cout << "Contact is destructed" << std::endl;
}

void Contact::print() {
	std::cout << "First name: " << this->firstName << std::endl;
	std::cout << "Second name: " << this->secondName << std::endl;
	std::cout << "Nickname: " << this->nickname << std::endl;
	std::cout << "Phone number: " << this->phoneNumber << std::endl;
	std::cout << "Darkest secret: " << this->darkestSecret << std::endl;
}
