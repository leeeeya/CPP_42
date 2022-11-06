//
//Created by Claribel Stefany on 11/4/22.
//

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact {
public:
	int idx;
	std::string firstName;
	std::string secondName;
	std::string nickname;
	std::string phoneNumber;
	std::string darkestSecret;

public:
	Contact();
	~Contact();
	void setContact(int i, std::string fn, std::string ln, std::string nn, std::string pn, std::string ds);

private:
//	void _count();
};


#endif // CONTACT_HPP
