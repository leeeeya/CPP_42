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
	static void _isnum (std::string str);
	void _check(const std::string& str);
};


#endif //PHONEBOOK_HPP
