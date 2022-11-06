//
//Created by Claribel Stefany on 11/4/22.
//

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {
public:
	Contact contacts[8];

private:
	int _i;
	int _len;

public:
	PhoneBook();
	~PhoneBook();

	void Add();
	void Search();

private:
	static void _isnum (std::string str);
	static std::string _handleLongStr (const std::string& str);
	void _printTable ();
	static void _checkStr(const std::string& str, const std::string& name);
};


#endif //PHONEBOOK_HPP
