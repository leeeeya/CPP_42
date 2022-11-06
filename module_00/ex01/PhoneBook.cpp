//
//Created by Claribel Stefany on 11/4/22.
//

#include <iomanip>
#include "PhoneBook.hpp"

 PhoneBook::PhoneBook() {
	_i = 0;
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

void PhoneBook::Add() {
	std::string fn, sn, nn, pn, ds;

	std::cout << "Please, input the information of the new contact" << std::endl;

	std::cout << "First name: ";
	std::getline(std::cin, fn);

	std::cout << "Second name: ";
	std::getline(std::cin, sn);

	std::cout << "Nickname: ";
	std::getline(std::cin, nn);

	std::cout << "Phone number: ";
	std::getline(std::cin, pn);
	_isnum(pn);

	std::cout << "Darkest secret: ";
	std::getline(std::cin, ds);


	if (_i == 8)
		_i = 0;
	contacts[_i].setContact(_i + 1, fn, sn, nn, pn, ds);

	_i++;
//	if (_i < 8) {
//		_i++;
//	}
//	else {
//		_i = 0;
//	}
}


void PhoneBook::Search() const {
	int index;

	if (_i == 0){
		std::cout << "Phone book is emty!" << std::endl;
		return;
	}
	std::cout << "+----------+----------+----------+----------+" << std::endl;
	std::cout << "|   INDEX  |FIRST_NAME| LAST_NAME| NICKNAME |" << std::endl;
	std::cout << "+----------+----------+----------+----------+" << std::endl;
	for (int i = 0; i < _i; i++) {
		std::cout << "|" << std::setw(10) << contacts[i].idx;
		std::cout << "|" << std::setw(10) << contacts[i].firstName;
		std::cout << "|" << std::setw(10) << contacts[i].secondName;
		std::cout << "|" << std::setw(10) << contacts[i].nickname;
		std::cout << "|" << std::endl;
	}
	std::cout << "+----------+----------+----------+----------+" << std::endl;
	// todo > 10 char add .

	std::cout << "Please, choose and enter the index of the contact:" << std::endl;
	std::cin >> index;
	if (index < 1 || index > _i)
		std::cout << "Invalid index entered! Try again" << std::endl;
	else {
		index -= 1;
		std::cout << "First name: " << contacts[index].firstName << std::endl;
		std::cout << "Second name: " << contacts[index].secondName << std::endl;
		std::cout << "Nickname: " << contacts[index].nickname << std::endl;
		std::cout << "Phone number: " << contacts[index].phoneNumber << std::endl;
		std::cout << "Darkest secret: " << contacts[index].darkestSecret << std::endl;
	}

}

// todo  add makefile

