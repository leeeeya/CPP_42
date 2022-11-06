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
//	_count();
}

Contact::~Contact() {
	std::cout << "Contact is destructed" << std::endl;
}
//
//void Contact::_count() {
//	if (_idx < 7)
//		_idx++;
//	else if (_idx == 7)
//		_idx = 0;
//}
