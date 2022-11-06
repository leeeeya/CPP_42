//
//Created by Claribel Stefany on 11/4/22.
//

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>

class PhoneBook {
public:
	Contact contacts[8];

private:
	int _i;

public:
	PhoneBook();
	~PhoneBook();

	void Add();
	void Search() const;

private:
	void _isnum (std::string str);
//	void _print(std::string str, );
};


#endif //PHONEBOOK_HPP
