//
//Created by Claribel Stefany on 11/4/22.
//

#include <iomanip>
#include "PhoneBook.hpp"

 PhoneBook::PhoneBook() {
	_i = 0;
	_len = 0;
	 std::cout << "PhoneBook is created" << std::endl;
}

PhoneBook::~PhoneBook() {
	std::cout << "PhoneBook is destructed" << std::endl;
}

void PhoneBook::_isnum(std::string str) {
	if (!std::all_of(str.begin(), str.end(), isdigit)){
		std::cout << "ERROR: Invalid phone numer!" << std::endl;
		exit(1);
	}
}


std::string PhoneBook::_handleLongStr(const std::string& str) {
	std::string trimmed;
	if (str.size() >= 10){
		trimmed = str.substr(0, 10);
		trimmed[9] = '.';
		return trimmed;
	} else {
		return str;
	}
}

void PhoneBook::_printTable() {
	std::cout << "+----------+----------+----------+----------+" << std::endl;
	std::cout << "|   INDEX  |FIRST_NAME| LAST_NAME| NICKNAME |" << std::endl;
	std::cout << "+----------+----------+----------+----------+" << std::endl;
	for (int i = 0; i < _len; i++) {
		std::cout << "|" << std::setw(10) << contacts[i].idx;
		std::cout << "|" << std::setw(10) << PhoneBook::_handleLongStr(contacts[i].firstName);
		std::cout << "|" << std::setw(10) << PhoneBook::_handleLongStr(contacts[i].secondName);
		std::cout << "|" << std::setw(10) << PhoneBook::_handleLongStr(contacts[i].nickname);
		std::cout << "|" << std::endl;
	}
	std::cout << "+----------+----------+----------+----------+" << std::endl;
}

void PhoneBook::_checkStr(const std::string& str, const std::string& name) {
	if (str.empty()){
		std::cout << "Invalid "<< name << "!" << std::endl;
		exit (1);
	}
}

