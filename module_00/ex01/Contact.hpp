//
//Created by Claribel Stefany on 11/4/22.
//

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact {
public:
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string phoneNumber;
	std::string darkestSecret;

private:
	int _idx;

public:
	Contact();
	~Contact();
	void setContact(std::string fn, std::string ln, std::string nn, std::string pn, std::string ds);

private:
	void _count();
};


#endif // CONTACT_HPP
